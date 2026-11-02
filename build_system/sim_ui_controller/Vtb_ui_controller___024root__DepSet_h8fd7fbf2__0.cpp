// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ui_controller.h for the primary calling header

#include "Vtb_ui_controller__pch.h"
#include "Vtb_ui_controller___024root.h"

VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_ui_controller___024root* vlSelf);
VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_ui_controller___024root* vlSelf);
VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__2(Vtb_ui_controller___024root* vlSelf);

void Vtb_ui_controller___024root___eval_initial(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_initial\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__2(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/platform\tb_ui_controller.sv", 
                                             3);
        vlSelfRef.tb_ui_controller__DOT__clk = (1U 
                                                & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__clk)));
    }
}

void Vtb_ui_controller___024root___act_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf);

void Vtb_ui_controller___024root___eval_act(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_act\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ui_controller___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ui_controller___024root___act_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___act_sequent__TOP__0\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__available 
        = ((IData)(vlSelfRef.tb_ui_controller__DOT__enabled) 
           & (IData)(vlSelfRef.tb_ui_controller__DOT__visible));
    vlSelfRef.tb_ui_controller__DOT__choice = (3U & 
                                               ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices) 
                                                >> 
                                                ((IData)(vlSelfRef.tb_ui_controller__DOT__qid) 
                                                 << 1U)));
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor 
        = (0xffU & (((0U == (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                      << 3U))) ? 0U
                      : (vlSelfRef.tb_ui_controller__DOT__neighbors[
                         (((IData)(7U) + (((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                           << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                                  << 3U))))) 
                    | (vlSelfRef.tb_ui_controller__DOT__neighbors[
                       (0x7ffffffU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                      | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                         >> 2U)))] 
                       >> (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                    << 3U)))));
    vlSelfRef.tb_ui_controller__DOT__choice_valid = 
        ((IData)(vlSelfRef.tb_ui_controller__DOT__quiz) 
         & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid) 
            >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid)));
}

void Vtb_ui_controller___024root___nba_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf);
void Vtb_ui_controller___024root___nba_sequent__TOP__1(Vtb_ui_controller___024root* vlSelf);
void Vtb_ui_controller___024root___nba_comb__TOP__0(Vtb_ui_controller___024root* vlSelf);

void Vtb_ui_controller___024root___eval_nba(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_nba\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_controller___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_controller___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ui_controller___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ui_controller___024root___nba_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___nba_sequent__TOP__0\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__play__114__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__play__114__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__115__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__115__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__play__116__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__play__116__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__117__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__117__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__118__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__118__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__119__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__119__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__121__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__121__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__122__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__122__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__play__123__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__play__123__target = 0;
    CData/*7:0*/ __Vtask_tb_ui_controller__DOT__dut__DOT__jump__124__target;
    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__124__target = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__dut__DOT__configured;
    __Vdly__tb_ui_controller__DOT__dut__DOT__configured = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__dut__DOT__waiting;
    __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__dut__DOT__moving;
    __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 0;
    CData/*3:0*/ __Vdly__tb_ui_controller__DOT__dut__DOT__attempts;
    __Vdly__tb_ui_controller__DOT__dut__DOT__attempts = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__page_req;
    __Vdly__tb_ui_controller__DOT__page_req = 0;
    CData/*4:0*/ __Vdly__tb_ui_controller__DOT__page_target;
    __Vdly__tb_ui_controller__DOT__page_target = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__audio_req;
    __Vdly__tb_ui_controller__DOT__audio_req = 0;
    CData/*2:0*/ __Vdly__tb_ui_controller__DOT__focus;
    __Vdly__tb_ui_controller__DOT__focus = 0;
    CData/*0:0*/ __Vdly__tb_ui_controller__DOT__control_req;
    __Vdly__tb_ui_controller__DOT__control_req = 0;
    CData/*7:0*/ __Vdly__tb_ui_controller__DOT__answered;
    __Vdly__tb_ui_controller__DOT__answered = 0;
    CData/*3:0*/ __Vdly__tb_ui_controller__DOT__score;
    __Vdly__tb_ui_controller__DOT__score = 0;
    // Body
    __Vdly__tb_ui_controller__DOT__dut__DOT__configured 
        = vlSelfRef.tb_ui_controller__DOT__dut__DOT__configured;
    __Vdly__tb_ui_controller__DOT__dut__DOT__attempts 
        = vlSelfRef.tb_ui_controller__DOT__dut__DOT__attempts;
    __Vdly__tb_ui_controller__DOT__page_target = vlSelfRef.tb_ui_controller__DOT__page_target;
    __Vdly__tb_ui_controller__DOT__focus = vlSelfRef.tb_ui_controller__DOT__focus;
    __Vdly__tb_ui_controller__DOT__answered = vlSelfRef.tb_ui_controller__DOT__answered;
    __Vdly__tb_ui_controller__DOT__score = vlSelfRef.tb_ui_controller__DOT__score;
    __Vdly__tb_ui_controller__DOT__dut__DOT__waiting 
        = vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting;
    __Vdly__tb_ui_controller__DOT__dut__DOT__moving 
        = vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving;
    __Vdly__tb_ui_controller__DOT__page_req = vlSelfRef.tb_ui_controller__DOT__page_req;
    __Vdly__tb_ui_controller__DOT__audio_req = vlSelfRef.tb_ui_controller__DOT__audio_req;
    __Vdly__tb_ui_controller__DOT__control_req = vlSelfRef.tb_ui_controller__DOT__control_req;
    if (vlSelfRef.tb_ui_controller__DOT__notice_exit) {
        vlSelfRef.tb_ui_controller__DOT__exits = ((IData)(1U) 
                                                  + vlSelfRef.tb_ui_controller__DOT__exits);
    }
    if (vlSelfRef.tb_ui_controller__DOT__notice_req) {
        vlSelfRef.tb_ui_controller__DOT__notices = 
            ((IData)(1U) + vlSelfRef.tb_ui_controller__DOT__notices);
        vlSelfRef.tb_ui_controller__DOT__last_priority 
            = vlSelfRef.tb_ui_controller__DOT__priority_value;
    }
    if ((1U & ((IData)(vlSelfRef.tb_ui_controller__DOT__reset) 
               | (~ (IData)(vlSelfRef.tb_ui_controller__DOT__cfg))))) {
        __Vdly__tb_ui_controller__DOT__dut__DOT__configured = 0U;
        __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 0U;
        __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 0U;
        vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate = 0U;
        vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction = 0U;
        __Vdly__tb_ui_controller__DOT__dut__DOT__attempts = 0U;
        __Vdly__tb_ui_controller__DOT__page_req = 0U;
        __Vdly__tb_ui_controller__DOT__page_target = 0U;
        __Vdly__tb_ui_controller__DOT__audio_req = 0U;
        vlSelfRef.tb_ui_controller__DOT__audio_target = 0U;
        vlSelfRef.tb_ui_controller__DOT__current = 0U;
        __Vdly__tb_ui_controller__DOT__focus = 0U;
        __Vdly__tb_ui_controller__DOT__control_req = 0U;
        vlSelfRef.tb_ui_controller__DOT__control_action = 0U;
        vlSelfRef.tb_ui_controller__DOT__control_arg = 0U;
        __Vdly__tb_ui_controller__DOT__answered = 0U;
        vlSelfRef.tb_ui_controller__DOT__correct = 0U;
        __Vdly__tb_ui_controller__DOT__score = 0U;
        vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid = 0U;
        vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices = 0U;
        vlSelfRef.tb_ui_controller__DOT__error = 0U;
        vlSelfRef.tb_ui_controller__DOT__notice_exit = 0U;
        vlSelfRef.tb_ui_controller__DOT__priority_value = 0U;
        vlSelfRef.tb_ui_controller__DOT__notice_req = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
             & (IData)(vlSelfRef.tb_ui_controller__DOT__page_accept))) {
            __Vdly__tb_ui_controller__DOT__page_req = 0U;
        }
        if (((IData)(vlSelfRef.tb_ui_controller__DOT__audio_req) 
             & (IData)(vlSelfRef.tb_ui_controller__DOT__audio_accept))) {
            __Vdly__tb_ui_controller__DOT__audio_req = 0U;
        }
        if (((IData)(vlSelfRef.tb_ui_controller__DOT__control_req) 
             & (IData)(vlSelfRef.tb_ui_controller__DOT__control_accept))) {
            __Vdly__tb_ui_controller__DOT__control_req = 0U;
        }
        if (vlSelfRef.tb_ui_controller__DOT__dut__DOT__configured) {
            if ((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting) 
                  & (IData)(vlSelfRef.tb_ui_controller__DOT__loaded)) 
                 & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__page_req)))) {
                vlSelfRef.tb_ui_controller__DOT__current 
                    = vlSelfRef.tb_ui_controller__DOT__page_target;
                __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 0U;
                __Vdly__tb_ui_controller__DOT__focus = 0U;
                vlSelfRef.tb_ui_controller__DOT__error = 0U;
                vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 1U;
                if ((0xffU != (IData)(vlSelfRef.tb_ui_controller__DOT__audio))) {
                    __Vtask_tb_ui_controller__DOT__dut__DOT__play__114__target 
                        = vlSelfRef.tb_ui_controller__DOT__audio;
                    if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__114__target))) {
                        vlSelfRef.tb_ui_controller__DOT__audio_target 
                            = (0x3fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__114__target));
                        __Vdly__tb_ui_controller__DOT__audio_req = 1U;
                    } else {
                        vlSelfRef.tb_ui_controller__DOT__error = 2U;
                    }
                }
                if ((1U & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 0U;
                    __Vdly__tb_ui_controller__DOT__focus = 0U;
                }
                if ((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                      >> 1U) & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__first))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 0U;
                    __Vdly__tb_ui_controller__DOT__focus = 1U;
                }
                if ((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                      >> 2U) & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__first))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 0U;
                    __Vdly__tb_ui_controller__DOT__focus = 2U;
                }
                if ((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                      >> 3U) & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__first))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 0U;
                    __Vdly__tb_ui_controller__DOT__focus = 3U;
                }
                if ((((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                      >> 4U) & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__first))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__first = 0U;
                    __Vdly__tb_ui_controller__DOT__focus = 4U;
                }
            } else if (vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving) {
                if ((((0xffU == (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor)) 
                      | (7U < (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor))) 
                     | (5U <= (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor)))) {
                    __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 0U;
                    vlSelfRef.tb_ui_controller__DOT__error = 3U;
                } else if ((1U & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                                  >> (7U & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor))))) {
                    __Vdly__tb_ui_controller__DOT__focus 
                        = (7U & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor));
                    __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 0U;
                } else if ((7U == (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__attempts))) {
                    __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 0U;
                    vlSelfRef.tb_ui_controller__DOT__error = 3U;
                } else {
                    __Vdly__tb_ui_controller__DOT__dut__DOT__attempts 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__attempts)));
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate 
                        = (7U & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor));
                }
            } else if ((((IData)(vlSelfRef.tb_ui_controller__DOT__ev) 
                         & (~ (IData)(vlSelfRef.tb_ui_controller__DOT__busy))) 
                        & ((0xaU > (IData)(vlSelfRef.tb_ui_controller__DOT__event_code)) 
                           | (0xdU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))))) {
                vlSelfRef.tb_ui_controller__DOT__error = 0U;
                if (((((1U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code)) 
                       || (2U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) 
                      || (3U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) 
                     || (4U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code)))) {
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction 
                        = ((1U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))
                            ? 2U : ((2U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))
                                     ? 3U : ((3U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))
                                              ? 0U : 1U)));
                    vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate 
                        = vlSelfRef.tb_ui_controller__DOT__focus;
                    __Vdly__tb_ui_controller__DOT__dut__DOT__attempts = 0U;
                    __Vdly__tb_ui_controller__DOT__dut__DOT__moving = 1U;
                } else if ((5U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) {
                    if ((1U & ((5U <= (IData)(vlSelfRef.tb_ui_controller__DOT__focus)) 
                               | (~ ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__available) 
                                     >> (IData)(vlSelfRef.tb_ui_controller__DOT__focus)))))) {
                        vlSelfRef.tb_ui_controller__DOT__error = 4U;
                    } else if ((1U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        if (((IData)(vlSelfRef.tb_ui_controller__DOT__quiz) 
                             & (~ ((IData)(vlSelfRef.tb_ui_controller__DOT__answered) 
                                   >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid))))) {
                            vlSelfRef.tb_ui_controller__DOT__error = 5U;
                        } else {
                            __Vtask_tb_ui_controller__DOT__dut__DOT__jump__115__target 
                                = vlSelfRef.tb_ui_controller__DOT__target;
                            if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__115__target))) {
                                __Vdly__tb_ui_controller__DOT__page_target 
                                    = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__115__target));
                                __Vdly__tb_ui_controller__DOT__page_req = 1U;
                                __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                            } else {
                                vlSelfRef.tb_ui_controller__DOT__error = 1U;
                            }
                        }
                    } else if ((2U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        __Vtask_tb_ui_controller__DOT__dut__DOT__play__116__target 
                            = vlSelfRef.tb_ui_controller__DOT__target;
                        if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__116__target))) {
                            vlSelfRef.tb_ui_controller__DOT__audio_target 
                                = (0x3fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__116__target));
                            __Vdly__tb_ui_controller__DOT__audio_req = 1U;
                        } else {
                            vlSelfRef.tb_ui_controller__DOT__error = 2U;
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        if ((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__quiz)) 
                                   | (3U < (IData)(vlSelfRef.tb_ui_controller__DOT__arg))))) {
                            vlSelfRef.tb_ui_controller__DOT__error = 6U;
                        } else if ((1U & ((IData)(vlSelfRef.tb_ui_controller__DOT__answered) 
                                          >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid)))) {
                            vlSelfRef.tb_ui_controller__DOT__error = 7U;
                        } else {
                            vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid 
                                = ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid) 
                                   | (0xffU & ((IData)(1U) 
                                               << (IData)(vlSelfRef.tb_ui_controller__DOT__qid))));
                            vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices 
                                = (((~ ((IData)(3U) 
                                        << ((IData)(vlSelfRef.tb_ui_controller__DOT__qid) 
                                            << 1U))) 
                                    & (IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices)) 
                                   | (0xffffU & ((3U 
                                                  & (IData)(vlSelfRef.tb_ui_controller__DOT__arg)) 
                                                 << 
                                                 ((IData)(vlSelfRef.tb_ui_controller__DOT__qid) 
                                                  << 1U))));
                        }
                    } else if ((4U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        __Vtask_tb_ui_controller__DOT__dut__DOT__jump__117__target 
                            = vlSelfRef.tb_ui_controller__DOT__back;
                        if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__117__target))) {
                            __Vdly__tb_ui_controller__DOT__page_target 
                                = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__117__target));
                            __Vdly__tb_ui_controller__DOT__page_req = 1U;
                            __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                        } else {
                            vlSelfRef.tb_ui_controller__DOT__error = 1U;
                        }
                    } else if ((5U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        __Vtask_tb_ui_controller__DOT__dut__DOT__jump__118__target = 0U;
                        __Vdly__tb_ui_controller__DOT__answered = 0U;
                        vlSelfRef.tb_ui_controller__DOT__correct = 0U;
                        __Vdly__tb_ui_controller__DOT__score = 0U;
                        vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid = 0U;
                        __Vdly__tb_ui_controller__DOT__page_target 
                            = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__118__target));
                        __Vdly__tb_ui_controller__DOT__page_req = 1U;
                        __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                    } else if ((((6U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation)) 
                                 || (7U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) 
                                || (8U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation)))) {
                        __Vdly__tb_ui_controller__DOT__control_req = 1U;
                        vlSelfRef.tb_ui_controller__DOT__control_action 
                            = (3U & ((IData)(vlSelfRef.tb_ui_controller__DOT__operation) 
                                     - (IData)(2U)));
                        vlSelfRef.tb_ui_controller__DOT__control_arg 
                            = vlSelfRef.tb_ui_controller__DOT__arg;
                    } else if ((9U == (IData)(vlSelfRef.tb_ui_controller__DOT__operation))) {
                        if ((1U & ((~ (IData)(vlSelfRef.tb_ui_controller__DOT__quiz)) 
                                   | (~ (IData)(vlSelfRef.tb_ui_controller__DOT__choice_valid))))) {
                            vlSelfRef.tb_ui_controller__DOT__error = 5U;
                        } else if ((4U <= (IData)(vlSelfRef.tb_ui_controller__DOT__target))) {
                            vlSelfRef.tb_ui_controller__DOT__error = 1U;
                        } else {
                            __Vtask_tb_ui_controller__DOT__dut__DOT__jump__119__target 
                                = vlSelfRef.tb_ui_controller__DOT__target;
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ui_controller__DOT__answered) 
                                          >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid))))) {
                                if (((IData)(vlSelfRef.tb_ui_controller__DOT__choice) 
                                     == (IData)(vlSelfRef.tb_ui_controller__DOT__expected))) {
                                    __Vdly__tb_ui_controller__DOT__score 
                                        = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_ui_controller__DOT__score)));
                                }
                                __Vdly__tb_ui_controller__DOT__answered 
                                    = ((IData)(__Vdly__tb_ui_controller__DOT__answered) 
                                       | (0xffU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_ui_controller__DOT__qid))));
                                vlSelfRef.tb_ui_controller__DOT__correct 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelfRef.tb_ui_controller__DOT__qid))) 
                                        & (IData)(vlSelfRef.tb_ui_controller__DOT__correct)) 
                                       | (0xffU & (
                                                   ((IData)(vlSelfRef.tb_ui_controller__DOT__choice) 
                                                    == (IData)(vlSelfRef.tb_ui_controller__DOT__expected)) 
                                                   << (IData)(vlSelfRef.tb_ui_controller__DOT__qid))));
                            }
                            if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__119__target))) {
                                __Vdly__tb_ui_controller__DOT__page_target 
                                    = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__119__target));
                                __Vdly__tb_ui_controller__DOT__page_req = 1U;
                                __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                            } else {
                                vlSelfRef.tb_ui_controller__DOT__error = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_ui_controller__DOT__error = 8U;
                    }
                } else if ((0xdU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) {
                    __Vdly__tb_ui_controller__DOT__page_target = 0U;
                    __Vdly__tb_ui_controller__DOT__page_req = 1U;
                    __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                } else if ((6U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) {
                    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__121__target 
                        = vlSelfRef.tb_ui_controller__DOT__back;
                    if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__121__target))) {
                        __Vdly__tb_ui_controller__DOT__page_target 
                            = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__121__target));
                        __Vdly__tb_ui_controller__DOT__page_req = 1U;
                        __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                    } else {
                        vlSelfRef.tb_ui_controller__DOT__error = 1U;
                    }
                } else if ((7U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) {
                    __Vtask_tb_ui_controller__DOT__dut__DOT__jump__122__target = 0U;
                    __Vdly__tb_ui_controller__DOT__page_target 
                        = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__122__target));
                    __Vdly__tb_ui_controller__DOT__page_req = 1U;
                    __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
                } else if ((8U == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))) {
                    __Vtask_tb_ui_controller__DOT__dut__DOT__play__123__target 
                        = vlSelfRef.tb_ui_controller__DOT__audio;
                    if ((4U > (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__123__target))) {
                        vlSelfRef.tb_ui_controller__DOT__audio_target 
                            = (0x3fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__play__123__target));
                        __Vdly__tb_ui_controller__DOT__audio_req = 1U;
                    } else {
                        vlSelfRef.tb_ui_controller__DOT__error = 2U;
                    }
                } else {
                    vlSelfRef.tb_ui_controller__DOT__error = 8U;
                }
            }
        } else {
            __Vtask_tb_ui_controller__DOT__dut__DOT__jump__124__target = 0U;
            __Vdly__tb_ui_controller__DOT__dut__DOT__configured = 1U;
            __Vdly__tb_ui_controller__DOT__page_target 
                = (0x1fU & (IData)(__Vtask_tb_ui_controller__DOT__dut__DOT__jump__124__target));
            __Vdly__tb_ui_controller__DOT__page_req = 1U;
            __Vdly__tb_ui_controller__DOT__dut__DOT__waiting = 1U;
        }
        vlSelfRef.tb_ui_controller__DOT__notice_exit = 0U;
        if (((IData)(vlSelfRef.tb_ui_controller__DOT__ev) 
             & (0xcU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code)))) {
            vlSelfRef.tb_ui_controller__DOT__notice_exit = 1U;
        }
        vlSelfRef.tb_ui_controller__DOT__notice_req = 0U;
        if (((IData)(vlSelfRef.tb_ui_controller__DOT__ev) 
             & ((0xaU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code)) 
                | (0xbU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))))) {
            vlSelfRef.tb_ui_controller__DOT__priority_value 
                = ((0xbU == (IData)(vlSelfRef.tb_ui_controller__DOT__event_code))
                    ? 2U : 1U);
            vlSelfRef.tb_ui_controller__DOT__notice_req = 1U;
        }
    }
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__configured 
        = __Vdly__tb_ui_controller__DOT__dut__DOT__configured;
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__attempts 
        = __Vdly__tb_ui_controller__DOT__dut__DOT__attempts;
    vlSelfRef.tb_ui_controller__DOT__page_target = __Vdly__tb_ui_controller__DOT__page_target;
    vlSelfRef.tb_ui_controller__DOT__focus = __Vdly__tb_ui_controller__DOT__focus;
    vlSelfRef.tb_ui_controller__DOT__answered = __Vdly__tb_ui_controller__DOT__answered;
    vlSelfRef.tb_ui_controller__DOT__score = __Vdly__tb_ui_controller__DOT__score;
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting 
        = __Vdly__tb_ui_controller__DOT__dut__DOT__waiting;
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving 
        = __Vdly__tb_ui_controller__DOT__dut__DOT__moving;
    vlSelfRef.tb_ui_controller__DOT__page_req = __Vdly__tb_ui_controller__DOT__page_req;
    vlSelfRef.tb_ui_controller__DOT__audio_req = __Vdly__tb_ui_controller__DOT__audio_req;
    vlSelfRef.tb_ui_controller__DOT__control_req = __Vdly__tb_ui_controller__DOT__control_req;
    vlSelfRef.tb_ui_controller__DOT__busy = ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting) 
                                             | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving) 
                                                | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
                                                   | ((IData)(vlSelfRef.tb_ui_controller__DOT__audio_req) 
                                                      | (IData)(vlSelfRef.tb_ui_controller__DOT__control_req)))));
}

VL_INLINE_OPT void Vtb_ui_controller___024root___nba_sequent__TOP__1(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___nba_sequent__TOP__1\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__available 
        = ((IData)(vlSelfRef.tb_ui_controller__DOT__enabled) 
           & (IData)(vlSelfRef.tb_ui_controller__DOT__visible));
}

VL_INLINE_OPT void Vtb_ui_controller___024root___nba_comb__TOP__0(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___nba_comb__TOP__0\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_controller__DOT__choice = (3U & 
                                               ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices) 
                                                >> 
                                                ((IData)(vlSelfRef.tb_ui_controller__DOT__qid) 
                                                 << 1U)));
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor 
        = (0xffU & (((0U == (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                      << 3U))) ? 0U
                      : (vlSelfRef.tb_ui_controller__DOT__neighbors[
                         (((IData)(7U) + (((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                           << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                                  << 3U))))) 
                    | (vlSelfRef.tb_ui_controller__DOT__neighbors[
                       (0x7ffffffU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                      | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                         >> 2U)))] 
                       >> (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                    << 3U)))));
    vlSelfRef.tb_ui_controller__DOT__choice_valid = 
        ((IData)(vlSelfRef.tb_ui_controller__DOT__quiz) 
         & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid) 
            >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid)));
}

void Vtb_ui_controller___024root___timing_resume(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___timing_resume\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha9ad888b__0.resume(
                                                   "@(negedge tb_ui_controller.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ui_controller___024root___timing_commit(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___timing_commit\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha9ad888b__0.commit(
                                                   "@(negedge tb_ui_controller.clk)");
    }
}

void Vtb_ui_controller___024root___eval_triggers__act(Vtb_ui_controller___024root* vlSelf);

bool Vtb_ui_controller___024root___eval_phase__act(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_phase__act\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ui_controller___024root___eval_triggers__act(vlSelf);
    Vtb_ui_controller___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ui_controller___024root___timing_resume(vlSelf);
        Vtb_ui_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ui_controller___024root___eval_phase__nba(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_phase__nba\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ui_controller___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__nba(Vtb_ui_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__act(Vtb_ui_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ui_controller___024root___eval(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ui_controller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_ui_controller.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ui_controller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_ui_controller.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ui_controller___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ui_controller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ui_controller___024root___eval_debug_assertions(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_debug_assertions\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
