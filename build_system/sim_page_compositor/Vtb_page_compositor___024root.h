// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_page_compositor.h for the primary calling header

#ifndef VERILATED_VTB_PAGE_COMPOSITOR___024ROOT_H_
#define VERILATED_VTB_PAGE_COMPOSITOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_page_compositor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_page_compositor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_page_compositor__DOT__clk;
    CData/*0:0*/ tb_page_compositor__DOT__reset;
    CData/*0:0*/ tb_page_compositor__DOT__page_begin;
    CData/*0:0*/ tb_page_compositor__DOT__iv;
    CData/*0:0*/ tb_page_compositor__DOT__iack;
    CData/*0:0*/ tb_page_compositor__DOT__ordy;
    CData/*0:0*/ tb_page_compositor__DOT__oack;
    CData/*0:0*/ tb_page_compositor__DOT__mr;
    CData/*0:0*/ tb_page_compositor__DOT__mrsp;
    CData/*2:0*/ tb_page_compositor__DOT__index;
    CData/*0:0*/ tb_page_compositor__DOT__mpending;
    CData/*0:0*/ tb_page_compositor__DOT__opending;
    CData/*3:0*/ tb_page_compositor__DOT__dut__DOT__state;
    CData/*1:0*/ tb_page_compositor__DOT__dut__DOT__layer;
    CData/*0:0*/ tb_page_compositor__DOT__dut__DOT__plane;
    CData/*0:0*/ tb_page_compositor__DOT__dut__DOT__first;
    CData/*3:0*/ tb_page_compositor__DOT__dut__DOT__p;
    CData/*0:0*/ tb_page_compositor__DOT__dut__DOT__dim;
    CData/*0:0*/ tb_page_compositor__DOT__dut__DOT__cache_valid;
    CData/*0:0*/ tb_page_compositor__DOT__dut__DOT__pixel_inside;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_page_compositor__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_page_compositor__DOT__dut__DOT__x;
    SData/*8:0*/ tb_page_compositor__DOT__dut__DOT__y;
    SData/*15:0*/ tb_page_compositor__DOT__dut__DOT__row_offset;
    SData/*9:0*/ tb_page_compositor__DOT__dut__DOT__wx;
    SData/*8:0*/ tb_page_compositor__DOT__dut__DOT__ww;
    SData/*15:0*/ tb_page_compositor__DOT__dut__DOT__cache;
    IData/*17:0*/ tb_page_compositor__DOT__ia;
    VlWide<8>/*255:0*/ tb_page_compositor__DOT__md;
    VlWide<4>/*98:0*/ tb_page_compositor__DOT__widget;
    IData/*31:0*/ tb_page_compositor__DOT__cycle;
    IData/*31:0*/ tb_page_compositor__DOT__mdelay;
    IData/*31:0*/ tb_page_compositor__DOT__odelay;
    IData/*31:0*/ tb_page_compositor__DOT__received;
    IData/*20:0*/ tb_page_compositor__DOT__address;
    IData/*31:0*/ tb_page_compositor__DOT__frame_send__Vstatic__row;
    VlWide<4>/*98:0*/ tb_page_compositor__DOT__dut__DOT__widget_q;
    IData/*17:0*/ tb_page_compositor__DOT__dut__DOT__address;
    IData/*17:0*/ tb_page_compositor__DOT__dut__DOT__previous_addr;
    VlWide<8>/*255:0*/ tb_page_compositor__DOT__dut__DOT__buffer;
    IData/*19:0*/ tb_page_compositor__DOT__dut__DOT__base;
    IData/*19:0*/ tb_page_compositor__DOT__dut__DOT__label;
    IData/*19:0*/ tb_page_compositor__DOT__dut__DOT__cache_tag;
    IData/*20:0*/ tb_page_compositor__DOT__dut__DOT__source_byte;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<4>/*98:0*/, 8> tb_page_compositor__DOT__descriptors;
    VlUnpacked<CData/*7:0*/, 514272> tb_page_compositor__DOT__scene;
    VlUnpacked<VlWide<8>/*255:0*/, 19200> tb_page_compositor__DOT__expected;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5c7d79e1__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_page_compositor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_page_compositor___024root(Vtb_page_compositor__Syms* symsp, const char* v__name);
    ~Vtb_page_compositor___024root();
    VL_UNCOPYABLE(Vtb_page_compositor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
