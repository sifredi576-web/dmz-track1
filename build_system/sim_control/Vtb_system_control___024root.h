// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_system_control.h for the primary calling header

#ifndef VERILATED_VTB_SYSTEM_CONTROL___024ROOT_H_
#define VERILATED_VTB_SYSTEM_CONTROL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_system_control__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_system_control___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_system_control__DOT__clk;
    CData/*0:0*/ tb_system_control__DOT__memclk;
    CData/*0:0*/ tb_system_control__DOT__reset;
    CData/*0:0*/ tb_system_control__DOT__rx;
    CData/*0:0*/ tb_system_control__DOT__ms;
    CData/*0:0*/ tb_system_control__DOT__wav_source;
    CData/*0:0*/ tb_system_control__DOT__audio_paused;
    CData/*3:0*/ tb_system_control__DOT__volume;
    CData/*0:0*/ tb_system_control__DOT__valid;
    CData/*0:0*/ tb_system_control__DOT__restart;
    CData/*0:0*/ tb_system_control__DOT__phase;
    CData/*7:0*/ tb_system_control__DOT__byte_rx;
    CData/*7:0*/ tb_system_control__DOT__last;
    CData/*1:0*/ tb_system_control__DOT__mode;
    CData/*0:0*/ tb_system_control__DOT__uart__DOT__r1;
    CData/*0:0*/ tb_system_control__DOT__uart__DOT__r2;
    CData/*1:0*/ tb_system_control__DOT__uart__DOT__state;
    CData/*2:0*/ tb_system_control__DOT__uart__DOT__bitno;
    CData/*7:0*/ tb_system_control__DOT__uart__DOT__shift;
    CData/*1:0*/ tb_system_control__DOT__control__DOT__ms;
    CData/*1:0*/ tb_system_control__DOT__control__DOT__cs;
    CData/*0:0*/ tb_system_control__DOT__cdc__DOT__request;
    CData/*0:0*/ tb_system_control__DOT__cdc__DOT__ack;
    CData/*1:0*/ tb_system_control__DOT__cdc__DOT__req_sync;
    CData/*1:0*/ tb_system_control__DOT__cdc__DOT__ack_sync;
    CData/*1:0*/ tb_system_control__DOT__cdc__DOT__settle;
    CData/*0:0*/ tb_system_control__DOT__cdc__DOT__waiting;
    CData/*0:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__request;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system_control__DOT__memclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system_control__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h6cf76a58__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system_control__DOT__restart__0;
    CData/*0:0*/ __Vtrigprevexpr_h105ff007__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_system_control__DOT__count;
    SData/*15:0*/ tb_system_control__DOT__uart__DOT__count;
    SData/*15:0*/ tb_system_control__DOT__control__DOT__restart_count;
    SData/*15:0*/ tb_system_control__DOT__cdc__DOT__interval_count;
    IData/*31:0*/ tb_system_control__DOT__seq;
    VlWide<4>/*127:0*/ tb_system_control__DOT__captured;
    IData/*31:0*/ tb_system_control__DOT__snapshots;
    IData/*24:0*/ tb_system_control__DOT__control__DOT__second_count;
    VlWide<4>/*127:0*/ tb_system_control__DOT__cdc__DOT__held;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h623af98b__0;
    VlTriggerScheduler __VtrigSched_hf8c0b488__0;
    VlTriggerScheduler __VtrigSched_h8d51ef31__0;
    VlTriggerScheduler __VtrigSched_h98683729__0;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_system_control__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_system_control___024root(Vtb_system_control__Syms* symsp, const char* v__name);
    ~Vtb_system_control___024root();
    VL_UNCOPYABLE(Vtb_system_control___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
