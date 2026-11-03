// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaling_course.h for the primary calling header

#include "Vtb_scaling_course__pch.h"
#include "Vtb_scaling_course___024root.h"

VlCoroutine Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__0(Vtb_scaling_course___024root* vlSelf);
VlCoroutine Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__1(Vtb_scaling_course___024root* vlSelf);
VlCoroutine Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__2(Vtb_scaling_course___024root* vlSelf);

void Vtb_scaling_course___024root___eval_initial(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_initial\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__2(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/platform\tb_scaling_course.sv", 
                                             3);
        vlSelfRef.tb_scaling_course__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_scaling_course__DOT__clk)));
    }
}

void Vtb_scaling_course___024root___act_sequent__TOP__0(Vtb_scaling_course___024root* vlSelf);

void Vtb_scaling_course___024root___eval_act(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_act\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_scaling_course___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_scaling_course___024root___act_sequent__TOP__0(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___act_sequent__TOP__0\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_scaling_course__DOT__dut__DOT__exit_key;
    tb_scaling_course__DOT__dut__DOT__exit_key = 0;
    // Body
    vlSelfRef.tb_scaling_course__DOT__sw = ((IData)(vlSelfRef.tb_scaling_course__DOT__loader__DOT__busy) 
                                            & ((IData)(vlSelfRef.tb_scaling_course__DOT__loader__DOT__header_done) 
                                               & ((IData)(vlSelfRef.tb_scaling_course__DOT__bv) 
                                                  & (IData)(vlSelfRef.tb_scaling_course__DOT__wr))));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__autoplay_event 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__active) 
           & ((IData)(vlSelfRef.tb_scaling_course__DOT__ev) 
              & ((~ (IData)(vlSelfRef.tb_scaling_course__DOT__menu)) 
                 & ((9U == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                    & (0U == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__notice))))));
    tb_scaling_course__DOT__dut__DOT__exit_key = ((0U 
                                                   != (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__notice)) 
                                                  & ((6U 
                                                      == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                        | (IData)(
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                                   & (0x200U 
                                                                      == 
                                                                      (0x780U 
                                                                       & vlSelfRef.tb_scaling_course__DOT__dut__DOT__cache_q[1U])))))));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__force_valid)
            ? 0xdU : ((IData)(tb_scaling_course__DOT__dut__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_scaling_course__DOT__action)));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__core_event 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__active) 
           & ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_scaling_course__DOT__ev) 
                 & ((9U != (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                    & ((0xaU <= (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                       | ((IData)(tb_scaling_course__DOT__dut__DOT__exit_key) 
                          | ((0xbU == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__state)) 
                             & ((~ (IData)(vlSelfRef.tb_scaling_course__DOT__menu)) 
                                & ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__cache_tag) 
                                   == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__focus))))))))));
}

void Vtb_scaling_course___024root___nba_sequent__TOP__0(Vtb_scaling_course___024root* vlSelf);
void Vtb_scaling_course___024root___nba_comb__TOP__0(Vtb_scaling_course___024root* vlSelf);

void Vtb_scaling_course___024root___eval_nba(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_nba\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scaling_course___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scaling_course___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_scaling_course___024root___nba_comb__TOP__0(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___nba_comb__TOP__0\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_scaling_course__DOT__dut__DOT__exit_key;
    tb_scaling_course__DOT__dut__DOT__exit_key = 0;
    // Body
    tb_scaling_course__DOT__dut__DOT__exit_key = ((0U 
                                                   != (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__notice)) 
                                                  & ((6U 
                                                      == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                        | (IData)(
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                                                                   & (0x200U 
                                                                      == 
                                                                      (0x780U 
                                                                       & vlSelfRef.tb_scaling_course__DOT__dut__DOT__cache_q[1U])))))));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__autoplay_event 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__active) 
           & ((IData)(vlSelfRef.tb_scaling_course__DOT__ev) 
              & ((~ (IData)(vlSelfRef.tb_scaling_course__DOT__menu)) 
                 & ((9U == (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                    & (0U == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__notice))))));
    vlSelfRef.tb_scaling_course__DOT__sw = ((IData)(vlSelfRef.tb_scaling_course__DOT__loader__DOT__busy) 
                                            & ((IData)(vlSelfRef.tb_scaling_course__DOT__loader__DOT__header_done) 
                                               & ((IData)(vlSelfRef.tb_scaling_course__DOT__bv) 
                                                  & (IData)(vlSelfRef.tb_scaling_course__DOT__wr))));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__core_event_action 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__force_valid)
            ? 0xdU : ((IData)(tb_scaling_course__DOT__dut__DOT__exit_key)
                       ? 0xcU : (IData)(vlSelfRef.tb_scaling_course__DOT__action)));
    vlSelfRef.tb_scaling_course__DOT__dut__DOT__core_event 
        = ((IData)(vlSelfRef.tb_scaling_course__DOT__active) 
           & ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__force_valid) 
              | ((IData)(vlSelfRef.tb_scaling_course__DOT__ev) 
                 & ((9U != (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                    & ((0xaU <= (IData)(vlSelfRef.tb_scaling_course__DOT__action)) 
                       | ((IData)(tb_scaling_course__DOT__dut__DOT__exit_key) 
                          | ((0xbU == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__state)) 
                             & ((~ (IData)(vlSelfRef.tb_scaling_course__DOT__menu)) 
                                & ((IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__cache_tag) 
                                   == (IData)(vlSelfRef.tb_scaling_course__DOT__dut__DOT__focus))))))))));
}

void Vtb_scaling_course___024root___timing_resume(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___timing_resume\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2d8b5cc5__0.resume(
                                                   "@(negedge tb_scaling_course.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_scaling_course___024root___timing_commit(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___timing_commit\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2d8b5cc5__0.commit(
                                                   "@(negedge tb_scaling_course.clk)");
    }
}

void Vtb_scaling_course___024root___eval_triggers__act(Vtb_scaling_course___024root* vlSelf);

bool Vtb_scaling_course___024root___eval_phase__act(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_phase__act\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_scaling_course___024root___eval_triggers__act(vlSelf);
    Vtb_scaling_course___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_scaling_course___024root___timing_resume(vlSelf);
        Vtb_scaling_course___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_scaling_course___024root___eval_phase__nba(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_phase__nba\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_scaling_course___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaling_course___024root___dump_triggers__nba(Vtb_scaling_course___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaling_course___024root___dump_triggers__act(Vtb_scaling_course___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_scaling_course___024root___eval(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scaling_course___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_scaling_course.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_scaling_course___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/platform\\tb_scaling_course.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_scaling_course___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_scaling_course___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_scaling_course___024root___eval_debug_assertions(Vtb_scaling_course___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaling_course___024root___eval_debug_assertions\n"); );
    Vtb_scaling_course__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
