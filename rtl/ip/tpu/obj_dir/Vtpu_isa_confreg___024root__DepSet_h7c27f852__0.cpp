// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_isa_confreg.h for the primary calling header

#include "verilated.h"

#include "Vtpu_isa_confreg__Syms.h"
#include "Vtpu_isa_confreg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_isa_confreg___024root___dump_triggers__ico(Vtpu_isa_confreg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtpu_isa_confreg___024root___eval_triggers__ico(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtpu_isa_confreg___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtpu_isa_confreg___024root___dump_triggers__act(Vtpu_isa_confreg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtpu_isa_confreg___024root___eval_triggers__act(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_n)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtpu_isa_confreg___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtpu_isa_confreg___024root___nba_sequent__TOP__2(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ub_rd_input_valid_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
        [0U];
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[0U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[1U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[2U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[3U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[4U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[5U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[6U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[0U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[1U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[2U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[3U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[4U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[5U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[6U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[0U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[1U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[2U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[3U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[4U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[5U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[6U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[0U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[1U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[2U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[3U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[4U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[5U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[6U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link[7U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link[7U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link[7U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link[7U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out;
    if (vlSelf->__Vdlyvset__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v0) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[0U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v0;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[1U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v1;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[2U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v2;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[3U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v3;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[4U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v4;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[5U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v5;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[6U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v6;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[7U] 
            = vlSelf->__Vdlyvval__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v7;
    }
    if (vlSelf->__Vdlyvset__tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out__v8) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[7U] = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[0U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[1U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[2U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[3U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[4U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[5U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[6U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][0U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][1U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][2U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][3U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][4U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][5U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][6U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link[7U][7U] 
        = vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx 
        = ((0U == (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
            ? 0U : ((8U < (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
                     ? 7U : ((1U == (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num))
                              ? 1U : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num) 
                                      - (IData)(1U)))));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
        = ((0xffff0000U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]) 
           | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
           [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [0U]);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfeU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
           [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [0U]);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
        = ((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [1U] << 0x10U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfdU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [1U] << 1U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
        = ((0xffff0000U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]) 
           | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
           [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [2U]);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xfbU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [2U] << 2U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
        = ((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [3U] << 0x10U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xf7U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [3U] << 3U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
        = ((0xffff0000U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]) 
           | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
           [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [4U]);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xefU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [4U] << 4U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
        = ((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [5U] << 0x10U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xdfU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [5U] << 5U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
        = ((0xffff0000U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]) 
           | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
           [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
           [6U]);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0xbfU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [6U] << 6U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
        = ((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [7U] << 0x10U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out 
        = ((0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)) 
           | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
              [(7U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx)]
              [7U] << 7U));
    vlSelf->ub_rd_weight_valid_out_0 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
        [0U];
    vlSelf->ub_rd_weight_valid_out_1 = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
        [1U];
    vlSelf->sys_valid_out_0 = (1U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out));
    vlSelf->sys_valid_out_1 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 1U));
    vlSelf->sys_valid_out_2 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 2U));
    vlSelf->sys_valid_out_3 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 3U));
    vlSelf->sys_valid_out_4 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 4U));
    vlSelf->sys_valid_out_5 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 5U));
    vlSelf->sys_valid_out_6 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 6U));
    vlSelf->sys_valid_out_7 = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                                     >> 7U));
    if (vlSelf->rst_n) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 1U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 2U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 3U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 4U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 5U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 6U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7U] 
            = (((IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 7U));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__switch_in = 0U;
        if (vlSelf->ins_valid) {
            if ((1U & (~ (vlSelf->ins >> 0x1fU)))) {
                if ((0x40000000U & vlSelf->ins)) {
                    if ((1U & (~ (vlSelf->ins >> 0x1dU)))) {
                        if ((1U & (~ (vlSelf->ins >> 0x1cU)))) {
                            vlSelf->tpu_isa_confreg__DOT__switch_in = 1U;
                        }
                    }
                }
            }
        }
        if (vlSelf->ub_rd_col_size_valid_out) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled 
                = ((0xf8U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled)) 
                   | (((2U < (IData)(vlSelf->ub_rd_col_size_out)) 
                       << 2U) | (((1U < (IData)(vlSelf->ub_rd_col_size_out)) 
                                  << 1U) | (0U < (IData)(vlSelf->ub_rd_col_size_out)))));
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled 
                = ((0xc7U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled)) 
                   | (((5U < (IData)(vlSelf->ub_rd_col_size_out)) 
                       << 5U) | (((4U < (IData)(vlSelf->ub_rd_col_size_out)) 
                                  << 4U) | ((3U < (IData)(vlSelf->ub_rd_col_size_out)) 
                                            << 3U))));
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled 
                = ((0x3fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled)) 
                   | (((7U < (IData)(vlSelf->ub_rd_col_size_out)) 
                       << 7U) | ((6U < (IData)(vlSelf->ub_rd_col_size_out)) 
                                 << 6U)));
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [0U] : (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [0U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [0U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [0U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [1U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 1U)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [1U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [1U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [1U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [2U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 2U)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [2U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [2U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [2U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [3U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 3U)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [3U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [3U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [3U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [4U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 4U)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [4U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [4U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [4U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [5U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 5U)));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [5U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [5U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [5U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] 
            = (1U & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [6U] : ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 6U)));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [6U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [6U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [6U];
        }
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__switch_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] = 0U;
    vlSelf->sys_data_out_0 = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]);
    vlSelf->sys_data_out_1 = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                              >> 0x10U);
    vlSelf->sys_data_out_2 = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]);
    vlSelf->sys_data_out_3 = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                              >> 0x10U);
    vlSelf->sys_data_out_4 = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]);
    vlSelf->sys_data_out_5 = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                              >> 0x10U);
    vlSelf->sys_data_out_6 = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]);
    vlSelf->sys_data_out_7 = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                              >> 0x10U);
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] = 0U;
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] = 0U;
    if (vlSelf->rst_n) {
        if ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] 
                = (1U & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                   [7U]);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] 
                = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                   >> 0x10U);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] 
                = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                   >> 0x10U);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] 
                = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                   >> 0x10U);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] 
                = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                   >> 0x10U);
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                   [0U]);
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] 
                = (1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                         >> 7U));
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] 
                = (0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]);
        }
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [7U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [7U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [0U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [0U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [7U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [0U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [1U] : ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                                   << 0x10U) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [1U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [1U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [1U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [2U] : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [2U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [2U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [2U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [3U] : ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                                   << 0x10U) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [3U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [3U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [3U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [4U] : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [4U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [4U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [4U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [5U] : ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                                   << 0x10U) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [5U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [5U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [5U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [6U] : vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]));
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [6U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [6U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [6U];
        }
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] 
            = (0xffffU & ((8U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [7U] : ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                                   << 0x10U) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                                                >> 0x10U))));
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
        if ((4U & (IData)(vlSelf->tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [7U];
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [7U];
        } else {
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
            vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] 
                = vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [7U];
        }
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [0U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [1U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [2U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [3U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [4U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [5U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [6U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                        [7U]), VL_EXTENDS_II(32,16, (IData)(vlSelf->vpu_factor_in)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->tpu_isa_confreg__DOT__ub_rd_start_in) 
             & (1U == (IData)(vlSelf->tpu_isa_confreg__DOT__ub_ptr_select_in)))) {
            vlSelf->ub_rd_col_size_valid_out = 1U;
            vlSelf->ub_rd_col_size_out = ((IData)(vlSelf->tpu_isa_confreg__DOT__ub_rd_transpose_in)
                                           ? (IData)(vlSelf->tpu_isa_confreg__DOT__ub_rd_row_size_in)
                                           : (IData)(vlSelf->tpu_isa_confreg__DOT__ub_rd_col_size_in));
        } else {
            vlSelf->ub_rd_col_size_valid_out = 0U;
            vlSelf->ub_rd_col_size_out = 0U;
        }
        vlSelf->tpu_isa_confreg__DOT__ub_rd_transpose_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_rd_start_in = 0U;
        if (vlSelf->ins_valid) {
            if ((1U & (~ (vlSelf->ins >> 0x1fU)))) {
                if ((1U & (~ (vlSelf->ins >> 0x1eU)))) {
                    if ((0x20000000U & vlSelf->ins)) {
                        if ((0x10000000U & vlSelf->ins)) {
                            vlSelf->tpu_isa_confreg__DOT__ub_rd_transpose_in 
                                = (1U & (vlSelf->ins 
                                         >> 4U));
                            vlSelf->tpu_isa_confreg__DOT__ub_rd_row_size_in 
                                = (0xfU & (vlSelf->ins 
                                           >> 9U));
                            vlSelf->tpu_isa_confreg__DOT__ub_rd_col_size_in 
                                = (0xfU & (vlSelf->ins 
                                           >> 5U));
                            vlSelf->tpu_isa_confreg__DOT__ub_rd_start_in = 1U;
                            vlSelf->tpu_isa_confreg__DOT__ub_ptr_select_in 
                                = (7U & (vlSelf->ins 
                                         >> 0x19U));
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->ub_rd_col_size_valid_out = 0U;
        vlSelf->ub_rd_col_size_out = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_rd_transpose_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_rd_row_size_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_rd_col_size_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_rd_start_in = 0U;
        vlSelf->tpu_isa_confreg__DOT__ub_ptr_select_in = 0U;
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
        = (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
           >> 8U);
    if ((1U & ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res 
                >> 7U) & (~ (IData)((0x7fffffU == vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr)))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
            = (0xffffffU & ((IData)(1U) + vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini 
        = (0xffffU & (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr 
                      >> 8U));
    vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr);
    if (((~ ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
             >> 0xfU)) & (0U != (0xffU & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                          >> 7U))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else if ((IData)((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                         >> 0xfU) & (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini) 
                                                    >> 7U)))))))) {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 1U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow = 0U;
        vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini));
    }
}

void Vtpu_isa_confreg___024root___nba_sequent__TOP__0(Vtpu_isa_confreg___024root* vlSelf);
void Vtpu_isa_confreg___024root___nba_sequent__TOP__1(Vtpu_isa_confreg___024root* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg___024root___nba_comb__TOP__0(Vtpu_isa_confreg___024root* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0(Vtpu_isa_confreg_pe* vlSelf);
void Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2(Vtpu_isa_confreg_pe* vlSelf);

void Vtpu_isa_confreg___024root___eval_nba(Vtpu_isa_confreg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtpu_isa_confreg___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtpu_isa_confreg___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg___024root___nba_sequent__TOP__2(vlSelf);
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__1((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtpu_isa_confreg___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_comb__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__0((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst));
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst));
        Vtpu_isa_confreg_pe___nba_sequent__TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2((&vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst));
    }
}
