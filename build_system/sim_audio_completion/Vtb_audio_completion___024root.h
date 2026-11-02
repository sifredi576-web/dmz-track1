// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_audio_completion.h for the primary calling header

#ifndef VERILATED_VTB_AUDIO_COMPLETION___024ROOT_H_
#define VERILATED_VTB_AUDIO_COMPLETION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_audio_completion__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_audio_completion___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_audio_completion__DOT__clk;
    CData/*0:0*/ tb_audio_completion__DOT__reset;
    CData/*0:0*/ tb_audio_completion__DOT__flushing;
    CData/*0:0*/ tb_audio_completion__DOT__pop;
    CData/*7:0*/ tb_audio_completion__DOT__dut__DOT__ticket;
    CData/*2:0*/ tb_audio_completion__DOT__dut__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_audio_completion__DOT__dut__DOT__consumed;
    IData/*31:0*/ __VactIterCount;
    QData/*41:0*/ tb_audio_completion__DOT__params;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h570dfadf__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_audio_completion__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_audio_completion___024root(Vtb_audio_completion__Syms* symsp, const char* v__name);
    ~Vtb_audio_completion___024root();
    VL_UNCOPYABLE(Vtb_audio_completion___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
