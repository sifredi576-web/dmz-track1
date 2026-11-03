// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_ticker.h for the primary calling header

#ifndef VERILATED_VTB_TOP_TICKER___024ROOT_H_
#define VERILATED_VTB_TOP_TICKER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top_ticker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_ticker___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top_ticker__DOT__clk;
    CData/*0:0*/ tb_top_ticker__DOT__reset;
    CData/*0:0*/ tb_top_ticker__DOT__frame_tick;
    CData/*0:0*/ tb_top_ticker__DOT__ink;
    CData/*0:0*/ tb_top_ticker__DOT__shade;
    CData/*0:0*/ tb_top_ticker__DOT__expected;
    CData/*0:0*/ tb_top_ticker__DOT__dut__DOT__half_frame;
    CData/*3:0*/ tb_top_ticker__DOT__dut__DOT__row_q;
    CData/*0:0*/ tb_top_ticker__DOT__dut__DOT__inside_q;
    CData/*0:0*/ tb_top_ticker__DOT__dut__DOT__text_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ tb_top_ticker__DOT__x;
    SData/*9:0*/ tb_top_ticker__DOT__y;
    SData/*9:0*/ tb_top_ticker__DOT__dut__DOT__scroll;
    SData/*10:0*/ tb_top_ticker__DOT__dut__DOT__ahead_x;
    SData/*9:0*/ tb_top_ticker__DOT__dut__DOT__ahead_y;
    SData/*15:0*/ tb_top_ticker__DOT__dut__DOT__column;
    IData/*31:0*/ tb_top_ticker__DOT__offset;
    IData/*31:0*/ tb_top_ticker__DOT__frames;
    IData/*31:0*/ tb_top_ticker__DOT__px;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__13__xx;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__13__yy;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__25__xx;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__25__yy;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 1024> tb_top_ticker__DOT__reference_columns;
    VlUnpacked<SData/*15:0*/, 1024> tb_top_ticker__DOT__dut__DOT__font_rom;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5192931f__0;
    VlTriggerScheduler __VtrigSched_h5192935e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top_ticker__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_ticker___024root(Vtb_top_ticker__Syms* symsp, const char* v__name);
    ~Vtb_top_ticker___024root();
    VL_UNCOPYABLE(Vtb_top_ticker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
