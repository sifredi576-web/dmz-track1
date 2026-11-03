// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_runtime.h for the primary calling header

#include "Vtb_scene_runtime__pch.h"
#include "Vtb_scene_runtime___024root.h"

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_static__TOP(Vtb_scene_runtime___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_static(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_static\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scene_runtime___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_runtime__DOT__clk__0 = 0U;
}

extern const VlWide<8>/*255:0*/ Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_static__TOP(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_static__TOP\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scene_runtime__DOT__clk = 0U;
    vlSelfRef.tb_scene_runtime__DOT__reset = 1U;
    vlSelfRef.tb_scene_runtime__DOT__start = 0U;
    vlSelfRef.tb_scene_runtime__DOT__bv = 0U;
    vlSelfRef.tb_scene_runtime__DOT__bl = 0U;
    vlSelfRef.tb_scene_runtime__DOT__bd = 0U;
    vlSelfRef.tb_scene_runtime__DOT__mr = 0U;
    vlSelfRef.tb_scene_runtime__DOT__mresponse = 0U;
    vlSelfRef.tb_scene_runtime__DOT__memory_data[0U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[1U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[2U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[3U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[4U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[5U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[6U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.tb_scene_runtime__DOT__memory_data[7U] 
        = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.tb_scene_runtime__DOT__tag = 0U;
    vlSelfRef.tb_scene_runtime__DOT__valid = 0U;
    vlSelfRef.tb_scene_runtime__DOT__name = 0ULL;
    vlSelfRef.tb_scene_runtime__DOT__bytes = 0U;
    vlSelfRef.tb_scene_runtime__DOT__menu = 0U;
    vlSelfRef.tb_scene_runtime__DOT__paused = 0U;
    vlSelfRef.tb_scene_runtime__DOT__ev = 0U;
    vlSelfRef.tb_scene_runtime__DOT__action = 0U;
    vlSelfRef.tb_scene_runtime__DOT__swaps = 0U;
    vlSelfRef.tb_scene_runtime__DOT__image_busy = 0U;
    vlSelfRef.tb_scene_runtime__DOT__params_ack = 0U;
    vlSelfRef.tb_scene_runtime__DOT__finished = 0U;
    vlSelfRef.tb_scene_runtime__DOT__length_bytes = 0x7d8e0U;
    vlSelfRef.tb_scene_runtime__DOT__cycle = 0U;
    vlSelfRef.tb_scene_runtime__DOT__delay = 0U;
    vlSelfRef.tb_scene_runtime__DOT__imgdelay = 0U;
    vlSelfRef.tb_scene_runtime__DOT__pending = 0U;
}

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_final(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_final\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_runtime___024root___dump_triggers__stl(Vtb_scene_runtime___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scene_runtime___024root___eval_phase__stl(Vtb_scene_runtime___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_settle(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_settle\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_scene_runtime___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_scene_runtime.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_scene_runtime___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_runtime___024root___dump_triggers__stl(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___dump_triggers__stl\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scene_runtime___024root___stl_sequent__TOP__0(Vtb_scene_runtime___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_stl(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_stl\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_scene_runtime___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_scene_runtime___024root___stl_sequent__TOP__0(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___stl_sequent__TOP__0\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*41:0*/ tb_scene_runtime__DOT____Vcellinp__mux__addr;
    tb_scene_runtime__DOT____Vcellinp__mux__addr = 0;
    CData/*1:0*/ tb_scene_runtime__DOT____Vcellinp__mux__valid;
    tb_scene_runtime__DOT____Vcellinp__mux__valid = 0;
    CData/*4:0*/ tb_scene_runtime__DOT__dut__DOT__image_resolved_q;
    tb_scene_runtime__DOT__dut__DOT__image_resolved_q = 0;
    CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT__exit_key;
    tb_scene_runtime__DOT__dut__DOT__exit_key = 0;
    CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0;
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 = 0;
    CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0;
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 = 0;
    CData/*0:0*/ tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0;
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 = 0;
    CData/*3:0*/ tb_scene_runtime__DOT__dut__DOT__ui__DOT__compact_neighbor;
    tb_scene_runtime__DOT__dut__DOT__ui__DOT__compact_neighbor = 0;
    CData/*4:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value = 0;
    CData/*0:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t = 0;
    CData/*4:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value = 0;
    CData/*0:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t = 0;
    VlWide<4>/*98:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value;
    VL_ZERO_W(99, __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value);
    CData/*7:0*/ __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__779__Vfuncout;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__779__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header_length 
        = (((vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
             [0xbU] << 0x18U) | (vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
                                 [0xaU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
               [9U] << 8U) | vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
              [8U]));
    vlSelfRef.tb_scene_runtime__DOT__loader__DOT__count_sum 
        = (0x3ffU & (vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
                     [0x10U] + (vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
                                [0x11U] + vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
                                [0x12U])));
    vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header_crc 
        = (((vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
             [0xfU] << 0x18U) | (vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
                                 [0xeU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
               [0xdU] << 8U) | vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header
              [0xcU]));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__available 
        = ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__enabled) 
           & (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__visible));
    vlSelfRef.tb_scene_runtime__DOT__response = 0U;
    if ((((IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__busy) 
          & (IData)(vlSelfRef.tb_scene_runtime__DOT__mresponse)) 
         & (IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__owner))) {
        vlSelfRef.tb_scene_runtime__DOT__response = 
            (2U | (IData)(vlSelfRef.tb_scene_runtime__DOT__response));
    }
    if ((((IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__busy) 
          & (IData)(vlSelfRef.tb_scene_runtime__DOT__mresponse)) 
         & (~ (IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__owner)))) {
        vlSelfRef.tb_scene_runtime__DOT__response = 
            (1U | (IData)(vlSelfRef.tb_scene_runtime__DOT__response));
    }
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__779__Vfuncout 
        = (0xffU & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                    >> 0x10U));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT____Vcellinp__ui__back_page 
        = __Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__779__Vfuncout;
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__requested_notice 
        = (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice_request) 
            & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice_priority) 
               > (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__pending_notice)))
            ? (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice_priority)
            : (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__pending_notice));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__table_bytes 
        = (0x1fffffU & VL_SHIFTL_III(21,21,32, ((IData)(vlSelfRef.tb_scene_runtime__DOT__resources) 
                                                + ((IData)(vlSelfRef.tb_scene_runtime__DOT__pages) 
                                                   + (IData)(vlSelfRef.tb_scene_runtime__DOT__widgets))), 5U));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__autoplay_event 
        = ((IData)(vlSelfRef.tb_scene_runtime__DOT__active) 
           & ((IData)(vlSelfRef.tb_scene_runtime__DOT__ev) 
              & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__menu)) 
                 & ((9U == (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                    & (0U == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice))))));
    __Vtemp_1[0U] = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__neighbors[0U];
    __Vtemp_1[1U] = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__neighbors[1U];
    __Vtemp_1[2U] = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__neighbors[2U];
    __Vtemp_1[3U] = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__neighbors[3U];
    __Vtemp_1[4U] = 0U;
    __Vtemp_1[5U] = 0U;
    __Vtemp_1[6U] = 0U;
    __Vtemp_1[7U] = 0U;
    tb_scene_runtime__DOT__dut__DOT__ui__DOT__compact_neighbor 
        = (0xfU & (((0U == (0x1fU & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate) 
                                      << 4U) | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction) 
                                                << 2U))))
                     ? 0U : (__Vtemp_1[(((IData)(3U) 
                                         + (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction) 
                                               << 2U))) 
                                        >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate) 
                                                    << 4U) 
                                                   | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction) 
                                                      << 2U)))))) 
                   | (__Vtemp_1[(0x7ffffffU & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate) 
                                                >> 1U) 
                                               | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction) 
                                                  >> 3U)))] 
                      >> (0x1fU & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate) 
                                    << 4U) | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction) 
                                              << 2U))))));
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__resolved_q;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t 
        = (1U & VL_REDXOR_8((0x15U & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value))));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout 
        = ((7U & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout)) 
           | (((IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t) 
               << 4U) | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value)) 
                               ^ ((IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t) 
                                  << 3U)))));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout 
        = ((0x1bU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout)) 
           | (4U & ((VL_REDXOR_4((0xcU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value))) 
                     ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t)) 
                    << 2U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout 
        = ((0x1dU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout)) 
           | (2U & ((VL_REDXOR_4((0xeU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value))) 
                     ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t)) 
                    << 1U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout 
        = ((0x1eU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout)) 
           | (1U & (VL_REDXOR_4((0xfU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__value))) 
                    ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__t))));
    tb_scene_runtime__DOT__dut__DOT__image_resolved_q 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__resolved_q;
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t 
        = (1U & VL_REDXOR_8((0x15U & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value))));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout 
        = ((7U & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout)) 
           | (((IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t) 
               << 4U) | (8U & ((0xfffffff8U & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value)) 
                               ^ ((IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t) 
                                  << 3U)))));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout 
        = ((0x1bU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout)) 
           | (4U & ((VL_REDXOR_4((0xcU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value))) 
                     ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t)) 
                    << 2U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout 
        = ((0x1dU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout)) 
           | (2U & ((VL_REDXOR_4((0xeU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value))) 
                     ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t)) 
                    << 1U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout 
        = ((0x1eU & (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout)) 
           | (1U & (VL_REDXOR_4((0xfU & (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__value))) 
                    ^ (IData)(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__t))));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__audio_resolved_q 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout;
    tb_scene_runtime__DOT____Vcellinp__mux__addr = 
        (((QData)((IData)(vlSelfRef.tb_scene_runtime__DOT__ra)) 
          << 0x15U) | (QData)((IData)(vlSelfRef.tb_scene_runtime__DOT__writer__DOT__address)));
    vlSelfRef.tb_scene_runtime__DOT__wi = (1U & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__writer__DOT__pending)) 
                                                 & (~ (IData)(vlSelfRef.tb_scene_runtime__DOT__writer__DOT__waiting))));
    vlSelfRef.tb_scene_runtime__DOT__wvalid = ((0U 
                                                == (IData)(vlSelfRef.tb_scene_runtime__DOT__loader_error)) 
                                               & (IData)(vlSelfRef.tb_scene_runtime__DOT__writer__DOT__pending));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice_valid 
        = ((0xffU != (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                      >> 0x18U)) & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices_valid) 
                                    >> (7U & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                              >> 0x18U))));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice 
        = (3U & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices) 
                 >> (0xeU & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                             >> 0x17U))));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_busy 
        = ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__waiting) 
           | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__moving) 
              | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_page_request) 
                 | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_audio_request) 
                    | (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_control_request)))));
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U] 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_encoded_q[0U];
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U] 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_encoded_q[1U];
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U] 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_encoded_q[2U];
    __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[3U] 
        = vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_encoded_q[3U];
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((6U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | (IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_4((7U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 1U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U] 
                 ^ (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U] 
                    >> 2U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 2U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x30U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 3U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x38U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 4U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x28U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 5U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x180U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 6U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x1c0U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 7U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x140U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 8U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0xc00U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 9U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0xe00U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xaU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0xa00U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xbU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x6000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xcU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x7000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xdU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x5000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xeU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x30000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xfU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x38000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x10U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x28000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x11U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x180000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x12U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c0000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x13U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x140000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x14U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc00000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x15U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe00000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x16U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa00000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x17U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x6000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x18U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x7000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x19U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x5000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1aU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x30000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1bU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x38000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1cU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x28000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1dU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & ((__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U] 
                  >> 0x1fU) ^ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U]));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1eU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & (VL_REDXOR_32((0xc0000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U])) 
                 ^ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U]));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1fU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & ((__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[0U] 
                  >> 0x1eU) ^ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U]));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | (IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((0xcU & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 1U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_4((0xeU & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 2U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_4((0xaU & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 3U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x60U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 4U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x70U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 5U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x50U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 6U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x300U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 7U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x380U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 8U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x280U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 9U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x1800U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xaU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x1c00U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xbU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x1400U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xcU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0xc000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xdU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0xe000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xeU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0xa000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xfU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x60000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x10U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x70000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x11U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x50000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x12U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x300000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x13U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x380000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x14U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x280000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x15U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x1800000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x16U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c00000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x17U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x1400000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x18U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x19U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1aU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1bU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x60000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1cU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x70000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1dU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x50000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1eU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U] 
                 ^ (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U] 
                    >> 1U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1fU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & (((__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U] 
                   >> 0x1fU) ^ __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U]) 
                 ^ (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U] 
                    >> 1U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffffeU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | (IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & ((__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[1U] 
                  >> 0x1fU) ^ (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U] 
                               >> 1U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffffdU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 1U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0x18U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffffbU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 2U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0x1cU & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffff7U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 3U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0x14U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffffefU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 4U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_8((0xc0U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffffdfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 5U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_8((0xe0U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffffbfU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 6U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_8((0xa0U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffff7fU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 7U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x600U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffeffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 8U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x700U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffdffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 9U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x500U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffffbffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xaU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_16((0x3000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffff7ffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xbU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_16((0x3800U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffefffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xcU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_16((0x2800U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffdfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0xdU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x18000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffffbfffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0xeU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffff7fffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0xfU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x14000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffeffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x10U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc0000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffdffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x11U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe0000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfffbffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x12U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa0000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfff7ffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x13U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x600000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffefffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x14U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x700000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffdfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x15U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x500000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xffbfffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x16U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x3000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xff7fffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x17U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x3800000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfeffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x18U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x2800000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfdffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x19U));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0x18000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xfbffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1aU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0x1c000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xf7ffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1bU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0x14000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xefffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1cU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_32((0xc0000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xdfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0) 
              << 0x1dU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32((0xe0000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0xbfffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
              << 0x1eU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & VL_REDXOR_32((0xa0000000U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[2U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U] 
        = ((0x7fffffffU & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U]) 
           | ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
              << 0x1fU));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0 
        = (1U & VL_REDXOR_4((6U & __Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[3U])));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U] 
        = ((6U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U]) 
           | (7U & (IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_h306b1b62__0)));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0 
        = (1U & VL_REDXOR_32(__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[3U]));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U] 
        = ((5U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U]) 
           | (7U & ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd4835d22__0) 
                    << 1U)));
    tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0 
        = (1U & (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[3U] 
                 ^ (__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__value[3U] 
                    >> 2U)));
    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U] 
        = ((3U & vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U]) 
           | (7U & ((IData)(tb_scene_runtime__DOT__dut__DOT____Vlvbound_hd48af1f5__0) 
                    << 2U)));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[0U] 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[0U];
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U] 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[1U];
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[2U] 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[2U];
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[3U] 
        = vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout[3U];
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__ui__DOT__neighbor 
        = ((8U & (IData)(tb_scene_runtime__DOT__dut__DOT__ui__DOT__compact_neighbor))
            ? 0xffU : (7U & (IData)(tb_scene_runtime__DOT__dut__DOT__ui__DOT__compact_neighbor)));
    vlSelfRef.tb_scene_runtime__DOT__wr = ((IData)(vlSelfRef.tb_scene_runtime__DOT__wi) 
                                           & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__wd)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.tb_scene_runtime__DOT__loader_error))));
    tb_scene_runtime__DOT____Vcellinp__mux__valid = 
        (((IData)(vlSelfRef.tb_scene_runtime__DOT__rv) 
          << 1U) | (IData)(vlSelfRef.tb_scene_runtime__DOT__wvalid));
    tb_scene_runtime__DOT__dut__DOT__exit_key = ((0U 
                                                  != (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice)) 
                                                 & ((6U 
                                                     == (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                                                    | ((7U 
                                                        == (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                                                       | (IData)(
                                                                 ((5U 
                                                                   == (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                                                                  & (0x200U 
                                                                     == 
                                                                     (0x780U 
                                                                      & vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U])))))));
    vlSelfRef.tb_scene_runtime__DOT__status[0U] = 0U;
    vlSelfRef.tb_scene_runtime__DOT__status[1U] = 0U;
    vlSelfRef.tb_scene_runtime__DOT__status[2U] = 0U;
    vlSelfRef.tb_scene_runtime__DOT__status[3U] = 0U;
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = 0U;
    vlSelfRef.tb_scene_runtime__DOT__status[0U] = (
                                                   (0xfffffffcU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[0U]) 
                                                   | (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__loading) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_scene_runtime__DOT__active)));
    VL_ASSIGNBIT_WI(2U, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__780__Vfuncout 
                            = (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__780__Vfuncout)) 
                           >> 1U)));
    VL_ASSIGNBIT_WI(3U, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (1U & (([&]() {
                        vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__781__Vfuncout 
                            = (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[0U] 
                               >> 0x18U);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__781__Vfuncout)) 
                           >> 2U)));
    vlSelfRef.tb_scene_runtime__DOT__status[0U] = (
                                                   (0xffffff8fU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[0U]) 
                                                   | (0xfffffff0U 
                                                      & ((((0xffU 
                                                            != 
                                                            (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                                             >> 0x18U)) 
                                                           & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__answered) 
                                                              >> 
                                                              (7U 
                                                               & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                                                  >> 0x18U)))) 
                                                          << 6U) 
                                                         | (((0xffU 
                                                              != 
                                                              (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                                               >> 0x18U)) 
                                                             << 5U) 
                                                            | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice_valid) 
                                                               << 4U)))));
    vlSelfRef.tb_scene_runtime__DOT__status[0U] = (
                                                   (0xfffff87fU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[0U]) 
                                                   | (0xffffff80U 
                                                      & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__focus) 
                                                          << 8U) 
                                                         | (((0xffU 
                                                              != 
                                                              (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                                               >> 0x18U)) 
                                                             & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__correct) 
                                                                >> 
                                                                (7U 
                                                                 & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                                                                    >> 0x18U)))) 
                                                            << 7U))));
    vlSelfRef.tb_scene_runtime__DOT__status[0U] = (
                                                   (0xfc0007ffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[0U]) 
                                                   | (0xfffff800U 
                                                      & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__score) 
                                                          << 0x16U) 
                                                         | (((IData)(vlSelfRef.tb_scene_runtime__DOT__pages) 
                                                             << 0x10U) 
                                                            | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_current_page) 
                                                               << 0xbU)))));
    VL_ASSIGNSEL_WI(160,4,0x1aU, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0xfU & ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__782__Vfuncout 
                        = (0xffU & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[5U] 
                                    >> 0x10U));
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__782__Vfuncout))));
    if (((0U != (0xfU & (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[2U] 
                         >> 8U))) & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_tag) 
                                     == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__focus)))) {
        vlSelfRef.tb_scene_runtime__DOT__status[0U] 
            = ((0x3fffffffU & vlSelfRef.tb_scene_runtime__DOT__status[0U]) 
               | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[0U]))))) 
                  << 0x1eU));
        vlSelfRef.tb_scene_runtime__DOT__status[1U] 
            = (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[0U]))))) 
                >> 2U) | ((IData)(((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[0U])))) 
                                   >> 0x20U)) << 0x1eU));
        vlSelfRef.tb_scene_runtime__DOT__status[2U] 
            = ((0xfffffffeU & vlSelfRef.tb_scene_runtime__DOT__status[2U]) 
               | ((IData)(((0x7ffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_q[0U])))) 
                           >> 0x20U)) >> 2U));
    }
    if (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice_valid) {
        vlSelfRef.tb_scene_runtime__DOT__status[2U] 
            = ((1U & vlSelfRef.tb_scene_runtime__DOT__status[2U]) 
               | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__answer_rect
                          [vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice]) 
                  << 1U));
        vlSelfRef.tb_scene_runtime__DOT__status[3U] 
            = ((0xfffffff0U & vlSelfRef.tb_scene_runtime__DOT__status[3U]) 
               | (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__answer_rect
                           [vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice]) 
                   >> 0x1fU) | ((IData)((vlSelfRef.tb_scene_runtime__DOT__dut__DOT__answer_rect
                                         [vlSelfRef.tb_scene_runtime__DOT__dut__DOT__choice] 
                                         >> 0x20U)) 
                                << 1U)));
    }
    VL_ASSIGNSEL_WI(160,8,0x64U, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0xffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__783__Vfuncout 
                        = (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[3U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__783__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x6cU, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__784__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[4U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__784__Vfuncout))));
    VL_ASSIGNSEL_WI(160,10,0x75U, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0x3ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__785__Vfuncout 
                        = (vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[4U] 
                           >> 0x10U);
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__785__Vfuncout))));
    VL_ASSIGNSEL_WI(160,9,0x7fU, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0x1ffU & ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__786__Vfuncout 
                        = (0xffffU & vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[5U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__786__Vfuncout))));
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = (
                                                   (0xfffc00ffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[4U]) 
                                                   | (0xffffff00U 
                                                      & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice) 
                                                          << 0x10U) 
                                                         | (((0U 
                                                              != (IData)(vlSelfRef.tb_scene_runtime__DOT__error))
                                                              ? (IData)(vlSelfRef.tb_scene_runtime__DOT__error)
                                                              : (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_error)) 
                                                            << 8U))));
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = (
                                                   (0xfffbffffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[4U]) 
                                                   | (((IData)(vlSelfRef.tb_scene_runtime__DOT__active) 
                                                       & ((2U 
                                                           == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice)) 
                                                          | (2U 
                                                             == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__pending_notice)))) 
                                                      << 0x12U));
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = (
                                                   (0xfff7ffffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[4U]) 
                                                   | (((((2U 
                                                          == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice)) 
                                                         & (~ (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__loading))) 
                                                        & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__target_page) 
                                                           == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__alert_page))) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__pending_notice))) 
                                                      << 0x13U));
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = (
                                                   (0xffefffffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[4U]) 
                                                   | ((((0U 
                                                         != (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__notice)) 
                                                        | (0U 
                                                           != (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__pending_notice))) 
                                                       | (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__track_switching)) 
                                                      << 0x14U));
    vlSelfRef.tb_scene_runtime__DOT__status[4U] = (
                                                   (0xff1fffffU 
                                                    & vlSelfRef.tb_scene_runtime__DOT__status[4U]) 
                                                   | (0xffe00000U 
                                                      & (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__autoplay_hold) 
                                                          << 0x17U) 
                                                         | (((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__autoplay_mode) 
                                                             << 0x16U) 
                                                            | ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_busy) 
                                                               << 0x15U)))));
    VL_ASSIGNBIT_WI(0x98U, vlSelfRef.tb_scene_runtime__DOT__status, 
                    (0xffU != ([&]() {
                    vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__787__Vfuncout 
                        = (0xffU & vlSelfRef.tb_scene_runtime__DOT__dut__DOT__page[1U]);
                }(), (IData)(vlSelfRef.__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__787__Vfuncout))));
    vlSelfRef.tb_scene_runtime__DOT__br = ((IData)(vlSelfRef.tb_scene_runtime__DOT__loader__DOT__busy) 
                                           & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header_done)) 
                                              | (IData)(vlSelfRef.tb_scene_runtime__DOT__wr)));
    vlSelfRef.tb_scene_runtime__DOT__sw = ((IData)(vlSelfRef.tb_scene_runtime__DOT__loader__DOT__busy) 
                                           & ((IData)(vlSelfRef.tb_scene_runtime__DOT__loader__DOT__header_done) 
                                              & ((IData)(vlSelfRef.tb_scene_runtime__DOT__bv) 
                                                 & (IData)(vlSelfRef.tb_scene_runtime__DOT__wr))));
    vlSelfRef.tb_scene_runtime__DOT__mux__DOT__selected = 0U;
    vlSelfRef.tb_scene_runtime__DOT__mv = 0U;
    vlSelfRef.tb_scene_runtime__DOT__mwrite = 0U;
    vlSelfRef.tb_scene_runtime__DOT__ready = 0U;
    vlSelfRef.tb_scene_runtime__DOT__ma = 0U;
    if (((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__busy)) 
         & ((IData)(tb_scene_runtime__DOT____Vcellinp__mux__valid) 
            >> 1U))) {
        vlSelfRef.tb_scene_runtime__DOT__mux__DOT__selected = 1U;
        vlSelfRef.tb_scene_runtime__DOT__mv = 1U;
        vlSelfRef.tb_scene_runtime__DOT__mwrite = 0U;
        vlSelfRef.tb_scene_runtime__DOT__ready = 0U;
        vlSelfRef.tb_scene_runtime__DOT__ready = ((1U 
                                                   & (IData)(vlSelfRef.tb_scene_runtime__DOT__ready)) 
                                                  | ((IData)(vlSelfRef.tb_scene_runtime__DOT__mr) 
                                                     << 1U));
        vlSelfRef.tb_scene_runtime__DOT__ma = (0x1fffffU 
                                               & (IData)(
                                                         (tb_scene_runtime__DOT____Vcellinp__mux__addr 
                                                          >> 0x15U)));
        vlSelfRef.tb_scene_runtime__DOT__md[0U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_scene_runtime__DOT__md[1U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_scene_runtime__DOT__md[2U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_scene_runtime__DOT__md[3U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_scene_runtime__DOT__md[4U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_scene_runtime__DOT__md[5U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_scene_runtime__DOT__md[6U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_scene_runtime__DOT__md[7U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_scene_runtime__DOT__md[0U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[1U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[2U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[3U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[4U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[5U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[6U] = 0U;
        vlSelfRef.tb_scene_runtime__DOT__md[7U] = 0U;
    } else {
        vlSelfRef.tb_scene_runtime__DOT__md[0U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_scene_runtime__DOT__md[1U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_scene_runtime__DOT__md[2U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_scene_runtime__DOT__md[3U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_scene_runtime__DOT__md[4U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_scene_runtime__DOT__md[5U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_scene_runtime__DOT__md[6U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_scene_runtime__DOT__md[7U] = Vtb_scene_runtime__ConstPool__CONST_h9e67c271_0[7U];
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__mux__DOT__busy)) 
               & (IData)(tb_scene_runtime__DOT____Vcellinp__mux__valid)))) {
        vlSelfRef.tb_scene_runtime__DOT__mux__DOT__selected = 0U;
        vlSelfRef.tb_scene_runtime__DOT__mv = 1U;
        vlSelfRef.tb_scene_runtime__DOT__mwrite = 1U;
        vlSelfRef.tb_scene_runtime__DOT__ready = 0U;
        vlSelfRef.tb_scene_runtime__DOT__ready = ((2U 
                                                   & (IData)(vlSelfRef.tb_scene_runtime__DOT__ready)) 
                                                  | (IData)(vlSelfRef.tb_scene_runtime__DOT__mr));
        vlSelfRef.tb_scene_runtime__DOT__ma = (0x1fffffU 
                                               & (IData)(tb_scene_runtime__DOT____Vcellinp__mux__addr));
        vlSelfRef.tb_scene_runtime__DOT__md[0U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[0U];
        vlSelfRef.tb_scene_runtime__DOT__md[1U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[1U];
        vlSelfRef.tb_scene_runtime__DOT__md[2U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[2U];
        vlSelfRef.tb_scene_runtime__DOT__md[3U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[3U];
        vlSelfRef.tb_scene_runtime__DOT__md[4U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[4U];
        vlSelfRef.tb_scene_runtime__DOT__md[5U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[5U];
        vlSelfRef.tb_scene_runtime__DOT__md[6U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[6U];
        vlSelfRef.tb_scene_runtime__DOT__md[7U] = vlSelfRef.tb_scene_runtime__DOT__writer__DOT__buffer[7U];
    }
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__force_valid)
            ? 0xdU : ((IData)(tb_scene_runtime__DOT__dut__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_scene_runtime__DOT__action)));
    vlSelfRef.tb_scene_runtime__DOT__dut__DOT__core_event 
        = ((IData)(vlSelfRef.tb_scene_runtime__DOT__active) 
           & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_scene_runtime__DOT__ev) 
                 & ((9U != (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                    & ((0xaU <= (IData)(vlSelfRef.tb_scene_runtime__DOT__action)) 
                       | ((IData)(tb_scene_runtime__DOT__dut__DOT__exit_key) 
                          | ((0xbU == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__state)) 
                             & ((~ (IData)(vlSelfRef.tb_scene_runtime__DOT__menu)) 
                                & ((IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__cache_tag) 
                                   == (IData)(vlSelfRef.tb_scene_runtime__DOT__dut__DOT__focus))))))))));
}

VL_ATTR_COLD void Vtb_scene_runtime___024root___eval_triggers__stl(Vtb_scene_runtime___024root* vlSelf);

VL_ATTR_COLD bool Vtb_scene_runtime___024root___eval_phase__stl(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___eval_phase__stl\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scene_runtime___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_scene_runtime___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_runtime___024root___dump_triggers__act(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___dump_triggers__act\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_scene_runtime.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_scene_runtime.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_runtime___024root___dump_triggers__nba(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___dump_triggers__nba\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_scene_runtime.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_scene_runtime.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scene_runtime___024root___ctor_var_reset(Vtb_scene_runtime___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_runtime___024root___ctor_var_reset\n"); );
    Vtb_scene_runtime__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_scene_runtime__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__bv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__bl = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__bd = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__br = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__sv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__commit = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__loader_error = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__version = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__length = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__resources = VL_RAND_RESET_I(7);
    vlSelf->tb_scene_runtime__DOT__pages = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__widgets = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__entry = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__wd = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__wi = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__ready = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__response = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__ra = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__ma = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__md);
    vlSelf->tb_scene_runtime__DOT__rv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mr = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mresponse = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__memory_data);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__memory[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 514272; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__scene[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_scene_runtime__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__query = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__tag = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__name = VL_RAND_RESET_Q(64);
    vlSelf->tb_scene_runtime__DOT__bytes = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__names[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__sizes[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_scene_runtime__DOT__menu = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__paused = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__ev = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__action = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__image_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__image_select = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__audio_select = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__audio_index = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__params = VL_RAND_RESET_Q(42);
    vlSelf->tb_scene_runtime__DOT__params_ack = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__finished = VL_RAND_RESET_I(9);
    vlSelf->tb_scene_runtime__DOT__ctrl = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__ctrl_byte = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(160, vlSelf->tb_scene_runtime__DOT__status);
    vlSelf->tb_scene_runtime__DOT__length_bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__delay = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__imgdelay = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__pwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__address = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__write_data);
    vlSelf->tb_scene_runtime__DOT__wait_idle__Vstatic__watchdog = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__focus_to__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__loader__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_scene_runtime__DOT__loader__DOT__position = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__expected_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__payload_bytes = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__header_done = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__bad_prefix = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__bad_reserved = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__header_length = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__header_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__loader__DOT__count_sum = VL_RAND_RESET_I(10);
    vlSelf->tb_scene_runtime__DOT__writer__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__writer__DOT__waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__writer__DOT__final_word = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__writer__DOT__count = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__writer__DOT__buffer);
    vlSelf->tb_scene_runtime__DOT__writer__DOT__address = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__mux__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mux__DOT__owner = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__mux__DOT__selected = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__return_state = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__dut__DOT__record);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__dut__DOT__held);
    VL_RAND_RESET_W(256, vlSelf->tb_scene_runtime__DOT__dut__DOT__page);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ri = VL_RAND_RESET_I(7);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__pi = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__wi = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__dut__DOT__resolved[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->tb_scene_runtime__DOT__dut__DOT__requested_resource = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__resolved_q = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__audio_resolved_q = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__settle = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__target_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__slot = VL_RAND_RESET_I(3);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__label_offset = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(99, vlSelf->tb_scene_runtime__DOT__dut__DOT__cache[__Vi0]);
    }
    vlSelf->tb_scene_runtime__DOT__dut__DOT__focus = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(99, vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_q);
    VL_RAND_RESET_W(99, vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_encoded_q);
    VL_RAND_RESET_W(99, vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_data);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_write = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_write_index = VL_RAND_RESET_I(3);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__cache_tag = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->tb_scene_runtime__DOT__dut__DOT__neighbors);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__visible = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__enabled = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_scene_runtime__DOT__dut__DOT__answer_rect[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->tb_scene_runtime__DOT__dut__DOT__loading = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__first_image = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__last_swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ticket = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ms_clock = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__elapsed_ms = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__auto_fired = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__autoplay_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__autoplay_hold = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__force_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__force_target = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__pending_notice = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__alert_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__context_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__context_focus = VL_RAND_RESET_I(3);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__context_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__returning = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__exit_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__exit_home = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__suppress_audio = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__restore_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__track_switching = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_found = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__alert_found = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__last_physical = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_soft = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__answered = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__correct = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__score = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__choice_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__choice = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_page_request = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_audio_request = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_control_request = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_current_page = VL_RAND_RESET_I(5);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_audio = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_control = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_arg = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_error = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__page_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__page_loaded = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__audio_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__control_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_request = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_exit = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__notice_priority = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__autoplay_event = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_event = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__core_event_action = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__requested_notice = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__table_bytes = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__sprite_length_q = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_runtime__DOT__dut__DOT____Vcellinp__ui__back_page = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT____Vlvbound_hc8fc4ac6__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT____Vlvbound_h3f146728__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT____Vlvbound_h3f0a2e13__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__configured = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__moving = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__candidate = VL_RAND_RESET_I(3);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__direction = VL_RAND_RESET_I(2);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__attempts = VL_RAND_RESET_I(4);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices_valid = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__choices = VL_RAND_RESET_I(16);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__available = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__neighbor = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_runtime__DOT__dut__DOT__ui__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_scene_runtime__DOT__ticks__351__tb_scene_runtime__DOT__unnamedblk1_1__DOT____Vrepeat0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_scene_runtime__DOT__focus_to__488__wanted = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_scene_runtime__DOT__focus_to__607__wanted = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_scene_runtime__DOT__focus_to__725__wanted = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__775__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_index__776__Vfuncout = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(99, vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__decode_widget__777__Vfuncout);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__780__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__781__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__782__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__783__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__784__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__785__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__p16__786__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_scene_runtime__DOT__dut__DOT__pb__787__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_scene_runtime__DOT__clk__0 = VL_RAND_RESET_I(1);
}
