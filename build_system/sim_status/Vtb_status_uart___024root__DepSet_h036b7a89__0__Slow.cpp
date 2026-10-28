// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_uart.h for the primary calling header

#include "Vtb_status_uart__pch.h"
#include "Vtb_status_uart___024root.h"

VL_ATTR_COLD void Vtb_status_uart___024root___eval_static__TOP(Vtb_status_uart___024root* vlSelf);

VL_ATTR_COLD void Vtb_status_uart___024root___eval_static(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_static\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_status_uart___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h02066bdf__1 = 0U;
}

VL_ATTR_COLD void Vtb_status_uart___024root___eval_static__TOP(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_static__TOP\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_status_uart__DOT__clk = 0U;
    vlSelfRef.tb_status_uart__DOT__reset = 1U;
    vlSelfRef.tb_status_uart__DOT__seen64 = 0U;
    vlSelfRef.tb_status_uart__DOT__seen96 = 0U;
}

VL_ATTR_COLD void Vtb_status_uart___024root___eval_final(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_final\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_status_uart___024root___eval_settle(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_settle\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_uart___024root___dump_triggers__act(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___dump_triggers__act\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_status_uart.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_status_uart.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( (32'shc0 == tb_status_uart.seen96))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_uart___024root___dump_triggers__nba(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___dump_triggers__nba\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_status_uart.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_status_uart.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( (32'shc0 == tb_status_uart.seen96))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_status_uart___024root___ctor_var_reset(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___ctor_var_reset\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_status_uart__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb_status_uart__DOT__status64);
    VL_RAND_RESET_W(768, vlSelf->tb_status_uart__DOT__status96);
    vlSelf->tb_status_uart__DOT__tx64 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__tx96 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__v64 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__v96 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__b64 = VL_RAND_RESET_I(8);
    vlSelf->tb_status_uart__DOT__b96 = VL_RAND_RESET_I(8);
    vlSelf->tb_status_uart__DOT__seen64 = VL_RAND_RESET_I(32);
    vlSelf->tb_status_uart__DOT__seen96 = VL_RAND_RESET_I(32);
    vlSelf->tb_status_uart__DOT____Vlvbound_hc7a8f01d__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_status_uart__DOT____Vlvbound_h6648b4d0__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_status_uart__DOT__t64__DOT__interval = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->tb_status_uart__DOT__t64__DOT__snapshot);
    vlSelf->tb_status_uart__DOT__t64__DOT__index = VL_RAND_RESET_I(6);
    vlSelf->tb_status_uart__DOT__t64__DOT__bitnum = VL_RAND_RESET_I(4);
    vlSelf->tb_status_uart__DOT__t64__DOT__baud = VL_RAND_RESET_I(16);
    vlSelf->tb_status_uart__DOT__t64__DOT__shift = VL_RAND_RESET_I(10);
    vlSelf->tb_status_uart__DOT__t64__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__t96__DOT__interval = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(768, vlSelf->tb_status_uart__DOT__t96__DOT__snapshot);
    vlSelf->tb_status_uart__DOT__t96__DOT__index = VL_RAND_RESET_I(7);
    vlSelf->tb_status_uart__DOT__t96__DOT__bitnum = VL_RAND_RESET_I(4);
    vlSelf->tb_status_uart__DOT__t96__DOT__baud = VL_RAND_RESET_I(16);
    vlSelf->tb_status_uart__DOT__t96__DOT__shift = VL_RAND_RESET_I(10);
    vlSelf->tb_status_uart__DOT__t96__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__r64__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__r64__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__r64__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_status_uart__DOT__r64__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tb_status_uart__DOT__r64__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->tb_status_uart__DOT__r64__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->tb_status_uart__DOT__r96__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__r96__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->tb_status_uart__DOT__r96__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_status_uart__DOT__r96__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tb_status_uart__DOT__r96__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->tb_status_uart__DOT__r96__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h02066bdf__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
