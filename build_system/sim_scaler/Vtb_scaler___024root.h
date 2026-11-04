// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scaler.h for the primary calling header

#ifndef VERILATED_VTB_SCALER___024ROOT_H_
#define VERILATED_VTB_SCALER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scaler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scaler___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_scaler__DOT__clk;
        CData/*0:0*/ tb_scaler__DOT__reset;
        CData/*0:0*/ tb_scaler__DOT__start;
        CData/*0:0*/ tb_scaler__DOT__last;
        CData/*0:0*/ tb_scaler__DOT__done;
        CData/*7:0*/ tb_scaler__DOT__error;
        CData/*0:0*/ tb_scaler__DOT__lr;
        CData/*0:0*/ tb_scaler__DOT__ack;
        CData/*0:0*/ tb_scaler__DOT__valid;
        CData/*7:0*/ tb_scaler__DOT__bd;
        CData/*4:0*/ tb_scaler__DOT__dut__DOT__state;
        CData/*4:0*/ tb_scaler__DOT__dut__DOT__after_ack;
        CData/*1:0*/ tb_scaler__DOT__dut__DOT__channel;
        CData/*1:0*/ tb_scaler__DOT__dut__DOT__padding;
        CData/*1:0*/ tb_scaler__DOT__dut__DOT__pad_left;
        CData/*7:0*/ tb_scaler__DOT__dut__DOT__blue;
        CData/*7:0*/ tb_scaler__DOT__dut__DOT__green;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__rgba;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__top_down;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__width_limited;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__blank_row;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__input_finished;
        CData/*3:0*/ tb_scaler__DOT__dut__DOT__burst_pixel;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__divider_done;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__inside_x;
        CData/*7:0*/ tb_scaler__DOT__dut__DOT____Vlvbound_h2fb5cc83__0;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__busy;
        CData/*5:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__count;
        CData/*0:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__take;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h35d5581d__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scaler__DOT__done__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__width;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__height;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__source_x;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__source_y;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__wanted_y;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__sample_x;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__draw_w;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__draw_h;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__left_pad;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__first_pad;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__out_x;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__dest_row;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__drawn_rows;
        SData/*11:0*/ tb_scaler__DOT__dut__DOT__x_error;
        SData/*11:0*/ tb_scaler__DOT__dut__DOT__y_error;
        SData/*15:0*/ tb_scaler__DOT__dut__DOT__low_pixel;
        SData/*15:0*/ tb_scaler__DOT__dut__DOT__row_q;
        SData/*15:0*/ tb_scaler__DOT__dut__DOT__sample565;
        SData/*10:0*/ tb_scaler__DOT__dut__DOT__raw_width;
        SData/*12:0*/ tb_scaler__DOT__dut__DOT__row_bytes;
        SData/*9:0*/ tb_scaler__DOT__dut__DOT__actual_y;
        SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout;
        IData/*31:0*/ tb_scaler__DOT__w;
        IData/*31:0*/ tb_scaler__DOT__h;
        IData/*31:0*/ tb_scaler__DOT__bpp;
        IData/*31:0*/ tb_scaler__DOT__top;
        IData/*31:0*/ tb_scaler__DOT__bytes;
        IData/*31:0*/ tb_scaler__DOT__stride;
        IData/*31:0*/ tb_scaler__DOT__pos;
    };
    struct {
        IData/*31:0*/ tb_scaler__DOT__cycle;
        IData/*31:0*/ tb_scaler__DOT__bursts;
        IData/*31:0*/ tb_scaler__DOT__delay_ack;
        IData/*31:0*/ tb_scaler__DOT__dw;
        IData/*31:0*/ tb_scaler__DOT__dh;
        IData/*31:0*/ tb_scaler__DOT__lx;
        IData/*31:0*/ tb_scaler__DOT__py0;
        IData/*31:0*/ tb_scaler__DOT__filebytes;
        IData/*18:0*/ tb_scaler__DOT__addr;
        VlWide<8>/*255:0*/ tb_scaler__DOT__data;
        IData/*31:0*/ tb_scaler__DOT__pixels;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__position;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__length;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__offset;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__abs_height;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__scaled;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__shift;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__divisor;
        IData/*31:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__next_shift;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__off;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__row;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__col;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__ch;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout;
        IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ tb_scaler__DOT__dut__DOT__required_end;
        QData/*32:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__rem;
        QData/*32:0*/ tb_scaler__DOT__dut__DOT__divider__DOT__trial;
        VlUnpacked<CData/*7:0*/, 54> tb_scaler__DOT__dut__DOT__header;
        VlUnpacked<SData/*15:0*/, 2048> tb_scaler__DOT__dut__DOT__row_cache;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h91202e27__0;
    VlTriggerScheduler __VtrigSched_hb1e29f47__0;
    VlTriggerScheduler __VtrigSched_h15c5c79e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_scaler__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scaler___024root(Vtb_scaler__Syms* symsp, const char* v__name);
    ~Vtb_scaler___024root();
    VL_UNCOPYABLE(Vtb_scaler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
