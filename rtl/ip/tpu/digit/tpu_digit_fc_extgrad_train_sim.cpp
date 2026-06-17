#include <array>
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vtpu_isa_confreg.h"
#include "Vtpu_isa_confreg___024root.h"

namespace {

constexpr uint32_t OP_NOP = 0x0u;
constexpr uint32_t OP_LOAD = 0x1u;
constexpr uint32_t OP_SET_WR = 0x2u;
constexpr uint32_t OP_UB_READ = 0x3u;
constexpr uint32_t OP_SWITCH = 0x4u;
constexpr uint32_t OP_SET_GRAD_ADDR = 0x6u;

constexpr uint8_t PTR_INPUT = 0;
constexpr uint8_t PTR_WEIGHT = 1;
constexpr uint8_t PTR_BIAS = 2;
constexpr uint8_t PTR_GRAD_BIAS = 5;
constexpr uint8_t PTR_GRAD_WEIGHT = 6;

constexpr uint16_t X_BASE = 0;
constexpr uint16_t W_BASE = 32;
constexpr uint16_t B_BASE = 128;
constexpr uint16_t GRAD_W_BASE = 160;
constexpr uint16_t GRAD_B_BASE = 176;
constexpr uint16_t SCRATCH_BASE = 256;
constexpr uint16_t MODEL_W_BASE = 320;  // 64 x 10
constexpr uint16_t MODEL_B_BASE = 960;  // 10

constexpr int DEFAULT_STEPS = 5;
constexpr uint16_t DEFAULT_LR_Q8_8 = 0x0002u;
const char *DEFAULT_OUT_PATH = "digit8x8_extgrad_trained_weights.json";

vluint64_t main_time = 0;
int cycle_count = 0;
Vtpu_isa_confreg *dut = nullptr;
VerilatedVcdC *tfp = nullptr;

struct DigitExample {
    std::array<uint16_t, 64> pixels{};
    int label = -1;
};

struct DigitModel {
    std::array<std::array<uint16_t, 10>, 64> weights{};
    std::array<uint16_t, 10> bias{};
    std::vector<DigitExample> train_examples;
    std::vector<DigitExample> test_examples;
};

int16_t s16(uint16_t value) {
    return static_cast<int16_t>(value);
}

double q_to_float(uint16_t value) {
    return static_cast<double>(s16(value)) / 256.0;
}

uint16_t q8_8(double value) {
    int raw = static_cast<int>(std::round(value * 256.0));
    raw = std::min(32767, std::max(-32768, raw));
    return static_cast<uint16_t>(static_cast<int16_t>(raw));
}

uint32_t ins_nop() {
    return OP_NOP << 28;
}

uint32_t ins_load(uint16_t addr, uint16_t data) {
    return (OP_LOAD << 28) |
           ((static_cast<uint32_t>(addr) & 0x0FFFu) << 16) |
           data;
}

uint32_t ins_set_wr(uint16_t addr, bool accumulate = false) {
    return (OP_SET_WR << 28) |
           ((static_cast<uint32_t>(addr) & 0x0FFFu) << 16) |
           ((accumulate ? 1u : 0u) << 15);
}

uint32_t ins_set_grad_addr(uint16_t addr) {
    return (OP_SET_GRAD_ADDR << 28) |
           ((static_cast<uint32_t>(addr) & 0x0FFFu) << 16);
}

uint32_t ins_switch() {
    return OP_SWITCH << 28;
}

uint32_t ins_ub_read(
    uint8_t ptr_select,
    uint16_t addr,
    uint8_t row_size,
    uint8_t col_size,
    bool transpose,
    uint8_t vpu_mode
) {
    return (OP_UB_READ << 28) |
           ((static_cast<uint32_t>(ptr_select) & 0x7u) << 25) |
           ((static_cast<uint32_t>(addr) & 0x0FFFu) << 13) |
           ((static_cast<uint32_t>(row_size) & 0xFu) << 9) |
           ((static_cast<uint32_t>(col_size) & 0xFu) << 5) |
           ((transpose ? 1u : 0u) << 4) |
           (static_cast<uint32_t>(vpu_mode) & 0xFu);
}

void eval_dump() {
    dut->eval();
    if (tfp) {
        tfp->dump(main_time);
    }
    main_time++;
}

void tick() {
    dut->clk = 0;
    eval_dump();
    dut->clk = 1;
    eval_dump();
    cycle_count++;
}

void tick_n(int n) {
    for (int i = 0; i < n; i++) {
        tick();
    }
}

void drive_idle() {
    dut->ins_valid = 0;
    dut->ins = ins_nop();
}

void issue(uint32_t ins, const std::string &) {
    dut->ins = ins;
    dut->ins_valid = 1;
    tick();
    drive_idle();
    tick();
}

void reset_dut(uint16_t lr_q8_8) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->ins_valid = 0;
    dut->ins = ins_nop();
    dut->ub_wr_ext_valid = 0;
    dut->ub_wr_ext_addr = 0;
    dut->ub_wr_ext_data = 0;
    dut->learn_rate_in = lr_q8_8;
    dut->vpu_factor_in = 0;
    dut->two_div_N_in = 0;
    tick_n(5);
    dut->rst_n = 1;
    tick_n(3);
}

uint16_t ub_mem(uint16_t addr) {
    return dut->rootp->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_memory[addr];
}

uint16_t vpu_data_lane(int lane) {
    switch (lane) {
        case 0: return static_cast<uint16_t>(dut->vpu_data_out_0);
        case 1: return static_cast<uint16_t>(dut->vpu_data_out_1);
        case 2: return static_cast<uint16_t>(dut->vpu_data_out_2);
        case 3: return static_cast<uint16_t>(dut->vpu_data_out_3);
        case 4: return static_cast<uint16_t>(dut->vpu_data_out_4);
        case 5: return static_cast<uint16_t>(dut->vpu_data_out_5);
        case 6: return static_cast<uint16_t>(dut->vpu_data_out_6);
        default: return static_cast<uint16_t>(dut->vpu_data_out_7);
    }
}

bool vpu_valid_lane(int lane) {
    switch (lane) {
        case 0: return dut->vpu_data_valid_out_0;
        case 1: return dut->vpu_data_valid_out_1;
        case 2: return dut->vpu_data_valid_out_2;
        case 3: return dut->vpu_data_valid_out_3;
        case 4: return dut->vpu_data_valid_out_4;
        case 5: return dut->vpu_data_valid_out_5;
        case 6: return dut->vpu_data_valid_out_6;
        default: return dut->vpu_data_valid_out_7;
    }
}

bool wait_lanes_count(const std::string &tag, int max_cycles, int lane_count, std::array<uint16_t, 8> *values) {
    std::array<bool, 8> seen{};
    for (int cycle = 0; cycle < max_cycles; cycle++) {
        tick();
        for (int lane = 0; lane < lane_count; lane++) {
            if (vpu_valid_lane(lane)) {
                (*values)[lane] = vpu_data_lane(lane);
                seen[lane] = true;
            }
        }
        bool all_seen = true;
        for (int lane = 0; lane < lane_count; lane++) {
            all_seen = all_seen && seen[lane];
        }
        if (all_seen) {
            return true;
        }
    }
    std::cout << "[" << tag << "] timeout at cycle " << cycle_count << std::endl;
    return false;
}

void load_block(uint16_t base, const std::vector<uint16_t> &data) {
    for (std::size_t i = 0; i < data.size(); i++) {
        issue(ins_load(static_cast<uint16_t>(base + i), data[i]), "LOAD");
    }
}

std::string read_text_file(const std::vector<std::string> &paths) {
    for (const auto &path : paths) {
        std::ifstream in(path);
        if (in) {
            std::ostringstream ss;
            ss << in.rdbuf();
            std::cout << "[model] loaded " << path << std::endl;
            return ss.str();
        }
    }
    throw std::runtime_error("cannot open digit8x8_linear_weights.json");
}

std::string bracket_section_after_key(const std::string &text, const std::string &key) {
    const std::size_t key_pos = text.find("\"" + key + "\"");
    if (key_pos == std::string::npos) {
        throw std::runtime_error("missing json key: " + key);
    }
    const std::size_t start = text.find('[', key_pos);
    if (start == std::string::npos) {
        throw std::runtime_error("missing array for key: " + key);
    }

    int depth = 0;
    bool in_string = false;
    bool escape = false;
    for (std::size_t i = start; i < text.size(); i++) {
        const char ch = text[i];
        if (escape) {
            escape = false;
            continue;
        }
        if (ch == '\\') {
            escape = true;
            continue;
        }
        if (ch == '"') {
            in_string = !in_string;
            continue;
        }
        if (in_string) {
            continue;
        }
        if (ch == '[') {
            depth++;
        } else if (ch == ']') {
            depth--;
            if (depth == 0) {
                return text.substr(start, i - start + 1);
            }
        }
    }
    throw std::runtime_error("unterminated array for key: " + key);
}

std::vector<std::string> objects_in_array_after_key(const std::string &text, const std::string &key) {
    const std::size_t key_pos = text.find("\"" + key + "\"");
    if (key_pos == std::string::npos) {
        throw std::runtime_error("missing json key: " + key);
    }
    const std::size_t start = text.find('[', key_pos);
    if (start == std::string::npos) {
        throw std::runtime_error("missing array for key: " + key);
    }

    std::vector<std::string> objects;
    int depth = 0;
    bool in_string = false;
    bool escape = false;
    std::size_t obj_start = std::string::npos;
    for (std::size_t i = start; i < text.size(); i++) {
        const char ch = text[i];
        if (escape) {
            escape = false;
            continue;
        }
        if (ch == '\\') {
            escape = true;
            continue;
        }
        if (ch == '"') {
            in_string = !in_string;
            continue;
        }
        if (in_string) {
            continue;
        }
        if (ch == '{') {
            if (depth == 0) {
                obj_start = i;
            }
            depth++;
        } else if (ch == '}') {
            depth--;
            if (depth == 0 && obj_start != std::string::npos) {
                objects.push_back(text.substr(obj_start, i - obj_start + 1));
                obj_start = std::string::npos;
            }
        } else if (ch == ']' && depth == 0) {
            break;
        }
    }
    if (objects.empty()) {
        throw std::runtime_error("empty array for key: " + key);
    }
    return objects;
}

std::vector<uint16_t> extract_hex16_values(const std::string &section) {
    static const std::regex hex_re("\"0x([0-9A-Fa-f]{4})\"");
    std::vector<uint16_t> values;
    for (auto it = std::sregex_iterator(section.begin(), section.end(), hex_re);
         it != std::sregex_iterator(); ++it) {
        values.push_back(static_cast<uint16_t>(std::stoul((*it)[1].str(), nullptr, 16)));
    }
    return values;
}

int extract_int_field(const std::string &section, const std::string &key) {
    const std::regex re("\"" + key + "\"\\s*:\\s*(-?[0-9]+)");
    std::smatch match;
    if (!std::regex_search(section, match, re)) {
        return -1;
    }
    return std::stoi(match[1].str());
}

void append_examples_from_key(const std::string &text, const std::string &key, std::vector<DigitExample> *out) {
    const auto objects = objects_in_array_after_key(text, key);
    for (const auto &object : objects) {
        const auto pixels = extract_hex16_values(bracket_section_after_key(object, "pixels_q8_8"));
        if (pixels.size() != 64) {
            continue;
        }
        DigitExample example;
        for (int i = 0; i < 64; i++) {
            example.pixels[i] = pixels[i];
        }
        example.label = extract_int_field(object, "label");
        if (0 <= example.label && example.label < 10) {
            out->push_back(example);
        }
    }
}

DigitModel load_model_json(const std::string &model_path) {
    const std::string text = model_path.empty()
        ? read_text_file({
            "digit/digit8x8_linear_weights.json",
            "digit8x8_linear_weights.json",
        })
        : read_text_file({model_path});

    DigitModel model;
    const auto weights = extract_hex16_values(bracket_section_after_key(text, "weights_q8_8_hex"));
    if (weights.size() != 640) {
        throw std::runtime_error("weights_q8_8_hex must contain 640 values");
    }
    for (int i = 0; i < 64; i++) {
        for (int c = 0; c < 10; c++) {
            model.weights[i][c] = weights[i * 10 + c];
        }
    }

    const auto bias = extract_hex16_values(bracket_section_after_key(text, "bias_q8_8_hex"));
    if (bias.size() != 10) {
        throw std::runtime_error("bias_q8_8_hex must contain 10 values");
    }
    for (int c = 0; c < 10; c++) {
        model.bias[c] = bias[c];
    }

    try {
        append_examples_from_key(text, "train_examples", &model.train_examples);
        std::cout << "[model] using train_examples" << std::endl;
    } catch (const std::exception &) {
        append_examples_from_key(text, "test_examples", &model.train_examples);
        std::cout << "[model] using test_examples for training" << std::endl;
    }
    try {
        append_examples_from_key(text, "test_examples", &model.test_examples);
    } catch (const std::exception &) {
    }
    if (model.test_examples.empty()) {
        model.test_examples = model.train_examples;
    }
    return model;
}

void init_small_model(DigitModel *model) {
    std::mt19937 rng(7);
    std::uniform_int_distribution<int> dist(-4, 4);
    for (int i = 0; i < 64; i++) {
        for (int c = 0; c < 10; c++) {
            model->weights[i][c] = static_cast<uint16_t>(static_cast<int16_t>(dist(rng)));
        }
    }
    for (int c = 0; c < 10; c++) {
        model->bias[c] = 0;
    }
}

void load_model_to_ub(const DigitModel &model) {
    std::vector<uint16_t> flat_w;
    flat_w.reserve(640);
    for (int i = 0; i < 64; i++) {
        for (int c = 0; c < 10; c++) {
            flat_w.push_back(model.weights[i][c]);
        }
    }
    load_block(MODEL_W_BASE, flat_w);
    load_block(MODEL_B_BASE, {model.bias.begin(), model.bias.end()});
}

void load_forward_tile_from_ub(const DigitExample &example, int c_tile, int k_tile) {
    std::vector<uint16_t> x_tile;
    for (int k = 0; k < 8; k++) {
        x_tile.push_back(example.pixels[k_tile * 8 + k]);
    }
    load_block(X_BASE, x_tile);

    std::vector<uint16_t> w_tile;
    w_tile.reserve(64);
    for (int k = 0; k < 8; k++) {
        const int input_idx = k_tile * 8 + k;
        for (int lane = 0; lane < 8; lane++) {
            const int cls = c_tile * 8 + lane;
            const uint16_t addr = static_cast<uint16_t>(MODEL_W_BASE + input_idx * 10 + cls);
            w_tile.push_back(cls < 10 ? ub_mem(addr) : 0);
        }
    }
    load_block(W_BASE, w_tile);
}

void load_bias_tile_from_ub(int c_tile) {
    std::vector<uint16_t> bias_tile;
    bias_tile.reserve(8);
    for (int lane = 0; lane < 8; lane++) {
        const int cls = c_tile * 8 + lane;
        bias_tile.push_back(cls < 10 ? ub_mem(static_cast<uint16_t>(MODEL_B_BASE + cls)) : 0);
    }
    load_block(B_BASE, bias_tile);
}

bool run_forward_tile(bool add_bias, std::array<uint16_t, 8> *partials) {
    issue(ins_ub_read(PTR_WEIGHT, W_BASE, 8, 8, true, 0x0), "READ_W");
    tick_n(32);
    issue(ins_switch(), "SWITCH_W");
    tick_n(12);

    if (add_bias) {
        issue(ins_ub_read(PTR_BIAS, B_BASE, 1, 8, false, 0x8), "READ_BIAS");
    }
    issue(ins_set_wr(SCRATCH_BASE), "SET_WR_SCRATCH");
    issue(ins_ub_read(PTR_INPUT, X_BASE, 1, 8, false, add_bias ? 0x8 : 0x0), "READ_X");
    if (!wait_lanes_count("forward tile", 160, 8, partials)) {
        return false;
    }
    tick_n(4);
    return true;
}

bool run_forward(const DigitExample &example, std::array<double, 10> *logits) {
    for (double &v : *logits) {
        v = 0.0;
    }
    for (int k_tile = 0; k_tile < 8; k_tile++) {
        for (int c_tile = 0; c_tile < 2; c_tile++) {
            load_forward_tile_from_ub(example, c_tile, k_tile);
            const bool add_bias = (k_tile == 7);
            if (add_bias) {
                load_bias_tile_from_ub(c_tile);
            }
            std::array<uint16_t, 8> partials{};
            if (!run_forward_tile(add_bias, &partials)) {
                return false;
            }
            for (int lane = 0; lane < 8; lane++) {
                const int cls = c_tile * 8 + lane;
                if (cls < 10) {
                    (*logits)[cls] += q_to_float(partials[lane]);
                }
            }
        }
    }
    return true;
}

std::array<double, 10> softmax10(const std::array<double, 10> &logits) {
    std::array<double, 10> probs{};
    double max_logit = logits[0];
    for (int i = 1; i < 10; i++) {
        max_logit = std::max(max_logit, logits[i]);
    }
    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        probs[i] = std::exp(logits[i] - max_logit);
        sum += probs[i];
    }
    for (double &p : probs) {
        p /= sum;
    }
    return probs;
}

int argmax10(const std::array<double, 10> &values) {
    int best = 0;
    for (int i = 1; i < 10; i++) {
        if (values[i] > values[best]) {
            best = i;
        }
    }
    return best;
}

double ce_loss(const std::array<double, 10> &logits, int label) {
    const auto probs = softmax10(logits);
    return -std::log(std::max(probs[label], 1e-12));
}

struct EvalResult {
    double loss = 0.0;
    int correct = 0;
};

EvalResult evaluate_examples(const std::vector<DigitExample> &examples) {
    EvalResult result;
    for (const auto &example : examples) {
        std::array<double, 10> logits{};
        if (!run_forward(example, &logits)) {
            throw std::runtime_error("forward failed during evaluation");
        }
        result.loss += ce_loss(logits, example.label);
        result.correct += argmax10(logits) == example.label ? 1 : 0;
    }
    result.loss /= static_cast<double>(examples.size());
    return result;
}

std::string hex16(uint16_t value) {
    std::ostringstream ss;
    ss << "\"0x" << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
       << value << "\"";
    return ss.str();
}

void write_examples_json(std::ostream &out, const std::string &key, const std::vector<DigitExample> &examples) {
    out << "  \"" << key << "\": [\n";
    for (std::size_t e = 0; e < examples.size(); e++) {
        out << "    {\n";
        out << "      \"label\": " << examples[e].label << ",\n";
        out << "      \"pixels_q8_8\": [";
        for (int i = 0; i < 64; i++) {
            if (i != 0) {
                out << ", ";
            }
            out << hex16(examples[e].pixels[i]);
        }
        out << "]\n";
        out << "    }";
        if (e + 1 != examples.size()) {
            out << ",";
        }
        out << "\n";
    }
    out << "  ]";
}

void export_trained_model_json(
    const std::string &path,
    const std::vector<DigitExample> &train_examples,
    const std::vector<DigitExample> &test_examples,
    int steps,
    uint16_t lr_q8_8
) {
    std::ofstream out(path);
    if (!out) {
        throw std::runtime_error("cannot write trained model json: " + path);
    }

    out << "{\n";
    out << "  \"source\": \"tpu_digit_fc_extgrad_train_sim\",\n";
    out << "  \"format\": \"q8.8\",\n";
    out << "  \"input_shape\": [8, 8],\n";
    out << "  \"num_classes\": 10,\n";
    out << "  \"training\": {\n";
    out << "    \"gradient\": \"external_softmax_cross_entropy\",\n";
    out << "    \"update\": \"tpu_gradient_descent\",\n";
    out << "    \"steps\": " << steps << ",\n";
    out << "    \"lr_q8_8_hex\": " << hex16(lr_q8_8) << "\n";
    out << "  },\n";

    out << "  \"weights_q8_8_hex\": [\n";
    for (int i = 0; i < 64; i++) {
        out << "    ";
        for (int c = 0; c < 10; c++) {
            if (c != 0) {
                out << ", ";
            }
            out << hex16(ub_mem(static_cast<uint16_t>(MODEL_W_BASE + i * 10 + c)));
        }
        if (i != 63) {
            out << ",";
        }
        out << "\n";
    }
    out << "  ],\n";

    out << "  \"bias_q8_8_hex\": [";
    for (int c = 0; c < 10; c++) {
        if (c != 0) {
            out << ", ";
        }
        out << hex16(ub_mem(static_cast<uint16_t>(MODEL_B_BASE + c)));
    }
    out << "],\n";

    write_examples_json(out, "train_examples", train_examples);
    out << ",\n";
    write_examples_json(out, "test_examples", test_examples);
    out << "\n}\n";
}

void update_weight_row_with_external_grad(
    const DigitExample &example,
    const std::array<double, 10> &delta,
    int input_idx,
    int c_tile
) {
    const int ncols = (c_tile == 0) ? 8 : 2;
    std::vector<uint16_t> grad_row;
    grad_row.reserve(ncols);
    const double x = q_to_float(example.pixels[input_idx]);
    for (int lane = 0; lane < ncols; lane++) {
        const int cls = c_tile * 8 + lane;
        grad_row.push_back(q8_8(x * delta[cls]));
    }
    load_block(GRAD_W_BASE, grad_row);

    const uint16_t model_base = static_cast<uint16_t>(MODEL_W_BASE + input_idx * 10 + c_tile * 8);
    issue(ins_set_grad_addr(GRAD_W_BASE), "SET_EXT_GRAD_W");
    issue(ins_ub_read(PTR_GRAD_WEIGHT, model_base, 1, static_cast<uint8_t>(ncols), false, 0x0),
          "UPDATE_W_EXT_GRAD");
    tick_n(18);
}

void update_bias_with_external_grad(const std::array<double, 10> &delta, int c_tile) {
    const int ncols = (c_tile == 0) ? 8 : 2;
    std::vector<uint16_t> grad_bias;
    grad_bias.reserve(ncols);
    for (int lane = 0; lane < ncols; lane++) {
        const int cls = c_tile * 8 + lane;
        grad_bias.push_back(q8_8(delta[cls]));
    }
    load_block(GRAD_B_BASE, grad_bias);

    const uint16_t model_base = static_cast<uint16_t>(MODEL_B_BASE + c_tile * 8);
    issue(ins_set_grad_addr(GRAD_B_BASE), "SET_EXT_GRAD_B");
    issue(ins_ub_read(PTR_GRAD_BIAS, model_base, 1, static_cast<uint8_t>(ncols), false, 0x0),
          "UPDATE_B_EXT_GRAD");
    tick_n(24);
}

void train_one_example_external_grad(const DigitExample &example) {
    std::array<double, 10> logits{};
    if (!run_forward(example, &logits)) {
        throw std::runtime_error("forward failed during training");
    }

    auto delta = softmax10(logits);
    delta[example.label] -= 1.0;  // external softmax-cross-entropy gradient

    for (int input_idx = 0; input_idx < 64; input_idx++) {
        for (int c_tile = 0; c_tile < 2; c_tile++) {
            update_weight_row_with_external_grad(example, delta, input_idx, c_tile);
        }
    }
    for (int c_tile = 0; c_tile < 2; c_tile++) {
        update_bias_with_external_grad(delta, c_tile);
    }
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    int steps = DEFAULT_STEPS;
    bool fresh = false;
    uint16_t lr_q8_8 = DEFAULT_LR_Q8_8;
    std::string model_path;
    std::string out_path = DEFAULT_OUT_PATH;
    for (int i = 1; i < argc; i++) {
        const std::string arg = argv[i];
        if (arg == "--steps" && i + 1 < argc) {
            steps = std::stoi(argv[++i]);
        } else if (arg == "--lr-q8_8" && i + 1 < argc) {
            lr_q8_8 = static_cast<uint16_t>(std::stoul(argv[++i], nullptr, 0));
        } else if (arg == "--model" && i + 1 < argc) {
            model_path = argv[++i];
        } else if (arg == "--out" && i + 1 < argc) {
            out_path = argv[++i];
        } else if (arg == "--fresh") {
            fresh = true;
        }
    }

    DigitModel model;
    try {
        model = load_model_json(model_path);
    } catch (const std::exception &e) {
        std::cerr << "[error] " << e.what() << std::endl;
        return 1;
    }
    if (fresh) {
        init_small_model(&model);
    }

    dut = new Vtpu_isa_confreg;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("digit_fc_extgrad_train_sim.vcd");

    reset_dut(lr_q8_8);
    load_model_to_ub(model);

    const auto &train_set = model.train_examples;
    const auto &eval_set = model.test_examples;
    std::cout << "[train-extgrad] examples=" << train_set.size()
              << " eval=" << eval_set.size()
              << " steps=" << steps
              << " init=" << (fresh ? "small-random" : "json")
              << " lr=" << std::fixed << std::setprecision(4) << q_to_float(lr_q8_8)
              << " (Q8.8=0x" << std::hex << std::setw(4) << std::setfill('0') << lr_q8_8
              << std::dec << std::setfill(' ') << ")" << std::endl;
    std::cout << "[train-extgrad] forward runs on TPU; softmax gradient is external; W/B update runs in TPU gradient_descent" << std::endl;

    EvalResult before;
    try {
        before = evaluate_examples(eval_set);
        std::cout << "[before] loss=" << std::fixed << std::setprecision(4) << before.loss
                  << " acc=" << before.correct << "/" << eval_set.size() << std::endl;
        for (int step = 0; step < steps; step++) {
            for (const auto &example : train_set) {
                train_one_example_external_grad(example);
            }
            const auto mid = evaluate_examples(train_set);
            std::cout << "[step " << std::setw(2) << std::setfill('0') << step
                      << std::setfill(' ') << "] loss=" << std::fixed << std::setprecision(4)
                      << mid.loss << " acc=" << mid.correct << "/" << train_set.size()
                      << std::endl;
        }
        const auto train_after = evaluate_examples(train_set);
        const auto eval_after = evaluate_examples(eval_set);
        std::cout << "[after-train] loss=" << std::fixed << std::setprecision(4) << train_after.loss
                  << " acc=" << train_after.correct << "/" << train_set.size() << std::endl;
        std::cout << "[after-eval] loss=" << std::fixed << std::setprecision(4) << eval_after.loss
                  << " acc=" << eval_after.correct << "/" << eval_set.size()
                  << " cycles=" << cycle_count << std::endl;
        export_trained_model_json(out_path, train_set, eval_set, steps, lr_q8_8);
        std::cout << "[export] wrote " << out_path << std::endl;
        std::cout << "[result] DONE: external-gradient TPU-update training path completed" << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "[error] " << e.what() << std::endl;
        tfp->close();
        delete tfp;
        delete dut;
        return 1;
    }

    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
