#include <array>
#include <cstdint>
#include <iomanip>
#include <iostream>
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
constexpr uint8_t PTR_Y = 3;
constexpr uint8_t PTR_H = 4;
constexpr uint8_t PTR_GRAD_BIAS = 5;
constexpr uint8_t PTR_GRAD_WEIGHT = 6;

constexpr uint8_t VPU_FORWARD = 0xC;
constexpr uint8_t VPU_LOSS = 0x2;
constexpr uint8_t VPU_DERIVATIVE = 0x1;

constexpr uint16_t LEARN_RATE = 0x00C0u;
constexpr uint16_t VPU_FACTOR = 0x0003u;
constexpr uint16_t TWO_DIV_N = 0x0080u;

// 修改这里可以调整 full-network RTL 训练 step 数。
constexpr int FULL_NETWORK_TRAIN_STEPS = 20;

namespace ub {
constexpr uint16_t X_BASE        = 0;   // 0..15
constexpr uint16_t W_BASE        = 16;  // 16..31
constexpr uint16_t B_BASE        = 32;  // 32..39
constexpr uint16_t H1_BASE       = 40;  // 40..47
constexpr uint16_t Y_TRUE_BASE   = 48;  // 48..51
constexpr uint16_t Y_PRED_BASE   = 52;  // 52..55
constexpr uint16_t DY_BASE       = 56;  // 56..59
constexpr uint16_t DELTA2_BASE   = 60;  // 60..63
constexpr uint16_t DELTA1_BASE   = 64;  // 64..71
constexpr uint16_t GRAD_W1_BASE  = 72;  // 72..75
constexpr uint16_t GRAD_W2_BASE  = 76;  // 76..77
constexpr uint16_t GRAD_B1_BASE  = 78;  // 78..79
constexpr uint16_t GRAD_B2_BASE  = 80;  // 80
constexpr uint16_t TMP_BASE      = 96;  // 96..127

constexpr uint16_t W1_BASE       = W_BASE;      // 16..19
constexpr uint16_t W2_BASE       = W_BASE + 4;  // 20..21
constexpr uint16_t B1_BASE       = B_BASE;      // 32..33
constexpr uint16_t B2_BASE       = B_BASE + 2;  // 34
}  // namespace ub

vluint64_t main_time = 0;
int cycle_count = 0;

Vtpu_isa_confreg *dut = nullptr;
VerilatedVcdC *tfp = nullptr;
bool quiet_step_logs = false;

struct XorModel {
    std::array<uint16_t, 4> w1;
    std::array<uint16_t, 2> w2;
    std::array<uint16_t, 2> b1;
    uint16_t b2;
};

struct InferenceResult {
    bool ran;
    int32_t err;
    int correct;
};

uint16_t q8_8(int integer_value) {
    return static_cast<uint16_t>(integer_value << 8);
}

int16_t s16(uint16_t value) {
    return static_cast<int16_t>(value);
}

double to_float(uint16_t value) {
    return static_cast<double>(s16(value)) / 256.0;
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

void reset_dut() {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->ins_valid = 0;
    dut->ins = ins_nop();
    dut->ub_wr_ext_valid = 0;
    dut->ub_wr_ext_addr = 0;
    dut->ub_wr_ext_data = 0;
    dut->learn_rate_in = LEARN_RATE;
    dut->vpu_factor_in = VPU_FACTOR;
    dut->two_div_N_in = TWO_DIV_N;

    tick_n(5);
    dut->rst_n = 1;
    tick_n(3);
}

bool weight_valid() {
    return dut->ub_rd_weight_valid_out_0 || dut->ub_rd_weight_valid_out_1;
}

bool vpu_valid() {
    return dut->vpu_data_valid_out_0 || dut->vpu_data_valid_out_1;
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

    std::cout << "[" << tag << "] timeout：等待 valid 结束失败，cycle="
              << cycle_count << std::endl;
    return false;
}

bool wait_vpu_collect(
    const std::string &tag,
    int max_cycles,
    std::size_t max_words,
    std::vector<uint16_t> *captured
) {
    bool seen_valid = false;
    if (captured) {
        captured->clear();
    }

    for (int i = 0; i < max_cycles; i++) {
        tick();
        if (vpu_valid()) {
            seen_valid = true;
            if (captured && captured->size() < max_words && dut->vpu_data_valid_out_0) {
                captured->push_back(static_cast<uint16_t>(dut->vpu_data_out_0));
            }
            if (captured && captured->size() < max_words && dut->vpu_data_valid_out_1) {
                captured->push_back(static_cast<uint16_t>(dut->vpu_data_out_1));
            }
        } else if (seen_valid) {
            return true;
        }
    }

    std::cout << "[" << tag << "] timeout：没有等到 VPU 输出完成，cycle="
              << cycle_count << std::endl;
    return false;
}

uint16_t ub_mem(uint16_t addr) {
    return dut->rootp->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_memory[addr];
}

void print_vector_summary(const std::string &name, const std::vector<uint16_t> &values) {
    std::cout << name << " = [";
    for (std::size_t i = 0; i < values.size(); i++) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << std::fixed << std::setprecision(4) << to_float(values[i]);
    }
    std::cout << "]" << std::endl;
}

void print_word_pair(const std::string &name, uint16_t a, uint16_t b) {
    std::cout << name << " = ["
              << std::fixed << std::setprecision(4) << to_float(a)
              << ", " << to_float(b) << "]" << std::endl;
}

void load_block(uint16_t base, const std::vector<uint16_t> &data) {
    for (std::size_t i = 0; i < data.size(); i++) {
        issue(ins_load(static_cast<uint16_t>(base + i), data[i]), "LOAD");
    }
}

void load_training_batch_and_params(const XorModel& model) {
    const std::vector<uint16_t> x = {
        q8_8(0), q8_8(0),
        q8_8(1), q8_8(0),
        q8_8(0), q8_8(1),
        q8_8(1), q8_8(1),
        0x0000u, 0x0000u, 0x0000u, 0x0000u,
        0x0000u, 0x0000u, 0x0000u, 0x0000u,
    };
    const std::vector<uint16_t> y_true = {q8_8(0), q8_8(1), q8_8(1), q8_8(0)};

    load_block(ub::W1_BASE, {model.w1.begin(), model.w1.end()});
    load_block(ub::W2_BASE, {model.w2.begin(), model.w2.end()});
    load_block(ub::B1_BASE, {model.b1.begin(), model.b1.end()});
    load_block(ub::B2_BASE, {model.b2});
    load_block(ub::Y_TRUE_BASE, y_true);
    load_block(ub::TMP_BASE, {q8_8(1)});
    load_block(ub::X_BASE, x);//最后才输入矩阵 这个是开始计算的标志

    std::cout << "[初始化] 写入 X/W/B/Y_true 完成" << std::endl;
}

bool load_identity_weight_to_active() {//不计算 直接流进去vpu
    issue(ins_ub_read(PTR_WEIGHT, ub::TMP_BASE, 1, 1, true, 0x0), "READ_ID");
    if (!wait_until_done("identity", weight_valid, 80)) {
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_ID");
    return true;
}

bool run_forward_layer1_to_h1() {//前向1
    issue(ins_ub_read(PTR_WEIGHT, ub::W1_BASE, 2, 2, true, 0x0), "READ_W1");
    if (!wait_until_done("前向1", weight_valid, 80)) {
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_1");

    issue(ins_set_wr(ub::H1_BASE), "SET_WR_H1");
    issue(ins_ub_read(PTR_INPUT, ub::X_BASE, 4, 2, false, VPU_FORWARD), "READ_X");
    issue(ins_ub_read(PTR_BIAS, ub::B1_BASE, 4, 2, false, VPU_FORWARD), "READ_B1");
    if (!wait_vpu_collect("前向1", 160, 8, nullptr)) {
        return false;
    }

    if (!quiet_step_logs) {
        std::cout << "[前向1] H1 写回完成" << std::endl;
    }
    return true;
}

bool run_forward_layer2_to_ypred(std::vector<uint16_t> *ypred) {//前向2 得到预测值
    issue(ins_ub_read(PTR_WEIGHT, ub::W2_BASE, 1, 2, true, 0x0), "READ_W2");
    if (!wait_until_done("前向2", weight_valid, 80)) {
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_2");

    issue(ins_set_wr(ub::Y_PRED_BASE), "SET_WR_YPRED");
    issue(ins_ub_read(PTR_INPUT, ub::H1_BASE, 4, 2, false, VPU_FORWARD), "READ_H1");
    issue(ins_ub_read(PTR_BIAS, ub::B2_BASE, 4, 1, false, VPU_FORWARD), "READ_B2");
    if (!wait_vpu_collect("前向2", 160, 4, ypred)) {
        return false;
    }

    if (!quiet_step_logs) {
        std::cout << "[前向2] Y_pred 写回完成" << std::endl;
    }
    return true;
}

bool run_loss_to_dy(std::vector<uint16_t> *dy) {//计算损失函数的导数
    if (!load_identity_weight_to_active()) {
        return false;
    }

    issue(ins_set_wr(ub::DY_BASE), "SET_WR_DY");
    issue(ins_ub_read(PTR_INPUT, ub::Y_PRED_BASE, 4, 1, false, VPU_LOSS), "READ_YPRED_LOSS");
    issue(ins_ub_read(PTR_Y, ub::Y_TRUE_BASE, 4, 1, false, VPU_LOSS), "READ_YTRUE_LOSS");
    if (!wait_vpu_collect("loss", 160, 4, dy)) {
        return false;
    }

    if (!quiet_step_logs) {
        std::cout << "[loss] DY 写回完成" << std::endl;
    }
    return true;
}

bool run_delta2_path(std::vector<uint16_t> *delta2) {//计算delta2
    if (!load_identity_weight_to_active()) {
        return false;
    }

    issue(ins_set_wr(ub::DELTA2_BASE), "SET_WR_DELTA2");
    issue(ins_ub_read(PTR_INPUT, ub::DY_BASE, 4, 1, false, VPU_DERIVATIVE), "READ_DY_DERIV");
    issue(ins_ub_read(PTR_H, ub::Y_PRED_BASE, 4, 1, false, VPU_DERIVATIVE), "READ_H_DERIV");
    if (!wait_vpu_collect("delta2", 160, 4, delta2)) {
        return false;
    }

    if (!quiet_step_logs) {
        std::cout << "[delta2] 写回完成" << std::endl;
    }
    return true;
}

bool run_grad_w2_partial(//计算一半的梯度
    uint16_t h1_base,
    uint16_t delta2_base,
    bool accumulate,
    const std::string &tag
) {
    issue(ins_ub_read(PTR_WEIGHT, delta2_base, 1, 2, true, 0x0), "READ_D2_PART_AS_W");
    if (!wait_until_done(tag + " weight", weight_valid, 120)) {
        std::cout << "[" << tag << "] timeout：delta2 partial weight 读取失败" << std::endl;
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_GRAD_W2_PART");

    issue(ins_set_wr(ub::GRAD_W2_BASE, accumulate), "SET_WR_GRAD_W2_PART");
    issue(ins_ub_read(PTR_INPUT, h1_base, 2, 2, true, 0x0), "READ_H1_PART_T_AS_X");
    tick_n(24);
    return true;
}

bool generate_grad_w2_from_current_h1_delta2() {//连续两次计算一半的梯度
    return run_grad_w2_partial(ub::H1_BASE, ub::DELTA2_BASE, false, "GRAD-W2-P0") &&
           run_grad_w2_partial(ub::H1_BASE + 4, ub::DELTA2_BASE + 2, true, "GRAD-W2-P1");
}

bool run_grad_b2_partial(uint16_t delta2_base, bool accumulate, const std::string &tag) {//计算一半的偏置梯度
    issue(ins_ub_read(PTR_WEIGHT, delta2_base, 1, 2, true, 0x0), "READ_D2_PART_AS_W");
    if (!wait_until_done(tag + " weight", weight_valid, 120)) {
        std::cout << "[" << tag << "] timeout：delta2 partial weight 读取失败" << std::endl;
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_GRAD_B2_PART");

    issue(ins_set_wr(ub::GRAD_B2_BASE, accumulate), "SET_WR_GRAD_B2_PART");
    issue(ins_ub_read(PTR_INPUT, ub::TMP_BASE, 1, 2, false, 0x0), "READ_ONES2_AS_X");
    tick_n(24);
    return true;
}

bool generate_grad_b2_from_current_delta2() {//连续两次计算一半的偏置梯度
    load_block(ub::TMP_BASE, {q8_8(1), q8_8(1)});
    return run_grad_b2_partial(ub::DELTA2_BASE, false, "GRAD-B2-P0") &&
           run_grad_b2_partial(ub::DELTA2_BASE + 2, true, "GRAD-B2-P1");
}

bool generate_delta1_from_current_state() {//计算出来delta1
    constexpr uint16_t DELTA2_DUP_BASE = ub::TMP_BASE + 8;
    constexpr uint16_t W2_DIAG_BASE = ub::TMP_BASE + 16;
    constexpr uint16_t IDENTITY2_BASE = ub::TMP_BASE + 24;

    const uint16_t w2_0 = ub_mem(ub::W2_BASE);
    const uint16_t w2_1 = ub_mem(ub::W2_BASE + 1);
    const uint16_t d0 = ub_mem(ub::DELTA2_BASE);
    const uint16_t d1 = ub_mem(ub::DELTA2_BASE + 1);
    const uint16_t d2 = ub_mem(ub::DELTA2_BASE + 2);
    const uint16_t d3 = ub_mem(ub::DELTA2_BASE + 3);

    load_block(DELTA2_DUP_BASE, {d0, d0, d1, d1, d2, d2, d3, d3});
    load_block(W2_DIAG_BASE, {w2_0, 0x0000u, 0x0000u, w2_1});

    issue(ins_ub_read(PTR_WEIGHT, W2_DIAG_BASE, 2, 2, true, 0x0), "READ_W2_FOR_DELTA1");
    if (!wait_until_done("DELTA1-A weight", weight_valid, 120)) {
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_DELTA1_A");

    issue(ins_set_wr(ub::TMP_BASE, false), "SET_WR_A");
    issue(ins_ub_read(PTR_INPUT, DELTA2_DUP_BASE, 4, 2, false, 0x0), "READ_DELTA2_FOR_A");
    if (!wait_vpu_collect("DELTA1-A", 180, 8, nullptr)) {
        return false;
    }

    load_block(IDENTITY2_BASE, {q8_8(1), 0x0000u, 0x0000u, q8_8(1)});
    issue(ins_ub_read(PTR_WEIGHT, IDENTITY2_BASE, 2, 2, true, 0x0), "READ_ID2_FOR_DELTA1");
    if (!wait_until_done("DELTA1 identity", weight_valid, 120)) {
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_DELTA1_DERIV");

    issue(ins_set_wr(ub::DELTA1_BASE, false), "SET_WR_DELTA1");
    issue(ins_ub_read(PTR_INPUT, ub::TMP_BASE, 4, 2, false, VPU_DERIVATIVE), "READ_A_FOR_DERIV");
    issue(ins_ub_read(PTR_H, ub::H1_BASE, 4, 2, false, VPU_DERIVATIVE), "READ_H1_FOR_DERIV");
    return wait_vpu_collect("DELTA1", 220, 8, nullptr);
}

bool run_grad_w1_partial(uint16_t x_base, uint16_t delta1_base, bool accumulate, const std::string &tag) {
    issue(ins_ub_read(PTR_WEIGHT, delta1_base, 2, 2, true, 0x0), "READ_D1_PART_AS_W");
    if (!wait_until_done(tag + " weight", weight_valid, 120)) {
        std::cout << "[" << tag << "] timeout：delta1 partial weight 读取失败" << std::endl;
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_GRAD_W1_PART");

    issue(ins_set_wr(ub::GRAD_W1_BASE, accumulate), "SET_WR_GRAD_W1_PART");
    issue(ins_ub_read(PTR_INPUT, x_base, 2, 2, true, 0x0), "READ_X_PART_T_AS_X");
    tick_n(24);
    return true;
}

bool generate_grad_w1_from_current_x_delta1() {
    return run_grad_w1_partial(ub::X_BASE, ub::DELTA1_BASE, false, "GRAD-W1-P0") &&
           run_grad_w1_partial(ub::X_BASE + 4, ub::DELTA1_BASE + 4, true, "GRAD-W1-P1");
}

bool run_grad_b1_partial(uint16_t delta1_base, bool accumulate, const std::string &tag) {
    load_block(ub::TMP_BASE, {q8_8(1), q8_8(1)});
    issue(ins_ub_read(PTR_WEIGHT, delta1_base, 2, 2, true, 0x0), "READ_D1_PART_AS_W");
    if (!wait_until_done(tag + " weight", weight_valid, 120)) {
        std::cout << "[" << tag << "] timeout：delta1 partial weight 读取失败" << std::endl;
        return false;
    }
    tick_n(2);
    issue(ins_switch(), "SWITCH_GRAD_B1_PART");

    issue(ins_set_wr(ub::GRAD_B1_BASE, accumulate), "SET_WR_GRAD_B1_PART");
    issue(ins_ub_read(PTR_INPUT, ub::TMP_BASE, 1, 2, false, 0x0), "READ_ONES2_AS_X");
    tick_n(24);
    return true;
}

bool generate_grad_b1_from_current_delta1() {
    return run_grad_b1_partial(ub::DELTA1_BASE, false, "GRAD-B1-P0") &&
           run_grad_b1_partial(ub::DELTA1_BASE + 4, true, "GRAD-B1-P1");
}

bool update_w2_b2_from_current_gradients() {//更新第二层权重和偏置
    issue(ins_set_grad_addr(ub::GRAD_W2_BASE), "SET_GRAD_W2");
    issue(ins_ub_read(PTR_GRAD_WEIGHT, ub::W2_BASE, 1, 2, false, 0x0), "UPDATE_W2");
    tick_n(8);

    issue(ins_set_grad_addr(ub::GRAD_B2_BASE), "SET_GRAD_B2");
    issue(ins_ub_read(PTR_GRAD_BIAS, ub::B2_BASE, 1, 1, false, 0x0), "UPDATE_B2");
    tick_n(8);

    return true;
}

bool update_w1_b1_from_current_gradients() {//更新第一层权重和偏置
    issue(ins_set_grad_addr(ub::GRAD_W1_BASE), "SET_GRAD_W1");
    issue(ins_ub_read(PTR_GRAD_WEIGHT, ub::W1_BASE, 2, 2, false, 0x0), "UPDATE_W1");
    tick_n(12);

    issue(ins_set_grad_addr(ub::GRAD_B1_BASE), "SET_GRAD_B1");
    issue(ins_ub_read(PTR_GRAD_BIAS, ub::B1_BASE, 1, 2, false, 0x0), "UPDATE_B1");
    tick_n(8);

    return true;
}

int32_t abs_i32(int32_t value) {
    return value < 0 ? -value : value;
}

int32_t sum_abs_error_q8_8(
    const std::vector<uint16_t> &pred,
    const std::vector<uint16_t> &target
) {
    const std::size_t count = pred.size() < target.size() ? pred.size() : target.size();
    int32_t total = 0;
    for (std::size_t i = 0; i < count; i++) {
        total += abs_i32(
            static_cast<int32_t>(static_cast<int16_t>(pred[i])) -
            static_cast<int32_t>(static_cast<int16_t>(target[i]))
        );
    }
    return total;
}

InferenceResult run_inference_prediction_summary(
    const std::string &phase,
    const std::vector<uint16_t> &y_true
) {
    const bool old_quiet = quiet_step_logs;
    quiet_step_logs = true;

    std::vector<uint16_t> ypred;
    const bool ok = run_forward_layer1_to_h1() &&
                    run_forward_layer2_to_ypred(&ypred) &&
                    ypred.size() >= y_true.size();

    quiet_step_logs = old_quiet;
    if (!ok) {
        std::cout << "[推理-" << phase << "] FAIL：forward 推理未完成" << std::endl;
        return {false, 0, 0};
    }

    static const int xor_x[4][2] = {
        {0, 0},
        {1, 0},
        {0, 1},
        {1, 1},
    };

    int correct = 0;
    std::cout << "[推理-" << phase << "] XOR 预测" << std::endl;
    for (std::size_t i = 0; i < y_true.size(); i++) {
        const int predicted_class = s16(ypred[i]) >= static_cast<int16_t>(0x0080) ? 1 : 0;
        const int label_class = s16(y_true[i]) >= static_cast<int16_t>(0x0080) ? 1 : 0;
        if (predicted_class == label_class) {
            correct++;
        }
        std::cout << "[推理-" << phase << "] X=[" << xor_x[i][0] << "," << xor_x[i][1] << "]"
                  << " pred=" << std::fixed << std::setprecision(4) << to_float(ypred[i])
                  << " label=" << label_class
                  << " class=" << predicted_class
                  << std::endl;
    }

    const int32_t err = sum_abs_error_q8_8(ypred, y_true);
    std::cout << "[推理-" << phase << "] err = " << std::fixed << std::setprecision(4)
              << static_cast<double>(err) / 256.0 << std::endl;
    std::cout << "[推理-" << phase << "] 分类正确 = "
              << correct << "/" << y_true.size()
              << (correct == static_cast<int>(y_true.size()) ? "，全对" : "")
              << std::endl;
    return {true, err, correct};
}

bool run_full_network_training_step(
    int step,
    const std::vector<uint16_t> &y_true,
    int32_t *err_before_out,
    int32_t *err_after_out
) {
    if (!run_forward_layer1_to_h1()) {
        std::cout << "[结果] FAIL：step " << step << " forward layer1 before 未完成" << std::endl;
        return false;
    }

    std::vector<uint16_t> ypred_before;
    if (!run_forward_layer2_to_ypred(&ypred_before) || ypred_before.size() < y_true.size()) {
        std::cout << "[结果] FAIL：step " << step << " forward layer2 before 未完成" << std::endl;
        return false;
    }
    const int32_t err_before = sum_abs_error_q8_8(ypred_before, y_true);

    std::vector<uint16_t> dy;
    std::vector<uint16_t> delta2;
    if (!run_loss_to_dy(&dy) || !run_delta2_path(&delta2)) {
        std::cout << "[结果] FAIL：step " << step << " delta2 生成未完成" << std::endl;
        return false;
    }

    if (!generate_delta1_from_current_state()) {
        std::cout << "[结果] FAIL：step " << step << " delta1 生成未完成" << std::endl;
        return false;
    }

    if (!generate_grad_w2_from_current_h1_delta2() ||
        !generate_grad_b2_from_current_delta2()) {
        std::cout << "[结果] FAIL：step " << step << " grad_W2/B2 生成未完成" << std::endl;
        return false;
    }

    if (!generate_grad_w1_from_current_x_delta1() ||
        !generate_grad_b1_from_current_delta1()) {
        std::cout << "[结果] FAIL：step " << step << " grad_W1/B1 生成未完成" << std::endl;
        return false;
    }

    update_w2_b2_from_current_gradients();
    update_w1_b1_from_current_gradients();

    if (!run_forward_layer1_to_h1()) {
        std::cout << "[结果] FAIL：step " << step << " forward layer1 after 未完成" << std::endl;
        return false;
    }

    std::vector<uint16_t> ypred_after;
    if (!run_forward_layer2_to_ypred(&ypred_after) || ypred_after.size() < y_true.size()) {
        std::cout << "[结果] FAIL：step " << step << " forward layer2 after 未完成" << std::endl;
        return false;
    }
    const int32_t err_after = sum_abs_error_q8_8(ypred_after, y_true);

    if (err_before_out) {
        *err_before_out = err_before;
    }
    if (err_after_out) {
        *err_after_out = err_after;
    }

    std::cout << "[step " << std::setw(2) << std::setfill('0') << step << std::setfill(' ')
              << "] err=" << std::fixed << std::setprecision(4)
              << static_cast<double>(err_before) / 256.0
              << " -> " << static_cast<double>(err_after) / 256.0
              << ", W2=[" << to_float(ub_mem(ub::W2_BASE))
              << ", " << to_float(ub_mem(ub::W2_BASE + 1))
              << "], B2=" << to_float(ub_mem(ub::B2_BASE))
              << ", B1=[" << to_float(ub_mem(ub::B1_BASE))
              << ", " << to_float(ub_mem(ub::B1_BASE + 1)) << "]"
              << std::endl;

    return true;
}

bool test_full_network_training_multi_step() {
    const XorModel model = {
        {0xFF00u, 0x0100u, 0x0100u, 0xFF00u},
        {0x0100u, 0x0100u},
        {0x0000u, 0x0000u},
        0xFF40u,
    };
    const std::vector<uint16_t> y_true = {q8_8(0), q8_8(1), q8_8(1), q8_8(0)};

    reset_dut();
    dut->learn_rate_in = 0x0020u;
    load_training_batch_and_params(model);
    std::cout << "[FULL-MULTI] 初始化完成" << std::endl;
    std::cout << "[FULL-MULTI] 训练步数 = " << FULL_NETWORK_TRAIN_STEPS << std::endl;

    const InferenceResult infer_before = run_inference_prediction_summary("训练前", y_true);
    if (!infer_before.ran) {
        std::cout << "[结果] FAIL：训练前 forward 推理流程失败" << std::endl;
        return false;
    }

    const std::array<uint16_t, 4> w1_initial = {
        ub_mem(ub::W1_BASE),
        ub_mem(ub::W1_BASE + 1),
        ub_mem(ub::W1_BASE + 2),
        ub_mem(ub::W1_BASE + 3),
    };
    const std::array<uint16_t, 2> b1_initial = {
        ub_mem(ub::B1_BASE),
        ub_mem(ub::B1_BASE + 1),
    };
    const std::array<uint16_t, 2> w2_initial = {
        ub_mem(ub::W2_BASE),
        ub_mem(ub::W2_BASE + 1),
    };
    const uint16_t b2_initial = ub_mem(ub::B2_BASE);

    int32_t err_initial = 0;
    int32_t err_final = 0;
    bool have_error = false;

    quiet_step_logs = true;
    for (int step = 0; step < FULL_NETWORK_TRAIN_STEPS; step++) {
        int32_t err_before = 0;
        int32_t err_after = 0;
        if (!run_full_network_training_step(step, y_true, &err_before, &err_after)) {
            quiet_step_logs = false;
            return false;
        }
        if (!have_error) {
            err_initial = err_before;
            have_error = true;
        }
        err_final = err_after;
    }
    quiet_step_logs = false;

    const std::array<uint16_t, 4> w1_final = {
        ub_mem(ub::W1_BASE),
        ub_mem(ub::W1_BASE + 1),
        ub_mem(ub::W1_BASE + 2),
        ub_mem(ub::W1_BASE + 3),
    };
    const std::array<uint16_t, 2> b1_final = {
        ub_mem(ub::B1_BASE),
        ub_mem(ub::B1_BASE + 1),
    };
    const std::array<uint16_t, 2> w2_final = {
        ub_mem(ub::W2_BASE),
        ub_mem(ub::W2_BASE + 1),
    };
    const uint16_t b2_final = ub_mem(ub::B2_BASE);

    const bool updated =
        w1_initial != w1_final ||
        b1_initial != b1_final ||
        w2_initial != w2_final ||
        b2_initial != b2_final;

    if (!updated) {
        std::cout << "[结果] FAIL：多步训练后 W1/B1/W2/B2 完全没有变化" << std::endl;
        return false;
    }

    std::cout << "[FULL-MULTI] err initial = " << std::fixed << std::setprecision(4)
              << static_cast<double>(err_initial) / 256.0 << std::endl;
    std::cout << "[FULL-MULTI] err final   = " << std::fixed << std::setprecision(4)
              << static_cast<double>(err_final) / 256.0 << std::endl;
    std::cout << "[FULL-MULTI] FULL_NETWORK_TRAIN_STEPS = "
              << FULL_NETWORK_TRAIN_STEPS << std::endl;
    print_word_pair("[FULL-MULTI] W1 final row0", w1_final[0], w1_final[1]);
    print_word_pair("[FULL-MULTI] W1 final row1", w1_final[2], w1_final[3]);
    std::cout << "[提示] 修改训练轮数：tpu_isa_confreg_sim.cpp 中的 FULL_NETWORK_TRAIN_STEPS"
              << std::endl;

    const InferenceResult infer_after = run_inference_prediction_summary("训练后", y_true);
    if (!infer_after.ran) {
        std::cout << "[结果] FAIL：训练完成，但 forward 推理流程失败" << std::endl;
        return false;
    }
    std::cout << "[推理] err 对比 = " << std::fixed << std::setprecision(4)
              << static_cast<double>(infer_before.err) / 256.0
              << " -> " << static_cast<double>(infer_after.err) / 256.0
              << "，分类正确 " << infer_before.correct << "/" << y_true.size()
              << " -> " << infer_after.correct << "/" << y_true.size()
              << std::endl;

    if (have_error && err_final < err_initial) {
        std::cout << "[结果] PASS：full-network 多步训练误差下降" << std::endl;
        return true;
    }

    std::cout << "[结果] PARTIAL：训练链路跑通且权重已变化，但最终误差没有下降" << std::endl;
    return true;
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vtpu_isa_confreg;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("tpu_isa_confreg_sim.vcd");

    std::cout << "运行 full-network training multi-step test" << std::endl;
    const bool ok = test_full_network_training_multi_step();

    tfp->close();
    delete tfp;
    delete dut;

    return ok ? 0 : 1;
}
