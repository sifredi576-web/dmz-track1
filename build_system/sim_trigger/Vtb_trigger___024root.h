// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_trigger.h for the primary calling header

#ifndef VERILATED_VTB_TRIGGER___024ROOT_H_
#define VERILATED_VTB_TRIGGER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_trigger__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_trigger___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_trigger__DOT__clk;
    CData/*0:0*/ tb_trigger__DOT__reset;
    CData/*0:0*/ tb_trigger__DOT__ce;
    CData/*0:0*/ tb_trigger__DOT__ft;
    CData/*0:0*/ tb_trigger__DOT__trig;
    CData/*0:0*/ tb_trigger__DOT__periodic_test;
    CData/*0:0*/ tb_trigger__DOT__old_front;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__front;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__page_ready;
    CData/*6:0*/ tb_trigger__DOT__dut__DOT__wp;
    CData/*2:0*/ tb_trigger__DOT__dut__DOT__decimate;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__capturing;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__negative_seen;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__trigger_mode_q;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__trigger_start;
    CData/*0:0*/ tb_trigger__DOT__dut__DOT__take_sample;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_trigger__DOT__sample;
    SData/*11:0*/ tb_trigger__DOT__dut__DOT__trigger_wait;
    IData/*31:0*/ tb_trigger__DOT__fallback_starts;
    IData/*31:0*/ tb_trigger__DOT__starts;
    IData/*31:0*/ tb_trigger__DOT__swaps;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 128> tb_trigger__DOT__reference_page;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2dc543e8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_trigger__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_trigger___024root(Vtb_trigger__Syms* symsp, const char* v__name);
    ~Vtb_trigger___024root();
    VL_UNCOPYABLE(Vtb_trigger___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
