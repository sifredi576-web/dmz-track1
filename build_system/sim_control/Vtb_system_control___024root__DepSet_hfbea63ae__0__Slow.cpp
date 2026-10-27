// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system_control.h for the primary calling header

#include "Vtb_system_control__pch.h"
#include "Vtb_system_control___024root.h"

VL_ATTR_COLD void Vtb_system_control___024root___eval_static__TOP(Vtb_system_control___024root* vlSelf);

VL_ATTR_COLD void Vtb_system_control___024root___eval_static(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_static\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_system_control___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system_control__DOT__memclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system_control__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h6cf76a58__1 = (1U & 
                                              (~ (IData)(vlSelfRef.tb_system_control__DOT__phase)));
    vlSelfRef.__Vtrigprevexpr_h4d90c662__1 = (0U != (IData)(vlSelfRef.tb_system_control__DOT__control__DOT__restart_count));
    vlSelfRef.__Vtrigprevexpr_h4d77a30d__1 = (0U == (IData)(vlSelfRef.tb_system_control__DOT__control__DOT__restart_count));
}

VL_ATTR_COLD void Vtb_system_control___024root___eval_static__TOP(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_static__TOP\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system_control__DOT__clk = 0U;
    vlSelfRef.tb_system_control__DOT__memclk = 0U;
    vlSelfRef.tb_system_control__DOT__reset = 1U;
    vlSelfRef.tb_system_control__DOT__rx = 1U;
    vlSelfRef.tb_system_control__DOT__ms = 1U;
    vlSelfRef.tb_system_control__DOT__seq = 0U;
    vlSelfRef.tb_system_control__DOT__snapshots = 0U;
}

VL_ATTR_COLD void Vtb_system_control___024root___eval_final(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_final\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_system_control___024root___eval_settle(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___eval_settle\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system_control___024root___dump_triggers__act(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___dump_triggers__act\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_system_control.memclk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_system_control.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_system_control.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( (~ tb_system_control.phase))\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (16'h0 != tb_system_control.control.restart_count))\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( (16'h0 == tb_system_control.control.restart_count))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system_control___024root___dump_triggers__nba(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___dump_triggers__nba\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_system_control.memclk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_system_control.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_system_control.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( (~ tb_system_control.phase))\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (16'h0 != tb_system_control.control.restart_count))\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( (16'h0 == tb_system_control.control.restart_count))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_system_control___024root___ctor_var_reset(Vtb_system_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system_control___024root___ctor_var_reset\n"); );
    Vtb_system_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_system_control__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__memclk = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__ms = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__phase = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__byte_rx = VL_RAND_RESET_I(8);
    vlSelf->tb_system_control__DOT__last = VL_RAND_RESET_I(8);
    vlSelf->tb_system_control__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tb_system_control__DOT__seq = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tb_system_control__DOT__captured);
    vlSelf->tb_system_control__DOT__snapshots = VL_RAND_RESET_I(32);
    vlSelf->tb_system_control__DOT__uart__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__uart__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__uart__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__uart__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tb_system_control__DOT__uart__DOT__bitno = VL_RAND_RESET_I(3);
    vlSelf->tb_system_control__DOT__uart__DOT__shift = VL_RAND_RESET_I(8);
    vlSelf->tb_system_control__DOT__control__DOT__ms = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__control__DOT__cs = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__control__DOT__second_count = VL_RAND_RESET_I(25);
    vlSelf->tb_system_control__DOT__control__DOT__restart_count = VL_RAND_RESET_I(16);
    vlSelf->tb_system_control__DOT__cdc__DOT__request = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__cdc__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_system_control__DOT__cdc__DOT__req_sync = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__cdc__DOT__ack_sync = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->tb_system_control__DOT__cdc__DOT__held);
    vlSelf->tb_system_control__DOT__cdc__DOT__interval_count = VL_RAND_RESET_I(16);
    vlSelf->tb_system_control__DOT__cdc__DOT__settle = VL_RAND_RESET_I(2);
    vlSelf->tb_system_control__DOT__cdc__DOT__waiting = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_system_control__DOT__cdc__DOT__request = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_system_control__DOT__memclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_system_control__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h6cf76a58__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h4d90c662__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h4d77a30d__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
