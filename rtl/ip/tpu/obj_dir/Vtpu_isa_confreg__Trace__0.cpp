// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtpu_isa_confreg__Syms.h"


void Vtpu_isa_confreg___024root__trace_chg_sub_0(Vtpu_isa_confreg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtpu_isa_confreg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root__trace_chg_top_0\n"); );
    // Init
    Vtpu_isa_confreg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtpu_isa_confreg___024root*>(voidSelf);
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtpu_isa_confreg___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtpu_isa_confreg___024root__trace_chg_sub_0(Vtpu_isa_confreg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h487341b4__0;
    VlWide<4>/*127:0*/ __Vtemp_h70dbb7ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b8ff4c7__0;
    VlWide<4>/*127:0*/ __Vtemp_hbb18cbb1__0;
    VlWide<4>/*127:0*/ __Vtemp_hf62f48a3__0;
    VlWide<4>/*127:0*/ __Vtemp_h4e766074__0;
    VlWide<4>/*127:0*/ __Vtemp_h5bd92131__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+12,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+14,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+15,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+16,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+19,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+20,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+21,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+22,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+23,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+24,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+25,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+26,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+27,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+28,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+29,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+30,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+31,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+32,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+34,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+36,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+37,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+38,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+39,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+40,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+41,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+42,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+43,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+44,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+45,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+46,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+47,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+48,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+49,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+50,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+51,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+52,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+53,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+54,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+55,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+56,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk1__DOT__addr),32);
        bufp->chgIData(oldp+57,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk2__DOT__addr),32);
        bufp->chgSData(oldp+58,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+61,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+65,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+66,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+68,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+72,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+75,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+79,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+82,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+86,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+89,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+92,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+93,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+96,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+100,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+103,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+107,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgSData(oldp+110,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+111,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+113,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgBit(oldp+114,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+191,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__overflow));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__overflow));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+226,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[0]),16);
        bufp->chgSData(oldp+227,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[1]),16);
        bufp->chgSData(oldp+228,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[2]),16);
        bufp->chgSData(oldp+229,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[3]),16);
        bufp->chgSData(oldp+230,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[4]),16);
        bufp->chgSData(oldp+231,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[5]),16);
        bufp->chgSData(oldp+232,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[6]),16);
        bufp->chgSData(oldp+233,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[7]),16);
        bufp->chgSData(oldp+234,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[0]),16);
        bufp->chgSData(oldp+235,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[1]),16);
        bufp->chgSData(oldp+236,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[2]),16);
        bufp->chgSData(oldp+237,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[3]),16);
        bufp->chgSData(oldp+238,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[4]),16);
        bufp->chgSData(oldp+239,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[5]),16);
        bufp->chgSData(oldp+240,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[6]),16);
        bufp->chgSData(oldp+241,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[7]),16);
        bufp->chgBit(oldp+242,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[0]));
        bufp->chgBit(oldp+243,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[1]));
        bufp->chgBit(oldp+244,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[2]));
        bufp->chgBit(oldp+245,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[3]));
        bufp->chgBit(oldp+246,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[4]));
        bufp->chgBit(oldp+247,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[5]));
        bufp->chgBit(oldp+248,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[6]));
        bufp->chgBit(oldp+249,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[7]));
        bufp->chgSData(oldp+250,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[0]),16);
        bufp->chgSData(oldp+251,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[1]),16);
        bufp->chgSData(oldp+252,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[2]),16);
        bufp->chgSData(oldp+253,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[3]),16);
        bufp->chgSData(oldp+254,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[4]),16);
        bufp->chgSData(oldp+255,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[5]),16);
        bufp->chgSData(oldp+256,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[6]),16);
        bufp->chgSData(oldp+257,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[7]),16);
        bufp->chgSData(oldp+258,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[0]),16);
        bufp->chgSData(oldp+259,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[1]),16);
        bufp->chgSData(oldp+260,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[2]),16);
        bufp->chgSData(oldp+261,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[3]),16);
        bufp->chgSData(oldp+262,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[4]),16);
        bufp->chgSData(oldp+263,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[5]),16);
        bufp->chgSData(oldp+264,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[6]),16);
        bufp->chgSData(oldp+265,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[7]),16);
        bufp->chgBit(oldp+266,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[0]));
        bufp->chgBit(oldp+267,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[1]));
        bufp->chgBit(oldp+268,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[2]));
        bufp->chgBit(oldp+269,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[3]));
        bufp->chgBit(oldp+270,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[4]));
        bufp->chgBit(oldp+271,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[5]));
        bufp->chgBit(oldp+272,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[6]));
        bufp->chgBit(oldp+273,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[7]));
        bufp->chgSData(oldp+274,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next),16);
        bufp->chgSData(oldp+275,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next),16);
        bufp->chgSData(oldp+276,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp),16);
        bufp->chgSData(oldp+277,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp),16);
        bufp->chgCData(oldp+278,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we),8);
        bufp->chgCData(oldp+279,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[0]),7);
        bufp->chgCData(oldp+280,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[1]),7);
        bufp->chgCData(oldp+281,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[2]),7);
        bufp->chgCData(oldp+282,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[3]),7);
        bufp->chgCData(oldp+283,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[4]),7);
        bufp->chgCData(oldp+284,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[5]),7);
        bufp->chgCData(oldp+285,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[6]),7);
        bufp->chgCData(oldp+286,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[7]),7);
        bufp->chgSData(oldp+287,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[0]),16);
        bufp->chgSData(oldp+288,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[1]),16);
        bufp->chgSData(oldp+289,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[2]),16);
        bufp->chgSData(oldp+290,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[3]),16);
        bufp->chgSData(oldp+291,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[4]),16);
        bufp->chgSData(oldp+292,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[5]),16);
        bufp->chgSData(oldp+293,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[6]),16);
        bufp->chgSData(oldp+294,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[7]),16);
        bufp->chgBit(oldp+295,((1U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we))));
        bufp->chgCData(oldp+296,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [0U]),7);
        bufp->chgSData(oldp+297,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [0U]),16);
        bufp->chgBit(oldp+298,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 1U))));
        bufp->chgCData(oldp+299,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [1U]),7);
        bufp->chgSData(oldp+300,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [1U]),16);
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 2U))));
        bufp->chgCData(oldp+302,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [2U]),7);
        bufp->chgSData(oldp+303,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [2U]),16);
        bufp->chgBit(oldp+304,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 3U))));
        bufp->chgCData(oldp+305,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [3U]),7);
        bufp->chgSData(oldp+306,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [3U]),16);
        bufp->chgBit(oldp+307,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 4U))));
        bufp->chgCData(oldp+308,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [4U]),7);
        bufp->chgSData(oldp+309,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [4U]),16);
        bufp->chgBit(oldp+310,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 5U))));
        bufp->chgCData(oldp+311,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [5U]),7);
        bufp->chgSData(oldp+312,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [5U]),16);
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 6U))));
        bufp->chgCData(oldp+314,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [6U]),7);
        bufp->chgSData(oldp+315,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [6U]),16);
        bufp->chgBit(oldp+316,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                      >> 7U))));
        bufp->chgCData(oldp+317,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                 [7U]),7);
        bufp->chgSData(oldp+318,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                 [7U]),16);
        bufp->chgSData(oldp+319,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0]),16);
        bufp->chgSData(oldp+320,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1]),16);
        bufp->chgSData(oldp+321,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2]),16);
        bufp->chgSData(oldp+322,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3]),16);
        bufp->chgSData(oldp+323,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4]),16);
        bufp->chgSData(oldp+324,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5]),16);
        bufp->chgSData(oldp+325,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6]),16);
        bufp->chgSData(oldp+326,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7]),16);
        bufp->chgBit(oldp+327,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0]));
        bufp->chgBit(oldp+328,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1]));
        bufp->chgBit(oldp+329,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2]));
        bufp->chgBit(oldp+330,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3]));
        bufp->chgBit(oldp+331,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4]));
        bufp->chgBit(oldp+332,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5]));
        bufp->chgBit(oldp+333,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6]));
        bufp->chgBit(oldp+334,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7]));
        bufp->chgSData(oldp+335,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0]),16);
        bufp->chgSData(oldp+336,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1]),16);
        bufp->chgSData(oldp+337,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2]),16);
        bufp->chgSData(oldp+338,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3]),16);
        bufp->chgSData(oldp+339,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4]),16);
        bufp->chgSData(oldp+340,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5]),16);
        bufp->chgSData(oldp+341,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6]),16);
        bufp->chgSData(oldp+342,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7]),16);
        bufp->chgBit(oldp+343,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0]));
        bufp->chgBit(oldp+344,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1]));
        bufp->chgBit(oldp+345,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2]));
        bufp->chgBit(oldp+346,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3]));
        bufp->chgBit(oldp+347,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4]));
        bufp->chgBit(oldp+348,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5]));
        bufp->chgBit(oldp+349,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6]));
        bufp->chgBit(oldp+350,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7]));
        bufp->chgSData(oldp+351,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0]),16);
        bufp->chgSData(oldp+352,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1]),16);
        bufp->chgSData(oldp+353,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2]),16);
        bufp->chgSData(oldp+354,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3]),16);
        bufp->chgSData(oldp+355,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4]),16);
        bufp->chgSData(oldp+356,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5]),16);
        bufp->chgSData(oldp+357,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6]),16);
        bufp->chgSData(oldp+358,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7]),16);
        bufp->chgBit(oldp+359,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0]));
        bufp->chgBit(oldp+360,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1]));
        bufp->chgBit(oldp+361,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2]));
        bufp->chgBit(oldp+362,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3]));
        bufp->chgBit(oldp+363,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4]));
        bufp->chgBit(oldp+364,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5]));
        bufp->chgBit(oldp+365,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6]));
        bufp->chgBit(oldp+366,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7]));
        bufp->chgSData(oldp+367,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0]),16);
        bufp->chgSData(oldp+368,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1]),16);
        bufp->chgSData(oldp+369,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2]),16);
        bufp->chgSData(oldp+370,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3]),16);
        bufp->chgSData(oldp+371,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4]),16);
        bufp->chgSData(oldp+372,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5]),16);
        bufp->chgSData(oldp+373,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6]),16);
        bufp->chgSData(oldp+374,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7]),16);
        bufp->chgBit(oldp+375,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0]));
        bufp->chgBit(oldp+376,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1]));
        bufp->chgBit(oldp+377,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2]));
        bufp->chgBit(oldp+378,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3]));
        bufp->chgBit(oldp+379,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4]));
        bufp->chgBit(oldp+380,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5]));
        bufp->chgBit(oldp+381,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6]));
        bufp->chgBit(oldp+382,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7]));
        bufp->chgSData(oldp+383,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [0U]),16);
        bufp->chgBit(oldp+384,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [0U]));
        bufp->chgSData(oldp+385,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [0U]),16);
        bufp->chgBit(oldp+386,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [0U]));
        bufp->chgSData(oldp+387,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+388,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+389,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+390,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+391,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+392,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+393,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+394,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [1U]),16);
        bufp->chgBit(oldp+395,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [1U]));
        bufp->chgSData(oldp+396,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [1U]),16);
        bufp->chgBit(oldp+397,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [1U]));
        bufp->chgSData(oldp+398,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+399,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+400,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+401,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+402,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+403,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+404,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+405,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [2U]),16);
        bufp->chgBit(oldp+406,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [2U]));
        bufp->chgSData(oldp+407,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [2U]),16);
        bufp->chgBit(oldp+408,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [2U]));
        bufp->chgSData(oldp+409,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+410,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+411,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+412,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+413,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+414,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+415,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+416,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [3U]),16);
        bufp->chgBit(oldp+417,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [3U]));
        bufp->chgSData(oldp+418,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [3U]),16);
        bufp->chgBit(oldp+419,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [3U]));
        bufp->chgSData(oldp+420,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+421,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+422,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+423,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+424,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+425,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+426,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+427,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [4U]),16);
        bufp->chgBit(oldp+428,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [4U]));
        bufp->chgSData(oldp+429,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [4U]),16);
        bufp->chgBit(oldp+430,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [4U]));
        bufp->chgSData(oldp+431,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+432,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+433,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+434,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+435,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+436,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+437,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+438,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [5U]),16);
        bufp->chgBit(oldp+439,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [5U]));
        bufp->chgSData(oldp+440,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [5U]),16);
        bufp->chgBit(oldp+441,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [5U]));
        bufp->chgSData(oldp+442,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+443,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+444,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+445,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+446,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+447,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+448,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+449,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [6U]),16);
        bufp->chgBit(oldp+450,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [6U]));
        bufp->chgSData(oldp+451,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [6U]),16);
        bufp->chgBit(oldp+452,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [6U]));
        bufp->chgSData(oldp+453,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+454,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+455,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+456,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+457,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+458,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+459,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+460,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                 [7U]),16);
        bufp->chgBit(oldp+461,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                               [7U]));
        bufp->chgSData(oldp+462,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                 [7U]),16);
        bufp->chgBit(oldp+463,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                               [7U]));
        bufp->chgSData(oldp+464,((((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi) 
                                   << 8U) | (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+465,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mul_overflow));
        bufp->chgIData(oldp+466,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res),32);
        bufp->chgIData(oldp+467,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+468,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+469,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+470,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__mult__DOT__res_zoom__DOT__outf),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+471,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+472,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+473,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+474,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+475,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+476,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+477,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+478,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+479,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+480,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+481,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+482,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+483,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+484,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+485,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+486,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+487,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+488,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+489,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+490,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+491,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+492,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+493,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+494,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+495,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+496,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+497,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+498,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+499,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+500,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+501,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+502,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+503,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+504,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+505,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+506,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+507,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+508,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+509,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+510,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+511,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+512,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+513,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+514,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+515,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+516,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+517,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+518,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+519,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+520,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+521,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+522,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+523,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+524,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+525,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+526,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgSData(oldp+527,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
        bufp->chgSData(oldp+528,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
        bufp->chgSData(oldp+529,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out),16);
        bufp->chgBit(oldp+530,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_overflow));
        bufp->chgBit(oldp+531,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
        bufp->chgIData(oldp+532,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_full),32);
        bufp->chgIData(oldp+533,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_shifted),32);
        bufp->chgIData(oldp+534,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
        bufp->chgIData(oldp+535,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+536,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+537,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+538,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+539,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+540,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+541,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+542,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+543,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+544,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+545,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+546,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+547,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+548,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+549,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+550,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+551,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+552,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+553,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+554,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+555,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+556,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+557,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+558,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+559,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+560,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+561,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+562,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+563,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+564,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+565,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+566,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__0__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+567,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+568,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+569,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+570,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+571,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+572,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+573,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+574,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__1__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+575,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+576,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+577,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+578,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+579,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+580,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+581,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+582,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__2__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+583,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+584,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+585,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+586,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+587,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+588,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+589,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+590,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__3__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+591,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+592,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+593,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+594,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+595,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+596,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+597,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+598,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__4__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+599,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+600,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+601,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+602,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+603,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+604,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+605,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+606,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__5__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+607,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__0__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+608,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__1__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+609,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__2__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+610,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__3__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+611,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__4__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+612,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__5__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+613,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__6__KET____DOT__bram_inst__rdata),16);
        bufp->chgSData(oldp+614,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__ub_read_group_gen__BRA__6__KET____DOT__ub_bank_gen__BRA__7__KET____DOT__bram_inst__rdata),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+615,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_data_in_0),16);
        bufp->chgSData(oldp+616,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_data_in_1),16);
        bufp->chgSData(oldp+617,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_addr_in_0),16);
        bufp->chgSData(oldp+618,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_addr_in_1),16);
        bufp->chgBit(oldp+619,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_valid_in_0));
        bufp->chgBit(oldp+620,(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_valid_in_1));
        bufp->chgBit(oldp+621,(vlSelf->tpu_isa_confreg__DOT__ub_wr_addr_start_in));
        bufp->chgSData(oldp+622,(vlSelf->tpu_isa_confreg__DOT__ub_wr_addr_in),16);
        bufp->chgBit(oldp+623,(vlSelf->tpu_isa_confreg__DOT__ub_wr_accumulate_in));
        bufp->chgBit(oldp+624,(vlSelf->tpu_isa_confreg__DOT__ub_grad_addr_start_in));
        bufp->chgSData(oldp+625,(vlSelf->tpu_isa_confreg__DOT__ub_grad_addr_in),16);
        bufp->chgBit(oldp+626,(vlSelf->tpu_isa_confreg__DOT__ub_rd_start_in));
        bufp->chgBit(oldp+627,(vlSelf->tpu_isa_confreg__DOT__ub_rd_transpose_in));
        bufp->chgSData(oldp+628,(vlSelf->tpu_isa_confreg__DOT__ub_ptr_select_in),9);
        bufp->chgSData(oldp+629,(vlSelf->tpu_isa_confreg__DOT__ub_rd_addr_in),16);
        bufp->chgSData(oldp+630,(vlSelf->tpu_isa_confreg__DOT__ub_rd_row_size_in),16);
        bufp->chgSData(oldp+631,(vlSelf->tpu_isa_confreg__DOT__ub_rd_col_size_in),16);
        bufp->chgCData(oldp+632,(vlSelf->tpu_isa_confreg__DOT__vpu_mode),4);
        bufp->chgBit(oldp+633,(vlSelf->tpu_isa_confreg__DOT__switch_in));
        bufp->chgWData(oldp+634,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out),128);
        bufp->chgCData(oldp+638,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out),8);
        bufp->chgSData(oldp+639,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[0]),16);
        bufp->chgSData(oldp+640,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[1]),16);
        bufp->chgSData(oldp+641,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[2]),16);
        bufp->chgSData(oldp+642,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[3]),16);
        bufp->chgSData(oldp+643,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[4]),16);
        bufp->chgSData(oldp+644,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[5]),16);
        bufp->chgSData(oldp+645,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[6]),16);
        bufp->chgSData(oldp+646,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[7]),16);
        bufp->chgBit(oldp+647,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[0]));
        bufp->chgBit(oldp+648,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[1]));
        bufp->chgBit(oldp+649,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[2]));
        bufp->chgBit(oldp+650,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[3]));
        bufp->chgBit(oldp+651,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[4]));
        bufp->chgBit(oldp+652,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[5]));
        bufp->chgBit(oldp+653,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[6]));
        bufp->chgBit(oldp+654,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[7]));
        bufp->chgCData(oldp+655,(((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                   [7U] << 7U) | ((
                                                   vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                   [6U] 
                                                   << 6U) 
                                                  | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                      [5U] 
                                                      << 5U) 
                                                     | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                         [4U] 
                                                         << 4U) 
                                                        | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                            [3U] 
                                                            << 3U) 
                                                           | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                               [2U] 
                                                               << 2U) 
                                                              | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                                  [1U] 
                                                                  << 1U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
                                                                 [0U])))))))),8);
        bufp->chgSData(oldp+656,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_rd_input_col_size_out),16);
        bufp->chgBit(oldp+657,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_rd_input_col_size_valid_out));
        bufp->chgCData(oldp+658,(((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                   [7U] << 7U) | ((
                                                   vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                   [6U] 
                                                   << 6U) 
                                                  | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                      [5U] 
                                                      << 5U) 
                                                     | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                         [4U] 
                                                         << 4U) 
                                                        | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                            [3U] 
                                                            << 3U) 
                                                           | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                               [2U] 
                                                               << 2U) 
                                                              | ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                                  [1U] 
                                                                  << 1U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                                                 [0U])))))))),8);
        bufp->chgWData(oldp+659,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out),128);
        bufp->chgCData(oldp+663,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out),8);
        bufp->chgCData(oldp+664,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled),8);
        bufp->chgSData(oldp+665,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_num),16);
        bufp->chgIData(oldp+666,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__en_i),32);
        bufp->chgIData(oldp+667,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__active_row_idx),32);
        bufp->chgSData(oldp+668,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][0U]),16);
        bufp->chgBit(oldp+669,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][0U]));
        bufp->chgBit(oldp+670,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][0U]));
        bufp->chgSData(oldp+671,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][1U]),16);
        bufp->chgBit(oldp+672,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][1U]));
        bufp->chgBit(oldp+673,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][1U]));
        bufp->chgSData(oldp+674,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][2U]),16);
        bufp->chgBit(oldp+675,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][2U]));
        bufp->chgBit(oldp+676,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][2U]));
        bufp->chgSData(oldp+677,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][3U]),16);
        bufp->chgBit(oldp+678,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][3U]));
        bufp->chgBit(oldp+679,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][3U]));
        bufp->chgSData(oldp+680,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][4U]),16);
        bufp->chgBit(oldp+681,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][4U]));
        bufp->chgBit(oldp+682,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][4U]));
        bufp->chgSData(oldp+683,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][5U]),16);
        bufp->chgBit(oldp+684,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][5U]));
        bufp->chgBit(oldp+685,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][5U]));
        bufp->chgSData(oldp+686,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [0U][6U]),16);
        bufp->chgBit(oldp+687,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][6U]));
        bufp->chgBit(oldp+688,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][6U]));
        bufp->chgSData(oldp+689,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][0U]),16);
        bufp->chgSData(oldp+690,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][0U]),16);
        bufp->chgSData(oldp+691,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][0U]),16);
        bufp->chgSData(oldp+692,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][1U]),16);
        bufp->chgSData(oldp+693,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][1U]),16);
        bufp->chgSData(oldp+694,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][1U]),16);
        bufp->chgSData(oldp+695,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][2U]),16);
        bufp->chgSData(oldp+696,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][2U]),16);
        bufp->chgSData(oldp+697,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][2U]),16);
        bufp->chgSData(oldp+698,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][3U]),16);
        bufp->chgSData(oldp+699,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][3U]),16);
        bufp->chgSData(oldp+700,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][3U]),16);
        bufp->chgSData(oldp+701,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][4U]),16);
        bufp->chgSData(oldp+702,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][4U]),16);
        bufp->chgSData(oldp+703,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][4U]),16);
        bufp->chgSData(oldp+704,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][5U]),16);
        bufp->chgSData(oldp+705,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][5U]),16);
        bufp->chgSData(oldp+706,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][5U]),16);
        bufp->chgSData(oldp+707,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][6U]),16);
        bufp->chgSData(oldp+708,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][6U]),16);
        bufp->chgSData(oldp+709,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [1U][6U]),16);
        bufp->chgBit(oldp+710,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [0U][7U]));
        bufp->chgSData(oldp+711,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [0U][7U]),16);
        bufp->chgSData(oldp+712,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [0U][7U]),16);
        bufp->chgBit(oldp+713,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [0U][7U]));
        bufp->chgBit(oldp+714,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][0U]));
        bufp->chgSData(oldp+715,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][0U]),16);
        bufp->chgSData(oldp+716,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][0U]),16);
        bufp->chgBit(oldp+717,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][0U]));
        bufp->chgSData(oldp+718,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][0U]),16);
        bufp->chgBit(oldp+719,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][1U]));
        bufp->chgSData(oldp+720,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][1U]),16);
        bufp->chgSData(oldp+721,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][1U]),16);
        bufp->chgBit(oldp+722,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][1U]));
        bufp->chgSData(oldp+723,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][1U]),16);
        bufp->chgBit(oldp+724,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][2U]));
        bufp->chgSData(oldp+725,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][2U]),16);
        bufp->chgSData(oldp+726,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][2U]),16);
        bufp->chgBit(oldp+727,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][2U]));
        bufp->chgSData(oldp+728,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][2U]),16);
        bufp->chgBit(oldp+729,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][3U]));
        bufp->chgSData(oldp+730,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][3U]),16);
        bufp->chgSData(oldp+731,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][3U]),16);
        bufp->chgBit(oldp+732,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][3U]));
        bufp->chgSData(oldp+733,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][3U]),16);
        bufp->chgBit(oldp+734,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][4U]));
        bufp->chgSData(oldp+735,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][4U]),16);
        bufp->chgSData(oldp+736,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][4U]),16);
        bufp->chgBit(oldp+737,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][4U]));
        bufp->chgSData(oldp+738,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][4U]),16);
        bufp->chgBit(oldp+739,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][5U]));
        bufp->chgSData(oldp+740,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][5U]),16);
        bufp->chgSData(oldp+741,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][5U]),16);
        bufp->chgBit(oldp+742,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][5U]));
        bufp->chgSData(oldp+743,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][5U]),16);
        bufp->chgBit(oldp+744,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][6U]));
        bufp->chgSData(oldp+745,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][6U]),16);
        bufp->chgSData(oldp+746,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][6U]),16);
        bufp->chgBit(oldp+747,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][6U]));
        bufp->chgSData(oldp+748,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [2U][6U]),16);
        bufp->chgBit(oldp+749,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [1U][7U]));
        bufp->chgSData(oldp+750,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [1U][7U]),16);
        bufp->chgSData(oldp+751,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [1U][7U]),16);
        bufp->chgBit(oldp+752,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [1U][7U]));
        bufp->chgBit(oldp+753,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][0U]));
        bufp->chgSData(oldp+754,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][0U]),16);
        bufp->chgSData(oldp+755,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][0U]),16);
        bufp->chgBit(oldp+756,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][0U]));
        bufp->chgSData(oldp+757,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][0U]),16);
        bufp->chgBit(oldp+758,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][1U]));
        bufp->chgSData(oldp+759,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][1U]),16);
        bufp->chgSData(oldp+760,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][1U]),16);
        bufp->chgBit(oldp+761,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][1U]));
        bufp->chgSData(oldp+762,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][1U]),16);
        bufp->chgBit(oldp+763,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][2U]));
        bufp->chgSData(oldp+764,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][2U]),16);
        bufp->chgSData(oldp+765,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][2U]),16);
        bufp->chgBit(oldp+766,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][2U]));
        bufp->chgSData(oldp+767,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][2U]),16);
        bufp->chgBit(oldp+768,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][3U]));
        bufp->chgSData(oldp+769,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][3U]),16);
        bufp->chgSData(oldp+770,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][3U]),16);
        bufp->chgBit(oldp+771,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][3U]));
        bufp->chgSData(oldp+772,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][3U]),16);
        bufp->chgBit(oldp+773,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][4U]));
        bufp->chgSData(oldp+774,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][4U]),16);
        bufp->chgSData(oldp+775,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][4U]),16);
        bufp->chgBit(oldp+776,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][4U]));
        bufp->chgSData(oldp+777,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][4U]),16);
        bufp->chgBit(oldp+778,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][5U]));
        bufp->chgSData(oldp+779,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][5U]),16);
        bufp->chgSData(oldp+780,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][5U]),16);
        bufp->chgBit(oldp+781,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][5U]));
        bufp->chgSData(oldp+782,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][5U]),16);
        bufp->chgBit(oldp+783,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][6U]));
        bufp->chgSData(oldp+784,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][6U]),16);
        bufp->chgSData(oldp+785,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][6U]),16);
        bufp->chgBit(oldp+786,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][6U]));
        bufp->chgSData(oldp+787,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [3U][6U]),16);
        bufp->chgBit(oldp+788,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [2U][7U]));
        bufp->chgSData(oldp+789,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [2U][7U]),16);
        bufp->chgSData(oldp+790,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [2U][7U]),16);
        bufp->chgBit(oldp+791,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [2U][7U]));
        bufp->chgBit(oldp+792,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][0U]));
        bufp->chgSData(oldp+793,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][0U]),16);
        bufp->chgSData(oldp+794,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][0U]),16);
        bufp->chgBit(oldp+795,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][0U]));
        bufp->chgSData(oldp+796,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][0U]),16);
        bufp->chgBit(oldp+797,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][1U]));
        bufp->chgSData(oldp+798,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][1U]),16);
        bufp->chgSData(oldp+799,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][1U]),16);
        bufp->chgBit(oldp+800,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][1U]));
        bufp->chgSData(oldp+801,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][1U]),16);
        bufp->chgBit(oldp+802,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][2U]));
        bufp->chgSData(oldp+803,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][2U]),16);
        bufp->chgSData(oldp+804,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][2U]),16);
        bufp->chgBit(oldp+805,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][2U]));
        bufp->chgSData(oldp+806,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][2U]),16);
        bufp->chgBit(oldp+807,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][3U]));
        bufp->chgSData(oldp+808,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][3U]),16);
        bufp->chgSData(oldp+809,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][3U]),16);
        bufp->chgBit(oldp+810,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][3U]));
        bufp->chgSData(oldp+811,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][3U]),16);
        bufp->chgBit(oldp+812,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][4U]));
        bufp->chgSData(oldp+813,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][4U]),16);
        bufp->chgSData(oldp+814,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][4U]),16);
        bufp->chgBit(oldp+815,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][4U]));
        bufp->chgSData(oldp+816,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][4U]),16);
        bufp->chgBit(oldp+817,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][5U]));
        bufp->chgSData(oldp+818,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][5U]),16);
        bufp->chgSData(oldp+819,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][5U]),16);
        bufp->chgBit(oldp+820,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][5U]));
        bufp->chgSData(oldp+821,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][5U]),16);
        bufp->chgBit(oldp+822,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][6U]));
        bufp->chgSData(oldp+823,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][6U]),16);
        bufp->chgSData(oldp+824,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][6U]),16);
        bufp->chgBit(oldp+825,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][6U]));
        bufp->chgSData(oldp+826,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [4U][6U]),16);
        bufp->chgBit(oldp+827,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [3U][7U]));
        bufp->chgSData(oldp+828,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [3U][7U]),16);
        bufp->chgSData(oldp+829,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [3U][7U]),16);
        bufp->chgBit(oldp+830,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [3U][7U]));
        bufp->chgBit(oldp+831,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][0U]));
        bufp->chgSData(oldp+832,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][0U]),16);
        bufp->chgSData(oldp+833,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][0U]),16);
        bufp->chgBit(oldp+834,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][0U]));
        bufp->chgSData(oldp+835,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][0U]),16);
        bufp->chgBit(oldp+836,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][1U]));
        bufp->chgSData(oldp+837,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][1U]),16);
        bufp->chgSData(oldp+838,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][1U]),16);
        bufp->chgBit(oldp+839,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][1U]));
        bufp->chgSData(oldp+840,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][1U]),16);
        bufp->chgBit(oldp+841,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][2U]));
        bufp->chgSData(oldp+842,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][2U]),16);
        bufp->chgSData(oldp+843,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][2U]),16);
        bufp->chgBit(oldp+844,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][2U]));
        bufp->chgSData(oldp+845,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][2U]),16);
        bufp->chgBit(oldp+846,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][3U]));
        bufp->chgSData(oldp+847,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][3U]),16);
        bufp->chgSData(oldp+848,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][3U]),16);
        bufp->chgBit(oldp+849,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][3U]));
        bufp->chgSData(oldp+850,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][3U]),16);
        bufp->chgBit(oldp+851,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][4U]));
        bufp->chgSData(oldp+852,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][4U]),16);
        bufp->chgSData(oldp+853,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][4U]),16);
        bufp->chgBit(oldp+854,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][4U]));
        bufp->chgSData(oldp+855,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][4U]),16);
        bufp->chgBit(oldp+856,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][5U]));
        bufp->chgSData(oldp+857,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][5U]),16);
        bufp->chgSData(oldp+858,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][5U]),16);
        bufp->chgBit(oldp+859,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][5U]));
        bufp->chgSData(oldp+860,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][5U]),16);
        bufp->chgBit(oldp+861,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][6U]));
        bufp->chgSData(oldp+862,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][6U]),16);
        bufp->chgSData(oldp+863,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][6U]),16);
        bufp->chgBit(oldp+864,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][6U]));
        bufp->chgSData(oldp+865,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [5U][6U]),16);
        bufp->chgBit(oldp+866,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [4U][7U]));
        bufp->chgSData(oldp+867,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [4U][7U]),16);
        bufp->chgSData(oldp+868,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [4U][7U]),16);
        bufp->chgBit(oldp+869,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [4U][7U]));
        bufp->chgBit(oldp+870,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][0U]));
        bufp->chgSData(oldp+871,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][0U]),16);
        bufp->chgSData(oldp+872,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][0U]),16);
        bufp->chgBit(oldp+873,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][0U]));
        bufp->chgSData(oldp+874,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][0U]),16);
        bufp->chgBit(oldp+875,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][1U]));
        bufp->chgSData(oldp+876,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][1U]),16);
        bufp->chgSData(oldp+877,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][1U]),16);
        bufp->chgBit(oldp+878,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][1U]));
        bufp->chgSData(oldp+879,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][1U]),16);
        bufp->chgBit(oldp+880,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][2U]));
        bufp->chgSData(oldp+881,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][2U]),16);
        bufp->chgSData(oldp+882,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][2U]),16);
        bufp->chgBit(oldp+883,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][2U]));
        bufp->chgSData(oldp+884,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][2U]),16);
        bufp->chgBit(oldp+885,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][3U]));
        bufp->chgSData(oldp+886,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][3U]),16);
        bufp->chgSData(oldp+887,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][3U]),16);
        bufp->chgBit(oldp+888,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][3U]));
        bufp->chgSData(oldp+889,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][3U]),16);
        bufp->chgBit(oldp+890,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][4U]));
        bufp->chgSData(oldp+891,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][4U]),16);
        bufp->chgSData(oldp+892,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][4U]),16);
        bufp->chgBit(oldp+893,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][4U]));
        bufp->chgSData(oldp+894,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][4U]),16);
        bufp->chgBit(oldp+895,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][5U]));
        bufp->chgSData(oldp+896,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][5U]),16);
        bufp->chgSData(oldp+897,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][5U]),16);
        bufp->chgBit(oldp+898,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][5U]));
        bufp->chgSData(oldp+899,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][5U]),16);
        bufp->chgBit(oldp+900,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][6U]));
        bufp->chgSData(oldp+901,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][6U]),16);
        bufp->chgSData(oldp+902,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][6U]),16);
        bufp->chgBit(oldp+903,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][6U]));
        bufp->chgSData(oldp+904,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [6U][6U]),16);
        bufp->chgBit(oldp+905,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [5U][7U]));
        bufp->chgSData(oldp+906,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [5U][7U]),16);
        bufp->chgSData(oldp+907,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [5U][7U]),16);
        bufp->chgBit(oldp+908,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [5U][7U]));
        bufp->chgBit(oldp+909,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][0U]));
        bufp->chgSData(oldp+910,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][0U]),16);
        bufp->chgSData(oldp+911,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][0U]),16);
        bufp->chgBit(oldp+912,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][0U]));
        bufp->chgSData(oldp+913,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][0U]),16);
        bufp->chgBit(oldp+914,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][1U]));
        bufp->chgSData(oldp+915,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][1U]),16);
        bufp->chgSData(oldp+916,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][1U]),16);
        bufp->chgBit(oldp+917,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][1U]));
        bufp->chgSData(oldp+918,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][1U]),16);
        bufp->chgBit(oldp+919,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][2U]));
        bufp->chgSData(oldp+920,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][2U]),16);
        bufp->chgSData(oldp+921,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][2U]),16);
        bufp->chgBit(oldp+922,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][2U]));
        bufp->chgSData(oldp+923,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][2U]),16);
        bufp->chgBit(oldp+924,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][3U]));
        bufp->chgSData(oldp+925,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][3U]),16);
        bufp->chgSData(oldp+926,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][3U]),16);
        bufp->chgBit(oldp+927,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][3U]));
        bufp->chgSData(oldp+928,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][3U]),16);
        bufp->chgBit(oldp+929,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][4U]));
        bufp->chgSData(oldp+930,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][4U]),16);
        bufp->chgSData(oldp+931,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][4U]),16);
        bufp->chgBit(oldp+932,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][4U]));
        bufp->chgSData(oldp+933,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][4U]),16);
        bufp->chgBit(oldp+934,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][5U]));
        bufp->chgSData(oldp+935,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][5U]),16);
        bufp->chgSData(oldp+936,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][5U]),16);
        bufp->chgBit(oldp+937,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][5U]));
        bufp->chgSData(oldp+938,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][5U]),16);
        bufp->chgBit(oldp+939,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][6U]));
        bufp->chgSData(oldp+940,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][6U]),16);
        bufp->chgSData(oldp+941,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][6U]),16);
        bufp->chgBit(oldp+942,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][6U]));
        bufp->chgSData(oldp+943,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_link
                                 [7U][6U]),16);
        bufp->chgBit(oldp+944,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__input_valid_link
                               [6U][7U]));
        bufp->chgSData(oldp+945,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__weight_link
                                 [6U][7U]),16);
        bufp->chgSData(oldp+946,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__psum_link
                                 [6U][7U]),16);
        bufp->chgBit(oldp+947,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                               [6U][7U]));
        bufp->chgBit(oldp+948,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[0]));
        bufp->chgBit(oldp+949,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[1]));
        bufp->chgBit(oldp+950,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[2]));
        bufp->chgBit(oldp+951,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[3]));
        bufp->chgBit(oldp+952,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[4]));
        bufp->chgBit(oldp+953,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[5]));
        bufp->chgBit(oldp+954,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[6]));
        bufp->chgBit(oldp+955,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out[7]));
        bufp->chgBit(oldp+956,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[0]));
        bufp->chgBit(oldp+957,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[1]));
        bufp->chgBit(oldp+958,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[2]));
        bufp->chgBit(oldp+959,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[3]));
        bufp->chgBit(oldp+960,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[4]));
        bufp->chgBit(oldp+961,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[5]));
        bufp->chgBit(oldp+962,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[6]));
        bufp->chgBit(oldp+963,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out[7]));
        bufp->chgSData(oldp+964,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[0]),16);
        bufp->chgSData(oldp+965,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[1]),16);
        bufp->chgSData(oldp+966,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[2]),16);
        bufp->chgSData(oldp+967,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[3]),16);
        bufp->chgSData(oldp+968,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[4]),16);
        bufp->chgSData(oldp+969,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[5]),16);
        bufp->chgSData(oldp+970,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[6]),16);
        bufp->chgSData(oldp+971,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[7]),16);
        bufp->chgBit(oldp+972,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[0]));
        bufp->chgBit(oldp+973,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[1]));
        bufp->chgBit(oldp+974,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[2]));
        bufp->chgBit(oldp+975,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[3]));
        bufp->chgBit(oldp+976,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[4]));
        bufp->chgBit(oldp+977,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[5]));
        bufp->chgBit(oldp+978,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[6]));
        bufp->chgBit(oldp+979,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[7]));
        bufp->chgSData(oldp+980,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr),16);
        bufp->chgSData(oldp+981,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_ptr),16);
        bufp->chgSData(oldp+982,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_row_size),16);
        bufp->chgSData(oldp+983,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_col_size),16);
        bufp->chgSData(oldp+984,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_time_counter),16);
        bufp->chgBit(oldp+985,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_transpose));
        bufp->chgSData(oldp+986,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_ptr),16);
        bufp->chgSData(oldp+987,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_row_size),16);
        bufp->chgSData(oldp+988,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_col_size),16);
        bufp->chgSData(oldp+989,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_time_counter),16);
        bufp->chgBit(oldp+990,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_transpose));
        bufp->chgSData(oldp+991,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_weight_skip_size),16);
        bufp->chgSData(oldp+992,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_bias_ptr),16);
        bufp->chgSData(oldp+993,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_bias_row_size),16);
        bufp->chgSData(oldp+994,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_bias_col_size),16);
        bufp->chgSData(oldp+995,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_bias_time_counter),16);
        bufp->chgSData(oldp+996,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_ptr),16);
        bufp->chgSData(oldp+997,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_row_size),16);
        bufp->chgSData(oldp+998,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_col_size),16);
        bufp->chgSData(oldp+999,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_time_counter),16);
        bufp->chgSData(oldp+1000,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_ptr),16);
        bufp->chgSData(oldp+1001,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_row_size),16);
        bufp->chgSData(oldp+1002,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_col_size),16);
        bufp->chgSData(oldp+1003,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_time_counter),16);
        bufp->chgSData(oldp+1004,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_bias_ptr),16);
        bufp->chgSData(oldp+1005,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_bias_row_size),16);
        bufp->chgSData(oldp+1006,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_bias_col_size),16);
        bufp->chgSData(oldp+1007,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_bias_time_counter),16);
        bufp->chgSData(oldp+1008,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_weight_ptr),16);
        bufp->chgSData(oldp+1009,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_weight_row_size),16);
        bufp->chgSData(oldp+1010,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_weight_col_size),16);
        bufp->chgSData(oldp+1011,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_weight_time_counter),16);
        bufp->chgBit(oldp+1012,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[0]));
        bufp->chgBit(oldp+1013,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[1]));
        bufp->chgBit(oldp+1014,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[2]));
        bufp->chgBit(oldp+1015,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[3]));
        bufp->chgBit(oldp+1016,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[4]));
        bufp->chgBit(oldp+1017,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[5]));
        bufp->chgBit(oldp+1018,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[6]));
        bufp->chgBit(oldp+1019,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in[7]));
        bufp->chgSData(oldp+1020,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[0]),16);
        bufp->chgSData(oldp+1021,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[1]),16);
        bufp->chgSData(oldp+1022,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[2]),16);
        bufp->chgSData(oldp+1023,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[3]),16);
        bufp->chgSData(oldp+1024,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[4]),16);
        bufp->chgSData(oldp+1025,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[5]),16);
        bufp->chgSData(oldp+1026,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[6]),16);
        bufp->chgSData(oldp+1027,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out[7]),16);
        bufp->chgBit(oldp+1028,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[0]));
        bufp->chgBit(oldp+1029,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[1]));
        bufp->chgBit(oldp+1030,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[2]));
        bufp->chgBit(oldp+1031,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[3]));
        bufp->chgBit(oldp+1032,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[4]));
        bufp->chgBit(oldp+1033,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[5]));
        bufp->chgBit(oldp+1034,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[6]));
        bufp->chgBit(oldp+1035,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out[7]));
        bufp->chgSData(oldp+1036,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_addr_base),16);
        bufp->chgSData(oldp+1037,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_update_grad_ptr),16);
        bufp->chgSData(oldp+1038,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr),16);
        bufp->chgBit(oldp+1039,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight));
        bufp->chgSData(oldp+1040,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_input_ptr_next),16);
        bufp->chgSData(oldp+1041,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_ptr_next),16);
        bufp->chgSData(oldp+1042,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_ptr_next),16);
        bufp->chgSData(oldp+1043,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_grad_weight_ptr_next),16);
        bufp->chgSData(oldp+1044,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_update_grad_ptr_next),16);
        bufp->chgSData(oldp+1045,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ptr_tmp),16);
        bufp->chgSData(oldp+1046,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_ptr_tmp),16);
        bufp->chgSData(oldp+1047,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_ptr_tmp),16);
        bufp->chgBit(oldp+1048,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[0]));
        bufp->chgBit(oldp+1049,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[1]));
        bufp->chgBit(oldp+1050,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[2]));
        bufp->chgBit(oldp+1051,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[3]));
        bufp->chgBit(oldp+1052,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[4]));
        bufp->chgBit(oldp+1053,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[5]));
        bufp->chgBit(oldp+1054,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[6]));
        bufp->chgBit(oldp+1055,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q[7]));
        bufp->chgBit(oldp+1056,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[0]));
        bufp->chgBit(oldp+1057,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[1]));
        bufp->chgBit(oldp+1058,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[2]));
        bufp->chgBit(oldp+1059,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[3]));
        bufp->chgBit(oldp+1060,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[4]));
        bufp->chgBit(oldp+1061,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[5]));
        bufp->chgBit(oldp+1062,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[6]));
        bufp->chgBit(oldp+1063,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q[7]));
        bufp->chgBit(oldp+1064,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [0U]));
        bufp->chgSData(oldp+1065,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1066,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1067,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1068,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [1U]));
        bufp->chgSData(oldp+1069,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1070,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1071,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1072,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [2U]));
        bufp->chgSData(oldp+1073,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1074,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1075,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1076,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [3U]));
        bufp->chgSData(oldp+1077,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1078,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1079,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1080,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [4U]));
        bufp->chgSData(oldp+1081,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1082,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1083,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1084,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [5U]));
        bufp->chgSData(oldp+1085,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1086,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1087,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1088,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [6U]));
        bufp->chgSData(oldp+1089,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1090,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1091,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgBit(oldp+1092,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
                                [7U]));
        bufp->chgSData(oldp+1093,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__value_updated_out),16);
        bufp->chgBit(oldp+1094,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__grad_descent_done_out));
        bufp->chgBit(oldp+1095,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__grad_overflow_out));
        bufp->chgCData(oldp+1096,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][0U]),7);
        bufp->chgCData(oldp+1097,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][1U]),7);
        bufp->chgCData(oldp+1098,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][2U]),7);
        bufp->chgCData(oldp+1099,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][3U]),7);
        bufp->chgCData(oldp+1100,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][4U]),7);
        bufp->chgCData(oldp+1101,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][5U]),7);
        bufp->chgCData(oldp+1102,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][6U]),7);
        bufp->chgCData(oldp+1103,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [0U][7U]),7);
        bufp->chgCData(oldp+1104,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][0U]),7);
        bufp->chgCData(oldp+1105,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][1U]),7);
        bufp->chgCData(oldp+1106,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][2U]),7);
        bufp->chgCData(oldp+1107,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][3U]),7);
        bufp->chgCData(oldp+1108,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][4U]),7);
        bufp->chgCData(oldp+1109,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][5U]),7);
        bufp->chgCData(oldp+1110,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][6U]),7);
        bufp->chgCData(oldp+1111,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [1U][7U]),7);
        bufp->chgCData(oldp+1112,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][0U]),7);
        bufp->chgCData(oldp+1113,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][1U]),7);
        bufp->chgCData(oldp+1114,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][2U]),7);
        bufp->chgCData(oldp+1115,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][3U]),7);
        bufp->chgCData(oldp+1116,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][4U]),7);
        bufp->chgCData(oldp+1117,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][5U]),7);
        bufp->chgCData(oldp+1118,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][6U]),7);
        bufp->chgCData(oldp+1119,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [2U][7U]),7);
        bufp->chgCData(oldp+1120,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][0U]),7);
        bufp->chgCData(oldp+1121,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][1U]),7);
        bufp->chgCData(oldp+1122,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][2U]),7);
        bufp->chgCData(oldp+1123,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][3U]),7);
        bufp->chgCData(oldp+1124,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][4U]),7);
        bufp->chgCData(oldp+1125,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][5U]),7);
        bufp->chgCData(oldp+1126,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][6U]),7);
        bufp->chgCData(oldp+1127,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [3U][7U]),7);
        bufp->chgCData(oldp+1128,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][0U]),7);
        bufp->chgCData(oldp+1129,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][1U]),7);
        bufp->chgCData(oldp+1130,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][2U]),7);
        bufp->chgCData(oldp+1131,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][3U]),7);
        bufp->chgCData(oldp+1132,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][4U]),7);
        bufp->chgCData(oldp+1133,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][5U]),7);
        bufp->chgCData(oldp+1134,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][6U]),7);
        bufp->chgCData(oldp+1135,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [4U][7U]),7);
        bufp->chgCData(oldp+1136,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][0U]),7);
        bufp->chgCData(oldp+1137,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][1U]),7);
        bufp->chgCData(oldp+1138,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][2U]),7);
        bufp->chgCData(oldp+1139,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][3U]),7);
        bufp->chgCData(oldp+1140,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][4U]),7);
        bufp->chgCData(oldp+1141,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][5U]),7);
        bufp->chgCData(oldp+1142,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][6U]),7);
        bufp->chgCData(oldp+1143,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [5U][7U]),7);
        bufp->chgCData(oldp+1144,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][0U]),7);
        bufp->chgCData(oldp+1145,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][1U]),7);
        bufp->chgCData(oldp+1146,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][2U]),7);
        bufp->chgCData(oldp+1147,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][3U]),7);
        bufp->chgCData(oldp+1148,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][4U]),7);
        bufp->chgCData(oldp+1149,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][5U]),7);
        bufp->chgCData(oldp+1150,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][6U]),7);
        bufp->chgCData(oldp+1151,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_row_req
                                  [6U][7U]),7);
        bufp->chgIData(oldp+1152,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk10__DOT__lane),32);
        bufp->chgIData(oldp+1153,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk11__DOT__lane),32);
        bufp->chgIData(oldp+1154,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk12__DOT__lane),32);
        bufp->chgIData(oldp+1155,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk13__DOT__lane),32);
        bufp->chgIData(oldp+1156,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk14__DOT__lane),32);
        bufp->chgIData(oldp+1157,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk15__DOT__lane),32);
        bufp->chgIData(oldp+1158,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk16__DOT__lane),32);
        bufp->chgIData(oldp+1159,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk17__DOT__lane),32);
        bufp->chgIData(oldp+1160,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk20__DOT__g),32);
        bufp->chgIData(oldp+1161,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b),32);
        bufp->chgIData(oldp+1162,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk20__DOT__unnamedblk22__DOT__lane),32);
        bufp->chgIData(oldp+1163,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk23__DOT__lane),32);
        bufp->chgIData(oldp+1164,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk24__DOT__g),32);
        bufp->chgIData(oldp+1165,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk24__DOT__unnamedblk25__DOT__b),32);
        bufp->chgIData(oldp+1166,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk24__DOT__unnamedblk26__DOT__lane),32);
        bufp->chgIData(oldp+1167,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk27__DOT__lane),32);
        bufp->chgIData(oldp+1168,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk28__DOT__b),32);
        bufp->chgIData(oldp+1169,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk28__DOT__unnamedblk29__DOT__flat_addr),32);
        bufp->chgIData(oldp+1170,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk8__DOT__lane),32);
        bufp->chgIData(oldp+1171,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__unnamedblk9__DOT__lane),32);
        bufp->chgSData(oldp+1172,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[0]),16);
        bufp->chgSData(oldp+1173,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[1]),16);
        bufp->chgSData(oldp+1174,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[2]),16);
        bufp->chgSData(oldp+1175,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[3]),16);
        bufp->chgSData(oldp+1176,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[4]),16);
        bufp->chgSData(oldp+1177,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[5]),16);
        bufp->chgSData(oldp+1178,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[6]),16);
        bufp->chgSData(oldp+1179,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out[7]),16);
        bufp->chgBit(oldp+1180,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[0]));
        bufp->chgBit(oldp+1181,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[1]));
        bufp->chgBit(oldp+1182,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[2]));
        bufp->chgBit(oldp+1183,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[3]));
        bufp->chgBit(oldp+1184,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[4]));
        bufp->chgBit(oldp+1185,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[5]));
        bufp->chgBit(oldp+1186,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[6]));
        bufp->chgBit(oldp+1187,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out[7]));
        bufp->chgSData(oldp+1188,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[0]),16);
        bufp->chgSData(oldp+1189,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[1]),16);
        bufp->chgSData(oldp+1190,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[2]),16);
        bufp->chgSData(oldp+1191,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[3]),16);
        bufp->chgSData(oldp+1192,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[4]),16);
        bufp->chgSData(oldp+1193,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[5]),16);
        bufp->chgSData(oldp+1194,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[6]),16);
        bufp->chgSData(oldp+1195,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out[7]),16);
        bufp->chgBit(oldp+1196,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[0]));
        bufp->chgBit(oldp+1197,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[1]));
        bufp->chgBit(oldp+1198,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[2]));
        bufp->chgBit(oldp+1199,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[3]));
        bufp->chgBit(oldp+1200,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[4]));
        bufp->chgBit(oldp+1201,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[5]));
        bufp->chgBit(oldp+1202,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[6]));
        bufp->chgBit(oldp+1203,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out[7]));
        bufp->chgIData(oldp+1204,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lane_i),32);
        bufp->chgSData(oldp+1205,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1206,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1207,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1208,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1209,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1210,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1211,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1212,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1213,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1214,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1215,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1216,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1217,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1218,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1219,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1220,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1221,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1222,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1223,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1224,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1225,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1226,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1227,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1228,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1229,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1230,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1231,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1232,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1233,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1234,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1235,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1236,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1237,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1238,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1239,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1240,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1241,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1242,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1243,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1244,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1245,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1246,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1247,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__bias_data_out),16);
        bufp->chgBit(oldp+1248,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__bias_valid_out));
        bufp->chgBit(oldp+1249,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__overflow_out));
        bufp->chgSData(oldp+1250,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__leaky_data_out),16);
        bufp->chgBit(oldp+1251,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT____Vcellout__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__leaky_valid_out));
        bufp->chgBit(oldp+1252,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__leaky_relu_unit_inst__DOT__leaky_overflow_out));
        bufp->chgSData(oldp+1253,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1255,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1256,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1258,((1U & (IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled))));
        bufp->chgBit(oldp+1259,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1260,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1261,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1262,(((IData)(vlSelf->tpu_isa_confreg__DOT__switch_in)
                                    ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1263,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1265,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1266,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1268,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 1U))));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1270,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1271,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1272,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1274,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1275,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1276,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1277,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1282,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1283,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1285,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1286,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1289,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [2U]));
        bufp->chgSData(oldp+1290,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1292,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 2U))));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1294,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1295,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1296,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1298,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1299,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1300,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1301,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1302,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1303,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1304,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1305,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1306,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1307,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1310,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1312,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1313,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [3U]));
        bufp->chgSData(oldp+1314,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1315,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1316,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 3U))));
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1318,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1319,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1320,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1322,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1323,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1324,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1325,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1329,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1330,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1331,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1333,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1334,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1336,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1337,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [4U]));
        bufp->chgSData(oldp+1338,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1340,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 4U))));
        bufp->chgBit(oldp+1341,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1342,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1343,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1344,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1345,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1346,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1347,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1348,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1349,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1350,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1352,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1353,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1355,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1356,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1357,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1358,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1360,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1361,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [5U]));
        bufp->chgSData(oldp+1362,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1364,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 5U))));
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1366,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1367,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1368,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1370,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1371,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1372,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1373,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1377,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1378,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1379,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1382,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1384,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1385,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [6U]));
        bufp->chgSData(oldp+1386,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1388,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 6U))));
        bufp->chgBit(oldp+1389,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1390,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1391,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1392,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1393,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1394,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1395,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1396,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1397,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1403,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1404,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1406,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1407,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1408,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgBit(oldp+1409,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
                                [7U]));
        bufp->chgSData(oldp+1410,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1412,((1U & ((IData)(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_enabled) 
                                       >> 7U))));
        bufp->chgBit(oldp+1413,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1414,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1415,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1416,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1417,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgSData(oldp+1418,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1419,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1420,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1421,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1422,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1423,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1425,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1427,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1428,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1430,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1432,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1433,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1435,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1436,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1437,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1438,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1439,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1440,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1444,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1446,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1447,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1449,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1450,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1451,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1452,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1453,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1455,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1456,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1457,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1458,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1459,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1460,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1463,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1464,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1465,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1467,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1468,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1469,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1470,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1471,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1472,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1473,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1474,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1477,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1478,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1479,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1480,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1483,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1484,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1485,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1486,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1488,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1489,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1490,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1491,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1492,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1493,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1495,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1496,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1497,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1498,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1499,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1500,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1502,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1504,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1505,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1506,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1509,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1510,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1512,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1513,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1516,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1517,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1518,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1520,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1521,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1522,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1523,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1524,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1525,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1526,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1527,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1528,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1529,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1530,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1531,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1534,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1535,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1537,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1538,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1539,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1540,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1541,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1542,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1543,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1545,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1546,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1547,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1549,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1550,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1551,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1553,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1554,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1555,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1556,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1557,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1558,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1559,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1560,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1563,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1566,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1567,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1568,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1570,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1571,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1572,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1573,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1576,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1577,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1578,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1579,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1580,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1581,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1582,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1583,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1584,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1585,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1586,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1587,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1588,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1589,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1590,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1591,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1592,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1593,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1594,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1595,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1596,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1597,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1598,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1599,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1600,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1601,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1602,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1603,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1604,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1605,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1606,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1607,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1608,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1609,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1610,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1611,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1612,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1613,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1614,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1615,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1616,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1617,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1618,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1619,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1620,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1621,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1622,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1623,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1624,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1625,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1629,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1630,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1631,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1632,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1633,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1634,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1637,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1638,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1639,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1640,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1641,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1642,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1643,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1644,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1645,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1646,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1648,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1649,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1650,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1652,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1653,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1654,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [0U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1655,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1656,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1657,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1658,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1659,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1660,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1661,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1662,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1663,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1665,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1666,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1667,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1668,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1669,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1670,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1671,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1672,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1673,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1675,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1676,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1677,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1678,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1679,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1680,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1681,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1682,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1683,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1684,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1685,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1686,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1687,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1688,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1689,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1691,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1692,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1694,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1695,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1696,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1697,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1698,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1699,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1700,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1701,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1702,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1703,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1704,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1705,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1706,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1707,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1709,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1710,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1711,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1712,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1713,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1714,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1716,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1717,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1718,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1719,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1720,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1721,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1722,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1724,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1725,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1727,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1728,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1729,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1730,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1733,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1734,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1735,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1736,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1737,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1738,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1739,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1740,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1741,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1742,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1744,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1745,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1746,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1747,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1748,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1749,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1750,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1751,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1752,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1753,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1754,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1755,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1757,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1758,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1759,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1760,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1761,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1762,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1763,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1766,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1767,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1768,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1769,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1770,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1771,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1772,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1773,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1774,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1775,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1777,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1778,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1779,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1780,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1781,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1782,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1783,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1784,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1785,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1786,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1787,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1788,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1789,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1790,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1791,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1794,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1795,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1796,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1799,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1800,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1801,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1802,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1803,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1804,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1805,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1807,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1808,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1809,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1810,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1811,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1812,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1813,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1815,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1816,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1817,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1818,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1819,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1820,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1821,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1822,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1823,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1824,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1827,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1828,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1829,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1832,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1833,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1834,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1835,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1836,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1837,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1838,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1839,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1840,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1841,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1842,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1843,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1844,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1845,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1846,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1847,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1848,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1849,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1850,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1851,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1852,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1853,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1854,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1855,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1856,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1857,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1858,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1860,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1861,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1862,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1865,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1866,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1867,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1868,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1869,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1870,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1871,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1872,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1873,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1874,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1875,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1876,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1877,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1878,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1879,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1880,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1881,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1882,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1883,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1884,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1885,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1886,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1887,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1888,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1889,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1890,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1891,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1892,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1893,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1894,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1895,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1896,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1898,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1899,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [1U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1900,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1901,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1902,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1903,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1904,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1905,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1906,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1907,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1908,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1909,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1910,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1911,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1912,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1914,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1915,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1916,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1917,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1918,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1919,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1920,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1921,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1922,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1923,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1924,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1925,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1926,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1927,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1928,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1929,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1930,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1931,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1932,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1934,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1935,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1936,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1937,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1938,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1939,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1940,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1941,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1942,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1943,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1944,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1945,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1946,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1947,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1948,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1949,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1950,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1951,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1952,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1953,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1954,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1955,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1956,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1957,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1958,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1959,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1960,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1961,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1962,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1963,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1964,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1965,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1966,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1967,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+1968,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+1969,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+1970,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+1971,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+1972,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+1973,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+1974,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+1975,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+1976,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+1977,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+1978,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1979,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+1980,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+1981,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+1982,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+1983,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1984,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1985,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1986,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+1987,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+1988,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+1989,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1990,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1991,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+1992,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+1993,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1994,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+1995,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+1996,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+1997,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+1998,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+1999,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2000,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2001,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2002,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2003,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2004,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2005,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2006,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2007,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2008,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2009,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2010,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2011,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2012,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2013,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2014,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2015,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2016,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2017,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2018,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2019,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2020,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2021,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2022,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2023,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2024,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2025,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2026,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2027,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2028,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2029,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2030,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2031,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2032,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2033,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2034,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2035,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2036,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2037,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2038,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2039,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2040,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2041,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2042,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2043,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2044,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2045,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2046,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2047,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2048,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2049,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2050,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2051,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2052,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2053,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2054,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2055,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2056,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2057,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2058,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2059,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2060,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2061,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2062,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2063,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2064,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2065,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2066,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2068,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2069,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2070,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2071,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2072,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2073,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2074,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2075,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2076,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2077,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2078,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2079,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2080,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2081,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2082,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2083,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2084,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2085,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2086,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2087,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2088,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2089,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2090,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2091,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2092,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2093,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2094,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2095,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2096,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2097,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2098,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2099,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2100,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2101,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2102,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2103,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2104,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2105,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2106,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2107,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2108,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2109,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2110,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2111,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2112,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2113,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2114,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2115,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2116,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2117,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2118,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2119,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2120,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2121,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2122,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2123,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2124,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2125,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2126,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2127,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2128,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2129,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2130,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2131,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2132,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2133,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2134,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2135,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2138,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2139,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2140,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2143,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2144,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [2U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2145,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2146,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2147,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2148,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2149,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2150,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2151,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2152,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2153,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2154,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2155,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2156,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2157,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2158,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2159,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2160,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2161,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2162,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2163,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2164,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2165,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2166,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2167,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2168,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2170,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2171,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2172,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2173,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2174,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2175,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2176,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2177,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2178,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2179,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2180,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2181,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2182,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2183,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2185,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2186,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2187,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2188,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2189,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2190,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2191,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2192,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2193,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2194,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2195,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2196,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2197,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2198,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2199,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2200,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2201,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2202,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2203,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2204,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2205,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2206,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2207,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2208,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2209,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2210,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2211,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2212,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2213,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2214,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2215,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2218,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2219,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2220,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2221,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2223,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2224,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2225,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2226,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2227,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2228,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2229,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2230,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2231,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2232,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2233,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2234,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2235,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2236,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2237,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2238,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2239,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2240,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2241,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2242,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2243,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2245,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2246,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2247,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2248,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2250,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2251,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2252,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2253,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2255,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2256,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2257,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2258,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2259,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2260,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2261,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2262,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2263,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2264,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2265,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2266,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2267,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2268,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2269,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2270,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2271,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2272,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2273,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2274,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2275,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2276,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2277,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2278,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2279,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2280,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2281,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2282,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2283,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2284,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2285,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2286,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2288,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2289,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2290,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2291,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2292,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2293,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2294,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2295,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2296,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2297,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2298,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2299,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2300,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2301,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2302,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2303,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2304,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2305,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2306,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2307,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2308,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2309,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2310,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2311,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2312,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2313,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2314,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2315,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2316,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2317,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2318,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2319,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2320,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2321,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2322,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2323,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2324,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2325,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2326,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2327,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2328,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2329,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2330,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2331,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2332,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2333,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2334,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2335,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2336,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2337,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2338,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2339,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2340,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2341,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2342,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2343,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2344,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2345,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2346,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2347,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2348,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2350,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2351,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2352,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2353,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2355,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2356,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2357,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2358,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2359,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2360,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2361,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2362,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2363,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2364,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2365,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2366,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2367,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2368,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2369,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2370,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2371,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2372,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2373,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2374,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2375,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2376,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2377,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2378,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2379,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2380,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2382,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2383,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2384,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2385,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2388,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2389,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [3U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2390,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2391,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2392,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2393,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2395,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2396,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2397,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2398,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2399,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2400,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2401,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2402,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2403,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2404,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2405,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2406,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2407,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2408,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2409,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2410,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2412,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2413,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2415,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2416,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2417,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2418,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2419,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2420,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2421,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2422,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2423,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2424,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2425,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2426,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2427,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2428,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2429,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2430,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2431,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2432,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2433,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2435,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2436,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2437,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2438,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2439,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2440,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2441,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2442,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2443,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2444,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2445,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2446,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2447,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2448,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2449,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2450,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2451,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2452,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2453,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2454,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2455,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2456,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2457,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2459,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2460,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2462,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2463,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2464,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2465,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2468,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2469,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2470,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2471,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2472,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2473,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2474,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2475,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2476,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2477,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2478,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2479,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2480,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2481,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2482,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2483,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2484,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2485,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2486,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2487,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2488,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2489,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2490,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2491,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2492,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2493,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2494,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2495,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2496,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2497,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2498,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2500,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2501,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2502,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2503,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2504,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2505,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2506,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2507,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2508,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2509,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2510,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2511,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2513,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2514,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2515,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2516,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2517,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2518,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2519,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2520,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2521,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2522,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2523,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2524,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2525,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2526,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2527,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2528,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2529,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2530,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2531,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2532,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2533,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2534,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2535,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2536,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2537,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2538,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2539,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2540,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2541,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2542,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2543,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2544,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2545,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2546,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2547,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2548,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2549,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2550,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2551,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2552,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2553,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2554,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2555,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2556,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2557,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2558,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2559,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2560,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2561,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2562,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2563,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2564,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2565,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2566,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2567,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2568,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2569,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2570,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2571,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2572,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2573,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2574,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2575,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2576,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2577,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2578,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2579,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2580,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2581,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2582,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2583,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2584,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2585,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2586,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2587,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2588,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2589,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2590,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2591,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2592,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2593,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2594,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2595,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2596,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2597,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2598,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2599,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2600,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2601,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2602,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2603,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2604,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2605,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2606,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2607,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2609,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2610,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2611,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2612,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2613,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2614,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2615,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2616,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2617,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2618,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2619,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2620,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2621,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2622,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2623,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2624,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2625,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2626,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2627,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2628,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2629,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2630,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2632,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2633,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2634,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [4U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2635,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2636,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2637,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2638,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2639,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2640,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2641,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2642,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2643,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2644,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2645,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2646,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2647,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2648,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2649,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2650,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2651,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2652,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2653,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2654,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2655,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2656,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2657,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2658,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2659,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2660,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2661,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2662,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2663,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2664,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2665,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2666,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2667,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2668,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2669,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2670,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2671,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2672,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2673,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2674,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2675,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2676,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2677,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2678,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2679,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2680,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2681,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2682,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2683,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2684,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2685,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2686,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2687,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2688,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2689,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2690,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2691,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2692,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2693,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2694,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2695,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2696,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2697,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2698,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2699,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2700,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2701,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2702,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2703,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2704,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2705,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2706,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2707,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2708,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2709,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2710,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2711,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2712,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2713,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2714,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2715,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2716,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2717,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2718,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2719,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2720,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2721,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2722,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2723,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2724,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2725,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2726,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2727,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2728,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2729,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2730,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2731,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2732,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2733,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2734,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2735,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2736,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2737,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2738,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2739,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2740,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2741,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2742,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2743,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2745,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2746,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2747,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2748,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2749,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2750,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2751,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2752,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2753,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2754,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2755,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2756,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2757,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2758,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2759,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2760,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2761,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2762,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2763,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2764,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2765,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2766,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2767,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2768,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2769,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2770,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2771,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2772,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2773,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2774,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2775,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2776,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2777,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2778,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2779,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2780,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2781,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2782,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2783,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2784,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2785,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2786,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2787,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2788,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2789,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2790,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2791,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2792,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2793,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2794,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2795,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2796,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2797,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2798,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2799,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2800,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2801,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2802,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2803,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2804,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2805,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2806,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2807,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2808,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2809,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2810,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2811,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2812,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2813,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2814,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2815,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2816,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2817,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2818,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2819,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2820,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2821,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2822,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2823,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2824,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2825,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2826,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2827,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2828,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2829,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2830,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2831,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2832,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2834,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2835,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2836,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2837,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2838,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2839,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2840,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2841,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2842,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2843,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2844,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2845,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2846,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2847,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2848,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2849,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2850,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2851,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2852,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2853,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2854,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2855,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2856,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2857,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2858,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2859,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2860,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2861,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2862,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2863,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2864,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2865,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2866,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2867,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2868,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2869,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2870,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2872,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2873,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2874,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2875,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2876,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2877,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2878,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2879,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [5U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2880,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2881,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2882,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2883,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2884,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2885,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2886,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2887,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2888,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2889,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2890,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2891,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2892,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2893,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2894,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2895,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2896,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2897,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2898,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2899,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2900,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2901,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2902,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2903,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2904,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2906,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2907,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2908,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][0U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2909,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2910,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2911,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2912,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2913,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2914,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2916,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2917,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2919,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2920,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2921,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2922,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2925,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2926,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][1U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2927,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2928,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2929,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2930,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2931,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2932,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2933,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2934,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2935,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2936,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2937,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2938,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2939,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2940,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2941,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2942,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2943,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2944,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2945,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2946,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2947,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2948,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2949,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2950,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2951,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2952,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2953,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2954,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2955,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2956,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2957,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2958,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2959,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][2U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2960,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2961,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2962,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2963,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2964,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2965,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2966,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2967,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2968,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2969,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2970,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2971,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+2972,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+2973,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2974,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+2975,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+2976,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+2977,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+2978,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2979,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+2980,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+2981,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+2982,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+2983,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+2984,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+2985,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+2986,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+2987,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+2988,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+2989,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+2990,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+2991,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2992,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][3U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+2993,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+2994,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+2995,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+2996,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+2997,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+2998,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+2999,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3000,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3001,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3002,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3003,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3004,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3005,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3006,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3007,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3008,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3009,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3010,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3011,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3012,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3013,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+3014,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+3015,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+3016,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+3017,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+3018,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+3019,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+3020,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+3021,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3022,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3023,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3024,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3025,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][4U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+3026,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3027,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3028,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+3029,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3030,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3031,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3032,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3033,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3034,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3035,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3036,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3037,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3038,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3039,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3040,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3041,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3042,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3043,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3044,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3045,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3046,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+3047,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+3048,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+3049,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+3050,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+3051,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+3052,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+3053,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+3054,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3055,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3056,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3057,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3058,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][5U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+3059,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3060,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3061,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+3062,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3063,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3064,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3065,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3066,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3067,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3068,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3069,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3070,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3071,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3072,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3073,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3074,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3075,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3076,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3077,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3078,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3079,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+3080,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+3081,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+3082,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+3083,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+3084,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+3085,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+3086,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+3087,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3088,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3089,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3090,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3091,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][6U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+3092,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3093,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3094,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+3095,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3096,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3097,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3098,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3099,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3100,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3101,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3102,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3103,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3104,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3105,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3106,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3107,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3108,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3109,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3110,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3111,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3112,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out),16);
        bufp->chgBit(oldp+3113,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.input_out_valid));
        bufp->chgSData(oldp+3114,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.weight_out),16);
        bufp->chgSData(oldp+3115,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.psum_out),16);
        bufp->chgBit(oldp+3116,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.switch_out));
        bufp->chgBit(oldp+3117,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__overflow_out));
        bufp->chgSData(oldp+3118,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active),16);
        bufp->chgSData(oldp+3119,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer),16);
        bufp->chgSData(oldp+3120,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3121,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3122,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3123,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3124,((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__switch_link
                                   [6U][7U] ? (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_buffer)
                                    : (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__weight_in_active))),16);
        bufp->chgSData(oldp+3125,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3126,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3127,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+3128,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3129,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3130,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3131,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3132,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3133,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3134,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3135,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3136,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3137,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3138,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3139,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3140,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3141,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3142,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3143,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3144,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+3145,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3146,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3147,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3148,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3149,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3150,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgIData(oldp+3151,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        __Vtemp_h487341b4__0[0U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                     [1U] << 0x10U) 
                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                    [0U]);
        __Vtemp_h487341b4__0[1U] = (((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                      [2U]) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                               [1U] 
                                               >> 0x10U)) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                   [6U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                  [5U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                   [3U]))))) 
                                       << 0x10U));
        __Vtemp_h487341b4__0[2U] = (((IData)((((QData)((IData)(
                                                               ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                 [6U] 
                                                                 << 0x10U) 
                                                                | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                [5U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                  [4U] 
                                                                  << 0x10U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                 [3U]))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                               [6U] 
                                                                               << 0x10U) 
                                                                              | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                              [5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                               [3U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h487341b4__0[3U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                     [7U] << 0x10U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                   [5U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                     [4U] 
                                                                     << 0x10U) 
                                                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                    [3U])))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
        bufp->chgWData(oldp+3152,(__Vtemp_h487341b4__0),128);
        __Vtemp_h70dbb7ea__0[0U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                     [1U] << 0x10U) 
                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                    [0U]);
        __Vtemp_h70dbb7ea__0[1U] = (((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                      [2U]) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                               [1U] 
                                               >> 0x10U)) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                   [6U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                  [5U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                   [3U]))))) 
                                       << 0x10U));
        __Vtemp_h70dbb7ea__0[2U] = (((IData)((((QData)((IData)(
                                                               ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                 [6U] 
                                                                 << 0x10U) 
                                                                | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                [5U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                  [4U] 
                                                                  << 0x10U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                 [3U]))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                               [6U] 
                                                                               << 0x10U) 
                                                                              | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                              [5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                               [3U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h70dbb7ea__0[3U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                     [7U] << 0x10U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                   [5U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                     [4U] 
                                                                     << 0x10U) 
                                                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                    [3U])))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
        bufp->chgWData(oldp+3156,(__Vtemp_h70dbb7ea__0),128);
        __Vtemp_h4b8ff4c7__0[0U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                     [1U] << 0x10U) 
                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                    [0U]);
        __Vtemp_h4b8ff4c7__0[1U] = (((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                      [2U]) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                               [1U] 
                                               >> 0x10U)) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                   [6U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                  [5U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                   [3U]))))) 
                                       << 0x10U));
        __Vtemp_h4b8ff4c7__0[2U] = (((IData)((((QData)((IData)(
                                                               ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                 [6U] 
                                                                 << 0x10U) 
                                                                | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                [5U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                  [4U] 
                                                                  << 0x10U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                 [3U]))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                               [6U] 
                                                                               << 0x10U) 
                                                                              | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                              [5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                               [3U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h4b8ff4c7__0[3U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                     [7U] << 0x10U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                   [5U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                     [4U] 
                                                                     << 0x10U) 
                                                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                    [3U])))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
        bufp->chgWData(oldp+3160,(__Vtemp_h4b8ff4c7__0),128);
        __Vtemp_hbb18cbb1__0[0U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                     [1U] << 0x10U) 
                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                    [0U]);
        __Vtemp_hbb18cbb1__0[1U] = (((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                      [2U]) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                               [1U] 
                                               >> 0x10U)) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                   [6U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                  [5U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                   [3U]))))) 
                                       << 0x10U));
        __Vtemp_hbb18cbb1__0[2U] = (((IData)((((QData)((IData)(
                                                               ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                 [6U] 
                                                                 << 0x10U) 
                                                                | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                [5U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                  [4U] 
                                                                  << 0x10U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                 [3U]))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                               [6U] 
                                                                               << 0x10U) 
                                                                              | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                              [5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                               [3U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hbb18cbb1__0[3U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                     [7U] << 0x10U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                   [5U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                     [4U] 
                                                                     << 0x10U) 
                                                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                    [3U])))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
        bufp->chgWData(oldp+3164,(__Vtemp_hbb18cbb1__0),128);
        __Vtemp_hf62f48a3__0[0U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                     [1U] << 0x10U) 
                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                    [0U]);
        __Vtemp_hf62f48a3__0[1U] = (((0xffffU & vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                      [2U]) | (vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                               [1U] 
                                               >> 0x10U)) 
                                    | ((IData)((((QData)((IData)(
                                                                 ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                   [6U] 
                                                                   << 0x10U) 
                                                                  | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                  [5U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                   [3U]))))) 
                                       << 0x10U));
        __Vtemp_hf62f48a3__0[2U] = (((IData)((((QData)((IData)(
                                                               ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                 [6U] 
                                                                 << 0x10U) 
                                                                | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                [5U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                  [4U] 
                                                                  << 0x10U) 
                                                                 | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                 [3U]))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                               [6U] 
                                                                               << 0x10U) 
                                                                              | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                              [5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                               [3U])))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hf62f48a3__0[3U] = ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                     [7U] << 0x10U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                   [5U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                     [4U] 
                                                                     << 0x10U) 
                                                                    | vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                    [3U])))) 
                                                >> 0x20U)) 
                                       >> 0x10U));
        bufp->chgWData(oldp+3168,(__Vtemp_hf62f48a3__0),128);
        bufp->chgSData(oldp+3172,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [2U]),16);
        bufp->chgSData(oldp+3173,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [3U]),16);
        bufp->chgSData(oldp+3174,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [4U]),16);
        bufp->chgSData(oldp+3175,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [5U]),16);
        bufp->chgSData(oldp+3176,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [6U]),16);
        bufp->chgSData(oldp+3177,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [7U]),16);
        bufp->chgSData(oldp+3178,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [2U]),16);
        bufp->chgSData(oldp+3179,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [3U]),16);
        bufp->chgSData(oldp+3180,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [4U]),16);
        bufp->chgSData(oldp+3181,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [5U]),16);
        bufp->chgSData(oldp+3182,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [6U]),16);
        bufp->chgSData(oldp+3183,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [7U]),16);
        bufp->chgSData(oldp+3184,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[0]),16);
        bufp->chgSData(oldp+3185,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[1]),16);
        bufp->chgSData(oldp+3186,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[2]),16);
        bufp->chgSData(oldp+3187,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[3]),16);
        bufp->chgSData(oldp+3188,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[4]),16);
        bufp->chgSData(oldp+3189,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[5]),16);
        bufp->chgSData(oldp+3190,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[6]),16);
        bufp->chgSData(oldp+3191,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[7]),16);
        bufp->chgSData(oldp+3192,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[0]),16);
        bufp->chgSData(oldp+3193,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[1]),16);
        bufp->chgSData(oldp+3194,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[2]),16);
        bufp->chgSData(oldp+3195,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[3]),16);
        bufp->chgSData(oldp+3196,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[4]),16);
        bufp->chgSData(oldp+3197,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[5]),16);
        bufp->chgSData(oldp+3198,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[6]),16);
        bufp->chgSData(oldp+3199,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[7]),16);
        bufp->chgSData(oldp+3200,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[0]),16);
        bufp->chgSData(oldp+3201,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[1]),16);
        bufp->chgSData(oldp+3202,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[2]),16);
        bufp->chgSData(oldp+3203,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[3]),16);
        bufp->chgSData(oldp+3204,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[4]),16);
        bufp->chgSData(oldp+3205,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[5]),16);
        bufp->chgSData(oldp+3206,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[6]),16);
        bufp->chgSData(oldp+3207,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[7]),16);
        bufp->chgSData(oldp+3208,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[0]),16);
        bufp->chgSData(oldp+3209,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[1]),16);
        bufp->chgSData(oldp+3210,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[2]),16);
        bufp->chgSData(oldp+3211,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[3]),16);
        bufp->chgSData(oldp+3212,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[4]),16);
        bufp->chgSData(oldp+3213,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[5]),16);
        bufp->chgSData(oldp+3214,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[6]),16);
        bufp->chgSData(oldp+3215,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[7]),16);
        bufp->chgSData(oldp+3216,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[0]),16);
        bufp->chgSData(oldp+3217,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[1]),16);
        bufp->chgSData(oldp+3218,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[2]),16);
        bufp->chgSData(oldp+3219,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[3]),16);
        bufp->chgSData(oldp+3220,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[4]),16);
        bufp->chgSData(oldp+3221,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[5]),16);
        bufp->chgSData(oldp+3222,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[6]),16);
        bufp->chgSData(oldp+3223,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[7]),16);
        bufp->chgSData(oldp+3224,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0]),16);
        bufp->chgSData(oldp+3225,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1]),16);
        bufp->chgSData(oldp+3226,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2]),16);
        bufp->chgSData(oldp+3227,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3]),16);
        bufp->chgSData(oldp+3228,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4]),16);
        bufp->chgSData(oldp+3229,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5]),16);
        bufp->chgSData(oldp+3230,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6]),16);
        bufp->chgSData(oldp+3231,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7]),16);
        bufp->chgSData(oldp+3232,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0]),16);
        bufp->chgSData(oldp+3233,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1]),16);
        bufp->chgSData(oldp+3234,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2]),16);
        bufp->chgSData(oldp+3235,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3]),16);
        bufp->chgSData(oldp+3236,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4]),16);
        bufp->chgSData(oldp+3237,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5]),16);
        bufp->chgSData(oldp+3238,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6]),16);
        bufp->chgSData(oldp+3239,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7]),16);
        bufp->chgSData(oldp+3240,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [0U]),16);
        bufp->chgSData(oldp+3241,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [0U]),16);
        bufp->chgSData(oldp+3242,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [1U]),16);
        bufp->chgSData(oldp+3243,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [1U]),16);
        bufp->chgSData(oldp+3244,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [2U]),16);
        bufp->chgSData(oldp+3245,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [2U]),16);
        bufp->chgSData(oldp+3246,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [3U]),16);
        bufp->chgSData(oldp+3247,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [3U]),16);
        bufp->chgSData(oldp+3248,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [4U]),16);
        bufp->chgSData(oldp+3249,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [4U]),16);
        bufp->chgSData(oldp+3250,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [5U]),16);
        bufp->chgSData(oldp+3251,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [5U]),16);
        bufp->chgSData(oldp+3252,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [6U]),16);
        bufp->chgSData(oldp+3253,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [6U]),16);
        bufp->chgSData(oldp+3254,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                  [7U]),16);
        bufp->chgSData(oldp+3255,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                  [7U]),16);
        bufp->chgSData(oldp+3256,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [2U]),16);
        bufp->chgSData(oldp+3257,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [3U]),16);
        bufp->chgSData(oldp+3258,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [4U]),16);
        bufp->chgSData(oldp+3259,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [5U]),16);
        bufp->chgSData(oldp+3260,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [6U]),16);
        bufp->chgSData(oldp+3261,(vlSelf->tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [7U]),16);
        bufp->chgSData(oldp+3262,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3263,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3264,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3265,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3266,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3267,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                               + VL_EXTENDS_II(17,16, 
                                                               (((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
        bufp->chgSData(oldp+3268,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3269,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3270,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3271,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3272,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3273,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3274,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3275,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3276,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3277,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3278,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3279,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3280,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3281,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3282,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3283,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3284,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3285,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3286,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3287,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3288,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3289,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3290,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3291,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3292,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3293,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3294,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3295,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3296,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3297,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3298,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3299,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3300,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3301,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3302,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3303,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3304,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3305,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3306,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3307,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3308,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3309,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3310,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3311,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3312,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3313,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3314,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3315,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3316,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3317,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3318,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3319,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3320,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3321,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3322,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3323,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3324,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3325,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3326,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3327,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3328,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3329,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3330,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3331,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3332,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3333,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3334,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3335,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3336,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3337,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3338,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3339,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3340,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3341,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3342,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3343,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3344,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3345,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3346,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3347,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3348,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3349,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3350,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3351,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3352,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3353,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3354,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3355,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3356,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3357,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3358,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3359,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3360,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3361,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3362,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3363,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3364,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3365,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3366,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3367,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3368,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3369,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3370,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3371,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3372,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3373,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3374,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3375,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3376,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3377,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3378,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3379,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3380,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3381,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3382,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3383,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3384,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3385,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3386,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3387,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3388,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
        bufp->chgSData(oldp+3389,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
        bufp->chgBit(oldp+3390,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mul_overflow));
        bufp->chgBit(oldp+3391,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3392,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3393,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
        bufp->chgSData(oldp+3394,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
        bufp->chgCData(oldp+3395,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
        bufp->chgCData(oldp+3396,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3397,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3398,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3399,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3400,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3401,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgIData(oldp+3402,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
        bufp->chgIData(oldp+3403,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
        bufp->chgSData(oldp+3404,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
        bufp->chgCData(oldp+3405,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3406,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+3407,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3408,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3409,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3410,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3411,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3412,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3413,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3414,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3415,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3416,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3417,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3418,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3419,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3420,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3421,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3422,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3423,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3424,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3425,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3426,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3427,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3428,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3429,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3430,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3431,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3432,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3433,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3434,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3435,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3436,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3437,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3438,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3439,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3440,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3441,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3442,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
        bufp->chgBit(oldp+3443,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__add_overflow));
        bufp->chgSData(oldp+3444,((((IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                    << 8U) | (IData)(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
        bufp->chgIData(oldp+3445,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
        bufp->chgSData(oldp+3446,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
        bufp->chgCData(oldp+3447,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
        bufp->chgCData(oldp+3448,(vlSymsp->TOP__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    }
    bufp->chgBit(oldp+3449,(vlSelf->clk));
    bufp->chgBit(oldp+3450,(vlSelf->rst_n));
    bufp->chgBit(oldp+3451,(vlSelf->ins_valid));
    bufp->chgIData(oldp+3452,(vlSelf->ins),32);
    bufp->chgBit(oldp+3453,(vlSelf->ub_wr_ext_valid));
    bufp->chgSData(oldp+3454,(vlSelf->ub_wr_ext_addr),16);
    bufp->chgSData(oldp+3455,(vlSelf->ub_wr_ext_data),16);
    bufp->chgSData(oldp+3456,(vlSelf->learn_rate_in),16);
    bufp->chgSData(oldp+3457,(vlSelf->vpu_factor_in),16);
    bufp->chgSData(oldp+3458,(vlSelf->two_div_N_in),16);
    bufp->chgSData(oldp+3459,(vlSelf->vpu_data_out_0),16);
    bufp->chgSData(oldp+3460,(vlSelf->vpu_data_out_1),16);
    bufp->chgSData(oldp+3461,(vlSelf->vpu_data_out_2),16);
    bufp->chgSData(oldp+3462,(vlSelf->vpu_data_out_3),16);
    bufp->chgSData(oldp+3463,(vlSelf->vpu_data_out_4),16);
    bufp->chgSData(oldp+3464,(vlSelf->vpu_data_out_5),16);
    bufp->chgSData(oldp+3465,(vlSelf->vpu_data_out_6),16);
    bufp->chgSData(oldp+3466,(vlSelf->vpu_data_out_7),16);
    bufp->chgBit(oldp+3467,(vlSelf->vpu_data_valid_out_0));
    bufp->chgBit(oldp+3468,(vlSelf->vpu_data_valid_out_1));
    bufp->chgBit(oldp+3469,(vlSelf->vpu_data_valid_out_2));
    bufp->chgBit(oldp+3470,(vlSelf->vpu_data_valid_out_3));
    bufp->chgBit(oldp+3471,(vlSelf->vpu_data_valid_out_4));
    bufp->chgBit(oldp+3472,(vlSelf->vpu_data_valid_out_5));
    bufp->chgBit(oldp+3473,(vlSelf->vpu_data_valid_out_6));
    bufp->chgBit(oldp+3474,(vlSelf->vpu_data_valid_out_7));
    bufp->chgSData(oldp+3475,(vlSelf->sys_data_out_0),16);
    bufp->chgSData(oldp+3476,(vlSelf->sys_data_out_1),16);
    bufp->chgSData(oldp+3477,(vlSelf->sys_data_out_2),16);
    bufp->chgSData(oldp+3478,(vlSelf->sys_data_out_3),16);
    bufp->chgSData(oldp+3479,(vlSelf->sys_data_out_4),16);
    bufp->chgSData(oldp+3480,(vlSelf->sys_data_out_5),16);
    bufp->chgSData(oldp+3481,(vlSelf->sys_data_out_6),16);
    bufp->chgSData(oldp+3482,(vlSelf->sys_data_out_7),16);
    bufp->chgBit(oldp+3483,(vlSelf->sys_valid_out_0));
    bufp->chgBit(oldp+3484,(vlSelf->sys_valid_out_1));
    bufp->chgBit(oldp+3485,(vlSelf->sys_valid_out_2));
    bufp->chgBit(oldp+3486,(vlSelf->sys_valid_out_3));
    bufp->chgBit(oldp+3487,(vlSelf->sys_valid_out_4));
    bufp->chgBit(oldp+3488,(vlSelf->sys_valid_out_5));
    bufp->chgBit(oldp+3489,(vlSelf->sys_valid_out_6));
    bufp->chgBit(oldp+3490,(vlSelf->sys_valid_out_7));
    bufp->chgSData(oldp+3491,(vlSelf->ub_rd_input_data_out_0),16);
    bufp->chgSData(oldp+3492,(vlSelf->ub_rd_input_data_out_1),16);
    bufp->chgBit(oldp+3493,(vlSelf->ub_rd_input_valid_out_0));
    bufp->chgBit(oldp+3494,(vlSelf->ub_rd_input_valid_out_1));
    bufp->chgSData(oldp+3495,(vlSelf->ub_rd_weight_data_out_0),16);
    bufp->chgSData(oldp+3496,(vlSelf->ub_rd_weight_data_out_1),16);
    bufp->chgBit(oldp+3497,(vlSelf->ub_rd_weight_valid_out_0));
    bufp->chgBit(oldp+3498,(vlSelf->ub_rd_weight_valid_out_1));
    bufp->chgSData(oldp+3499,(vlSelf->ub_rd_bias_data_out_0),16);
    bufp->chgSData(oldp+3500,(vlSelf->ub_rd_bias_data_out_1),16);
    bufp->chgSData(oldp+3501,(vlSelf->ub_rd_Y_data_out_0),16);
    bufp->chgSData(oldp+3502,(vlSelf->ub_rd_Y_data_out_1),16);
    bufp->chgSData(oldp+3503,(vlSelf->ub_rd_H_data_out_0),16);
    bufp->chgSData(oldp+3504,(vlSelf->ub_rd_H_data_out_1),16);
    bufp->chgSData(oldp+3505,(vlSelf->ub_rd_col_size_out),16);
    bufp->chgBit(oldp+3506,(vlSelf->ub_rd_col_size_valid_out));
    bufp->chgSData(oldp+3507,(((IData)(vlSelf->ub_wr_ext_valid)
                                ? (IData)(vlSelf->ub_wr_ext_data)
                                : (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_data_in_1))),16);
    bufp->chgSData(oldp+3508,(((IData)(vlSelf->ub_wr_ext_valid)
                                ? (IData)(vlSelf->ub_wr_ext_addr)
                                : (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_addr_in_1))),16);
    bufp->chgBit(oldp+3509,(((IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_valid_in_1) 
                             | (IData)(vlSelf->ub_wr_ext_valid))));
    bufp->chgCData(oldp+3510,((vlSelf->ins >> 0x1cU)),4);
    __Vtemp_h4e766074__0[0U] = ((((IData)(vlSelf->ub_wr_ext_valid)
                                   ? (IData)(vlSelf->ub_wr_ext_data)
                                   : (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_data_in_1)) 
                                 << 0x10U) | (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_data_in_0));
    __Vtemp_h4e766074__0[1U] = 0U;
    __Vtemp_h4e766074__0[2U] = 0U;
    __Vtemp_h4e766074__0[3U] = 0U;
    bufp->chgWData(oldp+3511,(__Vtemp_h4e766074__0),128);
    __Vtemp_h5bd92131__0[0U] = ((((IData)(vlSelf->ub_wr_ext_valid)
                                   ? (IData)(vlSelf->ub_wr_ext_addr)
                                   : (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_addr_in_1)) 
                                 << 0x10U) | (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_addr_in_0));
    __Vtemp_h5bd92131__0[1U] = 0U;
    __Vtemp_h5bd92131__0[2U] = 0U;
    __Vtemp_h5bd92131__0[3U] = 0U;
    bufp->chgWData(oldp+3515,(__Vtemp_h5bd92131__0),128);
    bufp->chgCData(oldp+3519,(((((IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_valid_in_1) 
                                 | (IData)(vlSelf->ub_wr_ext_valid)) 
                                << 1U) | (IData)(vlSelf->tpu_isa_confreg__DOT__ub_wr_host_valid_in_0))),8);
    bufp->chgBit(oldp+3520,((1U & (~ (IData)(vlSelf->rst_n)))));
}

void Vtpu_isa_confreg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtpu_isa_confreg___024root__trace_cleanup\n"); );
    // Init
    Vtpu_isa_confreg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtpu_isa_confreg___024root*>(voidSelf);
    Vtpu_isa_confreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
