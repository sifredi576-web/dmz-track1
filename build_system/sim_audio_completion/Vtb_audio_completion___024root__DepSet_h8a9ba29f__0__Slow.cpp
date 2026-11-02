// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_audio_completion.h for the primary calling header

#include "Vtb_audio_completion__pch.h"
#include "Vtb_audio_completion___024root.h"

VL_ATTR_COLD void Vtb_audio_completion___024root___eval_static__TOP(Vtb_audio_completion___024root* vlSelf);

VL_ATTR_COLD void Vtb_audio_completion___024root___eval_static(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_static\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_audio_completion___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_audio_completion___024root___eval_static__TOP(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_static__TOP\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_audio_completion__DOT__clk = 0U;
    vlSelfRef.tb_audio_completion__DOT__reset = 1U;
    vlSelfRef.tb_audio_completion__DOT__flushing = 0U;
    vlSelfRef.tb_audio_completion__DOT__pop = 0U;
    vlSelfRef.tb_audio_completion__DOT__params = 0ULL;
}

VL_ATTR_COLD void Vtb_audio_completion___024root___eval_final(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_final\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_audio_completion___024root___eval_settle(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___eval_settle\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_audio_completion___024root___dump_triggers__act(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___dump_triggers__act\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_audio_completion.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_audio_completion.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_audio_completion___024root___dump_triggers__nba(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___dump_triggers__nba\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_audio_completion.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_audio_completion.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_audio_completion___024root___ctor_var_reset(Vtb_audio_completion___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_audio_completion___024root___ctor_var_reset\n"); );
    Vtb_audio_completion__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_audio_completion__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_audio_completion__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_audio_completion__DOT__flushing = VL_RAND_RESET_I(1);
    vlSelf->tb_audio_completion__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb_audio_completion__DOT__params = VL_RAND_RESET_Q(42);
    vlSelf->tb_audio_completion__DOT__dut__DOT__ticket = VL_RAND_RESET_I(8);
    vlSelf->tb_audio_completion__DOT__dut__DOT__consumed = VL_RAND_RESET_I(32);
    vlSelf->tb_audio_completion__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_audio_completion__DOT__clk__0 = VL_RAND_RESET_I(1);
}
