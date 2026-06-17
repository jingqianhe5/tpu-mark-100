// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_isa_confreg.h for the primary calling header

#include "verilated.h"

#include "Vtpu_isa_confreg__Syms.h"
#include "Vtpu_isa_confreg_pe.h"

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 3U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [5U][3U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [6U][2U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [5U][3U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [3U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][3U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][3U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 3U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][3U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 3U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [5U][3U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [5U][3U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [6U]
                                                              [2U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [5U]
                                                               [3U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 4U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [5U][4U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [6U][3U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [5U][4U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [4U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][4U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][4U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 4U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][4U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 4U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [5U][4U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [5U][4U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [6U]
                                                              [3U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [5U]
                                                               [4U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 5U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [5U][5U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [6U][4U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [5U][5U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [5U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][5U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][5U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 5U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][5U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 5U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [5U][5U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [5U][5U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [6U]
                                                              [4U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [5U]
                                                               [5U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 6U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [5U][6U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [6U][5U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [5U][6U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [6U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][6U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][6U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 6U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][6U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 6U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [5U][6U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [5U][6U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [6U]
                                                              [5U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [5U]
                                                               [6U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 7U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [5U][7U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [6U][6U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [5U][7U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [7U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][7U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [5U][7U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 7U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][7U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 7U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [5U][7U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [5U][7U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [6U]
                                                              [6U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [5U]
                                                               [7U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ (IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][0U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                [7U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][0U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.ub_rd_weight_valid_out_0) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][0U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][0U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ (IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][0U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ (IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled)))) 
                          & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][0U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][0U];
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0\n"); );
    // Body
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                              [7U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [0U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 1U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][1U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][0U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][1U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.ub_rd_weight_valid_out_1) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][1U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][1U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 1U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][1U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 1U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][1U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][1U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [0U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [1U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 2U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][2U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][1U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][2U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [2U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][2U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][2U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 2U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][2U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 2U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][2U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][2U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [1U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [2U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 3U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][3U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][2U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][3U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [3U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][3U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][3U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 3U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][3U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 3U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][3U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][3U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [2U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [3U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 4U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][4U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][3U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][4U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [4U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][4U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][4U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 4U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][4U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 4U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][4U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][4U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [3U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [4U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 5U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][5U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][4U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][5U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [5U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][5U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][5U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 5U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][5U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 5U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][5U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][5U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [4U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [5U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 6U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][6U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][5U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][6U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [6U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][6U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][6U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 6U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][6U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 6U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][6U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][6U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [5U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [6U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__overflow_out;
    __Vdly__overflow_out = 0;
    // Body
    __Vdly__overflow_out = vlSelf->__PVT__overflow_out;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                                   >> 7U))))) {
        __Vdly__overflow_out = 0U;
        vlSelf->weight_out = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->input_out = 0U;
        vlSelf->__PVT__weight_in_active = 0U;
        vlSelf->__PVT__weight_in_buffer = 0U;
    } else {
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
            [6U][7U]) {
            __Vdly__overflow_out = ((IData)(vlSelf->__PVT__overflow_out) 
                                    | ((IData)(vlSelf->__PVT__mul_overflow) 
                                       | (IData)(vlSelf->__PVT__add_overflow)));
            vlSelf->psum_out = (((IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi) 
                                 << 8U) | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf));
            vlSelf->input_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                [7U][6U];
        } else {
            vlSelf->psum_out = 0U;
            vlSelf->input_out = 0U;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
            [6U][7U]) {
            vlSelf->__PVT__weight_in_active = vlSelf->__PVT__weight_in_buffer;
        }
        if (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
            [7U]) {
            vlSelf->weight_out = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][7U];
            vlSelf->__PVT__weight_in_buffer = vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                [6U][7U];
        } else {
            vlSelf->weight_out = 0U;
        }
    }
    vlSelf->input_out_valid = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                   | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                         >> 7U)))) 
                               & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][7U]);
    vlSelf->switch_out = ((~ ((~ (IData)(vlSymsp->TOP.rst_n)) 
                              | (~ ((IData)(vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                    >> 7U)))) & vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                          [6U][7U]);
    vlSelf->__PVT__overflow_out = __Vdly__overflow_out;
}

VL_INLINE_OPT void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 
        vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
        [6U][7U];
    vlSelf->__PVT__mult__DOT__res = VL_MULS_III(32, 
                                                VL_EXTENDS_II(32,16, 
                                                              vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                                              [7U]
                                                              [6U]), 
                                                VL_EXTENDS_II(32,16, 
                                                              (vlSymsp->TOP.tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                                               [6U]
                                                               [7U]
                                                                ? (IData)(vlSelf->__PVT__weight_in_buffer)
                                                                : (IData)(vlSelf->__PVT__weight_in_active))));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 
        (vlSelf->__PVT__mult__DOT__res >> 8U);
    if ((1U & ((vlSelf->__PVT__mult__DOT__res >> 7U) 
               & (~ (IData)((0x7fffffU == vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 
        (0xffffU & (vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr 
                    >> 8U));
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 
        (0xffU & vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->__PVT__mul_overflow = 1U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__mul_overflow = 0U;
        vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 
        (((IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi) 
          << 8U) | (IData)(vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf 
        = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 
        (0xffU & ((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr) 
                  >> 8U));
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi 
        = vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}
