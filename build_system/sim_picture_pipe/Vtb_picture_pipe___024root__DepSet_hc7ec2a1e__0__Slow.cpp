// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_picture_pipe.h for the primary calling header

#include "Vtb_picture_pipe__pch.h"
#include "Vtb_picture_pipe___024root.h"

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_static__TOP(Vtb_picture_pipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_static(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_static\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_picture_pipe___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_picture_pipe__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_static__TOP(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_static__TOP\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_picture_pipe__DOT__clk = 0U;
    vlSelfRef.tb_picture_pipe__DOT__reset = 1U;
    vlSelfRef.tb_picture_pipe__DOT__rgb = 0U;
    vlSelfRef.tb_picture_pipe__DOT__b = 4U;
    vlSelfRef.tb_picture_pipe__DOT__c = 4U;
    vlSelfRef.tb_picture_pipe__DOT__count = 0U;
}

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_final(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_final\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__stl(Vtb_picture_pipe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_picture_pipe___024root___eval_phase__stl(Vtb_picture_pipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_settle(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_settle\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_picture_pipe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_picture_pipe.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_picture_pipe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__stl(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___dump_triggers__stl\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_picture_pipe___024root___act_comb__TOP__0(Vtb_picture_pipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_stl(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_stl\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_picture_pipe___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_picture_pipe___024root___eval_triggers__stl(Vtb_picture_pipe___024root* vlSelf);

VL_ATTR_COLD bool Vtb_picture_pipe___024root___eval_phase__stl(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_phase__stl\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_picture_pipe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_picture_pipe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__act(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___dump_triggers__act\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_picture_pipe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_picture_pipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__nba(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___dump_triggers__nba\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_picture_pipe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_picture_pipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_picture_pipe___024root___ctor_var_reset(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___ctor_var_reset\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_picture_pipe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_picture_pipe__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_picture_pipe__DOT__rgb = VL_RAND_RESET_I(24);
    vlSelf->tb_picture_pipe__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__expected = VL_RAND_RESET_I(24);
    vlSelf->tb_picture_pipe__DOT__wanted = VL_RAND_RESET_I(24);
    vlSelf->tb_picture_pipe__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__product = VL_RAND_RESET_I(12);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value = VL_RAND_RESET_I(13);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__result = VL_RAND_RESET_I(8);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__product = VL_RAND_RESET_I(12);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value = VL_RAND_RESET_I(13);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__result = VL_RAND_RESET_I(8);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__product = VL_RAND_RESET_I(12);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value = VL_RAND_RESET_I(13);
    vlSelf->tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__result = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__b = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__product = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__sum = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__bias = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__difference = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__tb_picture_pipe__DOT__clk__0 = VL_RAND_RESET_I(1);
}
