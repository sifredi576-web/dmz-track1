// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_audio_completion.h for the primary calling header

#include "Vtb_audio_completion__pch.h"
#include "Vtb_audio_completion___024root.h"

VlCoroutine Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__0(Vtb_audio_completion___024root* vlSelf);
VlCoroutine Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__1(Vtb_audio_completion___024root* vlSelf);

void Vtb_audio_completion___024root___eval_initial(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_initial\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__1(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/platform\tb_audio_completion.sv", 
                                             3);
        vlSelfRef.tb_audio_completion__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_audio_completion__DOT__clk)));
    }
}

void Vtb_audio_completion___024root___eval_act(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_act\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_audio_completion___024root___nba_sequent__TOP__0(Vtb_audio_completion___024root* vlSelf);

void Vtb_audio_completion___024root___eval_nba(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_nba\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_audio_completion___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_audio_completion___024root___nba_sequent__TOP__0(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___nba_sequent__TOP__0\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_audio_completion__DOT__dut__DOT__ticket;
    __Vdly__tb_audio_completion__DOT__dut__DOT__ticket = 0;
    IData/*31:0*/ __Vdly__tb_audio_completion__DOT__dut__DOT__consumed;
    __Vdly__tb_audio_completion__DOT__dut__DOT__consumed = 0;
    CData/*2:0*/ __Vdly__tb_audio_completion__DOT__dut__DOT__state;
    __Vdly__tb_audio_completion__DOT__dut__DOT__state = 0;
    // Body
    __Vdly__tb_audio_completion__DOT__dut__DOT__ticket 
        = vlSelfRef.tb_audio_completion__DOT__dut__DOT__ticket;
    __Vdly__tb_audio_completion__DOT__dut__DOT__consumed 
        = vlSelfRef.tb_audio_completion__DOT__dut__DOT__consumed;
    __Vdly__tb_audio_completion__DOT__dut__DOT__state 
        = vlSelfRef.tb_audio_completion__DOT__dut__DOT__state;
    if (vlSelfRef.tb_audio_completion__DOT__reset) {
        __Vdly__tb_audio_completion__DOT__dut__DOT__ticket = 0U;
        __Vdly__tb_audio_completion__DOT__dut__DOT__consumed = 0U;
        __Vdly__tb_audio_completion__DOT__dut__DOT__state = 0U;
    } else if (((0xffU & (IData)((vlSelfRef.tb_audio_completion__DOT__params 
                                  >> 0x22U))) != (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__ticket))) {
        __Vdly__tb_audio_completion__DOT__dut__DOT__ticket 
            = (0xffU & (IData)((vlSelfRef.tb_audio_completion__DOT__params 
                                >> 0x22U)));
        __Vdly__tb_audio_completion__DOT__dut__DOT__consumed = 0U;
        __Vdly__tb_audio_completion__DOT__dut__DOT__state 
            = ((1U & (IData)((vlSelfRef.tb_audio_completion__DOT__params 
                              >> 0x21U))) ? ((IData)(vlSelfRef.tb_audio_completion__DOT__flushing)
                                              ? 2U : 1U)
                : 0U);
    } else if ((1U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state))) {
        if (vlSelfRef.tb_audio_completion__DOT__flushing) {
            __Vdly__tb_audio_completion__DOT__dut__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_audio_completion__DOT__flushing)))) {
            __Vdly__tb_audio_completion__DOT__dut__DOT__state 
                = ((0U == (IData)(vlSelfRef.tb_audio_completion__DOT__params))
                    ? 4U : 3U);
        }
    } else if ((3U == (IData)(vlSelfRef.tb_audio_completion__DOT__dut__DOT__state))) {
        if (vlSelfRef.tb_audio_completion__DOT__pop) {
            if ((vlSelfRef.tb_audio_completion__DOT__dut__DOT__consumed 
                 == ((IData)(vlSelfRef.tb_audio_completion__DOT__params) 
                     - (IData)(1U)))) {
                __Vdly__tb_audio_completion__DOT__dut__DOT__consumed = 0U;
                if ((1U & (~ (IData)((vlSelfRef.tb_audio_completion__DOT__params 
                                      >> 0x20U))))) {
                    __Vdly__tb_audio_completion__DOT__dut__DOT__state = 4U;
                }
            } else {
                __Vdly__tb_audio_completion__DOT__dut__DOT__consumed 
                    = ((IData)(1U) + vlSelfRef.tb_audio_completion__DOT__dut__DOT__consumed);
            }
        }
    }
    vlSelfRef.tb_audio_completion__DOT__dut__DOT__ticket 
        = __Vdly__tb_audio_completion__DOT__dut__DOT__ticket;
    vlSelfRef.tb_audio_completion__DOT__dut__DOT__consumed 
        = __Vdly__tb_audio_completion__DOT__dut__DOT__consumed;
    vlSelfRef.tb_audio_completion__DOT__dut__DOT__state 
        = __Vdly__tb_audio_completion__DOT__dut__DOT__state;
}

void Vtb_audio_completion___024root___timing_resume(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___timing_resume\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h570dfadf__0.resume(
                                                   "@(negedge tb_audio_completion.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_audio_completion___024root___timing_commit(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___timing_commit\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h570dfadf__0.commit(
                                                   "@(negedge tb_audio_completion.clk)");
    }
}

void Vtb_audio_completion___024root___eval_triggers__act(Vtb_audio_completion___024root* vlSelf);

bool Vtb_audio_completion___024root___eval_phase__act(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_phase__act\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_audio_completion___024root___eval_triggers__act(vlSelf);
    Vtb_audio_completion___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_audio_completion___024root___timing_resume(vlSelf);
        Vtb_audio_completion___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_audio_completion___024root___eval_phase__nba(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_phase__nba\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_audio_completion___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_audio_completion___024root___dump_triggers__nba(Vtb_audio_completion___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_audio_completion___024root___dump_triggers__act(Vtb_audio_completion___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_audio_completion___024root___eval(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_audio_completion___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_audio_completion.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_audio_completion___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_audio_completion.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_audio_completion___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_audio_completion___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_audio_completion___024root___eval_debug_assertions(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_debug_assertions\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
