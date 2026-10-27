// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_rx.h for the primary calling header

#include "Vtb_uart_rx__pch.h"
#include "Vtb_uart_rx___024root.h"

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static__TOP(Vtb_uart_rx___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_static\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_uart_rx___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_static__TOP(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_static__TOP\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_uart_rx__DOT__clk = 0U;
    vlSelfRef.tb_uart_rx__DOT__reset = 1U;
    vlSelfRef.tb_uart_rx__DOT__rx = 1U;
    vlSelfRef.tb_uart_rx__DOT__count = 0U;
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_final(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_final\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_uart_rx___024root___eval_settle(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___eval_settle\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__act(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___dump_triggers__act\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_uart_rx.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_uart_rx.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_rx___024root___dump_triggers__nba(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___dump_triggers__nba\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_uart_rx.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_uart_rx.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_uart_rx___024root___ctor_var_reset(Vtb_uart_rx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_rx___024root___ctor_var_reset\n"); );
    Vtb_uart_rx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_uart_rx__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_uart_rx__DOT__seen[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_uart_rx__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->tb_uart_rx__DOT__dut__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__dut__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_rx__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_uart_rx__DOT__dut__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tb_uart_rx__DOT__dut__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->tb_uart_rx__DOT__dut__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_rx__DOT__clk__0 = VL_RAND_RESET_I(1);
}
