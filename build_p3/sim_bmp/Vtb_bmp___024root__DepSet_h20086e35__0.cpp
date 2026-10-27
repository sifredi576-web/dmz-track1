// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bmp.h for the primary calling header

#include "Vtb_bmp__pch.h"
#include "Vtb_bmp___024root.h"

VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__0(Vtb_bmp___024root* vlSelf);
VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__1(Vtb_bmp___024root* vlSelf);
VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__2(Vtb_bmp___024root* vlSelf);

void Vtb_bmp___024root___eval_initial(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_initial\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_bmp___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_bmp___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_bmp___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_bmp___024root___eval_initial__TOP__Vtiming__2(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "dmz_track1/sim/p3\tb_bmp.sv", 
                                             3);
        vlSelfRef.tb_bmp__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_bmp__DOT__clk)));
    }
}

void Vtb_bmp___024root___eval_act(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_act\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_bmp___024root___nba_sequent__TOP__0(Vtb_bmp___024root* vlSelf);

void Vtb_bmp___024root___eval_nba(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_nba\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_bmp___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_bmp___024root___timing_resume(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___timing_resume\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf82e2f98__0.resume(
                                                   "@( (tb_bmp.done | (8'h0 != tb_bmp.error)))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_bmp___024root___timing_commit(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___timing_commit\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf82e2f98__0.commit(
                                                   "@( (tb_bmp.done | (8'h0 != tb_bmp.error)))");
    }
}

void Vtb_bmp___024root___eval_triggers__act(Vtb_bmp___024root* vlSelf);

bool Vtb_bmp___024root___eval_phase__act(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_phase__act\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_bmp___024root___eval_triggers__act(vlSelf);
    Vtb_bmp___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_bmp___024root___timing_resume(vlSelf);
        Vtb_bmp___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_bmp___024root___eval_phase__nba(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_phase__nba\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_bmp___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__nba(Vtb_bmp___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bmp___024root___dump_triggers__act(Vtb_bmp___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bmp___024root___eval(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_bmp___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dmz_track1/sim/p3\\tb_bmp.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_bmp___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dmz_track1/sim/p3\\tb_bmp.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_bmp___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_bmp___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_bmp___024root___eval_debug_assertions(Vtb_bmp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bmp___024root___eval_debug_assertions\n"); );
    Vtb_bmp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
