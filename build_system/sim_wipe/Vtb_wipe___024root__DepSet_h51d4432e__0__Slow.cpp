// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wipe.h for the primary calling header

#include "Vtb_wipe__pch.h"
#include "Vtb_wipe___024root.h"

VL_ATTR_COLD void Vtb_wipe___024root___eval_static__TOP(Vtb_wipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_wipe___024root___eval_static(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_static\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wipe___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wipe__DOT__ack__0 
        = vlSelfRef.tb_wipe__DOT__ack;
}

VL_ATTR_COLD void Vtb_wipe___024root___eval_static__TOP(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_static__TOP\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wipe__DOT__clk = 0U;
    vlSelfRef.tb_wipe__DOT__reset = 1U;
    vlSelfRef.tb_wipe__DOT__ft = 0U;
    vlSelfRef.tb_wipe__DOT__lv = 0U;
    vlSelfRef.tb_wipe__DOT__used = 0x7f8U;
    vlSelfRef.tb_wipe__DOT__rsp = 0U;
    vlSelfRef.tb_wipe__DOT__monitor = 0U;
    vlSelfRef.tb_wipe__DOT__step = 0U;
    vlSelfRef.tb_wipe__DOT__reads = 0U;
}

VL_ATTR_COLD void Vtb_wipe___024root___eval_final(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_final\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wipe___024root___dump_triggers__stl(Vtb_wipe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_wipe___024root___eval_phase__stl(Vtb_wipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_wipe___024root___eval_settle(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_settle\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_wipe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_wipe.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_wipe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wipe___024root___dump_triggers__stl(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___dump_triggers__stl\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_wipe___024root___stl_sequent__TOP__0(Vtb_wipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_wipe___024root___eval_stl(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_stl\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_wipe___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_wipe___024root___stl_sequent__TOP__0(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___stl_sequent__TOP__0\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wipe__DOT__dut__DOT__enabled = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_wipe__DOT__fault)));
    vlSelfRef.tb_wipe__DOT__dut__DOT__video_req = ((IData)(vlSelfRef.tb_wipe__DOT__display) 
                                                   & ((0x25800U 
                                                       > vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr) 
                                                      & (0x7f0U 
                                                         >= (IData)(vlSelfRef.tb_wipe__DOT__used))));
    vlSelfRef.tb_wipe__DOT__addr = ((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req)
                                     ? ((0x40000U & 
                                         ((((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__transition_active) 
                                            & ((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__rd_x) 
                                               < (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__wipe_words)))
                                            ? (~ (IData)(vlSelfRef.tb_wipe__DOT__front))
                                            : (IData)(vlSelfRef.tb_wipe__DOT__front)) 
                                          << 0x12U)) 
                                        | vlSelfRef.tb_wipe__DOT__dut__DOT__rd_addr)
                                     : (0x40000U & 
                                        ((~ (IData)(vlSelfRef.tb_wipe__DOT__front)) 
                                         << 0x12U)));
    vlSelfRef.tb_wipe__DOT__req = ((~ (IData)(vlSelfRef.tb_wipe__DOT__fault)) 
                                   & ((0U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__flush)) 
                                      & ((~ (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__frame_pending)) 
                                         & ((0U == (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__state)) 
                                            & ((IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__video_req) 
                                               | ((~ (IData)(vlSelfRef.tb_wipe__DOT__dut__DOT__back_ready)) 
                                                  & (IData)(vlSelfRef.tb_wipe__DOT__lv)))))));
}

VL_ATTR_COLD void Vtb_wipe___024root___eval_triggers__stl(Vtb_wipe___024root* vlSelf);

VL_ATTR_COLD bool Vtb_wipe___024root___eval_phase__stl(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___eval_phase__stl\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_wipe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_wipe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wipe___024root___dump_triggers__act(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___dump_triggers__act\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_wipe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_wipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_wipe.ack)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wipe___024root___dump_triggers__nba(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___dump_triggers__nba\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_wipe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_wipe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_wipe.ack)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_wipe___024root___ctor_var_reset(Vtb_wipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wipe___024root___ctor_var_reset\n"); );
    Vtb_wipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_wipe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__lv = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__used = VL_RAND_RESET_I(12);
    vlSelf->tb_wipe__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__display = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__front = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__fault = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__addr = VL_RAND_RESET_I(21);
    vlSelf->tb_wipe__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_wipe__DOT__rsp = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__monitor = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__step = VL_RAND_RESET_I(32);
    vlSelf->tb_wipe__DOT__reads = VL_RAND_RESET_I(32);
    vlSelf->tb_wipe__DOT__expected_bank = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__frames_written = VL_RAND_RESET_I(32);
    vlSelf->tb_wipe__DOT__dut__DOT__dma_reads = VL_RAND_RESET_I(32);
    vlSelf->tb_wipe__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_wipe__DOT__dut__DOT__ft1 = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__ft2 = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__last_frame = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__frame_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__flush = VL_RAND_RESET_I(6);
    vlSelf->tb_wipe__DOT__dut__DOT__rd_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_wipe__DOT__dut__DOT__back_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__transition_active = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__wipe_words = VL_RAND_RESET_I(9);
    vlSelf->tb_wipe__DOT__dut__DOT__rd_x = VL_RAND_RESET_I(9);
    vlSelf->tb_wipe__DOT__dut__DOT__beat = VL_RAND_RESET_I(3);
    vlSelf->tb_wipe__DOT__dut__DOT__video_req = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__transaction_last = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__prefetched = VL_RAND_RESET_I(1);
    vlSelf->tb_wipe__DOT__dut__DOT__enabled = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_wipe__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_wipe__DOT__ack__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
