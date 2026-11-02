// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ui_controller.h for the primary calling header

#include "Vtb_ui_controller__pch.h"
#include "Vtb_ui_controller___024root.h"

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_static__TOP(Vtb_ui_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_static(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_static\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ui_controller___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0 = 0U;
}

extern const VlWide<8>/*255:0*/ Vtb_ui_controller__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_static__TOP(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_static__TOP\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_controller__DOT__clk = 0U;
    vlSelfRef.tb_ui_controller__DOT__reset = 1U;
    vlSelfRef.tb_ui_controller__DOT__cfg = 0U;
    vlSelfRef.tb_ui_controller__DOT__ev = 0U;
    vlSelfRef.tb_ui_controller__DOT__event_code = 0U;
    vlSelfRef.tb_ui_controller__DOT__visible = 0xffU;
    vlSelfRef.tb_ui_controller__DOT__enabled = 0xffU;
    vlSelfRef.tb_ui_controller__DOT__neighbors[0U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[1U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[2U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[3U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[4U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[5U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[6U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.tb_ui_controller__DOT__neighbors[7U] 
        = Vtb_ui_controller__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.tb_ui_controller__DOT__operation = 0U;
    vlSelfRef.tb_ui_controller__DOT__target = 0U;
    vlSelfRef.tb_ui_controller__DOT__arg = 0U;
    vlSelfRef.tb_ui_controller__DOT__back = 0U;
    vlSelfRef.tb_ui_controller__DOT__audio = 0xffU;
    vlSelfRef.tb_ui_controller__DOT__quiz = 1U;
    vlSelfRef.tb_ui_controller__DOT__qid = 0U;
    vlSelfRef.tb_ui_controller__DOT__expected = 0U;
    vlSelfRef.tb_ui_controller__DOT__page_accept = 0U;
    vlSelfRef.tb_ui_controller__DOT__loaded = 0U;
    vlSelfRef.tb_ui_controller__DOT__audio_accept = 0U;
    vlSelfRef.tb_ui_controller__DOT__control_accept = 0U;
    vlSelfRef.tb_ui_controller__DOT__notices = 0U;
    vlSelfRef.tb_ui_controller__DOT__exits = 0U;
}

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_final(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_final\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__stl(Vtb_ui_controller___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ui_controller___024root___eval_phase__stl(Vtb_ui_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_settle(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_settle\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ui_controller___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/platform\\tb_ui_controller.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ui_controller___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__stl(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___dump_triggers__stl\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_ui_controller___024root___stl_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_stl(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_stl\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ui_controller___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ui_controller___024root___stl_sequent__TOP__0(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___stl_sequent__TOP__0\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__available 
        = ((IData)(vlSelfRef.tb_ui_controller__DOT__enabled) 
           & (IData)(vlSelfRef.tb_ui_controller__DOT__visible));
    vlSelfRef.tb_ui_controller__DOT__choice = (3U & 
                                               ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices) 
                                                >> 
                                                ((IData)(vlSelfRef.tb_ui_controller__DOT__qid) 
                                                 << 1U)));
    vlSelfRef.tb_ui_controller__DOT__dut__DOT__neighbor 
        = (0xffU & (((0U == (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                      << 3U))) ? 0U
                      : (vlSelfRef.tb_ui_controller__DOT__neighbors[
                         (((IData)(7U) + (((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                           << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                                  << 3U))))) 
                    | (vlSelfRef.tb_ui_controller__DOT__neighbors[
                       (0x7ffffffU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__candidate) 
                                      | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                         >> 2U)))] 
                       >> (0x1fU & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__direction) 
                                    << 3U)))));
    vlSelfRef.tb_ui_controller__DOT__choice_valid = 
        ((IData)(vlSelfRef.tb_ui_controller__DOT__quiz) 
         & ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__choices_valid) 
            >> (IData)(vlSelfRef.tb_ui_controller__DOT__qid)));
    vlSelfRef.tb_ui_controller__DOT__busy = ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__waiting) 
                                             | ((IData)(vlSelfRef.tb_ui_controller__DOT__dut__DOT__moving) 
                                                | ((IData)(vlSelfRef.tb_ui_controller__DOT__page_req) 
                                                   | ((IData)(vlSelfRef.tb_ui_controller__DOT__audio_req) 
                                                      | (IData)(vlSelfRef.tb_ui_controller__DOT__control_req)))));
}

VL_ATTR_COLD void Vtb_ui_controller___024root___eval_triggers__stl(Vtb_ui_controller___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ui_controller___024root___eval_phase__stl(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___eval_phase__stl\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ui_controller___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ui_controller___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__act(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___dump_triggers__act\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ui_controller.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_ui_controller.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ui_controller___024root___dump_triggers__nba(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___dump_triggers__nba\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ui_controller.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_ui_controller.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ui_controller___024root___ctor_var_reset(Vtb_ui_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ui_controller___024root___ctor_var_reset\n"); );
    Vtb_ui_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ui_controller__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__cfg = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__ev = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__event_code = VL_RAND_RESET_I(4);
    vlSelf->tb_ui_controller__DOT__visible = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__enabled = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->tb_ui_controller__DOT__neighbors);
    vlSelf->tb_ui_controller__DOT__operation = VL_RAND_RESET_I(4);
    vlSelf->tb_ui_controller__DOT__target = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__arg = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__back = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__audio = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__quiz = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__qid = VL_RAND_RESET_I(3);
    vlSelf->tb_ui_controller__DOT__expected = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__page_req = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__audio_req = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__control_req = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__choice_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__notice_req = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__notice_exit = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__page_target = VL_RAND_RESET_I(5);
    vlSelf->tb_ui_controller__DOT__current = VL_RAND_RESET_I(5);
    vlSelf->tb_ui_controller__DOT__audio_target = VL_RAND_RESET_I(6);
    vlSelf->tb_ui_controller__DOT__control_action = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__choice = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__priority_value = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__control_arg = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__answered = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__correct = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__focus = VL_RAND_RESET_I(3);
    vlSelf->tb_ui_controller__DOT__score = VL_RAND_RESET_I(4);
    vlSelf->tb_ui_controller__DOT__page_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__loaded = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__audio_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__control_accept = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__notices = VL_RAND_RESET_I(32);
    vlSelf->tb_ui_controller__DOT__exits = VL_RAND_RESET_I(32);
    vlSelf->tb_ui_controller__DOT__last_priority = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__dut__DOT__configured = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__dut__DOT__waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__dut__DOT__moving = VL_RAND_RESET_I(1);
    vlSelf->tb_ui_controller__DOT__dut__DOT__candidate = VL_RAND_RESET_I(3);
    vlSelf->tb_ui_controller__DOT__dut__DOT__direction = VL_RAND_RESET_I(2);
    vlSelf->tb_ui_controller__DOT__dut__DOT__attempts = VL_RAND_RESET_I(4);
    vlSelf->tb_ui_controller__DOT__dut__DOT__choices_valid = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__dut__DOT__choices = VL_RAND_RESET_I(16);
    vlSelf->tb_ui_controller__DOT__dut__DOT__available = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__dut__DOT__neighbor = VL_RAND_RESET_I(8);
    vlSelf->tb_ui_controller__DOT__dut__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ui_controller__DOT__clk__0 = VL_RAND_RESET_I(1);
}
