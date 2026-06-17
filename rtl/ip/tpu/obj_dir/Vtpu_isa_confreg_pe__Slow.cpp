// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtpu_isa_confreg.h for the primary calling header

#include "verilated.h"

#include "Vtpu_isa_confreg__Syms.h"
#include "Vtpu_isa_confreg_pe.h"

void Vtpu_isa_confreg_pe___ctor_var_reset(Vtpu_isa_confreg_pe* vlSelf);

Vtpu_isa_confreg_pe::Vtpu_isa_confreg_pe(Vtpu_isa_confreg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtpu_isa_confreg_pe___ctor_var_reset(this);
}

void Vtpu_isa_confreg_pe::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtpu_isa_confreg_pe::~Vtpu_isa_confreg_pe() {
}
