// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_osd_menu.h for the primary calling header

#ifndef VERILATED_VTB_OSD_MENU___024ROOT_H_
#define VERILATED_VTB_OSD_MENU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_osd_menu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_osd_menu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_osd_menu__DOT__clk;
        CData/*0:0*/ tb_osd_menu__DOT__reset;
        CData/*0:0*/ tb_osd_menu__DOT__rv;
        CData/*7:0*/ tb_osd_menu__DOT__rb;
        CData/*5:0*/ tb_osd_menu__DOT__tag;
        CData/*4:0*/ tb_osd_menu__DOT__wavs;
        CData/*0:0*/ tb_osd_menu__DOT__opened;
        CData/*0:0*/ tb_osd_menu__DOT__cv;
        CData/*5:0*/ tb_osd_menu__DOT__query;
        CData/*7:0*/ tb_osd_menu__DOT__cb;
        CData/*0:0*/ tb_osd_menu__DOT__select_request;
        CData/*0:0*/ tb_osd_menu__DOT__autoplay;
        CData/*4:0*/ tb_osd_menu__DOT__selected;
        CData/*4:0*/ tb_osd_menu__DOT__chosen;
        CData/*0:0*/ tb_osd_menu__DOT__ink;
        CData/*0:0*/ tb_osd_menu__DOT__shade;
        CData/*0:0*/ tb_osd_menu__DOT__show_menu;
        CData/*0:0*/ tb_osd_menu__DOT__show_alert;
        CData/*0:0*/ tb_osd_menu__DOT__gallery__DOT__loading;
        CData/*1:0*/ tb_osd_menu__DOT__gallery__DOT__pending;
        CData/*4:0*/ tb_osd_menu__DOT__gallery__DOT__direct_index;
        CData/*5:0*/ tb_osd_menu__DOT__menu__DOT__total;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__opened;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__valid;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__ready;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__paused;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__muted;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__source;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__auto_mode;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__alert;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__vis;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__q;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__tag;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__ic;
        CData/*4:0*/ tb_osd_menu__DOT__osd__DOT__img;
        CData/*4:0*/ tb_osd_menu__DOT__osd__DOT__wc;
        CData/*3:0*/ tb_osd_menu__DOT__osd__DOT__wi;
        CData/*3:0*/ tb_osd_menu__DOT__osd__DOT__vol;
        CData/*3:0*/ tb_osd_menu__DOT__osd__DOT__bri;
        CData/*3:0*/ tb_osd_menu__DOT__osd__DOT__con;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__se;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__ie;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__we;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__total;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__ch;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__glyph_pos;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__area;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__shade;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__selected;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n;
    };
    struct {
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__n;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_osd_menu__DOT__x;
        SData/*9:0*/ tb_osd_menu__DOT__y;
        SData/*9:0*/ tb_osd_menu__DOT__osd__DOT__scroll;
        SData/*9:0*/ tb_osd_menu__DOT__osd__DOT__ahead_y;
        SData/*9:0*/ tb_osd_menu__DOT__osd__DOT__ticker_x;
        SData/*15:0*/ tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0;
        IData/*31:0*/ tb_osd_menu__DOT__swaps;
        IData/*31:0*/ tb_osd_menu__DOT__selections;
        IData/*23:0*/ tb_osd_menu__DOT__color;
        IData/*31:0*/ tb_osd_menu__DOT__px;
        IData/*23:0*/ tb_osd_menu__DOT__rgb;
        IData/*31:0*/ tb_osd_menu__DOT__gallery__DOT__last_swaps;
        IData/*31:0*/ tb_osd_menu__DOT__gallery__DOT__timer;
        IData/*23:0*/ tb_osd_menu__DOT__osd__DOT__tm;
        VlWide<10>/*319:0*/ tb_osd_menu__DOT__osd__DOT__line;
        IData/*31:0*/ tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_osd_menu__DOT__osd__DOT__name;
        QData/*63:0*/ tb_osd_menu__DOT__osd__DOT__bits;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd4d1918e__0;
    VlTriggerScheduler __VtrigSched_hd4d191cf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_osd_menu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_osd_menu___024root(Vtb_osd_menu__Syms* symsp, const char* v__name);
    ~Vtb_osd_menu___024root();
    VL_UNCOPYABLE(Vtb_osd_menu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
