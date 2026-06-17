// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_isa_confreg.h for the primary calling header

#include "verilated.h"

#include "Vtpu_isa_confreg_pe.h"

VL_ATTR_COLD void Vtpu_isa_confreg_pe___eval_static__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___eval_static__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
}

VL_ATTR_COLD void Vtpu_isa_confreg_pe___eval_initial__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___eval_initial__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 0U;
    vlSelf->__PVT__mul_overflow = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__add_overflow = 0U;
}

VL_ATTR_COLD void Vtpu_isa_confreg_pe___eval_initial__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___eval_initial__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__mul_overflow = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__add_overflow = 0U;
}

VL_ATTR_COLD void Vtpu_isa_confreg_pe___ctor_var_reset(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->input_in = VL_RAND_RESET_I(16);
    vlSelf->input_out = VL_RAND_RESET_I(16);
    vlSelf->input_in_valid = VL_RAND_RESET_I(1);
    vlSelf->input_out_valid = VL_RAND_RESET_I(1);
    vlSelf->weight_in = VL_RAND_RESET_I(16);
    vlSelf->weight_out = VL_RAND_RESET_I(16);
    vlSelf->weight_valid = VL_RAND_RESET_I(1);
    vlSelf->psum_in = VL_RAND_RESET_I(16);
    vlSelf->psum_out = VL_RAND_RESET_I(16);
    vlSelf->switch_in = VL_RAND_RESET_I(1);
    vlSelf->switch_out = VL_RAND_RESET_I(1);
    vlSelf->pe_enabled = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__weight_in_active = VL_RAND_RESET_I(16);
    vlSelf->__PVT__weight_in_buffer = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mul_overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mult__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = VL_RAND_RESET_I(17);
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = VL_RAND_RESET_I(9);
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = VL_RAND_RESET_I(8);
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = VL_RAND_RESET_I(8);
}
