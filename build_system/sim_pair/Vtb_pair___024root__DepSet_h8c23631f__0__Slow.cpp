// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pair.h for the primary calling header

#include "Vtb_pair__pch.h"
#include "Vtb_pair___024root.h"

VL_ATTR_COLD void Vtb_pair___024root___eval_static__TOP(Vtb_pair___024root* vlSelf);

VL_ATTR_COLD void Vtb_pair___024root___eval_static(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_static\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pair___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pair__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_pair___024root___eval_static__TOP(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_static__TOP\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pair__DOT__clk = 0U;
    vlSelfRef.tb_pair__DOT__reset = 1U;
    vlSelfRef.tb_pair__DOT__enable = 0U;
    vlSelfRef.tb_pair__DOT__found = 0U;
    vlSelfRef.tb_pair__DOT__swaps = 0U;
    vlSelfRef.tb_pair__DOT__pi = 0U;
    vlSelfRef.tb_pair__DOT__n = 0U;
}

VL_ATTR_COLD void Vtb_pair___024root___eval_final(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_final\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_pair___024root___eval_settle(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___eval_settle\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pair___024root___dump_triggers__act(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___dump_triggers__act\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_pair.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pair___024root___dump_triggers__nba(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___dump_triggers__nba\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_pair.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pair___024root___ctor_var_reset(Vtb_pair___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pair___024root___ctor_var_reset\n"); );
    Vtb_pair__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_pair__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__found = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_pair__DOT__pi = VL_RAND_RESET_I(4);
    vlSelf->tb_pair__DOT__request = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->tb_pair__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->tb_pair__DOT__dut__DOT__last_swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_pair__DOT__dut__DOT__was_enabled = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__dut__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->tb_pair__DOT__dut__DOT__settle = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__tb_pair__DOT__clk__0 = VL_RAND_RESET_I(1);
}
