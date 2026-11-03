// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_display.h for the primary calling header

#ifndef VERILATED_VTB_DISPLAY___024ROOT_H_
#define VERILATED_VTB_DISPLAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_display__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_display___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_display__DOT__clk;
    CData/*0:0*/ tb_display__DOT__reset;
    CData/*0:0*/ tb_display__DOT__cv;
    CData/*7:0*/ tb_display__DOT__cmd;
    CData/*3:0*/ tb_display__DOT__b;
    CData/*3:0*/ tb_display__DOT__c;
    CData/*3:0*/ tb_display__DOT__bb;
    CData/*3:0*/ tb_display__DOT__cc;
    CData/*0:0*/ tb_display__DOT__ctrl__DOT__ticks;
    CData/*3:0*/ tb_display__DOT__ctrl__DOT__wanted_b;
    CData/*3:0*/ tb_display__DOT__ctrl__DOT__wanted_c;
    CData/*7:0*/ __Vfunc_tb_display__DOT__reference_channel__0__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__reference_channel__1__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__reference_channel__2__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__p;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__b;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__c;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__p;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__b;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__c;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__Vfuncout;
    CData/*7:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__p;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__b;
    CData/*3:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__c;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_display__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__product;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__sum;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__bias;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__10__difference;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__product;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__sum;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__bias;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__11__difference;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__product;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__sum;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__bias;
    SData/*11:0*/ __Vfunc_tb_display__DOT__dut__DOT__channel__12__difference;
    IData/*23:0*/ tb_display__DOT__tm;
    IData/*23:0*/ tb_display__DOT__rgb;
    IData/*23:0*/ tb_display__DOT__out;
    IData/*31:0*/ tb_display__DOT__k;
    IData/*31:0*/ tb_display__DOT__expected;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__0__pixel;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__0__bv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__0__cv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__0__v;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__1__pixel;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__1__bv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__1__cv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__1__v;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__2__pixel;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__2__bv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__2__cv;
    IData/*31:0*/ __Vfunc_tb_display__DOT__reference_channel__2__v;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h70ce6aa5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_display__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_display___024root(Vtb_display__Syms* symsp, const char* v__name);
    ~Vtb_display___024root();
    VL_UNCOPYABLE(Vtb_display___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
