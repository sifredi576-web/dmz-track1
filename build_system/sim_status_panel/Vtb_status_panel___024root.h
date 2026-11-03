// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_status_panel.h for the primary calling header

#ifndef VERILATED_VTB_STATUS_PANEL___024ROOT_H_
#define VERILATED_VTB_STATUS_PANEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_status_panel__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_status_panel___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_status_panel__DOT__clk;
    CData/*0:0*/ tb_status_panel__DOT__reset;
    CData/*0:0*/ tb_status_panel__DOT__frame;
    CData/*0:0*/ tb_status_panel__DOT__en;
    CData/*0:0*/ tb_status_panel__DOT__muted;
    CData/*0:0*/ tb_status_panel__DOT__paused;
    CData/*0:0*/ tb_status_panel__DOT__loading;
    CData/*0:0*/ tb_status_panel__DOT__aenabled;
    CData/*0:0*/ tb_status_panel__DOT__active;
    CData/*0:0*/ tb_status_panel__DOT__ended;
    CData/*0:0*/ tb_status_panel__DOT__fault;
    CData/*3:0*/ tb_status_panel__DOT__volume;
    CData/*3:0*/ tb_status_panel__DOT__b;
    CData/*3:0*/ tb_status_panel__DOT__c;
    CData/*0:0*/ tb_status_panel__DOT__ink;
    CData/*0:0*/ tb_status_panel__DOT__shade;
    CData/*0:0*/ tb_status_panel__DOT__bf;
    CData/*0:0*/ tb_status_panel__DOT__cf;
    CData/*0:0*/ tb_status_panel__DOT__bu;
    CData/*0:0*/ tb_status_panel__DOT__cu;
    CData/*0:0*/ tb_status_panel__DOT__expected;
    CData/*3:0*/ tb_status_panel__DOT__dut__DOT__vol;
    CData/*3:0*/ tb_status_panel__DOT__dut__DOT__b;
    CData/*3:0*/ tb_status_panel__DOT__dut__DOT__c;
    CData/*2:0*/ tb_status_panel__DOT__dut__DOT__state;
    CData/*6:0*/ tb_status_panel__DOT__dut__DOT__b_timer;
    CData/*6:0*/ tb_status_panel__DOT__dut__DOT__c_timer;
    CData/*0:0*/ tb_status_panel__DOT__dut__DOT__b_up;
    CData/*0:0*/ tb_status_panel__DOT__dut__DOT__c_up;
    CData/*4:0*/ tb_status_panel__DOT__dut__DOT__glyph;
    CData/*3:0*/ tb_status_panel__DOT__dut__DOT__gx;
    CData/*0:0*/ tb_status_panel__DOT__dut__DOT__area;
    CData/*0:0*/ tb_status_panel__DOT__dut__DOT__flash;
    CData/*2:0*/ tb_status_panel__DOT__dut__DOT__state_q;
    CData/*4:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value;
    CData/*4:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value;
    CData/*4:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_status_panel__DOT__x;
    SData/*9:0*/ tb_status_panel__DOT__y;
    SData/*10:0*/ tb_status_panel__DOT__dut__DOT__physical_x;
    SData/*9:0*/ tb_status_panel__DOT__dut__DOT__physical_y;
    SData/*13:0*/ tb_status_panel__DOT__dut__DOT__font_row;
    SData/*9:0*/ tb_status_panel__DOT__dut__DOT__px;
    SData/*9:0*/ tb_status_panel__DOT__dut__DOT__py;
    IData/*23:0*/ tb_status_panel__DOT__color;
    IData/*31:0*/ tb_status_panel__DOT__st;
    IData/*31:0*/ tb_status_panel__DOT__xx;
    IData/*31:0*/ tb_status_panel__DOT__g;
    IData/*31:0*/ tb_status_panel__DOT__row;
    IData/*31:0*/ tb_status_panel__DOT__col;
    IData/*31:0*/ tb_status_panel__DOT__lx;
    IData/*31:0*/ tb_status_panel__DOT__ly;
    IData/*23:0*/ tb_status_panel__DOT__expected_color;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*13:0*/, 512> tb_status_panel__DOT__font_ref;
    VlUnpacked<SData/*13:0*/, 512> tb_status_panel__DOT__dut__DOT__font_rom;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h60d74859__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_status_panel__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_status_panel___024root(Vtb_status_panel__Syms* symsp, const char* v__name);
    ~Vtb_status_panel___024root();
    VL_UNCOPYABLE(Vtb_status_panel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
