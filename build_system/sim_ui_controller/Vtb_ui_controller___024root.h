// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ui_controller.h for the primary calling header

#ifndef VERILATED_VTB_UI_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_UI_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ui_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ui_controller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ui_controller__DOT__clk;
    CData/*0:0*/ tb_ui_controller__DOT__reset;
    CData/*0:0*/ tb_ui_controller__DOT__cfg;
    CData/*0:0*/ tb_ui_controller__DOT__ev;
    CData/*3:0*/ tb_ui_controller__DOT__event_code;
    CData/*7:0*/ tb_ui_controller__DOT__visible;
    CData/*7:0*/ tb_ui_controller__DOT__enabled;
    CData/*3:0*/ tb_ui_controller__DOT__operation;
    CData/*7:0*/ tb_ui_controller__DOT__target;
    CData/*7:0*/ tb_ui_controller__DOT__arg;
    CData/*7:0*/ tb_ui_controller__DOT__back;
    CData/*7:0*/ tb_ui_controller__DOT__audio;
    CData/*0:0*/ tb_ui_controller__DOT__quiz;
    CData/*2:0*/ tb_ui_controller__DOT__qid;
    CData/*1:0*/ tb_ui_controller__DOT__expected;
    CData/*0:0*/ tb_ui_controller__DOT__page_req;
    CData/*0:0*/ tb_ui_controller__DOT__audio_req;
    CData/*0:0*/ tb_ui_controller__DOT__control_req;
    CData/*0:0*/ tb_ui_controller__DOT__choice_valid;
    CData/*0:0*/ tb_ui_controller__DOT__notice_req;
    CData/*0:0*/ tb_ui_controller__DOT__notice_exit;
    CData/*0:0*/ tb_ui_controller__DOT__busy;
    CData/*4:0*/ tb_ui_controller__DOT__page_target;
    CData/*4:0*/ tb_ui_controller__DOT__current;
    CData/*5:0*/ tb_ui_controller__DOT__audio_target;
    CData/*1:0*/ tb_ui_controller__DOT__control_action;
    CData/*1:0*/ tb_ui_controller__DOT__choice;
    CData/*1:0*/ tb_ui_controller__DOT__priority_value;
    CData/*7:0*/ tb_ui_controller__DOT__control_arg;
    CData/*7:0*/ tb_ui_controller__DOT__answered;
    CData/*7:0*/ tb_ui_controller__DOT__correct;
    CData/*7:0*/ tb_ui_controller__DOT__error;
    CData/*2:0*/ tb_ui_controller__DOT__focus;
    CData/*3:0*/ tb_ui_controller__DOT__score;
    CData/*0:0*/ tb_ui_controller__DOT__page_accept;
    CData/*0:0*/ tb_ui_controller__DOT__loaded;
    CData/*0:0*/ tb_ui_controller__DOT__audio_accept;
    CData/*0:0*/ tb_ui_controller__DOT__control_accept;
    CData/*1:0*/ tb_ui_controller__DOT__last_priority;
    CData/*0:0*/ tb_ui_controller__DOT__dut__DOT__configured;
    CData/*0:0*/ tb_ui_controller__DOT__dut__DOT__waiting;
    CData/*0:0*/ tb_ui_controller__DOT__dut__DOT__moving;
    CData/*2:0*/ tb_ui_controller__DOT__dut__DOT__candidate;
    CData/*1:0*/ tb_ui_controller__DOT__dut__DOT__direction;
    CData/*3:0*/ tb_ui_controller__DOT__dut__DOT__attempts;
    CData/*7:0*/ tb_ui_controller__DOT__dut__DOT__choices_valid;
    CData/*7:0*/ tb_ui_controller__DOT__dut__DOT__available;
    CData/*7:0*/ tb_ui_controller__DOT__dut__DOT__neighbor;
    CData/*0:0*/ tb_ui_controller__DOT__dut__DOT__first;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_ui_controller__DOT__dut__DOT__choices;
    VlWide<8>/*255:0*/ tb_ui_controller__DOT__neighbors;
    IData/*31:0*/ tb_ui_controller__DOT__notices;
    IData/*31:0*/ tb_ui_controller__DOT__exits;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha9ad888b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ui_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ui_controller___024root(Vtb_ui_controller__Syms* symsp, const char* v__name);
    ~Vtb_ui_controller___024root();
    VL_UNCOPYABLE(Vtb_ui_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
