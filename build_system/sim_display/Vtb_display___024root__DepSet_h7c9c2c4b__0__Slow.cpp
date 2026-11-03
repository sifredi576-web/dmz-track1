// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display___024root.h"

VL_ATTR_COLD void Vtb_display___024root___eval_static__TOP(Vtb_display___024root* vlSelf);

VL_ATTR_COLD void Vtb_display___024root___eval_static(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_static\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_display___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_display__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_display___024root___eval_static__TOP(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_static__TOP\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_display__DOT__clk = 0U;
    vlSelfRef.tb_display__DOT__reset = 1U;
    vlSelfRef.tb_display__DOT__cv = 0U;
    vlSelfRef.tb_display__DOT__cmd = 0U;
}

VL_ATTR_COLD void Vtb_display___024root___eval_final(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_final\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__stl(Vtb_display___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_display___024root___eval_phase__stl(Vtb_display___024root* vlSelf);

VL_ATTR_COLD void Vtb_display___024root___eval_settle(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_settle\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_display___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_display.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_display___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__stl(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___dump_triggers__stl\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_display___024root___act_comb__TOP__0(Vtb_display___024root* vlSelf);

VL_ATTR_COLD void Vtb_display___024root___eval_stl(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_stl\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_display___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_display___024root___eval_triggers__stl(Vtb_display___024root* vlSelf);

VL_ATTR_COLD bool Vtb_display___024root___eval_phase__stl(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_phase__stl\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_display___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_display___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__act(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___dump_triggers__act\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_display.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_display.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__nba(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___dump_triggers__nba\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_display.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_display.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_display___024root___ctor_var_reset(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___ctor_var_reset\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_display__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_display__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_display__DOT__cv = VL_RAND_RESET_I(1);
    vlSelf->tb_display__DOT__cmd = VL_RAND_RESET_I(8);
    vlSelf->tb_display__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_display__DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_display__DOT__tm = VL_RAND_RESET_I(24);
    vlSelf->tb_display__DOT__rgb = VL_RAND_RESET_I(24);
    vlSelf->tb_display__DOT__bb = VL_RAND_RESET_I(4);
    vlSelf->tb_display__DOT__cc = VL_RAND_RESET_I(4);
    vlSelf->tb_display__DOT__out = VL_RAND_RESET_I(24);
    vlSelf->tb_display__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_display__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->tb_display__DOT__ctrl__DOT__ticks = VL_RAND_RESET_I(1);
    vlSelf->tb_display__DOT__ctrl__DOT__wanted_b = VL_RAND_RESET_I(4);
    vlSelf->tb_display__DOT__ctrl__DOT__wanted_c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__pixel = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__bv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__cv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__pixel = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__bv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__cv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__pixel = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__bv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__cv = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__10__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__11__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_display__DOT__dut__DOT__channel__12__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__tb_display__DOT__clk__0 = VL_RAND_RESET_I(1);
}
