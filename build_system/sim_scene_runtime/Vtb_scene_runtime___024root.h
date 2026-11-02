// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_scene_runtime.h for the primary calling header

#ifndef VERILATED_VTB_SCENE_RUNTIME___024ROOT_H_
#define VERILATED_VTB_SCENE_RUNTIME___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_scene_runtime__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_scene_runtime___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_scene_runtime__DOT__clk;
        CData/*0:0*/ tb_scene_runtime__DOT__reset;
        CData/*0:0*/ tb_scene_runtime__DOT__start;
        CData/*0:0*/ tb_scene_runtime__DOT__bv;
        CData/*0:0*/ tb_scene_runtime__DOT__bl;
        CData/*7:0*/ tb_scene_runtime__DOT__bd;
        CData/*0:0*/ tb_scene_runtime__DOT__br;
        CData/*0:0*/ tb_scene_runtime__DOT__sw;
        CData/*0:0*/ tb_scene_runtime__DOT__sv;
        CData/*0:0*/ tb_scene_runtime__DOT__commit;
        CData/*7:0*/ tb_scene_runtime__DOT__loader_error;
        CData/*1:0*/ tb_scene_runtime__DOT__version;
        CData/*6:0*/ tb_scene_runtime__DOT__resources;
        CData/*5:0*/ tb_scene_runtime__DOT__pages;
        CData/*7:0*/ tb_scene_runtime__DOT__widgets;
        CData/*4:0*/ tb_scene_runtime__DOT__entry;
        CData/*0:0*/ tb_scene_runtime__DOT__wr;
        CData/*0:0*/ tb_scene_runtime__DOT__wd;
        CData/*0:0*/ tb_scene_runtime__DOT__wi;
        CData/*0:0*/ tb_scene_runtime__DOT__wvalid;
        CData/*1:0*/ tb_scene_runtime__DOT__ready;
        CData/*1:0*/ tb_scene_runtime__DOT__response;
        CData/*0:0*/ tb_scene_runtime__DOT__rv;
        CData/*0:0*/ tb_scene_runtime__DOT__mv;
        CData/*0:0*/ tb_scene_runtime__DOT__mwrite;
        CData/*0:0*/ tb_scene_runtime__DOT__mr;
        CData/*0:0*/ tb_scene_runtime__DOT__mresponse;
        CData/*0:0*/ tb_scene_runtime__DOT__active;
        CData/*7:0*/ tb_scene_runtime__DOT__error;
        CData/*5:0*/ tb_scene_runtime__DOT__query;
        CData/*5:0*/ tb_scene_runtime__DOT__tag;
        CData/*0:0*/ tb_scene_runtime__DOT__valid;
        CData/*0:0*/ tb_scene_runtime__DOT__ev;
        CData/*3:0*/ tb_scene_runtime__DOT__action;
        CData/*0:0*/ tb_scene_runtime__DOT__image_busy;
        CData/*0:0*/ tb_scene_runtime__DOT__image_select;
        CData/*0:0*/ tb_scene_runtime__DOT__audio_select;
        CData/*3:0*/ tb_scene_runtime__DOT__audio_index;
        CData/*7:0*/ tb_scene_runtime__DOT__params_ack;
        CData/*0:0*/ tb_scene_runtime__DOT__pending;
        CData/*0:0*/ tb_scene_runtime__DOT__pwrite;
        CData/*0:0*/ tb_scene_runtime__DOT__loader__DOT__busy;
        CData/*0:0*/ tb_scene_runtime__DOT__loader__DOT__header_done;
        CData/*0:0*/ tb_scene_runtime__DOT__loader__DOT__bad_prefix;
        CData/*0:0*/ tb_scene_runtime__DOT__loader__DOT__bad_reserved;
        CData/*0:0*/ tb_scene_runtime__DOT__writer__DOT__pending;
        CData/*0:0*/ tb_scene_runtime__DOT__writer__DOT__waiting;
        CData/*0:0*/ tb_scene_runtime__DOT__writer__DOT__final_word;
        CData/*4:0*/ tb_scene_runtime__DOT__writer__DOT__count;
        CData/*0:0*/ tb_scene_runtime__DOT__mux__DOT__busy;
        CData/*0:0*/ tb_scene_runtime__DOT__mux__DOT__owner;
        CData/*0:0*/ tb_scene_runtime__DOT__mux__DOT__selected;
        CData/*5:0*/ tb_scene_runtime__DOT__dut__DOT__state;
        CData/*5:0*/ tb_scene_runtime__DOT__dut__DOT__return_state;
        CData/*6:0*/ tb_scene_runtime__DOT__dut__DOT__ri;
        CData/*5:0*/ tb_scene_runtime__DOT__dut__DOT__pi;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__wi;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__requested_resource;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__resolved_q;
        CData/*3:0*/ tb_scene_runtime__DOT__dut__DOT__settle;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__target_page;
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__slot;
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__focus;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__cache_write;
    };
    struct {
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__cache_write_index;
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__cache_tag;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__visible;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__enabled;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__loading;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__first_image;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__ticket;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__auto_fired;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__force_valid;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__force_target;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__notice;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__pending_notice;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__notice_page;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__alert_page;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__context_page;
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__context_focus;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__context_valid;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__returning;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__exit_pending;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__exit_home;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__suppress_audio;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__restore_flag;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__track_switching;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__notice_found;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__alert_found;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__last_physical;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__notice_soft;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__answered;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__correct;
        CData/*3:0*/ tb_scene_runtime__DOT__dut__DOT__score;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__choice_valid;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__choice;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__core_page_request;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__core_audio_request;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__core_control_request;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__core_busy;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__core_page;
        CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__core_current_page;
        CData/*5:0*/ tb_scene_runtime__DOT__dut__DOT__core_audio;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__core_error;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__page_accept;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__page_loaded;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__audio_accept;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__control_accept;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__notice_request;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__notice_exit;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__notice_priority;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__core_event;
        CData/*3:0*/ tb_scene_runtime__DOT__dut__DOT__core_event_action;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__requested_notice;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT____Vcellinp__ui__back_page;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_hc8fc4ac6__0;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_h3f146728__0;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_h3f0a2e13__0;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__configured;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__waiting;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__moving;
        CData/*2:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate;
        CData/*1:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction;
        CData/*3:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__attempts;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices_valid;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__available;
        CData/*7:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__neighbor;
        CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__first;
    };
    struct {
        CData/*7:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__584__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__585__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__586__Vfuncout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_scene_runtime__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_scene_runtime__DOT__loader__DOT__count_sum;
        SData/*15:0*/ tb_scene_runtime__DOT__dut__DOT__ms_clock;
        SData/*15:0*/ tb_scene_runtime__DOT__dut__DOT__elapsed_ms;
        SData/*15:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices;
        SData/*15:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__587__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__588__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__589__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__590__Vfuncout;
        IData/*20:0*/ tb_scene_runtime__DOT__length;
        IData/*20:0*/ tb_scene_runtime__DOT__ra;
        IData/*20:0*/ tb_scene_runtime__DOT__ma;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__md;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__memory_data;
        IData/*31:0*/ tb_scene_runtime__DOT__bytes;
        IData/*31:0*/ tb_scene_runtime__DOT__swaps;
        VlWide<5>/*159:0*/ tb_scene_runtime__DOT__status;
        IData/*31:0*/ tb_scene_runtime__DOT__length_bytes;
        IData/*31:0*/ tb_scene_runtime__DOT__cycle;
        IData/*31:0*/ tb_scene_runtime__DOT__delay;
        IData/*31:0*/ tb_scene_runtime__DOT__imgdelay;
        IData/*20:0*/ tb_scene_runtime__DOT__address;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__write_data;
        IData/*31:0*/ tb_scene_runtime__DOT__wait_idle__Vstatic__watchdog;
        IData/*31:0*/ tb_scene_runtime__DOT__focus_to__Vstatic__n;
        IData/*20:0*/ tb_scene_runtime__DOT__loader__DOT__position;
        IData/*31:0*/ tb_scene_runtime__DOT__loader__DOT__expected_crc;
        IData/*31:0*/ tb_scene_runtime__DOT__loader__DOT__crc;
        IData/*20:0*/ tb_scene_runtime__DOT__loader__DOT__payload_bytes;
        IData/*31:0*/ tb_scene_runtime__DOT__loader__DOT__header_length;
        IData/*31:0*/ tb_scene_runtime__DOT__loader__DOT__header_crc;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__writer__DOT__buffer;
        IData/*20:0*/ tb_scene_runtime__DOT__writer__DOT__address;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__dut__DOT__record;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__dut__DOT__held;
        VlWide<8>/*255:0*/ tb_scene_runtime__DOT__dut__DOT__page;
        IData/*19:0*/ tb_scene_runtime__DOT__dut__DOT__label_offset;
        VlWide<4>/*98:0*/ tb_scene_runtime__DOT__dut__DOT__cache_q;
        VlWide<4>/*98:0*/ tb_scene_runtime__DOT__dut__DOT__cache_encoded_q;
        VlWide<4>/*98:0*/ tb_scene_runtime__DOT__dut__DOT__cache_data;
        VlWide<4>/*127:0*/ tb_scene_runtime__DOT__dut__DOT__neighbors;
        IData/*31:0*/ tb_scene_runtime__DOT__dut__DOT__last_swaps;
        IData/*20:0*/ tb_scene_runtime__DOT__dut__DOT__table_bytes;
        IData/*31:0*/ tb_scene_runtime__DOT__dut__DOT__sprite_length_q;
        IData/*31:0*/ __Vtask_tb_scene_runtime__DOT__focus_to__126__wanted;
        IData/*31:0*/ __Vtask_tb_scene_runtime__DOT__focus_to__273__wanted;
        IData/*31:0*/ __Vtask_tb_scene_runtime__DOT__focus_to__392__wanted;
        IData/*31:0*/ __Vtask_tb_scene_runtime__DOT__focus_to__510__wanted;
        VlWide<4>/*98:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__581__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ tb_scene_runtime__DOT__name;
        QData/*41:0*/ tb_scene_runtime__DOT__params;
        VlUnpacked<VlWide<8>/*255:0*/, 32768> tb_scene_runtime__DOT__memory;
        VlUnpacked<CData/*7:0*/, 514272> tb_scene_runtime__DOT__scene;
        VlUnpacked<QData/*63:0*/, 64> tb_scene_runtime__DOT__names;
        VlUnpacked<IData/*31:0*/, 64> tb_scene_runtime__DOT__sizes;
        VlUnpacked<CData/*7:0*/, 32> tb_scene_runtime__DOT__loader__DOT__header;
        VlUnpacked<CData/*4:0*/, 64> tb_scene_runtime__DOT__dut__DOT__resolved;
        VlUnpacked<VlWide<4>/*98:0*/, 8> tb_scene_runtime__DOT__dut__DOT__cache;
    };
    struct {
        VlUnpacked<QData/*34:0*/, 4> tb_scene_runtime__DOT__dut__DOT__answer_rect;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0edfc70d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_scene_runtime__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_scene_runtime___024root(Vtb_scene_runtime__Syms* symsp, const char* v__name);
    ~Vtb_scene_runtime___024root();
    VL_UNCOPYABLE(Vtb_scene_runtime___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
