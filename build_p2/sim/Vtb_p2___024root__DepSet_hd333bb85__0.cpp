// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2___024root.h"

VL_ATTR_COLD void Vtb_p2___024root___eval_initial__TOP(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__3(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__4(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_initial(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_p2___024root___eval_initial__TOP(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__4(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                             4);
        vlSelfRef.tb_p2__DOT__pclk = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__pclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__3(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\tb_p2.sv", 
                                             4);
        vlSelfRef.tb_p2__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__4____Vfork_1__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__4____Vfork_1__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1770ULL, 
                                         nullptr, "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p2\sdram_model.sv", 
                                         28);
    vlSelfRef.__VdlyVal__tb_p2__DOT__din__v0 = vlSelfRef.__Vintraval_h0133eed1__0;
    vlSelfRef.__VdlySet__tb_p2__DOT__din__v0 = 1U;
}

void Vtb_p2___024root___act_comb__TOP__0(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x70ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p2___024root___act_comb__TOP__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___act_comb__TOP__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__freset = (1U & ((~ ((IData)(vlSelfRef.tb_p2__DOT__valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)))) 
                                          | (IData)(vlSelfRef.tb_p2__DOT__reset)));
}

void Vtb_p2___024root___nba_sequent__TOP__0(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__1(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__2(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__3(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__4(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__5(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_sequent__TOP__6(Vtb_p2___024root* vlSelf);
void Vtb_p2___024root___nba_comb__TOP__1(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x74ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__6(vlSelf);
        Vtb_p2___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_p2__DOT__fr = vlSelfRef.tb_p2__DOT__fr;
    vlSelfRef.__Vdly__tb_p2__DOT__fr = ((IData)(vlSelfRef.tb_p2__DOT__freset)
                                         ? 7U : (6U 
                                                 & ((IData)(vlSelfRef.tb_p2__DOT__fr) 
                                                    << 1U)));
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__3(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__3\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__ctrl__DOT__dq_capture = vlSelfRef.tb_p2__DOT__din;
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__4(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__4\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__y = vlSelfRef.__Vdly__tb_p2__DOT__y;
    vlSelfRef.tb_p2__DOT__ft = vlSelfRef.__Vdly__tb_p2__DOT__ft;
    vlSelfRef.tb_p2__DOT__active = ((0x280U > (IData)(vlSelfRef.tb_p2__DOT__x)) 
                                    & (0x1e0U > (IData)(vlSelfRef.tb_p2__DOT__y)));
    vlSelfRef.tb_p2__DOT__fifo__DOT__rgray = ((4U & (IData)(vlSelfRef.tb_p2__DOT__fr))
                                               ? 0U
                                               : (0xfffU 
                                                  & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rn), 1U) 
                                                     ^ (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rn))));
    vlSelfRef.tb_p2__DOT__empty = ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rgray) 
                                   == (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wg2));
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__5(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__5\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_p2__DOT__din__v0) {
        vlSelfRef.__VdlySet__tb_p2__DOT__din__v0 = 0U;
        vlSelfRef.tb_p2__DOT__din = vlSelfRef.__VdlyVal__tb_p2__DOT__din__v0;
    }
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__6(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__6\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__fr = vlSelfRef.__Vdly__tb_p2__DOT__fr;
}

VL_INLINE_OPT void Vtb_p2___024root___nba_comb__TOP__1(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_comb__TOP__1\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__fifo__DOT__rn = (0xfffU & 
                                           ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rp) 
                                            + ((~ (IData)(vlSelfRef.tb_p2__DOT__empty)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__active) 
                                                  & ((IData)(vlSelfRef.tb_p2__DOT__x) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_p2__DOT__fr) 
                                                          >> 2U)) 
                                                        & ((IData)(vlSelfRef.tb_p2__DOT__dv) 
                                                           >> 1U)))))));
}

void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_resume\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbb6245e2__0.resume(
                                                   "@( (3'h5 == tb_p2.bist.state))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb1e89f5e__0.resume(
                                                   "@( (32'sh8 == tb_p2.display_frames))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9b19f549__0.resume(
                                                   "@(negedge tb_p2.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p2___024root___timing_commit(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_commit\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbb6245e2__0.commit(
                                                   "@( (3'h5 == tb_p2.bist.state))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb1e89f5e__0.commit(
                                                   "@( (32'sh8 == tb_p2.display_frames))");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9b19f549__0.commit(
                                                   "@(negedge tb_p2.clk)");
    }
}

void Vtb_p2___024root___eval_triggers__act(Vtb_p2___024root* vlSelf);

bool Vtb_p2___024root___eval_phase__act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_phase__act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_p2___024root___eval_triggers__act(vlSelf);
    Vtb_p2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_p2___024root___timing_resume(vlSelf);
        Vtb_p2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_p2___024root___eval_phase__nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_phase__nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_p2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__nba(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p2___024root___eval(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_p2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_p2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_p2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_p2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_p2___024root___eval_debug_assertions(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_debug_assertions\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
