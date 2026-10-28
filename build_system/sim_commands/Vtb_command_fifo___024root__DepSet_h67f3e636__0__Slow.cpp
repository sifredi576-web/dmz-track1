// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_command_fifo.h for the primary calling header

#include "Vtb_command_fifo__pch.h"
#include "Vtb_command_fifo___024root.h"

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_static__TOP(Vtb_command_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_static(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_static\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_command_fifo___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__dst__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0 = 0U;
}

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_static__TOP(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_static__TOP\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_command_fifo__DOT__src = 0U;
    vlSelfRef.tb_command_fifo__DOT__dst = 0U;
    vlSelfRef.tb_command_fifo__DOT__reset = 1U;
    vlSelfRef.tb_command_fifo__DOT__push = 0U;
    vlSelfRef.tb_command_fifo__DOT__data = 0U;
    vlSelfRef.tb_command_fifo__DOT__sent = 0U;
    vlSelfRef.tb_command_fifo__DOT__received = 0U;
}

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_final(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_final\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__stl(Vtb_command_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_command_fifo___024root___eval_phase__stl(Vtb_command_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_settle(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_settle\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_command_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_command_fifo.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_command_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__stl(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___dump_triggers__stl\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_command_fifo___024root___stl_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_stl(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_stl\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_command_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_command_fifo___024root___stl_sequent__TOP__0(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___stl_sequent__TOP__0\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_command_fifo__DOT__empty = ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg2));
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__push 
        = (((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray) 
            != ((6U & ((~ ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2) 
                           >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2)))) 
           & (IData)(vlSelfRef.tb_command_fifo__DOT__push));
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn = 
        (7U & ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rp) 
               + (1U & (~ (IData)(vlSelfRef.tb_command_fifo__DOT__empty)))));
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__wn = 
        (7U & ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wp) 
               + (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__push)));
}

VL_ATTR_COLD void Vtb_command_fifo___024root___eval_triggers__stl(Vtb_command_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_command_fifo___024root___eval_phase__stl(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_phase__stl\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_command_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_command_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__act(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___dump_triggers__act\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_command_fifo.dst)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_command_fifo.src)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_command_fifo.src)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__nba(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___dump_triggers__nba\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_command_fifo.dst)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_command_fifo.src)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_command_fifo.src)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_command_fifo___024root___ctor_var_reset(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___ctor_var_reset\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_command_fifo__DOT__src = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__dst = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_command_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->tb_command_fifo__DOT__sent = VL_RAND_RESET_I(32);
    vlSelf->tb_command_fifo__DOT__received = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_command_fifo__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_command_fifo__DOT__dut__DOT__wp = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__rp = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__wgray = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__rgray = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__rg1 = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__rg2 = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__wg1 = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__wg2 = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_command_fifo__DOT__dut__DOT__rn = VL_RAND_RESET_I(3);
    vlSelf->tb_command_fifo__DOT__dut__DOT__wn = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__tb_command_fifo__DOT__dut__DOT__mem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__tb_command_fifo__DOT__dut__DOT__mem__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__tb_command_fifo__DOT__dut__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_command_fifo__DOT__dst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0 = VL_RAND_RESET_I(1);
}
