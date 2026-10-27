// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system_control.h for the primary calling header

#include "Vtb_system_control__pch.h"
#include "Vtb_system_control___024root.h"

VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__0(Vtb_system_control___024root* vlSelf);
VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__1(Vtb_system_control___024root* vlSelf);
VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__2(Vtb_system_control___024root* vlSelf);
VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__3(Vtb_system_control___024root* vlSelf);

void Vtb_system_control___024root___eval_initial(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_initial\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_system_control___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_system_control___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_system_control___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_system_control___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__2(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1b58ULL, 
                                             nullptr, 
                                             "sim/system\tb_system_control.sv", 
                                             4);
        vlSelfRef.tb_system_control__DOT__memclk = 
            (1U & (~ (IData)(vlSelfRef.tb_system_control__DOT__memclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system_control___024root___eval_initial__TOP__Vtiming__3(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "sim/system\tb_system_control.sv", 
                                             4);
        vlSelfRef.tb_system_control__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_system_control__DOT__clk)));
    }
}

void Vtb_system_control___024root___eval_act(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_act\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_system_control___024root___nba_sequent__TOP__0(Vtb_system_control___024root* vlSelf);
void Vtb_system_control___024root___nba_sequent__TOP__1(Vtb_system_control___024root* vlSelf);
void Vtb_system_control___024root___nba_sequent__TOP__2(Vtb_system_control___024root* vlSelf);
void Vtb_system_control___024root___nba_sequent__TOP__3(Vtb_system_control___024root* vlSelf);

void Vtb_system_control___024root___eval_nba(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_nba\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system_control___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system_control___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system_control___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system_control___024root___nba_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_system_control___024root___nba_sequent__TOP__0(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___nba_sequent__TOP__0\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_system_control__DOT__uart__DOT__state;
    __Vdly__tb_system_control__DOT__uart__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_system_control__DOT__uart__DOT__count;
    __Vdly__tb_system_control__DOT__uart__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_system_control__DOT__uart__DOT__bitno;
    __Vdly__tb_system_control__DOT__uart__DOT__bitno = 0;
    CData/*7:0*/ __Vdly__tb_system_control__DOT__uart__DOT__shift;
    __Vdly__tb_system_control__DOT__uart__DOT__shift = 0;
    SData/*15:0*/ __Vdly__tb_system_control__DOT__control__DOT__restart_count;
    __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0;
    IData/*24:0*/ __Vdly__tb_system_control__DOT__control__DOT__second_count;
    __Vdly__tb_system_control__DOT__control__DOT__second_count = 0;
    CData/*0:0*/ __Vdly__tb_system_control__DOT__phase;
    __Vdly__tb_system_control__DOT__phase = 0;
    SData/*15:0*/ __Vdly__tb_system_control__DOT__count;
    __Vdly__tb_system_control__DOT__count = 0;
    CData/*1:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync;
    __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync = 0;
    SData/*15:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__interval_count;
    __Vdly__tb_system_control__DOT__cdc__DOT__interval_count = 0;
    CData/*1:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__settle;
    __Vdly__tb_system_control__DOT__cdc__DOT__settle = 0;
    CData/*0:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__waiting;
    __Vdly__tb_system_control__DOT__cdc__DOT__waiting = 0;
    // Body
    __Vdly__tb_system_control__DOT__uart__DOT__state 
        = vlSelfRef.tb_system_control__DOT__uart__DOT__state;
    __Vdly__tb_system_control__DOT__uart__DOT__count 
        = vlSelfRef.tb_system_control__DOT__uart__DOT__count;
    __Vdly__tb_system_control__DOT__uart__DOT__bitno 
        = vlSelfRef.tb_system_control__DOT__uart__DOT__bitno;
    __Vdly__tb_system_control__DOT__uart__DOT__shift 
        = vlSelfRef.tb_system_control__DOT__uart__DOT__shift;
    vlSelfRef.__Vdly__tb_system_control__DOT__cdc__DOT__request 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__request;
    __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__ack_sync;
    __Vdly__tb_system_control__DOT__cdc__DOT__interval_count 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__interval_count;
    __Vdly__tb_system_control__DOT__cdc__DOT__settle 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__settle;
    __Vdly__tb_system_control__DOT__cdc__DOT__waiting 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__waiting;
    __Vdly__tb_system_control__DOT__control__DOT__restart_count 
        = vlSelfRef.tb_system_control__DOT__control__DOT__restart_count;
    __Vdly__tb_system_control__DOT__count = vlSelfRef.tb_system_control__DOT__count;
    __Vdly__tb_system_control__DOT__control__DOT__second_count 
        = vlSelfRef.tb_system_control__DOT__control__DOT__second_count;
    __Vdly__tb_system_control__DOT__phase = vlSelfRef.tb_system_control__DOT__phase;
    if (vlSelfRef.tb_system_control__DOT__reset) {
        vlSelfRef.tb_system_control__DOT__control__DOT__cs = 0U;
        vlSelfRef.tb_system_control__DOT__control__DOT__ms = 3U;
        __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0U;
        __Vdly__tb_system_control__DOT__count = 0U;
        __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
        __Vdly__tb_system_control__DOT__phase = 1U;
        vlSelfRef.tb_system_control__DOT__last = 0U;
        vlSelfRef.tb_system_control__DOT__mode = 2U;
        vlSelfRef.__Vdly__tb_system_control__DOT__cdc__DOT__request = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync = 0U;
        vlSelfRef.tb_system_control__DOT__captured[0U] = 0U;
        vlSelfRef.tb_system_control__DOT__captured[1U] = 0U;
        vlSelfRef.tb_system_control__DOT__captured[2U] = 0U;
        vlSelfRef.tb_system_control__DOT__captured[3U] = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__interval_count = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__settle = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__waiting = 0U;
        __Vdly__tb_system_control__DOT__uart__DOT__state = 0U;
        __Vdly__tb_system_control__DOT__uart__DOT__count = 0U;
        __Vdly__tb_system_control__DOT__uart__DOT__bitno = 0U;
        __Vdly__tb_system_control__DOT__uart__DOT__shift = 0U;
        vlSelfRef.tb_system_control__DOT__byte_rx = 0U;
        vlSelfRef.tb_system_control__DOT__valid = 0U;
    } else {
        vlSelfRef.tb_system_control__DOT__control__DOT__cs 
            = (1U | (2U & ((IData)(vlSelfRef.tb_system_control__DOT__control__DOT__cs) 
                           << 1U)));
        vlSelfRef.tb_system_control__DOT__control__DOT__ms 
            = ((2U & ((IData)(vlSelfRef.tb_system_control__DOT__control__DOT__ms) 
                      << 1U)) | (IData)(vlSelfRef.tb_system_control__DOT__ms));
        if ((0U != (IData)(vlSelfRef.tb_system_control__DOT__control__DOT__restart_count))) {
            __Vdly__tb_system_control__DOT__control__DOT__restart_count 
                = (0xffffU & ((IData)(vlSelfRef.tb_system_control__DOT__control__DOT__restart_count) 
                              - (IData)(1U)));
        }
        if ((0x176fU == vlSelfRef.tb_system_control__DOT__control__DOT__second_count)) {
            __Vdly__tb_system_control__DOT__phase = 
                (1U & (~ (IData)(vlSelfRef.tb_system_control__DOT__phase)));
            __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
        } else {
            __Vdly__tb_system_control__DOT__control__DOT__second_count 
                = (0x1ffffffU & ((IData)(1U) + vlSelfRef.tb_system_control__DOT__control__DOT__second_count));
        }
        if (vlSelfRef.tb_system_control__DOT__valid) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                    if ((0x10U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                                    __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0x3e8U;
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                                    vlSelfRef.tb_system_control__DOT__mode = 1U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (2U 
                                                                    & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            vlSelfRef.tb_system_control__DOT__mode 
                                                                = 
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))
                                                                  ? 0U
                                                                  : 2U);
                                                        }
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                                vlSelfRef.tb_system_control__DOT__mode = 2U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                            vlSelfRef.tb_system_control__DOT__mode = 3U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                                    __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
                                                                    __Vdly__tb_system_control__DOT__phase = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        __Vdly__tb_system_control__DOT__count 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system_control__DOT__count)));
                                        vlSelfRef.tb_system_control__DOT__last 
                                            = vlSelfRef.tb_system_control__DOT__byte_rx;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                        if ((0x10U 
                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                            __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0x3e8U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            vlSelfRef.tb_system_control__DOT__mode = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    vlSelfRef.tb_system_control__DOT__mode 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))
                                                          ? 0U
                                                          : 2U);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        vlSelfRef.tb_system_control__DOT__mode = 2U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                    vlSelfRef.tb_system_control__DOT__mode = 3U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                            __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
                                                            __Vdly__tb_system_control__DOT__phase = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                __Vdly__tb_system_control__DOT__count 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system_control__DOT__count)));
                                vlSelfRef.tb_system_control__DOT__last 
                                    = vlSelfRef.tb_system_control__DOT__byte_rx;
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                        if ((4U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                                __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0x3e8U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                                vlSelfRef.tb_system_control__DOT__mode = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        vlSelfRef.tb_system_control__DOT__mode 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))
                                                              ? 0U
                                                              : 2U);
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            vlSelfRef.tb_system_control__DOT__mode = 2U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                        vlSelfRef.tb_system_control__DOT__mode = 3U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                                __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
                                                                __Vdly__tb_system_control__DOT__phase = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    __Vdly__tb_system_control__DOT__count 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_system_control__DOT__count)));
                                    vlSelfRef.tb_system_control__DOT__last 
                                        = vlSelfRef.tb_system_control__DOT__byte_rx;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                        if ((0x10U 
                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                            __Vdly__tb_system_control__DOT__control__DOT__restart_count = 0x3e8U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                            vlSelfRef.tb_system_control__DOT__mode = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                    vlSelfRef.tb_system_control__DOT__mode 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))
                                                          ? 0U
                                                          : 2U);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        vlSelfRef.tb_system_control__DOT__mode = 2U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                    vlSelfRef.tb_system_control__DOT__mode = 3U;
                                                }
                                            }
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system_control__DOT__byte_rx) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system_control__DOT__byte_rx))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system_control__DOT__byte_rx)))) {
                                                            __Vdly__tb_system_control__DOT__control__DOT__second_count = 0U;
                                                            __Vdly__tb_system_control__DOT__phase = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                __Vdly__tb_system_control__DOT__count 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system_control__DOT__count)));
                                vlSelfRef.tb_system_control__DOT__last 
                                    = vlSelfRef.tb_system_control__DOT__byte_rx;
                            }
                        }
                    }
                }
            }
        }
        __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync 
            = ((2U & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__ack_sync) 
                      << 1U)) | (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__ack));
        if (vlSelfRef.tb_system_control__DOT__cdc__DOT__waiting) {
            if (((1U & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__ack_sync) 
                        >> 1U)) == (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__request))) {
                if ((2U == (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__settle))) {
                    vlSelfRef.tb_system_control__DOT__captured[0U] 
                        = vlSelfRef.tb_system_control__DOT__cdc__DOT__held[0U];
                    vlSelfRef.tb_system_control__DOT__captured[1U] 
                        = vlSelfRef.tb_system_control__DOT__cdc__DOT__held[1U];
                    vlSelfRef.tb_system_control__DOT__captured[2U] 
                        = vlSelfRef.tb_system_control__DOT__cdc__DOT__held[2U];
                    vlSelfRef.tb_system_control__DOT__captured[3U] 
                        = vlSelfRef.tb_system_control__DOT__cdc__DOT__held[3U];
                    __Vdly__tb_system_control__DOT__cdc__DOT__waiting = 0U;
                    __Vdly__tb_system_control__DOT__cdc__DOT__interval_count = 4U;
                } else {
                    __Vdly__tb_system_control__DOT__cdc__DOT__settle 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__settle)));
                }
            }
        } else if ((0U == (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__interval_count))) {
            vlSelfRef.__Vdly__tb_system_control__DOT__cdc__DOT__request 
                = (1U & (~ (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__request)));
            __Vdly__tb_system_control__DOT__cdc__DOT__waiting = 1U;
            __Vdly__tb_system_control__DOT__cdc__DOT__settle = 0U;
        } else {
            __Vdly__tb_system_control__DOT__cdc__DOT__interval_count 
                = (0xffffU & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__interval_count) 
                              - (IData)(1U)));
        }
        vlSelfRef.tb_system_control__DOT__valid = 0U;
        if ((0U == (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__r2)))) {
                __Vdly__tb_system_control__DOT__uart__DOT__count = 0x6bU;
                __Vdly__tb_system_control__DOT__uart__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count))) {
                __Vdly__tb_system_control__DOT__uart__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count) 
                                  - (IData)(1U)));
            } else if (vlSelfRef.tb_system_control__DOT__uart__DOT__r2) {
                __Vdly__tb_system_control__DOT__uart__DOT__state = 0U;
            } else {
                __Vdly__tb_system_control__DOT__uart__DOT__state = 2U;
                __Vdly__tb_system_control__DOT__uart__DOT__count = 0xd8U;
                __Vdly__tb_system_control__DOT__uart__DOT__bitno = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count))) {
                __Vdly__tb_system_control__DOT__uart__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count) 
                                  - (IData)(1U)));
            } else {
                __Vdly__tb_system_control__DOT__uart__DOT__shift 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__bitno))) 
                        & (IData)(__Vdly__tb_system_control__DOT__uart__DOT__shift)) 
                       | (0xffU & ((IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__r2) 
                                   << (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__bitno))));
                __Vdly__tb_system_control__DOT__uart__DOT__count = 0xd8U;
                if ((7U == (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__bitno))) {
                    __Vdly__tb_system_control__DOT__uart__DOT__state = 3U;
                } else {
                    __Vdly__tb_system_control__DOT__uart__DOT__bitno 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__bitno)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count))) {
                __Vdly__tb_system_control__DOT__uart__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__count) 
                                  - (IData)(1U)));
            } else {
                if (vlSelfRef.tb_system_control__DOT__uart__DOT__r2) {
                    vlSelfRef.tb_system_control__DOT__byte_rx 
                        = vlSelfRef.tb_system_control__DOT__uart__DOT__shift;
                    vlSelfRef.tb_system_control__DOT__valid = 1U;
                }
                __Vdly__tb_system_control__DOT__uart__DOT__state = 0U;
            }
        }
    }
    vlSelfRef.tb_system_control__DOT__control__DOT__restart_count 
        = __Vdly__tb_system_control__DOT__control__DOT__restart_count;
    vlSelfRef.tb_system_control__DOT__count = __Vdly__tb_system_control__DOT__count;
    vlSelfRef.tb_system_control__DOT__control__DOT__second_count 
        = __Vdly__tb_system_control__DOT__control__DOT__second_count;
    vlSelfRef.tb_system_control__DOT__phase = __Vdly__tb_system_control__DOT__phase;
    vlSelfRef.tb_system_control__DOT__cdc__DOT__ack_sync 
        = __Vdly__tb_system_control__DOT__cdc__DOT__ack_sync;
    vlSelfRef.tb_system_control__DOT__cdc__DOT__interval_count 
        = __Vdly__tb_system_control__DOT__cdc__DOT__interval_count;
    vlSelfRef.tb_system_control__DOT__cdc__DOT__settle 
        = __Vdly__tb_system_control__DOT__cdc__DOT__settle;
    vlSelfRef.tb_system_control__DOT__cdc__DOT__waiting 
        = __Vdly__tb_system_control__DOT__cdc__DOT__waiting;
    vlSelfRef.tb_system_control__DOT__uart__DOT__state 
        = __Vdly__tb_system_control__DOT__uart__DOT__state;
    vlSelfRef.tb_system_control__DOT__uart__DOT__count 
        = __Vdly__tb_system_control__DOT__uart__DOT__count;
    vlSelfRef.tb_system_control__DOT__uart__DOT__bitno 
        = __Vdly__tb_system_control__DOT__uart__DOT__bitno;
    vlSelfRef.tb_system_control__DOT__uart__DOT__shift 
        = __Vdly__tb_system_control__DOT__uart__DOT__shift;
    vlSelfRef.tb_system_control__DOT__uart__DOT__r2 
        = ((IData)(vlSelfRef.tb_system_control__DOT__reset) 
           || (IData)(vlSelfRef.tb_system_control__DOT__uart__DOT__r1));
    vlSelfRef.tb_system_control__DOT__uart__DOT__r1 
        = ((IData)(vlSelfRef.tb_system_control__DOT__reset) 
           || (IData)(vlSelfRef.tb_system_control__DOT__rx));
}

VL_INLINE_OPT void Vtb_system_control___024root___nba_sequent__TOP__1(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___nba_sequent__TOP__1\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_system_control__DOT__seq;
    __Vdly__tb_system_control__DOT__seq = 0;
    CData/*1:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__req_sync;
    __Vdly__tb_system_control__DOT__cdc__DOT__req_sync = 0;
    CData/*0:0*/ __Vdly__tb_system_control__DOT__cdc__DOT__ack;
    __Vdly__tb_system_control__DOT__cdc__DOT__ack = 0;
    // Body
    __Vdly__tb_system_control__DOT__seq = vlSelfRef.tb_system_control__DOT__seq;
    __Vdly__tb_system_control__DOT__cdc__DOT__req_sync 
        = vlSelfRef.tb_system_control__DOT__cdc__DOT__req_sync;
    __Vdly__tb_system_control__DOT__cdc__DOT__ack = vlSelfRef.tb_system_control__DOT__cdc__DOT__ack;
    if (vlSelfRef.tb_system_control__DOT__reset) {
        __Vdly__tb_system_control__DOT__seq = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__req_sync = 0U;
        __Vdly__tb_system_control__DOT__cdc__DOT__ack = 0U;
        vlSelfRef.tb_system_control__DOT__cdc__DOT__held[0U] = 0U;
        vlSelfRef.tb_system_control__DOT__cdc__DOT__held[1U] = 0U;
        vlSelfRef.tb_system_control__DOT__cdc__DOT__held[2U] = 0U;
        vlSelfRef.tb_system_control__DOT__cdc__DOT__held[3U] = 0U;
    } else {
        __Vdly__tb_system_control__DOT__seq = ((IData)(1U) 
                                               + vlSelfRef.tb_system_control__DOT__seq);
        __Vdly__tb_system_control__DOT__cdc__DOT__req_sync 
            = ((2U & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__req_sync) 
                      << 1U)) | (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__request));
        if (((1U & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__req_sync) 
                    >> 1U)) != (IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__ack))) {
            vlSelfRef.tb_system_control__DOT__cdc__DOT__held[0U] 
                = ((IData)(1U) + vlSelfRef.tb_system_control__DOT__seq);
            vlSelfRef.tb_system_control__DOT__cdc__DOT__held[1U] 
                = (IData)((((QData)((IData)((~ vlSelfRef.tb_system_control__DOT__seq))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0x55aa55aaU 
                                                         ^ vlSelfRef.tb_system_control__DOT__seq)))));
            vlSelfRef.tb_system_control__DOT__cdc__DOT__held[2U] 
                = (IData)(((((QData)((IData)((~ vlSelfRef.tb_system_control__DOT__seq))) 
                             << 0x20U) | (QData)((IData)(
                                                         (0x55aa55aaU 
                                                          ^ vlSelfRef.tb_system_control__DOT__seq)))) 
                           >> 0x20U));
            vlSelfRef.tb_system_control__DOT__cdc__DOT__held[3U] 
                = vlSelfRef.tb_system_control__DOT__seq;
            __Vdly__tb_system_control__DOT__cdc__DOT__ack 
                = (1U & ((IData)(vlSelfRef.tb_system_control__DOT__cdc__DOT__req_sync) 
                         >> 1U));
        }
    }
    vlSelfRef.tb_system_control__DOT__cdc__DOT__req_sync 
        = __Vdly__tb_system_control__DOT__cdc__DOT__req_sync;
    vlSelfRef.tb_system_control__DOT__cdc__DOT__ack 
        = __Vdly__tb_system_control__DOT__cdc__DOT__ack;
    vlSelfRef.tb_system_control__DOT__seq = __Vdly__tb_system_control__DOT__seq;
}

VL_INLINE_OPT void Vtb_system_control___024root___nba_sequent__TOP__3(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___nba_sequent__TOP__3\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system_control__DOT__cdc__DOT__request 
        = vlSelfRef.__Vdly__tb_system_control__DOT__cdc__DOT__request;
}

void Vtb_system_control___024root___timing_resume(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___timing_resume\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h623af98b__0.resume(
                                                   "@(negedge tb_system_control.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf8c0b488__0.resume(
                                                   "@( (~ tb_system_control.phase))");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd9371092__0.resume(
                                                   "@( (16'h0 != tb_system_control.control.restart_count))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd940ec37__0.resume(
                                                   "@( (16'h0 == tb_system_control.control.restart_count))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_system_control___024root___timing_commit(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___timing_commit\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h623af98b__0.commit(
                                                   "@(negedge tb_system_control.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf8c0b488__0.commit(
                                                   "@( (~ tb_system_control.phase))");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd9371092__0.commit(
                                                   "@( (16'h0 != tb_system_control.control.restart_count))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd940ec37__0.commit(
                                                   "@( (16'h0 == tb_system_control.control.restart_count))");
    }
}

void Vtb_system_control___024root___eval_triggers__act(Vtb_system_control___024root* vlSelf);

bool Vtb_system_control___024root___eval_phase__act(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_phase__act\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_system_control___024root___eval_triggers__act(vlSelf);
    Vtb_system_control___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_system_control___024root___timing_resume(vlSelf);
        Vtb_system_control___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_system_control___024root___eval_phase__nba(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_phase__nba\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_system_control___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system_control___024root___dump_triggers__nba(Vtb_system_control___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system_control___024root___dump_triggers__act(Vtb_system_control___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_system_control___024root___eval(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_system_control___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_system_control.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_system_control___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_system_control.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_system_control___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_system_control___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_system_control___024root___eval_debug_assertions(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_debug_assertions\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
