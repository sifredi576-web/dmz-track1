// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_trigger.h for the primary calling header

#include "Vtb_trigger__pch.h"
#include "Vtb_trigger___024root.h"

VL_ATTR_COLD void Vtb_trigger___024root___eval_static__TOP(Vtb_trigger___024root* vlSelf);

VL_ATTR_COLD void Vtb_trigger___024root___eval_static(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_static\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_trigger___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_trigger___024root___eval_static__TOP(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_static__TOP\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_trigger__DOT__clk = 0U;
    vlSelfRef.tb_trigger__DOT__reset = 1U;
    vlSelfRef.tb_trigger__DOT__ce = 0U;
    vlSelfRef.tb_trigger__DOT__ft = 0U;
    vlSelfRef.tb_trigger__DOT__trig = 1U;
    vlSelfRef.tb_trigger__DOT__sample = 0U;
    vlSelfRef.tb_trigger__DOT__periodic_test = 1U;
    vlSelfRef.tb_trigger__DOT__fallback_starts = 0U;
    vlSelfRef.tb_trigger__DOT__starts = 0U;
    vlSelfRef.tb_trigger__DOT__swaps = 0U;
    vlSelfRef.tb_trigger__DOT__old_front = 0U;
}

VL_ATTR_COLD void Vtb_trigger___024root___eval_final(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_final\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__stl(Vtb_trigger___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_trigger___024root___eval_phase__stl(Vtb_trigger___024root* vlSelf);

VL_ATTR_COLD void Vtb_trigger___024root___eval_settle(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_settle\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_trigger___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_trigger.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_trigger___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__stl(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___dump_triggers__stl\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_trigger___024root___act_sequent__TOP__0(Vtb_trigger___024root* vlSelf);

VL_ATTR_COLD void Vtb_trigger___024root___eval_stl(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_stl\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_trigger___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_trigger___024root___eval_triggers__stl(Vtb_trigger___024root* vlSelf);

VL_ATTR_COLD bool Vtb_trigger___024root___eval_phase__stl(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___eval_phase__stl\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_trigger___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_trigger___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__act(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___dump_triggers__act\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_trigger.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_trigger.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_trigger___024root___dump_triggers__nba(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___dump_triggers__nba\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_trigger.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_trigger.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_trigger___024root___ctor_var_reset(Vtb_trigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_trigger___024root___ctor_var_reset\n"); );
    Vtb_trigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_trigger__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__trig = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__sample = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_trigger__DOT__reference_page[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->tb_trigger__DOT__periodic_test = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__fallback_starts = VL_RAND_RESET_I(32);
    vlSelf->tb_trigger__DOT__starts = VL_RAND_RESET_I(32);
    vlSelf->tb_trigger__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_trigger__DOT__old_front = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__front = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__page_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__wp = VL_RAND_RESET_I(7);
    vlSelf->tb_trigger__DOT__dut__DOT__decimate = VL_RAND_RESET_I(3);
    vlSelf->tb_trigger__DOT__dut__DOT__capturing = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__negative_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__trigger_wait = VL_RAND_RESET_I(12);
    vlSelf->tb_trigger__DOT__dut__DOT__trigger_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__trigger_start = VL_RAND_RESET_I(1);
    vlSelf->tb_trigger__DOT__dut__DOT__take_sample = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_trigger__DOT__clk__0 = VL_RAND_RESET_I(1);
}
