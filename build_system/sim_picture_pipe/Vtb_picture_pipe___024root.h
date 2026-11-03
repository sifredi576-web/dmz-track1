// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_picture_pipe.h for the primary calling header

#ifndef VERILATED_VTB_PICTURE_PIPE___024ROOT_H_
#define VERILATED_VTB_PICTURE_PIPE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_picture_pipe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_picture_pipe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_picture_pipe__DOT__clk;
    CData/*0:0*/ tb_picture_pipe__DOT__reset;
    CData/*3:0*/ tb_picture_pipe__DOT__b;
    CData/*3:0*/ tb_picture_pipe__DOT__c;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__b;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__c;
    CData/*7:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__result;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__b;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__c;
    CData/*7:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__result;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__b;
    CData/*3:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__c;
    CData/*7:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__result;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__b;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__b;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__b;
    CData/*3:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_picture_pipe__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__product;
    SData/*12:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value;
    SData/*11:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__product;
    SData/*12:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value;
    SData/*11:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__product;
    SData/*12:0*/ tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__product;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__sum;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__bias;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__difference;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__product;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__sum;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__bias;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__difference;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__product;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__sum;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__bias;
    SData/*11:0*/ __Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__difference;
    IData/*23:0*/ tb_picture_pipe__DOT__rgb;
    IData/*23:0*/ tb_picture_pipe__DOT__expected;
    IData/*23:0*/ tb_picture_pipe__DOT__wanted;
    IData/*31:0*/ tb_picture_pipe__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he3ad2920__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_picture_pipe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_picture_pipe___024root(Vtb_picture_pipe__Syms* symsp, const char* v__name);
    ~Vtb_picture_pipe___024root();
    VL_UNCOPYABLE(Vtb_picture_pipe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
