// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display___024root.h"

VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__0(Vtb_display___024root* vlSelf);
VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__1(Vtb_display___024root* vlSelf);

void Vtb_display___024root___eval_initial(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_initial\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_display___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_display___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__1(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             3);
        vlSelfRef.tb_display__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_display__DOT__clk)));
    }
}

void Vtb_display___024root___act_comb__TOP__0(Vtb_display___024root* vlSelf);

void Vtb_display___024root___eval_act(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_act\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_display___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_display___024root___act_comb__TOP__0(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___act_comb__TOP__0\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_display__DOT__out = ((([&]() {
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__c 
                        = vlSelfRef.tb_display__DOT__cc;
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__b 
                        = vlSelfRef.tb_display__DOT__bb;
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__p 
                        = (0xffU & (vlSelfRef.tb_display__DOT__rgb 
                                    >> 0x10U));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__centered 
                        = (0xfffU & (VL_EXTENDS_II(12,9, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__p)) 
                                     - (IData)(0x80U)));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__product 
                        = (0xfffU & VL_MULS_III(12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__centered), 
                                                (0xfffU 
                                                 & VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__c)))));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__value 
                        = (0xfffU & ((IData)(0x80U) 
                                     + (VL_SHIFTRS_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__product), 2U) 
                                        + VL_SHIFTL_III(12,12,32, 
                                                        (VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__b)) 
                                                         - (IData)(4U)), 4U))));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__Vfuncout 
                        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__value)))
                            ? 0U : (VL_LTS_III(32, 0xffU, 
                                               VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__value)))
                                     ? 0xffU : (0xffU 
                                                & (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__value))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__6__Vfuncout)) 
                                       << 0x10U) | 
                                      ((([&]() {
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__c 
                            = vlSelfRef.tb_display__DOT__cc;
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__b 
                            = vlSelfRef.tb_display__DOT__bb;
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__p 
                            = (0xffU & (vlSelfRef.tb_display__DOT__rgb 
                                        >> 8U));
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__centered 
                            = (0xfffU & (VL_EXTENDS_II(12,9, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__p)) 
                                         - (IData)(0x80U)));
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__product 
                            = (0xfffU & VL_MULS_III(12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__centered), 
                                                    (0xfffU 
                                                     & VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__c)))));
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__value 
                            = (0xfffU & ((IData)(0x80U) 
                                         + (VL_SHIFTRS_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__product), 2U) 
                                            + VL_SHIFTL_III(12,12,32, 
                                                            (VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__b)) 
                                                             - (IData)(4U)), 4U))));
                        vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__Vfuncout 
                            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__value)))
                                ? 0U : (VL_LTS_III(32, 0xffU, 
                                                   VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__value)))
                                         ? 0xffU : 
                                        (0xffU & (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__value))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__7__Vfuncout)) 
                                        << 8U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__c 
                        = vlSelfRef.tb_display__DOT__cc;
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__b 
                        = vlSelfRef.tb_display__DOT__bb;
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__p 
                        = (0xffU & vlSelfRef.tb_display__DOT__rgb);
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__centered 
                        = (0xfffU & (VL_EXTENDS_II(12,9, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__p)) 
                                     - (IData)(0x80U)));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__product 
                        = (0xfffU & VL_MULS_III(12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__centered), 
                                                (0xfffU 
                                                 & VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__c)))));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__value 
                        = (0xfffU & ((IData)(0x80U) 
                                     + (VL_SHIFTRS_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__product), 2U) 
                                        + VL_SHIFTL_III(12,12,32, 
                                                        (VL_EXTENDS_II(12,5, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__b)) 
                                                         - (IData)(4U)), 4U))));
                    vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__Vfuncout 
                        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__value)))
                            ? 0U : (VL_LTS_III(32, 0xffU, 
                                               VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__value)))
                                     ? 0xffU : (0xffU 
                                                & (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__value))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__dut__DOT__channel__8__Vfuncout))));
}

void Vtb_display___024root___nba_sequent__TOP__0(Vtb_display___024root* vlSelf);

void Vtb_display___024root___eval_nba(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_nba\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_display___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_display___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_display___024root___nba_sequent__TOP__0(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___nba_sequent__TOP__0\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*24:0*/ __Vdly__tb_display__DOT__ctrl__DOT__ticks;
    __Vdly__tb_display__DOT__ctrl__DOT__ticks = 0;
    IData/*23:0*/ __Vdly__tb_display__DOT__tm;
    __Vdly__tb_display__DOT__tm = 0;
    CData/*3:0*/ __Vdly__tb_display__DOT__ctrl__DOT__wanted_b;
    __Vdly__tb_display__DOT__ctrl__DOT__wanted_b = 0;
    CData/*3:0*/ __Vdly__tb_display__DOT__ctrl__DOT__wanted_c;
    __Vdly__tb_display__DOT__ctrl__DOT__wanted_c = 0;
    // Body
    __Vdly__tb_display__DOT__ctrl__DOT__ticks = vlSelfRef.tb_display__DOT__ctrl__DOT__ticks;
    __Vdly__tb_display__DOT__tm = vlSelfRef.tb_display__DOT__tm;
    __Vdly__tb_display__DOT__ctrl__DOT__wanted_b = vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b;
    __Vdly__tb_display__DOT__ctrl__DOT__wanted_c = vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_c;
    if (vlSelfRef.tb_display__DOT__reset) {
        __Vdly__tb_display__DOT__ctrl__DOT__ticks = 0U;
        __Vdly__tb_display__DOT__tm = 0U;
        __Vdly__tb_display__DOT__ctrl__DOT__wanted_b = 4U;
        vlSelfRef.tb_display__DOT__b = 4U;
        __Vdly__tb_display__DOT__ctrl__DOT__wanted_c = 4U;
        vlSelfRef.tb_display__DOT__c = 4U;
    } else {
        if ((1U == vlSelfRef.tb_display__DOT__ctrl__DOT__ticks)) {
            if ((9U != (0xfU & vlSelfRef.tb_display__DOT__tm))) {
                __Vdly__tb_display__DOT__tm = ((0xfffff0U 
                                                & __Vdly__tb_display__DOT__tm) 
                                               | (0xfU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.tb_display__DOT__tm)));
            } else {
                __Vdly__tb_display__DOT__tm = (0xfffff0U 
                                               & __Vdly__tb_display__DOT__tm);
                if ((5U != (0xfU & (vlSelfRef.tb_display__DOT__tm 
                                    >> 4U)))) {
                    __Vdly__tb_display__DOT__tm = (
                                                   (0xffff0fU 
                                                    & __Vdly__tb_display__DOT__tm) 
                                                   | (0xf0U 
                                                      & (((IData)(1U) 
                                                          + 
                                                          (vlSelfRef.tb_display__DOT__tm 
                                                           >> 4U)) 
                                                         << 4U)));
                } else {
                    __Vdly__tb_display__DOT__tm = (0xffff0fU 
                                                   & __Vdly__tb_display__DOT__tm);
                    if ((9U != (0xfU & (vlSelfRef.tb_display__DOT__tm 
                                        >> 8U)))) {
                        __Vdly__tb_display__DOT__tm 
                            = ((0xfff0ffU & __Vdly__tb_display__DOT__tm) 
                               | (0xf00U & (((IData)(1U) 
                                             + (vlSelfRef.tb_display__DOT__tm 
                                                >> 8U)) 
                                            << 8U)));
                    } else {
                        __Vdly__tb_display__DOT__tm 
                            = (0xfff0ffU & __Vdly__tb_display__DOT__tm);
                        if ((5U != (0xfU & (vlSelfRef.tb_display__DOT__tm 
                                            >> 0xcU)))) {
                            __Vdly__tb_display__DOT__tm 
                                = ((0xff0fffU & __Vdly__tb_display__DOT__tm) 
                                   | (0xf000U & (((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.tb_display__DOT__tm 
                                                   >> 0xcU)) 
                                                 << 0xcU)));
                        } else {
                            __Vdly__tb_display__DOT__tm 
                                = (0xff0fffU & __Vdly__tb_display__DOT__tm);
                            if ((9U != (0xfU & (vlSelfRef.tb_display__DOT__tm 
                                                >> 0x10U)))) {
                                __Vdly__tb_display__DOT__tm 
                                    = ((0xf0ffffU & __Vdly__tb_display__DOT__tm) 
                                       | (0xf0000U 
                                          & (((IData)(1U) 
                                              + (vlSelfRef.tb_display__DOT__tm 
                                                 >> 0x10U)) 
                                             << 0x10U)));
                            } else {
                                __Vdly__tb_display__DOT__tm 
                                    = (0xf0ffffU & __Vdly__tb_display__DOT__tm);
                                __Vdly__tb_display__DOT__tm 
                                    = ((0xfffffU & __Vdly__tb_display__DOT__tm) 
                                       | (((9U == (0xfU 
                                                   & (vlSelfRef.tb_display__DOT__tm 
                                                      >> 0x14U)))
                                            ? 0U : 
                                           (0xfU & 
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (vlSelfRef.tb_display__DOT__tm 
                                                   >> 0x14U))))) 
                                          << 0x14U));
                            }
                        }
                    }
                }
            }
            __Vdly__tb_display__DOT__ctrl__DOT__ticks = 0U;
        } else {
            __Vdly__tb_display__DOT__ctrl__DOT__ticks 
                = (0x1ffffffU & ((IData)(1U) + vlSelfRef.tb_display__DOT__ctrl__DOT__ticks));
        }
        vlSelfRef.tb_display__DOT__b = vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b;
        if (vlSelfRef.tb_display__DOT__cv) {
            if ((0x5bU == (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                if ((0U != (IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b))) {
                    __Vdly__tb_display__DOT__ctrl__DOT__wanted_b 
                        = (0xfU & ((IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b) 
                                   - (IData)(1U)));
                }
            } else if ((0x5dU == (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                if ((8U > (IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b))) {
                    __Vdly__tb_display__DOT__ctrl__DOT__wanted_b 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b)));
                }
            } else if ((0x43U != (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                if ((0x44U == (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                    __Vdly__tb_display__DOT__ctrl__DOT__wanted_b = 4U;
                }
            }
            if ((0x5bU != (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                if ((0x5dU != (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                    if ((0x43U == (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                        __Vdly__tb_display__DOT__ctrl__DOT__wanted_c 
                            = ((8U == (IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_c))
                                ? 0U : (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_c))));
                    } else if ((0x44U == (IData)(vlSelfRef.tb_display__DOT__cmd))) {
                        __Vdly__tb_display__DOT__ctrl__DOT__wanted_c = 4U;
                    }
                }
            }
        }
        vlSelfRef.tb_display__DOT__c = vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_c;
    }
    vlSelfRef.tb_display__DOT__ctrl__DOT__ticks = __Vdly__tb_display__DOT__ctrl__DOT__ticks;
    vlSelfRef.tb_display__DOT__tm = __Vdly__tb_display__DOT__tm;
    vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_b 
        = __Vdly__tb_display__DOT__ctrl__DOT__wanted_b;
    vlSelfRef.tb_display__DOT__ctrl__DOT__wanted_c 
        = __Vdly__tb_display__DOT__ctrl__DOT__wanted_c;
}

void Vtb_display___024root___timing_resume(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___timing_resume\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h70ce6aa5__0.resume(
                                                   "@(negedge tb_display.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_display___024root___timing_commit(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___timing_commit\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h70ce6aa5__0.commit(
                                                   "@(negedge tb_display.clk)");
    }
}

void Vtb_display___024root___eval_triggers__act(Vtb_display___024root* vlSelf);

bool Vtb_display___024root___eval_phase__act(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_phase__act\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_display___024root___eval_triggers__act(vlSelf);
    Vtb_display___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_display___024root___timing_resume(vlSelf);
        Vtb_display___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_display___024root___eval_phase__nba(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_phase__nba\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_display___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__nba(Vtb_display___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__act(Vtb_display___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_display___024root___eval(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_display___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_display.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_display___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_display.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_display___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_display___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_display___024root___eval_debug_assertions(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_debug_assertions\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
