// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo_recode.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_RECODE___024ROOT_H_
#define VERILATED_VTB_FIFO_RECODE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo_recode__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_recode___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo_recode__DOT__wclk;
    CData/*0:0*/ tb_fifo_recode__DOT__rclk;
    CData/*0:0*/ tb_fifo_recode__DOT__wrst;
    CData/*0:0*/ tb_fifo_recode__DOT__rrst;
    CData/*0:0*/ tb_fifo_recode__DOT__push;
    CData/*0:0*/ tb_fifo_recode__DOT__pop;
    CData/*0:0*/ tb_fifo_recode__DOT__full0;
    CData/*0:0*/ tb_fifo_recode__DOT__full1;
    CData/*0:0*/ tb_fifo_recode__DOT__empty0;
    CData/*0:0*/ tb_fifo_recode__DOT__empty1;
    CData/*0:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__push;
    CData/*0:0*/ tb_fifo_recode__DOT__reference_fifo__DOT____Vlvbound_hd6d3ee30__0;
    CData/*0:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__push;
    CData/*0:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT____Vlvbound_hd6d3ee30__0;
    CData/*0:0*/ __VdlySet__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0;
    CData/*0:0*/ __VdlySet__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_recode__DOT__wclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_recode__DOT__rclk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_fifo_recode__DOT__ws;
    SData/*15:0*/ tb_fifo_recode__DOT__rs;
    SData/*11:0*/ tb_fifo_recode__DOT__used0;
    SData/*11:0*/ tb_fifo_recode__DOT__used1;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__wp;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__rp;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__wgray;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__rgray;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__rg1;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__rg2;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__wg1;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__wg2;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__rn;
    SData/*11:0*/ tb_fifo_recode__DOT__reference_fifo__DOT__wn;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__wp;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__rp;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__wgray;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__rgray;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__rg1;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__rg2;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__wg1;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__wg2;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__rn;
    SData/*11:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__wn;
    SData/*10:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__write_addr;
    SData/*10:0*/ tb_fifo_recode__DOT__recoded_fifo__DOT__read_addr;
    SData/*11:0*/ __Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__Vfuncout;
    SData/*11:0*/ __Vfunc_tb_fifo_recode__DOT__reference_fifo__DOT__binary__3__g;
    SData/*11:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__Vfuncout;
    SData/*11:0*/ __Vfunc_tb_fifo_recode__DOT__recoded_fifo__DOT__binary__6__g;
    SData/*10:0*/ __VdlyDim0__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0;
    SData/*10:0*/ __VdlyDim0__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0;
    IData/*31:0*/ tb_fifo_recode__DOT__phase;
    IData/*31:0*/ tb_fifo_recode__DOT__writes;
    IData/*31:0*/ tb_fifo_recode__DOT__reads;
    IData/*31:0*/ tb_fifo_recode__DOT__data0;
    IData/*31:0*/ tb_fifo_recode__DOT__data1;
    IData/*31:0*/ tb_fifo_recode__DOT__input_data;
    IData/*31:0*/ __Vdly__tb_fifo_recode__DOT__writes;
    IData/*31:0*/ __VdlyVal__tb_fifo_recode__DOT__reference_fifo__DOT__mem__v0;
    IData/*31:0*/ __VdlyVal__tb_fifo_recode__DOT__recoded_fifo__DOT__mem__v0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 2048> tb_fifo_recode__DOT__reference_fifo__DOT__mem;
    VlUnpacked<IData/*31:0*/, 2048> tb_fifo_recode__DOT__recoded_fifo__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h085ef395__0;
    VlTriggerScheduler __VtrigSched_he4fb7049__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fifo_recode__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fifo_recode___024root(Vtb_fifo_recode__Syms* symsp, const char* v__name);
    ~Vtb_fifo_recode___024root();
    VL_UNCOPYABLE(Vtb_fifo_recode___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
