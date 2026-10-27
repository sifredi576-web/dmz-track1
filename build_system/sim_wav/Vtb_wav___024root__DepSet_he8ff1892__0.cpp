// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wav.h for the primary calling header

#include "Vtb_wav__pch.h"
#include "Vtb_wav___024root.h"

VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__0(Vtb_wav___024root* vlSelf);
VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__1(Vtb_wav___024root* vlSelf);
VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__2(Vtb_wav___024root* vlSelf);

void Vtb_wav___024root___eval_initial(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_initial\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wav___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_wav___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_wav___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_wav___024root___eval_initial__TOP__Vtiming__2(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/media\tb_wav.sv", 
                                             3);
        vlSelfRef.tb_wav__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_wav__DOT__clk)));
    }
}

void Vtb_wav___024root___act_comb__TOP__0(Vtb_wav___024root* vlSelf);

void Vtb_wav___024root___eval_act(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_act\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1eULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_wav___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_wav___024root___act_comb__TOP__0(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___act_comb__TOP__0\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wav__DOT__source_error = (((std::string{"readerror"} 
                                             == vlSelfRef.tb_wav__DOT__test_case) 
                                            & VL_LTES_III(32, 0x2eU, vlSelfRef.tb_wav__DOT__sent))
                                            ? 5U : 0U);
    vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data 
        = vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__sent)];
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

void Vtb_wav___024root___nba_sequent__TOP__0(Vtb_wav___024root* vlSelf);
void Vtb_wav___024root___nba_comb__TOP__0(Vtb_wav___024root* vlSelf);

void Vtb_wav___024root___eval_nba(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_nba\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_wav___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_wav___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_wav___024root___nba_comb__TOP__0(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___nba_comb__TOP__0\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wav__DOT____Vcellinp__dut__byte_data 
        = vlSelfRef.tb_wav__DOT__file_data[(0xffU & vlSelfRef.tb_wav__DOT__sent)];
    vlSelfRef.tb_wav__DOT__source_error = (((std::string{"readerror"} 
                                             == vlSelfRef.tb_wav__DOT__test_case) 
                                            & VL_LTES_III(32, 0x2eU, vlSelfRef.tb_wav__DOT__sent))
                                            ? 5U : 0U);
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

void Vtb_wav___024root___timing_resume(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___timing_resume\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf9582dc2__0.resume(
                                                   "@(negedge tb_wav.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbdec5951__0.resume(
                                                   "@( (32'sh3 == tb_wav.received))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h642ddb89__0.resume(
                                                   "@( (tb_wav.done | (8'h0 != tb_wav.error)))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_wav___024root___timing_commit(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___timing_commit\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf9582dc2__0.commit(
                                                   "@(negedge tb_wav.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbdec5951__0.commit(
                                                   "@( (32'sh3 == tb_wav.received))");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h642ddb89__0.commit(
                                                   "@( (tb_wav.done | (8'h0 != tb_wav.error)))");
    }
}

void Vtb_wav___024root___eval_triggers__act(Vtb_wav___024root* vlSelf);

bool Vtb_wav___024root___eval_phase__act(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_phase__act\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_wav___024root___eval_triggers__act(vlSelf);
    Vtb_wav___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_wav___024root___timing_resume(vlSelf);
        Vtb_wav___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_wav___024root___eval_phase__nba(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_phase__nba\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_wav___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__nba(Vtb_wav___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wav___024root___dump_triggers__act(Vtb_wav___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_wav___024root___eval(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_wav___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_wav.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_wav___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/media\\tb_wav.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_wav___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_wav___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_wav___024root___eval_debug_assertions(Vtb_wav___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wav___024root___eval_debug_assertions\n"); );
    Vtb_wav__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
