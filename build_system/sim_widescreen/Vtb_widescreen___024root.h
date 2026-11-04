// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_widescreen.h for the primary calling header

#ifndef VERILATED_VTB_WIDESCREEN___024ROOT_H_
#define VERILATED_VTB_WIDESCREEN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_widescreen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_widescreen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_widescreen__DOT__mclk;
        CData/*0:0*/ tb_widescreen__DOT__pclk;
        CData/*0:0*/ tb_widescreen__DOT__freset;
        CData/*0:0*/ tb_widescreen__DOT__reset;
        CData/*0:0*/ tb_widescreen__DOT__ft;
        CData/*0:0*/ tb_widescreen__DOT__area;
        CData/*0:0*/ tb_widescreen__DOT__req;
        CData/*0:0*/ tb_widescreen__DOT__rw;
        CData/*0:0*/ tb_widescreen__DOT__ready;
        CData/*0:0*/ tb_widescreen__DOT__rsp;
        CData/*0:0*/ tb_widescreen__DOT__init;
        CData/*0:0*/ tb_widescreen__DOT__ras;
        CData/*0:0*/ tb_widescreen__DOT__cas;
        CData/*0:0*/ tb_widescreen__DOT__we;
        CData/*1:0*/ tb_widescreen__DOT__bank;
        CData/*0:0*/ tb_widescreen__DOT__oe;
        CData/*0:0*/ tb_widescreen__DOT__fb_req;
        CData/*1:0*/ tb_widescreen__DOT__mux_ready;
        CData/*1:0*/ tb_widescreen__DOT__mux_response;
        CData/*7:0*/ tb_widescreen__DOT__aux_timer;
        CData/*0:0*/ tb_widescreen__DOT__load;
        CData/*0:0*/ tb_widescreen__DOT__ack;
        CData/*0:0*/ tb_widescreen__DOT__last;
        CData/*0:0*/ tb_widescreen__DOT__full;
        CData/*0:0*/ tb_widescreen__DOT__empty;
        CData/*0:0*/ tb_widescreen__DOT__display_valid;
        CData/*0:0*/ tb_widescreen__DOT__front;
        CData/*0:0*/ tb_widescreen__DOT__fault;
        CData/*2:0*/ tb_widescreen__DOT__fr;
        CData/*1:0*/ tb_widescreen__DOT__dv;
        CData/*0:0*/ tb_widescreen__DOT__sample_ce;
        CData/*1:0*/ tb_widescreen__DOT__mapper__DOT__hx;
        CData/*1:0*/ tb_widescreen__DOT__mapper__DOT__vy;
        CData/*3:0*/ tb_widescreen__DOT__ctrl__DOT__row_open;
        CData/*0:0*/ tb_widescreen__DOT__ctrl__DOT__hit;
        CData/*4:0*/ tb_widescreen__DOT__ctrl__DOT__state;
        CData/*3:0*/ tb_widescreen__DOT__ctrl__DOT__init_refresh;
        CData/*2:0*/ tb_widescreen__DOT__ctrl__DOT__beat;
        CData/*0:0*/ tb_widescreen__DOT__ctrl__DOT__transaction_write;
        CData/*0:0*/ tb_widescreen__DOT__mem__DOT__mode_set;
        CData/*0:0*/ tb_widescreen__DOT__mem__DOT__auto_close;
        CData/*0:0*/ tb_widescreen__DOT__mem__DOT__inject;
        CData/*0:0*/ tb_widescreen__DOT__mux__DOT__busy;
        CData/*0:0*/ tb_widescreen__DOT__mux__DOT__owner;
        CData/*0:0*/ tb_widescreen__DOT__mux__DOT__selected;
        CData/*1:0*/ tb_widescreen__DOT__fb__DOT__state;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__ft1;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__ft2;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__last_frame;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__frame_pending;
        CData/*5:0*/ tb_widescreen__DOT__fb__DOT__flush;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__read_finished;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__back_ready;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__transition_active;
        CData/*2:0*/ tb_widescreen__DOT__fb__DOT__beat;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__video_req;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__transaction_last;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__prefetched;
        CData/*0:0*/ tb_widescreen__DOT__fb__DOT__enabled;
        CData/*0:0*/ tb_widescreen__DOT__fifo__DOT__push;
        CData/*0:0*/ tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0;
        CData/*5:0*/ tb_widescreen__DOT__audio__DOT__phase;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__ft;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__transition_active;
    };
    struct {
        CData/*1:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__state;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__last_frame;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__frame_pending;
        CData/*5:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__flush;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__back_ready;
        CData/*2:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__beat;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__display_valid;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__front;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__transaction_last;
        CData/*0:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__prefetched;
        CData/*0:0*/ __VdlySet__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0;
        CData/*0:0*/ __VdlySet__tb_widescreen__DOT__din__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_widescreen__DOT__pclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_widescreen__DOT__freset__0;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ tb_widescreen__DOT__x;
        SData/*9:0*/ tb_widescreen__DOT__y;
        SData/*9:0*/ tb_widescreen__DOT__sx;
        SData/*9:0*/ tb_widescreen__DOT__sy;
        SData/*10:0*/ tb_widescreen__DOT__sa;
        SData/*11:0*/ tb_widescreen__DOT__used;
        SData/*15:0*/ tb_widescreen__DOT__actual;
        SData/*15:0*/ tb_widescreen__DOT__ctrl__DOT__wait_count;
        SData/*15:0*/ tb_widescreen__DOT__ctrl__DOT__refresh_age;
        SData/*9:0*/ tb_widescreen__DOT__fb__DOT__out_row;
        SData/*8:0*/ tb_widescreen__DOT__fb__DOT__wipe_words;
        SData/*8:0*/ tb_widescreen__DOT__fb__DOT__rd_x;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__wp;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__rp;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__wgray;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__rgray;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__rg1;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__rg2;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__wg1;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__wg2;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__rn;
        SData/*11:0*/ tb_widescreen__DOT__fifo__DOT__wn;
        SData/*10:0*/ tb_widescreen__DOT__fifo__DOT__write_addr;
        SData/*10:0*/ tb_widescreen__DOT__fifo__DOT__read_addr;
        SData/*11:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout;
        SData/*11:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g;
        SData/*9:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__out_row;
        SData/*8:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__wipe_words;
        SData/*8:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__rd_x;
        SData/*10:0*/ __VdlyDim0__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0;
        IData/*20:0*/ tb_widescreen__DOT__addr;
        VlWide<8>/*255:0*/ tb_widescreen__DOT__wdata;
        VlWide<8>/*255:0*/ tb_widescreen__DOT__rdata;
        IData/*31:0*/ tb_widescreen__DOT__din;
        IData/*31:0*/ tb_widescreen__DOT__refreshes;
        IData/*31:0*/ tb_widescreen__DOT__aux_count;
        IData/*18:0*/ tb_widescreen__DOT__load_addr;
        VlWide<8>/*255:0*/ tb_widescreen__DOT__payload;
        IData/*31:0*/ tb_widescreen__DOT__swaps;
        IData/*31:0*/ tb_widescreen__DOT__written;
        IData/*31:0*/ tb_widescreen__DOT__reads;
        IData/*31:0*/ tb_widescreen__DOT__pixels;
        IData/*31:0*/ tb_widescreen__DOT__frames;
        IData/*31:0*/ tb_widescreen__DOT__pops;
        IData/*31:0*/ tb_widescreen__DOT__cycles;
        IData/*31:0*/ tb_widescreen__DOT__samples;
        IData/*31:0*/ tb_widescreen__DOT__last_sample;
    };
    struct {
        IData/*31:0*/ tb_widescreen__DOT__ctrl__DOT__dq_capture;
        IData/*20:0*/ tb_widescreen__DOT__ctrl__DOT__transaction_addr;
        VlWide<8>/*255:0*/ tb_widescreen__DOT__ctrl__DOT__write_data;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__cycle;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__last_refresh;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__last_mrs;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__ref_count;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__delay_read;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__rd_left;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__wr_left;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__rd_address;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__wr_address;
        IData/*31:0*/ tb_widescreen__DOT__mem__DOT__bank_active;
        IData/*18:0*/ tb_widescreen__DOT__fb__DOT__rd_addr;
        IData/*18:0*/ tb_widescreen__DOT__fb__DOT__row_base;
        VlWide<8>/*255:0*/ tb_widescreen__DOT__fb__DOT__read_buffer;
        IData/*31:0*/ tb_widescreen__DOT__fifo__DOT__rdata_raw;
        IData/*26:0*/ tb_widescreen__DOT__audio__DOT__accumulator;
        IData/*31:0*/ __Vintraval_he798b52a__0;
        IData/*31:0*/ __Vdly__tb_widescreen__DOT__aux_count;
        IData/*18:0*/ __Vdly__tb_widescreen__DOT__load_addr;
        IData/*31:0*/ __Vdly__tb_widescreen__DOT__refreshes;
        IData/*18:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__row_base;
        IData/*18:0*/ __Vdly__tb_widescreen__DOT__fb__DOT__rd_addr;
        IData/*31:0*/ __Vdly__tb_widescreen__DOT__swaps;
        IData/*31:0*/ __Vdly__tb_widescreen__DOT__written;
        IData/*31:0*/ __Vdly__tb_widescreen__DOT__reads;
        IData/*31:0*/ __VdlyVal__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0;
        IData/*31:0*/ __VdlyVal__tb_widescreen__DOT__din__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*10:0*/, 4> tb_widescreen__DOT__ctrl__DOT__open_row;
        VlUnpacked<IData/*31:0*/, 2097152> tb_widescreen__DOT__mem__DOT__mem;
        VlUnpacked<SData/*10:0*/, 4> tb_widescreen__DOT__mem__DOT__rows;
        VlUnpacked<CData/*0:0*/, 4> tb_widescreen__DOT__mem__DOT__open_bank;
        VlUnpacked<IData/*31:0*/, 4> tb_widescreen__DOT__mem__DOT__last_active;
        VlUnpacked<IData/*31:0*/, 4> tb_widescreen__DOT__mem__DOT__closed_at;
        VlUnpacked<IData/*31:0*/, 2048> tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd6bf6cc8__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_widescreen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_widescreen___024root(Vtb_widescreen__Syms* symsp, const char* v__name);
    ~Vtb_widescreen___024root();
    VL_UNCOPYABLE(Vtb_widescreen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
