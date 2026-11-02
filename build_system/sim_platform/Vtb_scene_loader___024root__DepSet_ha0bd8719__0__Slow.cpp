// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_loader.h for the primary calling header

#include "Vtb_scene_loader__pch.h"
#include "Vtb_scene_loader___024root.h"

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_static__TOP(Vtb_scene_loader___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_static(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_static\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scene_loader___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_static__TOP(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_static__TOP\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scene_loader__DOT__clk = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__last = 0U;
    vlSelfRef.tb_scene_loader__DOT__data = 0U;
    vlSelfRef.tb_scene_loader__DOT__cycle = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
}

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_final(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_final\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_loader___024root___dump_triggers__stl(Vtb_scene_loader___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scene_loader___024root___eval_phase__stl(Vtb_scene_loader___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_settle(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_settle\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scene_loader___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_scene_loader.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_scene_loader___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_loader___024root___dump_triggers__stl(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___dump_triggers__stl\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_scene_loader___024root___stl_sequent__TOP__0(Vtb_scene_loader___024root* vlSelf);

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_stl(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_stl\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_scene_loader___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_scene_loader___024root___stl_sequent__TOP__0(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___stl_sequent__TOP__0\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length 
        = (((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
             [0xbU] << 0x18U) | (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                 [0xaU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
               [9U] << 8U) | vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
              [8U]));
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__count_sum 
        = (0x3ffU & (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                     [0x10U] + (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                [0x11U] + vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                [0x12U])));
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_crc 
        = (((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
             [0xfU] << 0x18U) | (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                 [0xeU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
               [0xdU] << 8U) | vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
              [0xcU]));
    vlSelfRef.tb_scene_loader__DOT__br = ((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                                          & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                                             | (2U 
                                                != 
                                                VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))));
}

VL_ATTR_COLD void Vtb_scene_loader___024root___eval_triggers__stl(Vtb_scene_loader___024root* vlSelf);

VL_ATTR_COLD bool Vtb_scene_loader___024root___eval_phase__stl(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_phase__stl\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scene_loader___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_scene_loader___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_loader___024root___dump_triggers__act(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___dump_triggers__act\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_scene_loader.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_scene_loader.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_loader___024root___dump_triggers__nba(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___dump_triggers__nba\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_scene_loader.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_scene_loader.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scene_loader___024root___ctor_var_reset(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___ctor_var_reset\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_scene_loader__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__stream_error = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__bv = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_loader__DOT__br = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__commit = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_loader__DOT__resources = VL_RAND_RESET_I(7);
    vlSelf->tb_scene_loader__DOT__pages = VL_RAND_RESET_I(6);
    vlSelf->tb_scene_loader__DOT__widgets = VL_RAND_RESET_I(8);
    vlSelf->tb_scene_loader__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__writes = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__commits = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3424; ++__Vi0) {
        vlSelf->tb_scene_loader__DOT__course[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 320; ++__Vi0) {
        vlSelf->tb_scene_loader__DOT__exhibit[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_scene_loader__DOT__run__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__run__Vstatic__value = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_scene_loader__DOT__dut__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_scene_loader__DOT__dut__DOT__position = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_loader__DOT__dut__DOT__expected_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__dut__DOT__crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__dut__DOT__payload_bytes = VL_RAND_RESET_I(21);
    vlSelf->tb_scene_loader__DOT__dut__DOT__header_done = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__dut__DOT__bad_prefix = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__dut__DOT__bad_reserved = VL_RAND_RESET_I(1);
    vlSelf->tb_scene_loader__DOT__dut__DOT__header_length = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__dut__DOT__header_crc = VL_RAND_RESET_I(32);
    vlSelf->tb_scene_loader__DOT__dut__DOT__count_sum = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0 = VL_RAND_RESET_I(1);
}
