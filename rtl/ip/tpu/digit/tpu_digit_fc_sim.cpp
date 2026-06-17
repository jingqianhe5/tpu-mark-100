#include <array>
#include <cmath>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vtpu_isa_confreg.h"

namespace {

constexpr uint32_t OP_NOP = 0x0u;
constexpr uint32_t OP_LOAD = 0x1u;
constexpr uint32_t OP_SET_WR = 0x2u;
constexpr uint32_t OP_UB_READ = 0x3u;
constexpr uint32_t OP_SWITCH = 0x4u;

// UB 读端口选择：0 读输入 X，1 读权重 W，2 读偏置 B。
// 这些编号要和 unified_buffer.sv 里的 ub_ptr_select case 对上。
constexpr uint8_t PTR_INPUT = 0;
constexpr uint8_t PTR_WEIGHT = 1;
constexpr uint8_t PTR_BIAS = 2;

// 在 UB 里的临时地址分配。这里只是仿真 testbench 的约定，
// 不改变 TPU 顶层端口。
constexpr uint16_t X_BASE = 0;
constexpr uint16_t W_BASE = 32;
constexpr uint16_t B_BASE = 128;
constexpr uint16_t SCRATCH_BASE = 256;

vluint64_t main_time = 0;
int cycle_count = 0;
Vtpu_isa_confreg *dut = nullptr;
VerilatedVcdC *tfp = nullptr;

struct DigitModel {
    // 单层 FC 模型：sample[1x64] * weights[64x10] + bias[10]。
    // 所有数值都是 Q8.8 的 16 bit 定点数。
    std::array<std::array<uint16_t, 10>, 64> weights{};
    std::array<uint16_t, 10> bias{};
    std::array<uint16_t, 64> sample{};
    int sample_label = -1;
    int sample_prediction = -1;
};

std::vector<std::string> split_lines(const std::string &text) {//按行拆开
    std::vector<std::string> lines;
    std::istringstream ss(text);
    std::string line;
    while (std::getline(ss, line)) {
        if (!line.empty() && line.back() == '\r') {
            line.pop_back();
        }
        if (!line.empty()) {
            lines.push_back(line);
        }
    }
    return lines;
}

uint16_t pixel_char_to_q8_8(char ch) {//转化输入矩阵
    switch (ch) {
        case '1':
        case '#':
        case '@':
        case 'X':
        case 'x':
            return 0x0100;
        case '0':
        case '.':
        case ' ':
            return 0x0000;
        default:
            throw std::runtime_error(std::string("unsupported pixel char: ") + ch);
    }
}

DigitModel load_manual_sample(const std::vector<std::string> &rows, int sample_label) {
    if (rows.size() != 8) {
        throw std::runtime_error("manual sample must have exactly 8 rows");
    }

    DigitModel model;
    model.sample_label = sample_label;
    model.sample_prediction = -1;
    for (int y = 0; y < 8; y++) {
        if (rows[y].size() != 8) {
            throw std::runtime_error("each manual sample row must have exactly 8 characters");
        }
        for (int x = 0; x < 8; x++) {
            // 手写文本里的 8x8 图案被展平成 64 维输入向量。
            model.sample[y * 8 + x] = pixel_char_to_q8_8(rows[y][x]);
        }
    }
    return model;
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
    // 指令格式和 decode.v 对应：
    // [31:28] opcode, [27:25] ptr_select, [24:13] addr,
    // [12:9] row_size, [8:5] col_size, [4] transpose, [3:0] vpu_mode。
    return (OP_UB_READ << 28) |
           ((static_cast<uint32_t>(ptr_select) & 0x7u) << 25) |
           ((static_cast<uint32_t>(addr) & 0x0FFFu) << 13) |
           ((static_cast<uint32_t>(row_size) & 0xFu) << 9) |
           ((static_cast<uint32_t>(col_size) & 0xFu) << 5) |
           ((transpose ? 1u : 0u) << 4) |
           (static_cast<uint32_t>(vpu_mode) & 0xFu);
}

int16_t s16(uint16_t value) {
    return static_cast<int16_t>(value);
}

double q_to_float(uint16_t value) {
    return static_cast<double>(s16(value)) / 256.0;
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

void reset_dut() {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->ins_valid = 0;
    dut->ins = ins_nop();
    dut->ub_wr_ext_valid = 0;
    dut->ub_wr_ext_addr = 0;
    dut->ub_wr_ext_data = 0;
    dut->learn_rate_in = 0;
    dut->vpu_factor_in = 0;
    dut->two_div_N_in = 0;
    tick_n(5);
    dut->rst_n = 1;
    tick_n(3);
}

bool weight_valid() {
    return dut->ub_rd_weight_valid_out_0 || dut->ub_rd_weight_valid_out_1;
}

bool wait_until_done(const std::string &tag, bool (*valid_fn)(), int max_cycles) {
    bool seen_valid = false;
    for (int i = 0; i < max_cycles; i++) {
        tick();
        if (valid_fn()) {
            seen_valid = true;
        } else if (seen_valid) {
            return true;
        }
    }
    std::cout << "[" << tag << "] timeout at cycle " << cycle_count << std::endl;
    return false;
}

bool wait_lane0(const std::string &tag, int max_cycles, uint16_t *value) {
    bool seen_valid = false;
    for (int i = 0; i < max_cycles; i++) {
        tick();
        if (dut->vpu_data_valid_out_0) {
            *value = static_cast<uint16_t>(dut->vpu_data_out_0);
            seen_valid = true;
        } else if (seen_valid) {
            return true;
        }
    }
    std::cout << "[" << tag << "] timeout at cycle " << cycle_count << std::endl;
    return false;
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

bool wait_lanes(const std::string &tag, int max_cycles, std::array<uint16_t, 8> *values) {
    std::array<bool, 8> seen{};
    for (int cycle = 0; cycle < max_cycles; cycle++) {
        tick();
        for (int lane = 0; lane < 8; lane++) {
            if (vpu_valid_lane(lane)) {
                (*values)[lane] = vpu_data_lane(lane);
                seen[lane] = true;
            }
        }

        bool all_seen = true;
        for (bool valid : seen) {
            all_seen = all_seen && valid;
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

std::string bracket_section_after_key(const std::string &text, const std::string &key) {//解析json文件
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

std::string first_object_in_array_after_key(const std::string &text, const std::string &key) {
    const std::size_t key_pos = text.find("\"" + key + "\"");
    if (key_pos == std::string::npos) {
        throw std::runtime_error("missing json key: " + key);
    }
    const std::size_t start = text.find('{', key_pos);
    if (start == std::string::npos) {
        throw std::runtime_error("missing object in array for key: " + key);
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
        if (ch == '{') {
            depth++;
        } else if (ch == '}') {
            depth--;
            if (depth == 0) {
                return text.substr(start, i - start + 1);
            }
        }
    }
    throw std::runtime_error("unterminated object for key: " + key);
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

DigitModel load_model_json(int sample_index, int sample_label, const std::string &model_path) {
    // 读取 Python 训练脚本导出的权重文件。TPU 推理真正使用的是
    // weights_q8_8_hex 和 bias_q8_8_hex。
    const std::string text = model_path.empty()
        ? read_text_file({
            "digit/digit8x8_linear_weights.json",
            "digit8x8_linear_weights.json",
        })
        : read_text_file({model_path});

    DigitModel model;
    const auto weight_values = extract_hex16_values(
        bracket_section_after_key(text, "weights_q8_8_hex"));
    if (weight_values.size() != 640) {
        throw std::runtime_error("weights_q8_8_hex must contain 640 values");
    }
    for (int i = 0; i < 64; i++) {
        for (int c = 0; c < 10; c++) {
            // W 按 W[input_index][class] 存，输入维度 64，类别 10。
            model.weights[i][c] = weight_values[i * 10 + c];
        }
    }

    const auto bias_values = extract_hex16_values(
        bracket_section_after_key(text, "bias_q8_8_hex"));
    if (bias_values.size() != 10) {
        throw std::runtime_error("bias_q8_8_hex must contain 10 values");
    }
    for (int c = 0; c < 10; c++) {
        model.bias[c] = bias_values[c];
    }

    const auto examples = objects_in_array_after_key(text, "test_examples");
    std::string example;
    if (sample_index >= 0) {
        if (sample_index >= static_cast<int>(examples.size())) {
            throw std::runtime_error("sample index out of range");
        }
        example = examples[sample_index];
    } else if (sample_label >= 0) {
        bool found = false;
        for (const auto &candidate : examples) {
            if (extract_int_field(candidate, "label") == sample_label) {
                example = candidate;
                found = true;
                break;
            }
        }
        if (!found) {
            throw std::runtime_error("sample label not found");
        }
    } else {
        example = examples.front();
    }
    const auto pixel_values = extract_hex16_values(
        bracket_section_after_key(example, "pixels_q8_8"));
    if (pixel_values.size() != 64) {
        throw std::runtime_error("first test example pixels_q8_8 must contain 64 values");
    }
    for (int i = 0; i < 64; i++) {
        model.sample[i] = pixel_values[i];
    }
    model.sample_label = extract_int_field(example, "label");
    model.sample_prediction = extract_int_field(example, "prediction");
    return model;
}

std::array<double, 10> golden_logits(const DigitModel &model) {
    // 软件参考结果，只用于检查 RTL 输出是否正确；不参与 TPU 推理。
    std::array<double, 10> logits{};
    for (int c = 0; c < 10; c++) {
        logits[c] = q_to_float(model.bias[c]);
        for (int i = 0; i < 64; i++) {
            logits[c] += q_to_float(model.sample[i]) * q_to_float(model.weights[i][c]);
        }
    }
    return logits;
}

std::vector<double> softmax(const std::array<double, 10> &logits) {
    // TPU 输出的是 logits。概率只是 C++ 为了显示直观，用 softmax 算出来。
    std::vector<double> probs(10);
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

int argmax10(const std::array<double, 10> &values) {//找到概率最大的就是最终推理结果
    int best = 0;
    for (int i = 1; i < 10; i++) {
        if (values[i] > values[best]) {
            best = i;
        }
    }
    return best;
}

void print_sample_image(const DigitModel &model) {//输出结果
    std::cout << "[input] label=" << model.sample_label
              << " python_pred=" << model.sample_prediction << std::endl;
    for (int y = 0; y < 8; y++) {
        std::cout << "  ";
        for (int x = 0; x < 8; x++) {
            const double v = q_to_float(model.sample[y * 8 + x]);
            std::cout << (v > 0.65 ? '#' : (v > 0.25 ? '+' : '.'));
        }
        std::cout << std::endl;
    }
}

void load_dot_tile(const DigitModel &model, int cls, int k_tile) {
    // 旧的单 lane dot-product 路径：一次只算一个类别的 8 维 partial。
    // 现在主流程使用下面的 run_digit_fc_parallel()。
    std::vector<uint16_t> x_tile;
    std::vector<uint16_t> w_tile;
    for (int k = 0; k < 8; k++) {
        const int idx = k_tile * 8 + k;
        x_tile.push_back(model.sample[idx]);
        w_tile.push_back(model.weights[idx][cls]);
    }
    load_block(X_BASE, x_tile);
    load_block(W_BASE, w_tile);
}

bool run_dot_tile(uint16_t *tile_out) {
    issue(ins_ub_read(PTR_WEIGHT, W_BASE, 1, 8, true, 0x0), "READ_W_DOT");
    if (!wait_until_done("weight", weight_valid, 80)) {
        return false;
    }
    tick_n(4);
    issue(ins_switch(), "SWITCH_W_DOT");
    tick_n(4);

    issue(ins_set_wr(SCRATCH_BASE), "SET_WR_SCRATCH");
    issue(ins_ub_read(PTR_INPUT, X_BASE, 1, 8, false, 0x0), "READ_X_DOT");
    if (!wait_lane0("dot", 120, tile_out)) {
        return false;
    }
    tick_n(4);
    return true;
}

bool run_digit_fc(const DigitModel &model, std::array<double, 10> *logits) {
    for (int cls = 0; cls < 10; cls++) {
        (*logits)[cls] = q_to_float(model.bias[cls]);
        for (int k_tile = 0; k_tile < 8; k_tile++) {
            load_dot_tile(model, cls, k_tile);
            uint16_t partial = 0;
            if (!run_dot_tile(&partial)) {
                return false;
            }
            (*logits)[cls] += q_to_float(partial);
            std::cout << "[dot] class=" << cls
                      << " tile=" << k_tile
                      << " partial=" << std::fixed << std::setprecision(4)
                      << q_to_float(partial) << std::endl;
        }
    }
    return true;
}

void load_parallel_tile(const DigitModel &model, int c_tile, int k_tile) {
    // 并行 FC 的一个 tile：
    // X 取 8 个输入元素；W 取 8x8，其中 lane i 对应 class=(c_tile*8+i)。
    // 因为类别只有 10 个，所以第二个 class tile 的 lane 2..7 用 0 padding。
    std::vector<uint16_t> x_tile;
    for (int k = 0; k < 8; k++) {
        x_tile.push_back(model.sample[k_tile * 8 + k]);
    }
    load_block(X_BASE, x_tile);

    std::vector<uint16_t> w_tile;
    w_tile.reserve(64);
    for (int k = 0; k < 8; k++) {
        const int input_idx = k_tile * 8 + k;
        for (int lane = 0; lane < 8; lane++) {
            const int cls = c_tile * 8 + lane;
            w_tile.push_back(cls < 10 ? model.weights[input_idx][cls] : 0);
        }
    }
    load_block(W_BASE, w_tile);
}

void load_parallel_bias_tile(const DigitModel &model, int c_tile) {
    // 把 8 个 lane 对应的 bias 放进 UB。后面用 vpu_mode=0x8 让 VPU bias 单元相加。
    std::vector<uint16_t> bias_tile;
    bias_tile.reserve(8);
    for (int lane = 0; lane < 8; lane++) {
        const int cls = c_tile * 8 + lane;
        bias_tile.push_back(cls < 10 ? model.bias[cls] : 0);
    }
    load_block(B_BASE, bias_tile);
}

bool run_parallel_tile(bool add_bias, std::array<uint16_t, 8> *partials) {
    // 1. 读 W 到 systolic 的权重缓冲。
    issue(ins_ub_read(PTR_WEIGHT, W_BASE, 8, 8, true, 0x0), "READ_W_PAR");
    tick_n(32);
    // 2. switch 让刚读入的权重成为 active 权重。
    issue(ins_switch(), "SWITCH_W_PAR");
    tick_n(12);

    if (add_bias) {
        // 3. 只在最后一个 K tile 打开 bias 路径。
        // vpu_mode=0x8 表示只启用 VPU bias add，不启用激活/loss/反向路径。
        issue(ins_ub_read(PTR_BIAS, B_BASE, 1, 8, false, 0x8), "READ_B_PAR");
    }
    issue(ins_set_wr(SCRATCH_BASE), "SET_WR_SCRATCH");
    // 4. 读 X 触发 systolic 计算。最后一个 tile 同时让 VPU 加 bias。
    issue(ins_ub_read(PTR_INPUT, X_BASE, 1, 8, false, add_bias ? 0x8 : 0x0), "READ_X_PAR");
    if (!wait_lanes("parallel tile", 160, partials)) {
        return false;
    }
    tick_n(4);
    return true;
}

bool run_digit_fc_parallel(
    const DigitModel &model,
    std::array<double, 10> *logits
) {
    // 这里算的是 logits = X[1x64] * W[64x10] + B[10]。
    // 64 维输入被切成 8 个 K tile；10 个类别被切成 2 个 class tile。
    for (int cls = 0; cls < 10; cls++) {
        (*logits)[cls] = 0.0;
    }

    for (int k_tile = 0; k_tile < 8; k_tile++) {
        for (int c_tile = 0; c_tile < 2; c_tile++) {
            load_parallel_tile(model, c_tile, k_tile);
            const bool add_bias = (k_tile == 7);
            if (add_bias) {
                load_parallel_bias_tile(model, c_tile);
            }
            std::array<uint16_t, 8> partials{};
            if (!run_parallel_tile(add_bias, &partials)) {
                return false;
            }
            for (int lane = 0; lane < 8; lane++) {
                const int cls = c_tile * 8 + lane;
                if (cls < 10) {
                    // 每个 lane 输出一个类别的 partial。8 个 K tile 累加后得到该类别 logit。
                    (*logits)[cls] += q_to_float(partials[lane]);
                }
            }
        }
    }
    return true;
}

double sse10(const std::array<double, 10> &a, const std::array<double, 10> &b) {
    double err = 0.0;
    for (int i = 0; i < 10; i++) {
        const double diff = a[i] - b[i];
        err += diff * diff;
    }
    return err;
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // --sample-index / --sample-label 使用 JSON 里的测试样本；
    // --manual-file 使用你自己写的 8 行 8 列文本图案。
    int sample_index = -1;
    int sample_label = -1;
    std::string manual_file;
    std::string model_path;
    for (int i = 1; i < argc; i++) {
        const std::string arg = argv[i];
        if (arg == "--sample-index" && i + 1 < argc) {
            sample_index = std::stoi(argv[++i]);
        } else if (arg == "--sample-label" && i + 1 < argc) {
            sample_label = std::stoi(argv[++i]);
        } else if (arg == "--manual-file" && i + 1 < argc) {
            manual_file = argv[++i];
        } else if (arg == "--model" && i + 1 < argc) {
            model_path = argv[++i];
        }
    }

    DigitModel model;
    try {
        if (!manual_file.empty()) {
            // 手动输入模式仍然先加载训练好的 W/B，然后只覆盖 sample。
            model = load_model_json(-1, -1, model_path);
            std::ifstream in(manual_file);
            if (!in) {
                throw std::runtime_error("cannot open manual digit file: " + manual_file);
            }
            std::ostringstream ss;
            ss << in.rdbuf();
            const auto manual = load_manual_sample(split_lines(ss.str()), sample_label);
            model.sample = manual.sample;
            model.sample_label = manual.sample_label;
            model.sample_prediction = manual.sample_prediction;
        } else {
            model = load_model_json(sample_index, sample_label, model_path);
        }
    } catch (const std::exception &e) {
        std::cerr << "[error] " << e.what() << std::endl;
        return 1;
    }

    dut = new Vtpu_isa_confreg;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("digit_fc_sim.vcd");

    reset_dut();
    print_sample_image(model);

    // golden 是 C++ 算的参考值；rtl_logits 是 TPU 跑出来的结果。
    const auto golden = golden_logits(model);
    std::array<double, 10> rtl_logits{};
    const bool ok = run_digit_fc_parallel(model, &rtl_logits);
    const double err = sse10(rtl_logits, golden);

    const auto probs = softmax(rtl_logits);
    // 真正的预测类别是最大 logit；softmax 概率只是打印时的归一化显示。
    const int pred = argmax10(rtl_logits);

    std::cout << "\n[parallel mapping] lane i = class tile base + i"
              << " sse=" << std::fixed << std::setprecision(4) << err
              << "\n[rtl logits / probabilities]" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "  " << i
                  << ": logit=" << std::setw(9) << std::fixed << std::setprecision(4)
                  << rtl_logits[i]
                  << "  prob=" << std::setw(6) << std::setprecision(2)
                  << probs[i] * 100.0 << "%"
                  << "  golden~=" << std::setw(9) << std::setprecision(4)
                  << golden[i]
                  << std::endl;
    }

    std::cout << "\n[result] rtl_pred=" << pred
              << " label=" << model.sample_label
              << " python_pred=" << model.sample_prediction
              << " cycles=" << cycle_count
              << std::endl;

    tfp->close();
    delete tfp;
    delete dut;
    return ok ? 0 : 1;
}
