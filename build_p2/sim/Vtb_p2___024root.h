// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_p2.h for the primary calling header

#ifndef VERILATED_VTB_P2___024ROOT_H_
#define VERILATED_VTB_P2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_p2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_p2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_p2__DOT__clk;
        CData/*0:0*/ tb_p2__DOT__pclk;
        CData/*0:0*/ tb_p2__DOT__freset;
        CData/*0:0*/ tb_p2__DOT__reset;
        CData/*0:0*/ tb_p2__DOT__req_ready;
        CData/*0:0*/ tb_p2__DOT__rsp_valid;
        CData/*0:0*/ tb_p2__DOT__init_done;
        CData/*0:0*/ tb_p2__DOT__fv;
        CData/*0:0*/ tb_p2__DOT__ras;
        CData/*0:0*/ tb_p2__DOT__cas;
        CData/*0:0*/ tb_p2__DOT__we;
        CData/*1:0*/ tb_p2__DOT__bank;
        CData/*0:0*/ tb_p2__DOT__oe;
        CData/*0:0*/ tb_p2__DOT____Vcellinp__bist__rsp_valid;
        CData/*0:0*/ tb_p2__DOT____Vcellinp__bist__req_ready;
        CData/*0:0*/ tb_p2__DOT__ft;
        CData/*0:0*/ tb_p2__DOT__full;
        CData/*0:0*/ tb_p2__DOT__empty;
        CData/*0:0*/ tb_p2__DOT__valid;
        CData/*0:0*/ tb_p2__DOT__front;
        CData/*0:0*/ tb_p2__DOT__fault;
        CData/*0:0*/ tb_p2__DOT____Vcellinp__fb__rsp_valid;
        CData/*2:0*/ tb_p2__DOT__fr;
        CData/*1:0*/ tb_p2__DOT__dv;
        CData/*0:0*/ tb_p2__DOT__active;
        CData/*0:0*/ tb_p2__DOT__last_front;
        CData/*4:0*/ tb_p2__DOT__ctrl__DOT__state;
        CData/*3:0*/ tb_p2__DOT__ctrl__DOT__init_refresh;
        CData/*2:0*/ tb_p2__DOT__ctrl__DOT__beat;
        CData/*0:0*/ tb_p2__DOT__ctrl__DOT__transaction_write;
        CData/*0:0*/ tb_p2__DOT__mem__DOT__mode_set;
        CData/*0:0*/ tb_p2__DOT__mem__DOT__inject;
        CData/*2:0*/ tb_p2__DOT__bist__DOT__state;
        CData/*2:0*/ tb_p2__DOT__bist__DOT__beat;
        CData/*1:0*/ tb_p2__DOT__bist__DOT__pattern;
        CData/*0:0*/ tb_p2__DOT__bist__DOT__reading;
        CData/*1:0*/ tb_p2__DOT__fb__DOT__state;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__ft1;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__ft2;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__last_frame;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__frame_pending;
        CData/*5:0*/ tb_p2__DOT__fb__DOT__flush;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__back_ready;
        CData/*7:0*/ tb_p2__DOT__fb__DOT__swap_timer;
        CData/*2:0*/ tb_p2__DOT__fb__DOT__beat;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__video_req;
        CData/*0:0*/ tb_p2__DOT__fb__DOT__enabled;
        CData/*0:0*/ tb_p2__DOT__fifo__DOT__push;
        CData/*0:0*/ tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0;
        CData/*0:0*/ __Vdly__tb_p2__DOT__ft;
        CData/*2:0*/ __Vdly__tb_p2__DOT__fr;
        CData/*0:0*/ __VdlySet__tb_p2__DOT__din__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__pclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__freset__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_p2__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h2b560172__1;
        CData/*0:0*/ __Vtrigprevexpr_h35df5846__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ tb_p2__DOT__sa;
        SData/*9:0*/ tb_p2__DOT__x;
        SData/*9:0*/ tb_p2__DOT__y;
        SData/*15:0*/ tb_p2__DOT__current_pixel;
    };
    struct {
        SData/*15:0*/ tb_p2__DOT__ctrl__DOT__wait_count;
        SData/*15:0*/ tb_p2__DOT__ctrl__DOT__refresh_age;
        SData/*8:0*/ tb_p2__DOT__fb__DOT__wr_x;
        SData/*8:0*/ tb_p2__DOT__fb__DOT__wr_y;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__wp;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__rp;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__wgray;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__rgray;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__rg1;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__rg2;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__wg1;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__wg2;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__rn;
        SData/*11:0*/ tb_p2__DOT__fifo__DOT__wn;
        SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout;
        SData/*9:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x;
        SData/*8:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y;
        SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
        SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout;
        SData/*9:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x;
        SData/*8:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y;
        SData/*15:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
        SData/*11:0*/ __Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout;
        SData/*11:0*/ __Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g;
        SData/*9:0*/ __Vdly__tb_p2__DOT__y;
        IData/*20:0*/ tb_p2__DOT__fa_req;
        VlWide<8>/*255:0*/ tb_p2__DOT__bd;
        VlWide<8>/*255:0*/ tb_p2__DOT__fd;
        VlWide<8>/*255:0*/ tb_p2__DOT__rd;
        IData/*31:0*/ tb_p2__DOT__din;
        IData/*31:0*/ tb_p2__DOT__refreshes;
        IData/*31:0*/ tb_p2__DOT__errors;
        IData/*31:0*/ tb_p2__DOT__checked;
        IData/*31:0*/ tb_p2__DOT__expected;
        IData/*31:0*/ tb_p2__DOT__actual;
        IData/*20:0*/ tb_p2__DOT__bad;
        IData/*31:0*/ tb_p2__DOT__fo;
        IData/*31:0*/ tb_p2__DOT__swaps;
        IData/*31:0*/ tb_p2__DOT__written;
        IData/*31:0*/ tb_p2__DOT__reads;
        IData/*31:0*/ tb_p2__DOT__display_frames;
        IData/*31:0*/ tb_p2__DOT__checked_pixels;
        IData/*31:0*/ tb_p2__DOT__frame_id;
        IData/*31:0*/ tb_p2__DOT__ctrl__DOT__dq_capture;
        IData/*20:0*/ tb_p2__DOT__ctrl__DOT__transaction_addr;
        VlWide<8>/*255:0*/ tb_p2__DOT__ctrl__DOT__write_data;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__cycle;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__last_refresh;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__last_mrs;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__ref_count;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__delay_read;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__rd_left;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__wr_left;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__rd_address;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__wr_address;
        IData/*31:0*/ tb_p2__DOT__mem__DOT__bank_active;
        IData/*20:0*/ tb_p2__DOT__bist__DOT__address;
        IData/*31:0*/ tb_p2__DOT__bist__DOT__hold_count;
        VlWide<8>/*255:0*/ tb_p2__DOT__bist__DOT__read_data;
        IData/*20:0*/ tb_p2__DOT__bist__DOT__check_addr;
        IData/*31:0*/ tb_p2__DOT__bist__DOT__expected;
        IData/*31:0*/ tb_p2__DOT__bist__DOT__actual;
        IData/*17:0*/ tb_p2__DOT__fb__DOT__rd_addr;
        IData/*17:0*/ tb_p2__DOT__fb__DOT__wr_addr;
    };
    struct {
        VlWide<8>/*255:0*/ tb_p2__DOT__fb__DOT__read_buffer;
        IData/*31:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f;
        IData/*31:0*/ __Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f;
        IData/*31:0*/ __Vintraval_h0133eed1__0;
        IData/*31:0*/ __VdlyVal__tb_p2__DOT__din__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 2097152> tb_p2__DOT__mem__DOT__mem;
        VlUnpacked<SData/*10:0*/, 4> tb_p2__DOT__mem__DOT__rows;
        VlUnpacked<CData/*0:0*/, 4> tb_p2__DOT__mem__DOT__open_bank;
        VlUnpacked<IData/*31:0*/, 4> tb_p2__DOT__mem__DOT__last_active;
        VlUnpacked<IData/*31:0*/, 4> tb_p2__DOT__mem__DOT__closed_at;
        VlUnpacked<IData/*31:0*/, 2048> tb_p2__DOT__fifo__DOT__mem;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbb6245e2__0;
    VlTriggerScheduler __VtrigSched_hb1e89f5e__0;
    VlTriggerScheduler __VtrigSched_h9b19f549__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_p2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_p2___024root(Vtb_p2__Syms* symsp, const char* v__name);
    ~Vtb_p2___024root();
    VL_UNCOPYABLE(Vtb_p2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
