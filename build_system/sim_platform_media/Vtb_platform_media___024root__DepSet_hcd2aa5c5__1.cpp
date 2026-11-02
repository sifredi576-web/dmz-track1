// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_platform_media.h for the primary calling header

#include "Vtb_platform_media__pch.h"
#include "Vtb_platform_media___024root.h"

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__2(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__2\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__flush_sync;
    __Vdly__tb_platform_media__DOT__flush_sync = 0;
    CData/*1:0*/ __Vdly__tb_platform_media__DOT__prefill_sync;
    __Vdly__tb_platform_media__DOT__prefill_sync = 0;
    SData/*10:0*/ __Vdly__tb_platform_media__DOT__sample_div;
    __Vdly__tb_platform_media__DOT__sample_div = 0;
    CData/*0:0*/ __Vdly__tb_platform_media__DOT__playing;
    __Vdly__tb_platform_media__DOT__playing = 0;
    // Body
    __Vdly__tb_platform_media__DOT__prefill_sync = vlSelfRef.tb_platform_media__DOT__prefill_sync;
    __Vdly__tb_platform_media__DOT__flush_sync = vlSelfRef.tb_platform_media__DOT__flush_sync;
    __Vdly__tb_platform_media__DOT__playing = vlSelfRef.tb_platform_media__DOT__playing;
    __Vdly__tb_platform_media__DOT__sample_div = vlSelfRef.tb_platform_media__DOT__sample_div;
    __Vdly__tb_platform_media__DOT__flush_sync = ((IData)(vlSelfRef.tb_platform_media__DOT__reset)
                                                   ? 3U
                                                   : 
                                                  (3U 
                                                   & ((2U 
                                                       & ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.tb_platform_media__DOT__flush))));
    if (((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
         | ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
            >> 1U))) {
        __Vdly__tb_platform_media__DOT__prefill_sync = 0U;
        __Vdly__tb_platform_media__DOT__sample_div = 0U;
        __Vdly__tb_platform_media__DOT__playing = 0U;
    } else {
        __Vdly__tb_platform_media__DOT__prefill_sync 
            = ((2U & ((IData)(vlSelfRef.tb_platform_media__DOT__prefill_sync) 
                      << 1U)) | (0x200U <= (IData)(vlSelfRef.tb_platform_media__DOT__fifo_used)));
        __Vdly__tb_platform_media__DOT__sample_div 
            = ((IData)(vlSelfRef.tb_platform_media__DOT__sample_tick)
                ? 0U : (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_platform_media__DOT__sample_div))));
        if ((((((IData)(vlSelfRef.tb_platform_media__DOT__sample_tick) 
                & (IData)(vlSelfRef.tb_platform_media__DOT__playing)) 
               & (IData)((vlSelfRef.tb_platform_media__DOT__params 
                          >> 0x21U))) & (~ (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                            >> 0x14U))) 
             & (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty))) {
            vlSelfRef.tb_platform_media__DOT__underruns 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__underruns);
        }
        if (vlSelfRef.tb_platform_media__DOT__pop) {
            vlSelfRef.tb_platform_media__DOT__consumed 
                = ((IData)(1U) + vlSelfRef.tb_platform_media__DOT__consumed);
        }
        if ((2U & (IData)(vlSelfRef.tb_platform_media__DOT__prefill_sync))) {
            __Vdly__tb_platform_media__DOT__playing = 1U;
        }
    }
    if (vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__rreset) {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray = 0U;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1;
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn), 1U) 
                         ^ (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn)));
        vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg1 
            = vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray;
    }
    vlSelfRef.tb_platform_media__DOT__prefill_sync 
        = __Vdly__tb_platform_media__DOT__prefill_sync;
    vlSelfRef.tb_platform_media__DOT__flush_sync = __Vdly__tb_platform_media__DOT__flush_sync;
    vlSelfRef.tb_platform_media__DOT__playing = __Vdly__tb_platform_media__DOT__playing;
    vlSelfRef.tb_platform_media__DOT__sample_div = __Vdly__tb_platform_media__DOT__sample_div;
    vlSelfRef.tb_platform_media__DOT__sample_tick = 
        (0x411U == (IData)(vlSelfRef.tb_platform_media__DOT__sample_div));
    vlSelfRef.tb_platform_media__DOT__fifo_empty = 
        ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rgray) 
         == (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wg2));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__0(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__0\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key;
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key = 0;
    // Body
    tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key 
        = ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
           & ((6U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
              | ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                 | (IData)(((5U == (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                            & (0x200U == (0x780U & 
                                          vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])))))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid)
            ? 0xdU : ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_platform_media__DOT__action)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_event 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) 
           & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_platform_media__DOT__ev) 
                 & ((0xaU <= (IData)(vlSelfRef.tb_platform_media__DOT__action)) 
                    | ((IData)(tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__exit_key) 
                       | ((0xbU == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__state)) 
                          & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag) 
                             == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus))))))));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_sequent__TOP__3(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_sequent__TOP__3\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_platform_media__DOT__fifo_full;
    tb_platform_media__DOT__fifo_full = 0;
    CData/*0:0*/ tb_platform_media__DOT__fifo__DOT__push;
    tb_platform_media__DOT__fifo__DOT__push = 0;
    // Body
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[1U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] = 0U;
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfffffffcU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading) 
               << 1U) | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active)));
    VL_ASSIGNBIT_WI(2U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__164__Vfuncout 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__164__Vfuncout)) 
                           >> 1U)));
    VL_ASSIGNBIT_WI(3U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout 
                            = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__165__Vfuncout)) 
                           >> 2U)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xffffff8fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xfffffff0U & ((((0xffU != (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                          >> 0x18U)) 
                               & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answered) 
                                  >> (7U & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                            >> 0x18U)))) 
                              << 6U) | (((0xffU != 
                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                           >> 0x18U)) 
                                         << 5U) | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid) 
                                                   << 4U)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfffff87fU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xffffff80U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus) 
                              << 8U) | (((0xffU != 
                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                           >> 0x18U)) 
                                         & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__correct) 
                                            >> (7U 
                                                & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                                                   >> 0x18U)))) 
                                        << 7U))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
        = ((0xfc0007ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
           | (0xfffff800U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__score) 
                              << 0x16U) | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__config_pages) 
                                            << 0x10U) 
                                           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_current_page) 
                                              << 0xbU)))));
    VL_ASSIGNSEL_WI(160,4,0x1aU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0xfU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__166__Vfuncout 
                        = (0xffU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[5U] 
                                    >> 0x10U));
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pb__166__Vfuncout))));
    if (((0U != (0xfU & (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[2U] 
                         >> 8U))) & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_tag) 
                                     == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__focus)))) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U] 
            = ((0x3fffffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[0U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]))))) 
                  << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[1U] 
            = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U]))))) 
                >> 2U) | ((IData)(((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U])))) 
                                   >> 0x20U)) << 0x1eU));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U]) 
               | ((IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__cache_q[0U])))) 
                           >> 0x20U)) >> 2U));
    }
    if (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice_valid) {
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U] 
            = ((1U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[2U]) 
               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                          [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice]) 
                  << 1U));
        vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U] 
            = ((0xfffffff0U & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[3U]) 
               | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                           [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice]) 
                   >> 0x1fU) | ((IData)((vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__answer_rect
                                         [vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__choice] 
                                         >> 0x20U)) 
                                << 1U)));
    }
    VL_ASSIGNSEL_WI(160,8,0x64U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0xffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__167__Vfuncout 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[3U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__167__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x6cU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__168__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[4U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__168__Vfuncout))));
    VL_ASSIGNSEL_WI(160,10,0x75U, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x3ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__169__Vfuncout 
                        = (vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[4U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__169__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x7fU, vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__170__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__page[5U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__p16__170__Vfuncout))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfffc00ffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (0xffffff00U & (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice) 
                              << 0x10U) | (((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error))
                                             ? (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_error)
                                             : (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_error)) 
                                           << 8U))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfffbffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_active) 
               & ((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                  | (2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice)))) 
              << 0x12U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xfff7ffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | (((((2U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                 & (~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__loading))) 
                & ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__target_page) 
                   == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__alert_page))) 
               & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice))) 
              << 0x13U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xffefffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | ((((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__notice)) 
                | (0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__pending_notice))) 
               | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__track_switching)) 
              << 0x14U));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
        = ((0xffdfffffU & vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U]) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__configured_ui__DOT__runtime__DOT__core_busy) 
              << 0x15U));
    vlSelfRef.tb_platform_media__DOT__params = vlSelfRef.__Vdly__tb_platform_media__DOT__params;
    vlSelfRef.tb_platform_media__DOT__fifo_used = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp) 
                                                      - 
                                                      ([&]() {
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g 
                        = vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g)));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__g)));
                    vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_platform_media__DOT__fifo__DOT__binary__55__Vfuncout))));
    vlSelfRef.tb_platform_media__DOT__flush = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio_change) 
                                               | ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__rt_audio_stop) 
                                                  | ((5U 
                                                      == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)) 
                                                     | (6U 
                                                        == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)))));
    vlSelfRef.tb_platform_media__DOT__pcm = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__flush)) 
                                             & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__cancel 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__wav_done) 
           | ((0U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error)) 
              | (IData)(vlSelfRef.tb_platform_media__DOT__flush)));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray 
        = ((IData)(vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset)
            ? 0U : (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn), 1U) 
                              ^ (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__cancel) 
               | (0U == vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)));
    tb_platform_media__DOT__fifo_full = ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wgray) 
                                         == ((0xc00U 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2) 
                                                   >> 0xaU)) 
                                                 << 0xaU)) 
                                             | (0x3ffU 
                                                & (IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_platform_media__DOT__pcm_ready = (1U 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__timed)
                                                       ? 
                                                      (~ (IData)(tb_platform_media__DOT__fifo_full))
                                                       : 
                                                      (0U 
                                                       == 
                                                       VL_MODDIVS_III(32, vlSelfRef.tb_platform_media__DOT__cycle, (IData)(0x3e8U)))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready 
        = ((~ (IData)(vlSelfRef.tb_platform_media__DOT__flush)) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__pcm_ready));
    tb_platform_media__DOT__fifo__DOT__push = ((~ (IData)(tb_platform_media__DOT__fifo_full)) 
                                               & ((IData)(vlSelfRef.tb_platform_media__DOT__timed) 
                                                  & ((IData)(vlSelfRef.tb_platform_media__DOT__pcm) 
                                                     & (IData)(vlSelfRef.tb_platform_media__DOT__pcm_ready))));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_ready 
        = (((1U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
            | ((3U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
               | ((5U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                  | ((7U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                     | ((8U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                        | ((9U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                              | (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))))))) 
           & ((1U != (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__state)) 
              & (0U == (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decode_error))));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__wp) 
                     + (IData)(tb_platform_media__DOT__fifo__DOT__push)));
    vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_valid) 
           & (IData)(vlSelfRef.tb_platform_media__DOT__dut__DOT__audio__DOT__byte_ready));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__1(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__1\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__rreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__reset) 
           | ((IData)(vlSelfRef.tb_platform_media__DOT__flush_sync) 
              >> 1U));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__2(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__2\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT__pop = ((IData)(vlSelfRef.tb_platform_media__DOT__timed) 
                                             & ((0x411U 
                                                 == (IData)(vlSelfRef.tb_platform_media__DOT__sample_div)) 
                                                & ((~ (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty)) 
                                                   & ((IData)(vlSelfRef.tb_platform_media__DOT__playing) 
                                                      & ((~ 
                                                          (vlSelfRef.tb_platform_media__DOT__dut__DOT__runtime_status[4U] 
                                                           >> 0x14U)) 
                                                         & (IData)(
                                                                   (vlSelfRef.tb_platform_media__DOT__params 
                                                                    >> 0x21U)))))));
    vlSelfRef.tb_platform_media__DOT__fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_platform_media__DOT__fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_platform_media__DOT__fifo_empty)) 
                        & (IData)(vlSelfRef.tb_platform_media__DOT__pop))));
}

VL_INLINE_OPT void Vtb_platform_media___024root___nba_comb__TOP__3(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___nba_comb__TOP__3\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_platform_media__DOT____Vcellinp__fifo__wreset 
        = ((IData)(vlSelfRef.tb_platform_media__DOT__flush) 
           | (IData)(vlSelfRef.tb_platform_media__DOT__reset));
}

void Vtb_platform_media___024root___timing_resume(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___timing_resume\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb2d186ba__0.resume(
                                                   "@(negedge tb_platform_media.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h42a6e599__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__3__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1c2298fa__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__9__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h843a2dd8__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__15__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc150bfff__0.resume(
                                                   "@( (32'sh12c < tb_platform_media.samples))");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9fcac863__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__21__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h315805b4__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__27__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf1206038__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__33__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha4b7114c__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__39__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha1c0c0a7__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__45__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h752d5b90__0.resume(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__51__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc16a3357__0.resume(
                                                   "@( (32'sh258 < tb_platform_media.samples))");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_platform_media___024root___timing_commit(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___timing_commit\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb2d186ba__0.commit(
                                                   "@(negedge tb_platform_media.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h42a6e599__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__3__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1c2298fa__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__9__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h843a2dd8__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__15__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc150bfff__0.commit(
                                                   "@( (32'sh12c < tb_platform_media.samples))");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9fcac863__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__21__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h315805b4__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__27__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x200ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf1206038__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__33__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x400ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha4b7114c__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__39__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha1c0c0a7__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__45__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x1000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h752d5b90__0.commit(
                                                   "@( ((((tb_platform_media.dut.runtime_status[0] & (~ tb_platform_media.dut.runtime_status[1])) & (~ tb_platform_media.dut.runtime_status[149])) & (tb_platform_media.dut.runtime_status[15:11] == __Vtask_tb_platform_media.idle_page__51__wanted)) & (6'hb == tb_platform_media.dut.configured_ui.runtime.state)))");
    }
    if ((! (0x2000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc16a3357__0.commit(
                                                   "@( (32'sh258 < tb_platform_media.samples))");
    }
}

void Vtb_platform_media___024root___eval_triggers__act(Vtb_platform_media___024root* vlSelf);
void Vtb_platform_media___024root___eval_act(Vtb_platform_media___024root* vlSelf);

bool Vtb_platform_media___024root___eval_phase__act(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_phase__act\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<15> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_platform_media___024root___eval_triggers__act(vlSelf);
    Vtb_platform_media___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_platform_media___024root___timing_resume(vlSelf);
        Vtb_platform_media___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_platform_media___024root___eval_nba(Vtb_platform_media___024root* vlSelf);

bool Vtb_platform_media___024root___eval_phase__nba(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_phase__nba\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_platform_media___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_platform_media___024root___dump_triggers__nba(Vtb_platform_media___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_platform_media___024root___dump_triggers__act(Vtb_platform_media___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_platform_media___024root___eval(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_platform_media___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_platform_media.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_platform_media___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_platform_media.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_platform_media___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_platform_media___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_platform_media___024root___eval_debug_assertions(Vtb_platform_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_platform_media___024root___eval_debug_assertions\n"); );
    Vtb_platform_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
