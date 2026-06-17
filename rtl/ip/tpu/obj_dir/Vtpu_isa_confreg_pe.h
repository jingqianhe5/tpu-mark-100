// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtpu_isa_confreg.h for the primary calling header

#ifndef VERILATED_VTPU_ISA_CONFREG_PE_H_
#define VERILATED_VTPU_ISA_CONFREG_PE_H_  // guard

#include "verilated.h"

class Vtpu_isa_confreg__Syms;

class Vtpu_isa_confreg_pe final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(input_in_valid,0,0);
    VL_OUT8(input_out_valid,0,0);
    VL_IN8(weight_valid,0,0);
    VL_IN8(switch_in,0,0);
    VL_OUT8(switch_out,0,0);
    VL_IN8(pe_enabled,0,0);
    VL_OUT8(__PVT__overflow_out,0,0);
    CData/*0:0*/ __PVT__mul_overflow;
    CData/*0:0*/ __PVT__add_overflow;
    CData/*7:0*/ __PVT__mult__DOT__res_zoom__DOT__outi;
    CData/*7:0*/ __PVT__mult__DOT__res_zoom__DOT__outf;
    CData/*0:0*/ __PVT__adder__DOT__ina_zoom__DOT__overflow;
    CData/*7:0*/ __PVT__adder__DOT__ina_zoom__DOT__ini;
    CData/*7:0*/ __PVT__adder__DOT__ina_zoom__DOT__outi;
    CData/*7:0*/ __PVT__adder__DOT__ina_zoom__DOT__outf;
    CData/*0:0*/ __PVT__adder__DOT__inb_zoom__DOT__overflow;
    CData/*7:0*/ __PVT__adder__DOT__inb_zoom__DOT__ini;
    CData/*7:0*/ __PVT__adder__DOT__inb_zoom__DOT__outi;
    CData/*7:0*/ __PVT__adder__DOT__inb_zoom__DOT__outf;
    CData/*7:0*/ __PVT__adder__DOT__res_zoom__DOT__outi;
    CData/*7:0*/ __PVT__adder__DOT__res_zoom__DOT__outf;
    VL_IN16(input_in,15,0);
    VL_OUT16(input_out,15,0);
    VL_IN16(weight_in,15,0);
    VL_OUT16(weight_out,15,0);
    VL_IN16(psum_in,15,0);
    VL_OUT16(psum_out,15,0);
    SData/*15:0*/ __PVT__weight_in_active;
    SData/*15:0*/ __PVT__weight_in_buffer;
    SData/*15:0*/ __PVT__mult__DOT__res_zoom__DOT__ini;
    SData/*15:0*/ __PVT__adder__DOT__ina_zoom__DOT__inr;
    SData/*15:0*/ __PVT__adder__DOT__inb_zoom__DOT__inr;
    SData/*8:0*/ __PVT__adder__DOT__res_zoom__DOT__ini;
    IData/*31:0*/ __PVT__mult__DOT__res;
    IData/*23:0*/ __PVT__mult__DOT__res_zoom__DOT__inr;
    IData/*16:0*/ __PVT__adder__DOT__res_zoom__DOT__inr;

    // INTERNAL VARIABLES
    Vtpu_isa_confreg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtpu_isa_confreg_pe(Vtpu_isa_confreg__Syms* symsp, const char* v__name);
    ~Vtpu_isa_confreg_pe();
    VL_UNCOPYABLE(Vtpu_isa_confreg_pe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
