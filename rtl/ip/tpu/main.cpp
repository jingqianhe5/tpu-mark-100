#include <array>
#include <cstdint>
#include <iomanip>
#include <iostream>

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vde1_soc_tiny_tpu_xor_top.h"

static vluint64_t main_time = 0;
static int cycle_count = 0;

static Vde1_soc_tiny_tpu_xor_top *dut = nullptr;
static VerilatedVcdC *tfp = nullptr;

static void eval_dump() {
    dut->eval();
    if (tfp) {
        tfp->dump(main_time);
    }
    main_time++;
}

static void tick() {
    dut->CLOCK_50 = 0;
    eval_dump();
    dut->CLOCK_50 = 1;
    eval_dump();
    cycle_count++;
}

static void tick_n(int n) {
    for (int i = 0; i < n; i++) {
        tick();
    }
}

static bool display_valid() {
    return (dut->LEDR >> 2) & 0x1;
}

static bool display_result() {
    return (dut->LEDR >> 1) & 0x1;
}

static bool busy() {
    return dut->LEDR & 0x1;
}

static bool start_indicator() {
    return (dut->LEDR >> 3) & 0x1;
}

static void press_key0() {
    dut->KEY &= ~0x1;
    tick_n(8);
    dut->KEY |= 0x1;
    tick_n(8);
}

static void reset_board() {
    dut->CLOCK_50 = 0;
    dut->KEY = 0xF;
    dut->SW = 0;

    dut->KEY &= ~(1u << 3);
    tick_n(4);
    dut->KEY |= (1u << 3);
    tick_n(8);
}

static bool run_xor_case(int a, int b, int max_cycles) {
    const int expected = a ^ b;
    dut->SW = static_cast<uint32_t>((b << 1) | a);

    press_key0();

    bool seen_busy = false;
    for (int i = 0; i < max_cycles; i++) {
        tick();

        if ((i % 25) == 0 || start_indicator()) {
            std::cout << "  cycle " << std::setw(4) << cycle_count
                      << " LEDR=0x" << std::hex << static_cast<int>(dut->LEDR) << std::dec
                      << " busy=" << busy()
                      << " valid=" << display_valid()
                      << " result=" << display_result()
                      << std::endl;
        }

        if (busy()) {
            seen_busy = true;
        }

        if (seen_busy && !busy()) {
            break;
        }
    }

    const bool got_valid = display_valid();
    const bool got = display_result();
    const bool pass = seen_busy && got_valid && (got == static_cast<bool>(expected));

    std::cout << "XOR(" << a << ", " << b << ") expected=" << expected
              << " seen_busy=" << seen_busy
              << " LEDR=0x" << std::hex << static_cast<int>(dut->LEDR) << std::dec
              << " got_valid=" << got_valid
              << " got=" << got
              << " => " << (pass ? "PASS" : "FAIL") << std::endl;
    return pass;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vde1_soc_tiny_tpu_xor_top;
    tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("de1_soc_tiny_tpu_xor_top.vcd");

    reset_board();

    std::cout << "Running DE1-SoC tiny TPU XOR top simulation" << std::endl;
    std::cout << "The top-level FSM loads XOR parameters, runs inference, and latches LEDR[2:1]." << std::endl;

    bool all_pass = true;
    const std::array<std::pair<int, int>, 4> cases = {{
        {0, 0},
        {1, 0},
        {0, 1},
        {1, 1},
    }};

    for (const auto &[a, b] : cases) {
        std::cout << "\n[Case] SW[1:0] = " << b << a << std::endl;
        all_pass &= run_xor_case(a, b, 600);
        tick_n(10);
    }

    std::cout << "\nSummary: " << (all_pass ? "PASS" : "FAIL") << std::endl;

    tfp->close();
    delete tfp;
    delete dut;

    return all_pass ? 0 : 1;
}
