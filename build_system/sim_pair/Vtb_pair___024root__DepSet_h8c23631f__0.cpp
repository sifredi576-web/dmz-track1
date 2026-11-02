// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pair.h for the primary calling header

#include "Vtb_pair__pch.h"
#include "Vtb_pair___024root.h"

VlCoroutine Vtb_pair___024root___eval_initial__TOP__Vtiming__0(Vtb_pair___024root* vlSelf);
VlCoroutine Vtb_pair___024root___eval_initial__TOP__Vtiming__1(Vtb_pair___024root* vlSelf);

void Vtb_pair___024root___eval_initial(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_initial\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pair___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pair___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_pair___024root___eval_initial__TOP__Vtiming__1(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "sim/media\tb_pair.sv", 
                                             2);
        vlSelfRef.tb_pair__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_pair__DOT__clk)));
    }
}

void Vtb_pair___024root___eval_act(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_act\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_pair___024root___nba_sequent__TOP__0(Vtb_pair___024root* vlSelf);

void Vtb_pair___024root___eval_nba(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_nba\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pair___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_pair___024root___nba_sequent__TOP__0(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___nba_sequent__TOP__0\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_pair__DOT__dut__DOT__pending;
    __Vdly__tb_pair__DOT__dut__DOT__pending = 0;
    CData/*4:0*/ __Vdly__tb_pair__DOT__dut__DOT__settle;
    __Vdly__tb_pair__DOT__dut__DOT__settle = 0;
    // Body
    __Vdly__tb_pair__DOT__dut__DOT__pending = vlSelfRef.tb_pair__DOT__dut__DOT__pending;
    __Vdly__tb_pair__DOT__dut__DOT__settle = vlSelfRef.tb_pair__DOT__dut__DOT__settle;
    if (vlSelfRef.tb_pair__DOT__request) {
        vlSelfRef.tb_pair__DOT__n = ((IData)(1U) + vlSelfRef.tb_pair__DOT__n);
    }
    if (vlSelfRef.tb_pair__DOT__reset) {
        __Vdly__tb_pair__DOT__dut__DOT__pending = 0U;
        __Vdly__tb_pair__DOT__dut__DOT__settle = 0U;
        vlSelfRef.tb_pair__DOT__request = 0U;
        vlSelfRef.tb_pair__DOT__idx = 0U;
        vlSelfRef.tb_pair__DOT__dut__DOT__last_swaps = 0U;
    } else {
        vlSelfRef.tb_pair__DOT__request = 0U;
        if (vlSelfRef.tb_pair__DOT__enable) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_pair__DOT__dut__DOT__was_enabled)) 
                       | (vlSelfRef.tb_pair__DOT__swaps 
                          != vlSelfRef.tb_pair__DOT__dut__DOT__last_swaps)))) {
                __Vdly__tb_pair__DOT__dut__DOT__pending = 1U;
                __Vdly__tb_pair__DOT__dut__DOT__settle = 0x1fU;
            } else if (vlSelfRef.tb_pair__DOT__dut__DOT__pending) {
                if ((0U != (IData)(vlSelfRef.tb_pair__DOT__dut__DOT__settle))) {
                    __Vdly__tb_pair__DOT__dut__DOT__settle 
                        = (0x1fU & ((IData)(vlSelfRef.tb_pair__DOT__dut__DOT__settle) 
                                    - (IData)(1U)));
                } else {
                    __Vdly__tb_pair__DOT__dut__DOT__pending = 0U;
                    if (vlSelfRef.tb_pair__DOT__found) {
                        vlSelfRef.tb_pair__DOT__request = 1U;
                        vlSelfRef.tb_pair__DOT__idx 
                            = vlSelfRef.tb_pair__DOT__pi;
                    }
                }
            }
        } else {
            __Vdly__tb_pair__DOT__dut__DOT__pending = 0U;
            __Vdly__tb_pair__DOT__dut__DOT__settle = 0U;
        }
        vlSelfRef.tb_pair__DOT__dut__DOT__last_swaps 
            = vlSelfRef.tb_pair__DOT__swaps;
    }
    vlSelfRef.tb_pair__DOT__dut__DOT__pending = __Vdly__tb_pair__DOT__dut__DOT__pending;
    vlSelfRef.tb_pair__DOT__dut__DOT__settle = __Vdly__tb_pair__DOT__dut__DOT__settle;
    vlSelfRef.tb_pair__DOT__dut__DOT__was_enabled = 
        ((1U & (~ (IData)(vlSelfRef.tb_pair__DOT__reset))) 
         && (IData)(vlSelfRef.tb_pair__DOT__enable));
}

void Vtb_pair___024root___timing_resume(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___timing_resume\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h01d94f08__0.resume(
                                                   "@(posedge tb_pair.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pair___024root___timing_commit(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___timing_commit\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h01d94f08__0.commit(
                                                   "@(posedge tb_pair.clk)");
    }
}

void Vtb_pair___024root___eval_triggers__act(Vtb_pair___024root* vlSelf);

bool Vtb_pair___024root___eval_phase__act(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_phase__act\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pair___024root___eval_triggers__act(vlSelf);
    Vtb_pair___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_pair___024root___timing_resume(vlSelf);
        Vtb_pair___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pair___024root___eval_phase__nba(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_phase__nba\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_pair___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pair___024root___dump_triggers__nba(Vtb_pair___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pair___024root___dump_triggers__act(Vtb_pair___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pair___024root___eval(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_pair___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_pair.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_pair___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/media\\tb_pair.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_pair___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_pair___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_pair___024root___eval_debug_assertions(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_debug_assertions\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
