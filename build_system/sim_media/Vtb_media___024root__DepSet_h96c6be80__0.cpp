// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_media.h for the primary calling header

#include "Vtb_media__pch.h"
#include "Vtb_media___024root.h"

VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__0(Vtb_media___024root* vlSelf);
VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__1(Vtb_media___024root* vlSelf);
VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__2(Vtb_media___024root* vlSelf);

void Vtb_media___024root___eval_initial(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_media___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_media___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_media___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_media___024root___eval_initial__TOP__Vtiming__2(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/media\tb_media.sv", 
                                             3);
        vlSelfRef.tb_media__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_media__DOT__clk)));
    }
}

void Vtb_media___024root___act_comb__TOP__0(Vtb_media___024root* vlSelf);

void Vtb_media___024root___eval_act(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_act\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1feULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_media___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_media___024root___act_comb__TOP__0(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___act_comb__TOP__0\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_media__DOT__dut__DOT__audio_change 
        = ((IData)(vlSelfRef.tb_media__DOT__audio_select) 
           & ((IData)(vlSelfRef.tb_media__DOT__catalog_ready) 
              & ((IData)(vlSelfRef.tb_media__DOT__audio_requested) 
                 < (IData)(vlSelfRef.tb_media__DOT__wav_count))));
    vlSelfRef.tb_media__DOT__audio_flush = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio_change) 
                                            | ((5U 
                                                == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
                                               | (6U 
                                                  == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state))));
    vlSelfRef.tb_media__DOT__pcm_valid = ((~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)) 
                                          & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel 
        = ((IData)(vlSelfRef.tb_media__DOT__wav_done) 
           | ((0U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error)) 
              | (IData)(vlSelfRef.tb_media__DOT__audio_flush)));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready 
        = ((~ (IData)(vlSelfRef.tb_media__DOT__audio_flush)) 
           & (0U == VL_MODDIVS_III(32, vlSelfRef.tb_media__DOT__cycle, (IData)(0x67U))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_valid 
        = ((~ ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__cancel) 
               | (0U == vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__remaining))) 
           & (4U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__file_stream__DOT__state)));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_ready 
        = (((1U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
            | ((3U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
               | ((5U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                  | ((7U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                     | ((8U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                        | ((9U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__state)) 
                           & ((~ (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder_pcm_valid)) 
                              | (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT____Vcellinp__decoder__pcm_ready)))))))) 
           & ((1U != (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__state)) 
              & (0U == (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decode_error))));
    vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__decoder__DOT__consume 
        = ((IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_valid) 
           & (IData)(vlSelfRef.tb_media__DOT__dut__DOT__audio__DOT__byte_ready));
}

void Vtb_media___024root___nba_sequent__TOP__0(Vtb_media___024root* vlSelf);

void Vtb_media___024root___eval_nba(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_nba\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_media___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x1ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_media___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_media___024root___timing_resume(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___timing_resume\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6aad0e7d__0.resume(
                                                   "@( (3'h5 == tb_media.dut.images.state))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4fe65f05__0.resume(
                                                   "@(negedge tb_media.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h169934e5__0.resume(
                                                   "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2ec6dfc1__0.resume(
                                                   "@( (4'h3 == tb_media.dut.audio.file_stream.state))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb0d36602__0.resume(
                                                   "@( (~ tb_media.audio_flush))");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h69bb0bc8__0.resume(
                                                   "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h357ffed8__0.resume(
                                                   "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_media___024root___timing_commit(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___timing_commit\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6aad0e7d__0.commit(
                                                   "@( (3'h5 == tb_media.dut.images.state))");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4fe65f05__0.commit(
                                                   "@(negedge tb_media.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h169934e5__0.commit(
                                                   "@( ((3'h5 != tb_media.dut.images.state) & (3'h6 != tb_media.dut.images.state)))");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2ec6dfc1__0.commit(
                                                   "@( (4'h3 == tb_media.dut.audio.file_stream.state))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb0d36602__0.commit(
                                                   "@( (~ tb_media.audio_flush))");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h69bb0bc8__0.commit(
                                                   "@( ((32'sh1 <= tb_media.loops) & (32'sh1194 < tb_media.pcm_count)))");
    }
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h357ffed8__0.commit(
                                                   "@( (tb_media.pcm_valid & (32'sh0 != (tb_media.cycle % 32'sh67))))");
    }
}

void Vtb_media___024root___eval_triggers__act(Vtb_media___024root* vlSelf);

bool Vtb_media___024root___eval_phase__act(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_phase__act\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_media___024root___eval_triggers__act(vlSelf);
    Vtb_media___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_media___024root___timing_resume(vlSelf);
        Vtb_media___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_media___024root___eval_phase__nba(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_phase__nba\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_media___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__nba(Vtb_media___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_media___024root___dump_triggers__act(Vtb_media___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_media___024root___eval(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_media___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_media.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_media___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/media\\tb_media.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_media___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_media___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_media___024root___eval_debug_assertions(Vtb_media___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_media___024root___eval_debug_assertions\n"); );
    Vtb_media__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
