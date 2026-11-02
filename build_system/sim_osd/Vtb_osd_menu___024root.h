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
        CData/*0:0*/ tb_osd_menu__DOT__course;
        CData/*1:0*/ tb_osd_menu__DOT__section;
        CData/*1:0*/ tb_osd_menu__DOT__cursor;
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
        CData/*1:0*/ tb_osd_menu__DOT__osd__DOT__section;
        CData/*1:0*/ tb_osd_menu__DOT__osd__DOT__cursor;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__paired;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__course;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__opened;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__valid;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__ready;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__paused;
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
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__line_id;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__text_char;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__dynamic_char;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT__font_row;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__dynamic_used;
        CData/*5:0*/ tb_osd_menu__DOT__osd__DOT__glyph_pos;
        CData/*2:0*/ tb_osd_menu__DOT__osd__DOT__glyph_x;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__area;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__shade;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__selected;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__area_q;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__shade_q;
        CData/*0:0*/ tb_osd_menu__DOT__osd__DOT__selected_q;
        CData/*7:0*/ tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0;
    };
    struct {
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__63__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__64__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__84__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__85__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__91__n;
        CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__digit__92__n;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_osd_menu__DOT__x;
        SData/*9:0*/ tb_osd_menu__DOT__y;
        SData/*9:0*/ tb_osd_menu__DOT__osd__DOT__scroll;
    };
    struct {
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
        VlWide<10>/*319:0*/ tb_osd_menu__DOT__osd__DOT__dynamic_line;
        IData/*31:0*/ tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_osd_menu__DOT__osd__DOT__name;
        QData/*39:0*/ tb_osd_menu__DOT__osd__DOT__dynamic_mask;
        QData/*63:0*/ tb_osd_menu__DOT__osd__DOT__init_glyph;
        VlUnpacked<CData/*7:0*/, 4096> tb_osd_menu__DOT__osd__DOT__text_rom;
        VlUnpacked<CData/*7:0*/, 1024> tb_osd_menu__DOT__osd__DOT__font_rom;
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
