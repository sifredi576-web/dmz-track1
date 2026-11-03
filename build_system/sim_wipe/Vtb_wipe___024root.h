// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_wipe.h for the primary calling header

#ifndef VERILATED_VTB_WIPE___024ROOT_H_
#define VERILATED_VTB_WIPE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_wipe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_wipe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_wipe__DOT__clk;
    CData/*0:0*/ tb_wipe__DOT__reset;
    CData/*0:0*/ tb_wipe__DOT__ft;
    CData/*0:0*/ tb_wipe__DOT__lv;
    CData/*0:0*/ tb_wipe__DOT__ack;
    CData/*0:0*/ tb_wipe__DOT__req;
    CData/*0:0*/ tb_wipe__DOT__display;
    CData/*0:0*/ tb_wipe__DOT__front;
    CData/*0:0*/ tb_wipe__DOT__fault;
    CData/*0:0*/ tb_wipe__DOT__rsp;
    CData/*0:0*/ tb_wipe__DOT__monitor;
    CData/*0:0*/ tb_wipe__DOT__expected_bank;
    CData/*1:0*/ tb_wipe__DOT__dut__DOT__state;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__ft1;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__ft2;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__last_frame;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__frame_pending;
    CData/*5:0*/ tb_wipe__DOT__dut__DOT__flush;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__back_ready;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__transition_active;
    CData/*2:0*/ tb_wipe__DOT__dut__DOT__beat;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__video_req;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__transaction_last;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__prefetched;
    CData/*0:0*/ tb_wipe__DOT__dut__DOT__enabled;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wipe__DOT__ack__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ tb_wipe__DOT__used;
    SData/*8:0*/ tb_wipe__DOT__dut__DOT__wipe_words;
    SData/*8:0*/ tb_wipe__DOT__dut__DOT__rd_x;
    IData/*20:0*/ tb_wipe__DOT__addr;
    IData/*31:0*/ tb_wipe__DOT__swaps;
    IData/*31:0*/ tb_wipe__DOT__step;
    IData/*31:0*/ tb_wipe__DOT__reads;
    IData/*31:0*/ tb_wipe__DOT__dut__DOT__frames_written;
    IData/*31:0*/ tb_wipe__DOT__dut__DOT__dma_reads;
    IData/*17:0*/ tb_wipe__DOT__dut__DOT__rd_addr;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hedfbc5c1__0;
    VlTriggerScheduler __VtrigSched_hedfbcd30__0;
    VlTriggerScheduler __VtrigSched_hd4958d8b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_wipe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_wipe___024root(Vtb_wipe__Syms* symsp, const char* v__name);
    ~Vtb_wipe___024root();
    VL_UNCOPYABLE(Vtb_wipe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
