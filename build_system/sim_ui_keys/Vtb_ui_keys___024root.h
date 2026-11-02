// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ui_keys.h for the primary calling header

#ifndef VERILATED_VTB_UI_KEYS___024ROOT_H_
#define VERILATED_VTB_UI_KEYS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ui_keys__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ui_keys___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ui_keys__DOT__clk;
    CData/*0:0*/ tb_ui_keys__DOT__reset;
    CData/*0:0*/ tb_ui_keys__DOT__kv;
    CData/*0:0*/ tb_ui_keys__DOT__menu;
    CData/*0:0*/ tb_ui_keys__DOT__active;
    CData/*0:0*/ tb_ui_keys__DOT__paused;
    CData/*0:0*/ tb_ui_keys__DOT__muted;
    CData/*0:0*/ tb_ui_keys__DOT__uv;
    CData/*3:0*/ tb_ui_keys__DOT__key;
    CData/*7:0*/ tb_ui_keys__DOT__ub;
    CData/*0:0*/ tb_ui_keys__DOT__cv;
    CData/*0:0*/ tb_ui_keys__DOT__iv;
    CData/*7:0*/ tb_ui_keys__DOT__last_command;
    CData/*3:0*/ tb_ui_keys__DOT__last_action;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__uart_ui;
    CData/*0:0*/ tb_ui_keys__DOT__dut__DOT__pending;
    CData/*3:0*/ tb_ui_keys__DOT__dut__DOT__held;
    CData/*7:0*/ tb_ui_keys__DOT__dut__DOT__command;
    CData/*3:0*/ tb_ui_keys__DOT__dut__DOT__action;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ui_keys__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ui_keys__DOT__commands;
    IData/*31:0*/ tb_ui_keys__DOT__events;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3a50ad45__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ui_keys__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ui_keys___024root(Vtb_ui_keys__Syms* symsp, const char* v__name);
    ~Vtb_ui_keys___024root();
    VL_UNCOPYABLE(Vtb_ui_keys___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
