// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pair.h for the primary calling header

#ifndef VERILATED_VTB_PAIR___024ROOT_H_
#define VERILATED_VTB_PAIR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pair__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pair___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pair__DOT__clk;
    CData/*0:0*/ tb_pair__DOT__reset;
    CData/*0:0*/ tb_pair__DOT__enable;
    CData/*0:0*/ tb_pair__DOT__found;
    CData/*3:0*/ tb_pair__DOT__pi;
    CData/*0:0*/ tb_pair__DOT__request;
    CData/*3:0*/ tb_pair__DOT__idx;
    CData/*0:0*/ tb_pair__DOT__dut__DOT__was_enabled;
    CData/*0:0*/ tb_pair__DOT__dut__DOT__pending;
    CData/*4:0*/ tb_pair__DOT__dut__DOT__settle;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pair__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_pair__DOT__swaps;
    IData/*31:0*/ tb_pair__DOT__n;
    IData/*31:0*/ tb_pair__DOT__dut__DOT__last_swaps;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h01d94f08__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_pair__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pair___024root(Vtb_pair__Syms* symsp, const char* v__name);
    ~Vtb_pair___024root();
    VL_UNCOPYABLE(Vtb_pair___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
