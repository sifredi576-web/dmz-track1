// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scene_visual.h for the primary calling header

#ifndef VERILATED_VTB_SCENE_VISUAL___024ROOT_H_
#define VERILATED_VTB_SCENE_VISUAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scene_visual__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scene_visual___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_scene_visual__DOT__clk;
        CData/*0:0*/ tb_scene_visual__DOT__reset;
        CData/*0:0*/ tb_scene_visual__DOT__frame;
        CData/*0:0*/ tb_scene_visual__DOT__es;
        CData/*0:0*/ tb_scene_visual__DOT__hide;
        CData/*0:0*/ tb_scene_visual__DOT__cv;
        CData/*0:0*/ tb_scene_visual__DOT__ce;
        CData/*0:0*/ tb_scene_visual__DOT__en;
        CData/*7:0*/ tb_scene_visual__DOT__cmd;
        CData/*0:0*/ tb_scene_visual__DOT__emergency;
        CData/*0:0*/ tb_scene_visual__DOT__visible;
        CData/*0:0*/ tb_scene_visual__DOT__ink;
        CData/*0:0*/ tb_scene_visual__DOT__shade;
        CData/*4:0*/ tb_scene_visual__DOT__ll;
        CData/*4:0*/ tb_scene_visual__DOT__rr;
        CData/*4:0*/ tb_scene_visual__DOT__pl;
        CData/*4:0*/ tb_scene_visual__DOT__pr;
        CData/*0:0*/ tb_scene_visual__DOT__expected_line;
        CData/*1:0*/ tb_scene_visual__DOT__scene__DOT__es;
        CData/*1:0*/ tb_scene_visual__DOT__scene__DOT__vs;
        CData/*0:0*/ tb_scene_visual__DOT__scene__DOT__soft_alert;
        CData/*0:0*/ tb_scene_visual__DOT__scene__DOT__soft_visual;
        CData/*0:0*/ tb_scene_visual__DOT__scene__DOT__alert_phase;
        CData/*2:0*/ tb_scene_visual__DOT__scene__DOT__tick;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__front;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__page_ready;
        CData/*6:0*/ tb_scene_visual__DOT__visual__DOT__wp;
        CData/*2:0*/ tb_scene_visual__DOT__visual__DOT__decimate;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__trigger_mode_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__take_sample;
        CData/*4:0*/ tb_scene_visual__DOT__visual__DOT__live_l;
        CData/*4:0*/ tb_scene_visual__DOT__visual__DOT__live_r;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__en;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__valid_page;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__has_page;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__valid_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__level_row;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__left_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__right_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__peak_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__region_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__center_q;
        CData/*0:0*/ tb_scene_visual__DOT__visual__DOT__wh;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scene_visual__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_scene_visual__DOT__left;
        SData/*15:0*/ tb_scene_visual__DOT__right;
        SData/*9:0*/ tb_scene_visual__DOT__x;
        SData/*9:0*/ tb_scene_visual__DOT__y;
        SData/*11:0*/ tb_scene_visual__DOT__visual__DOT__previous_sample;
        SData/*15:0*/ tb_scene_visual__DOT__visual__DOT__maximum_l;
        SData/*15:0*/ tb_scene_visual__DOT__visual__DOT__maximum_r;
        SData/*15:0*/ tb_scene_visual__DOT__visual__DOT__mag_l;
        SData/*15:0*/ tb_scene_visual__DOT__visual__DOT__mag_r;
        SData/*9:0*/ tb_scene_visual__DOT__visual__DOT__ax;
        SData/*9:0*/ tb_scene_visual__DOT__visual__DOT__px;
        SData/*9:0*/ tb_scene_visual__DOT__visual__DOT__py;
        SData/*8:0*/ tb_scene_visual__DOT__visual__DOT__line_start;
        SData/*8:0*/ tb_scene_visual__DOT__visual__DOT__line_end;
        SData/*8:0*/ tb_scene_visual__DOT__visual__DOT__start_q;
        SData/*8:0*/ tb_scene_visual__DOT__visual__DOT__end_q;
        SData/*9:0*/ tb_scene_visual__DOT__visual__DOT__py_q;
        IData/*23:0*/ tb_scene_visual__DOT__color;
    };
    struct {
        IData/*31:0*/ tb_scene_visual__DOT__reference_tick;
        IData/*31:0*/ tb_scene_visual__DOT__highs;
        IData/*31:0*/ tb_scene_visual__DOT__lows;
        IData/*31:0*/ tb_scene_visual__DOT__row;
        IData/*31:0*/ tb_scene_visual__DOT__index;
        IData/*31:0*/ tb_scene_visual__DOT__phase;
        IData/*31:0*/ tb_scene_visual__DOT__ya;
        IData/*31:0*/ tb_scene_visual__DOT__yb;
        IData/*31:0*/ tb_scene_visual__DOT__ys;
        IData/*31:0*/ tb_scene_visual__DOT__ye;
        IData/*23:0*/ tb_scene_visual__DOT__visual__DOT__wave_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 128> tb_scene_visual__DOT__tone_samples;
        VlUnpacked<IData/*23:0*/, 256> tb_scene_visual__DOT__visual__DOT__wave;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb567af9f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_scene_visual__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scene_visual___024root(Vtb_scene_visual__Syms* symsp, const char* v__name);
    ~Vtb_scene_visual___024root();
    VL_UNCOPYABLE(Vtb_scene_visual___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
