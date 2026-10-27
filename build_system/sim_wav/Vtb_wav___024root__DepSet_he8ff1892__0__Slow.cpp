// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wav.h for the primary calling header

#include "Vtb_wav__pch.h"
#include "Vtb_wav___024root.h"

VL_ATTR_COLD void Vtb_wav___024root___eval_static__TOP(Vtb_wav___024root* vlSelf);

VL_ATTR_COLD void Vtb_wav___024root___eval_static(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_static\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wav___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wav__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h69dc0e1f__1 = 0U;
    vlSelfRef.__Vtrigprevexpr_h041a9367__1 = ((IData)(vlSelfRef.tb_wav__DOT__done) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.tb_wav__DOT__error)));
}

VL_ATTR_COLD void Vtb_wav___024root___eval_static__TOP(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_static__TOP\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wav__DOT__clk = 0U;
    vlSelfRef.tb_wav__DOT__reset = 1U;
    vlSelfRef.tb_wav__DOT__start = 0U;
    vlSelfRef.tb_wav__DOT__used = 0U;
    vlSelfRef.tb_wav__DOT__sent = 0U;
    vlSelfRef.tb_wav__DOT__received = 0U;
    vlSelfRef.tb_wav__DOT__cycle = 0U;
    vlSelfRef.tb_wav__DOT__data_size_at = 0U;
    vlSelfRef.tb_wav__DOT__held = 0U;
    vlSelfRef.tb_wav__DOT__expected_error = 0U;
    vlSelfRef.tb_wav__DOT__test_case = std::string{"normal"};
}

VL_ATTR_COLD void Vtb_wav___024root___eval_final(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_final\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__stl(Vtb_wav___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_wav___024root___eval_phase__stl(Vtb_wav___024root* vlSelf);

VL_ATTR_COLD void Vtb_wav___024root___eval_settle(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_settle\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_wav___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_wav.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_wav___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__stl(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___dump_triggers__stl\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_wav___024root___stl_sequent__TOP__0(Vtb_wav___024root* vlSelf);

VL_ATTR_COLD void Vtb_wav___024root___eval_stl(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_stl\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_wav___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_wav___024root___stl_sequent__TOP__0(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___stl_sequent__TOP__0\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wav__DOT__pcm_ready = VL_LTES_III(32, 3U, 
                                                   VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(7U)));
    vlSelfRef.tb_wav__DOT__source_error = (((std::string{"readerror"} 
                                             == vlSelfRef.tb_wav__DOT__test_case) 
                                            & VL_LTES_III(32, 0x2eU, vlSelfRef.tb_wav__DOT__sent))
                                            ? 5U : 0U);
    vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data 
        = vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__sent)];
    vlSelfRef.tb_wav__DOT__dut__DOT__riff_length = 
        (0x1ffffffffULL & (8ULL + VL_EXTEND_QI(33,32, 
                                               ([&]() {
                        vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout 
                            = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                 [7U] << 0x18U) | (
                                                   vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                   [6U] 
                                                   << 0x10U)) 
                               | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                   [5U] << 8U) | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                  [4U]));
                    }(), vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout))));
    vlSelfRef.tb_wav__DOT__dut__DOT__chunk_end = (0x1ffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.tb_wav__DOT__dut__DOT__offset)) 
                                                      + 
                                                      VL_EXTEND_QI(33,32, 
                                                                   ([&]() {
                            vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout 
                                = (((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                     [7U] << 0x18U) 
                                    | (vlSelfRef.tb_wav__DOT__dut__DOT__header
                                       [6U] << 0x10U)) 
                                   | ((vlSelfRef.tb_wav__DOT__dut__DOT__header
                                       [5U] << 8U) 
                                      | vlSelfRef.tb_wav__DOT__dut__DOT__header
                                      [4U]));
                        }(), vlSelfRef.__Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout))) 
                                                     + (QData)((IData)(
                                                                       (1U 
                                                                        & vlSelfRef.tb_wav__DOT__dut__DOT__header
                                                                        [4U])))));
    vlSelfRef.tb_wav__DOT__valid = (VL_LTS_III(32, vlSelfRef.tb_wav__DOT__sent, vlSelfRef.tb_wav__DOT__used) 
                                    & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(5U))));
    vlSelfRef.tb_wav__DOT__ready = (((1U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                     | ((3U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                        | ((5U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                           | ((7U == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                              | ((8U 
                                                  == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                                 | ((9U 
                                                     == (IData)(vlSelfRef.tb_wav__DOT__dut__DOT__state)) 
                                                    & ((~ (IData)(vlSelfRef.tb_wav__DOT__pcm_valid)) 
                                                       | VL_LTES_III(32, 3U, 
                                                                     VL_MODDIVS_III(32, vlSelfRef.tb_wav__DOT__cycle, (IData)(7U)))))))))) 
                                    & ((~ (IData)(vlSelfRef.tb_wav__DOT__start)) 
                                       & (0U == (IData)(vlSelfRef.tb_wav__DOT__error))));
    vlSelfRef.tb_wav__DOT__dut__DOT__consume = ((IData)(vlSelfRef.tb_wav__DOT__valid) 
                                                & (IData)(vlSelfRef.tb_wav__DOT__ready));
}

VL_ATTR_COLD void Vtb_wav___024root___eval_triggers__stl(Vtb_wav___024root* vlSelf);

VL_ATTR_COLD bool Vtb_wav___024root___eval_phase__stl(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_phase__stl\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_wav___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_wav___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__act(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___dump_triggers__act\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_wav.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_wav.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( (32'sh3 == tb_wav.received))\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( (tb_wav.done | (8'h0 != tb_wav.error)))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__nba(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___dump_triggers__nba\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_wav.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_wav.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( (32'sh3 == tb_wav.received))\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( (tb_wav.done | (8'h0 != tb_wav.error)))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_wav___024root___ctor_var_reset(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___ctor_var_reset\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_wav__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_wav__DOT__file_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_wav__DOT__used = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__sent = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__received = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__data_size_at = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__pcm_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__pair = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__pairs = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__total = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_wav__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__pcm_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__source_error = VL_RAND_RESET_I(8);
    vlSelf->tb_wav__DOT____Vcellinp__dut__byte_data = VL_RAND_RESET_I(8);
    vlSelf->tb_wav__DOT__held = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__held_pair = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__expected_error = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_wav__DOT__dut__DOT__index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_wav__DOT__dut__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_wav__DOT__dut__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__dut__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__dut__DOT__riff_end = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__dut__DOT__remaining = VL_RAND_RESET_I(32);
    vlSelf->tb_wav__DOT__dut__DOT__chunk_odd = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__dut__DOT__format_seen = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__dut__DOT__channel_byte = VL_RAND_RESET_I(2);
    vlSelf->tb_wav__DOT__dut__DOT__assembly = VL_RAND_RESET_I(24);
    vlSelf->tb_wav__DOT__dut__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->tb_wav__DOT__dut__DOT__riff_length = VL_RAND_RESET_Q(33);
    vlSelf->tb_wav__DOT__dut__DOT__chunk_end = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_tb_wav__DOT__dut__DOT__le32__22__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_wav__DOT__dut__DOT__le32__23__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_wav__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h69dc0e1f__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h041a9367__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
