// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTPU_ISA_CONFREG_H_
#define VERILATED_VTPU_ISA_CONFREG_H_  // guard

#include "verilated.h"

class Vtpu_isa_confreg__Syms;
class Vtpu_isa_confreg___024root;
class VerilatedVcdC;
class Vtpu_isa_confreg_pe;


// This class is the main interface to the Verilated model
class Vtpu_isa_confreg VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtpu_isa_confreg__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&ins_valid,0,0);
    VL_IN8(&ub_wr_ext_valid,0,0);
    VL_OUT8(&vpu_data_valid_out_0,0,0);
    VL_OUT8(&vpu_data_valid_out_1,0,0);
    VL_OUT8(&vpu_data_valid_out_2,0,0);
    VL_OUT8(&vpu_data_valid_out_3,0,0);
    VL_OUT8(&vpu_data_valid_out_4,0,0);
    VL_OUT8(&vpu_data_valid_out_5,0,0);
    VL_OUT8(&vpu_data_valid_out_6,0,0);
    VL_OUT8(&vpu_data_valid_out_7,0,0);
    VL_OUT8(&sys_valid_out_0,0,0);
    VL_OUT8(&sys_valid_out_1,0,0);
    VL_OUT8(&sys_valid_out_2,0,0);
    VL_OUT8(&sys_valid_out_3,0,0);
    VL_OUT8(&sys_valid_out_4,0,0);
    VL_OUT8(&sys_valid_out_5,0,0);
    VL_OUT8(&sys_valid_out_6,0,0);
    VL_OUT8(&sys_valid_out_7,0,0);
    VL_OUT8(&ub_rd_input_valid_out_0,0,0);
    VL_OUT8(&ub_rd_input_valid_out_1,0,0);
    VL_OUT8(&ub_rd_weight_valid_out_0,0,0);
    VL_OUT8(&ub_rd_weight_valid_out_1,0,0);
    VL_OUT8(&ub_rd_col_size_valid_out,0,0);
    VL_IN16(&ub_wr_ext_addr,15,0);
    VL_IN16(&ub_wr_ext_data,15,0);
    VL_IN16(&learn_rate_in,15,0);
    VL_IN16(&vpu_factor_in,15,0);
    VL_IN16(&two_div_N_in,15,0);
    VL_OUT16(&vpu_data_out_0,15,0);
    VL_OUT16(&vpu_data_out_1,15,0);
    VL_OUT16(&vpu_data_out_2,15,0);
    VL_OUT16(&vpu_data_out_3,15,0);
    VL_OUT16(&vpu_data_out_4,15,0);
    VL_OUT16(&vpu_data_out_5,15,0);
    VL_OUT16(&vpu_data_out_6,15,0);
    VL_OUT16(&vpu_data_out_7,15,0);
    VL_OUT16(&sys_data_out_0,15,0);
    VL_OUT16(&sys_data_out_1,15,0);
    VL_OUT16(&sys_data_out_2,15,0);
    VL_OUT16(&sys_data_out_3,15,0);
    VL_OUT16(&sys_data_out_4,15,0);
    VL_OUT16(&sys_data_out_5,15,0);
    VL_OUT16(&sys_data_out_6,15,0);
    VL_OUT16(&sys_data_out_7,15,0);
    VL_OUT16(&ub_rd_input_data_out_0,15,0);
    VL_OUT16(&ub_rd_input_data_out_1,15,0);
    VL_OUT16(&ub_rd_weight_data_out_0,15,0);
    VL_OUT16(&ub_rd_weight_data_out_1,15,0);
    VL_OUT16(&ub_rd_bias_data_out_0,15,0);
    VL_OUT16(&ub_rd_bias_data_out_1,15,0);
    VL_OUT16(&ub_rd_Y_data_out_0,15,0);
    VL_OUT16(&ub_rd_Y_data_out_1,15,0);
    VL_OUT16(&ub_rd_H_data_out_0,15,0);
    VL_OUT16(&ub_rd_H_data_out_1,15,0);
    VL_OUT16(&ub_rd_col_size_out,15,0);
    VL_IN(&ins,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst;
    Vtpu_isa_confreg_pe* const __PVT__tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtpu_isa_confreg___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtpu_isa_confreg(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtpu_isa_confreg(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtpu_isa_confreg();
  private:
    VL_UNCOPYABLE(Vtpu_isa_confreg);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
