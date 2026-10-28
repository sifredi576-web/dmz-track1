// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_status_uart.h for the primary calling header

#ifndef VERILATED_VTB_STATUS_UART___024ROOT_H_
#define VERILATED_VTB_STATUS_UART___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_status_uart__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_status_uart___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_status_uart__DOT__clk;
    CData/*0:0*/ tb_status_uart__DOT__reset;
    CData/*0:0*/ tb_status_uart__DOT__tx64;
    CData/*0:0*/ tb_status_uart__DOT__tx96;
    CData/*0:0*/ tb_status_uart__DOT__v64;
    CData/*0:0*/ tb_status_uart__DOT__v96;
    CData/*7:0*/ tb_status_uart__DOT__b64;
    CData/*7:0*/ tb_status_uart__DOT__b96;
    CData/*7:0*/ tb_status_uart__DOT____Vlvbound_hc7a8f01d__0;
    CData/*7:0*/ tb_status_uart__DOT____Vlvbound_h6648b4d0__0;
    CData/*5:0*/ tb_status_uart__DOT__t64__DOT__index;
    CData/*3:0*/ tb_status_uart__DOT__t64__DOT__bitnum;
    CData/*0:0*/ tb_status_uart__DOT__t64__DOT__busy;
    CData/*6:0*/ tb_status_uart__DOT__t96__DOT__index;
    CData/*3:0*/ tb_status_uart__DOT__t96__DOT__bitnum;
    CData/*0:0*/ tb_status_uart__DOT__t96__DOT__busy;
    CData/*0:0*/ tb_status_uart__DOT__r64__DOT__r1;
    CData/*0:0*/ tb_status_uart__DOT__r64__DOT__r2;
    CData/*1:0*/ tb_status_uart__DOT__r64__DOT__state;
    CData/*2:0*/ tb_status_uart__DOT__r64__DOT__bitno;
    CData/*7:0*/ tb_status_uart__DOT__r64__DOT__shift;
    CData/*0:0*/ tb_status_uart__DOT__r96__DOT__r1;
    CData/*0:0*/ tb_status_uart__DOT__r96__DOT__r2;
    CData/*1:0*/ tb_status_uart__DOT__r96__DOT__state;
    CData/*2:0*/ tb_status_uart__DOT__r96__DOT__bitno;
    CData/*7:0*/ tb_status_uart__DOT__r96__DOT__shift;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h02066bdf__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_status_uart__DOT__t64__DOT__baud;
    SData/*9:0*/ tb_status_uart__DOT__t64__DOT__shift;
    SData/*15:0*/ tb_status_uart__DOT__t96__DOT__baud;
    SData/*9:0*/ tb_status_uart__DOT__t96__DOT__shift;
    SData/*15:0*/ tb_status_uart__DOT__r64__DOT__count;
    SData/*15:0*/ tb_status_uart__DOT__r96__DOT__count;
    VlWide<16>/*511:0*/ tb_status_uart__DOT__status64;
    VlWide<24>/*767:0*/ tb_status_uart__DOT__status96;
    IData/*31:0*/ tb_status_uart__DOT__seen64;
    IData/*31:0*/ tb_status_uart__DOT__seen96;
    IData/*31:0*/ tb_status_uart__DOT__t64__DOT__interval;
    VlWide<16>/*511:0*/ tb_status_uart__DOT__t64__DOT__snapshot;
    IData/*31:0*/ tb_status_uart__DOT__t96__DOT__interval;
    VlWide<24>/*767:0*/ tb_status_uart__DOT__t96__DOT__snapshot;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h248a7e92__0;
    VlTriggerScheduler __VtrigSched_h65b1b311__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_status_uart__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_status_uart___024root(Vtb_status_uart__Syms* symsp, const char* v__name);
    ~Vtb_status_uart___024root();
    VL_UNCOPYABLE(Vtb_status_uart___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
