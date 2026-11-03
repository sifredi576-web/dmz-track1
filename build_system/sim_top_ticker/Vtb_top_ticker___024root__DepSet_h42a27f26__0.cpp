// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_ticker.h for the primary calling header

#include "Vtb_top_ticker__pch.h"
#include "Vtb_top_ticker___024root.h"

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_initial__TOP(Vtb_top_ticker___024root* vlSelf);
VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0(Vtb_top_ticker___024root* vlSelf);
VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__1(Vtb_top_ticker___024root* vlSelf);

void Vtb_top_ticker___024root___eval_initial(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_ticker___024root___eval_initial__TOP(vlSelf);
    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__0(Vtb_top_ticker___024root* vlSelf);
VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__1(Vtb_top_ticker___024root* vlSelf);
VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__2(Vtb_top_ticker___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_await Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__1(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             3);
        vlSelfRef.tb_top_ticker__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top_ticker__DOT__clk)));
    }
}

void Vtb_top_ticker___024root___act_comb__TOP__0(Vtb_top_ticker___024root* vlSelf);

void Vtb_top_ticker___024root___eval_act(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_act\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_top_ticker___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top_ticker___024root___act_comb__TOP__0(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___act_comb__TOP__0\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x670U <= (IData)(vlSelfRef.tb_top_ticker__DOT__x))) {
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_x 
            = (0x7ffU & ((IData)(vlSelfRef.tb_top_ticker__DOT__x) 
                         - (IData)(0x670U)));
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y 
            = (0x3ffU & ((0x2edU == (IData)(vlSelfRef.tb_top_ticker__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_top_ticker__DOT__y))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_x 
            = (0x7ffU & ((IData)(2U) + (IData)(vlSelfRef.tb_top_ticker__DOT__x)));
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_top_ticker__DOT__y));
    }
}

void Vtb_top_ticker___024root___nba_sequent__TOP__0(Vtb_top_ticker___024root* vlSelf);

void Vtb_top_ticker___024root___eval_nba(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_nba\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top_ticker___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top_ticker___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top_ticker___024root___nba_sequent__TOP__0(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___nba_sequent__TOP__0\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tb_top_ticker__DOT__dut__DOT__scroll;
    __Vdly__tb_top_ticker__DOT__dut__DOT__scroll = 0;
    CData/*0:0*/ __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame;
    __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame = 0;
    // Body
    __Vdly__tb_top_ticker__DOT__dut__DOT__scroll = vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll;
    __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame 
        = vlSelfRef.tb_top_ticker__DOT__dut__DOT__half_frame;
    if (vlSelfRef.tb_top_ticker__DOT__reset) {
        __Vdly__tb_top_ticker__DOT__dut__DOT__scroll = 0U;
        __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame = 0U;
        vlSelfRef.tb_top_ticker__DOT__ink = 0U;
        vlSelfRef.tb_top_ticker__DOT__shade = 0U;
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__row_q = 0U;
    } else {
        if (vlSelfRef.tb_top_ticker__DOT__frame_tick) {
            __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame 
                = (1U & (~ (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__half_frame)));
            if (vlSelfRef.tb_top_ticker__DOT__dut__DOT__half_frame) {
                __Vdly__tb_top_ticker__DOT__dut__DOT__scroll 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll)));
            }
        }
        vlSelfRef.tb_top_ticker__DOT__ink = (((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__inside_q) 
                                              & (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__text_q)) 
                                             & ((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__column) 
                                                >> (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__row_q)));
        vlSelfRef.tb_top_ticker__DOT__shade = vlSelfRef.tb_top_ticker__DOT__dut__DOT__inside_q;
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__row_q 
            = (0xfU & (((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y) 
                        - (IData)(4U)) >> 1U));
    }
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__half_frame 
        = __Vdly__tb_top_ticker__DOT__dut__DOT__half_frame;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__column 
        = vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom
        [(0x3ffU & (((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_x) 
                     >> 1U) + (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll)))];
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__text_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_top_ticker__DOT__reset))) 
           && ((4U <= (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y)) 
               & (0x24U > (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y))));
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__inside_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_top_ticker__DOT__reset))) 
           && ((0x500U > (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_x)) 
               & (0x28U > (IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__ahead_y))));
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll 
        = __Vdly__tb_top_ticker__DOT__dut__DOT__scroll;
}

void Vtb_top_ticker___024root___timing_resume(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___timing_resume\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5192931f__0.resume(
                                                   "@(negedge tb_top_ticker.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5192935e__0.resume(
                                                   "@(posedge tb_top_ticker.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top_ticker___024root___timing_commit(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___timing_commit\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5192931f__0.commit(
                                                   "@(negedge tb_top_ticker.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5192935e__0.commit(
                                                   "@(posedge tb_top_ticker.clk)");
    }
}

void Vtb_top_ticker___024root___eval_triggers__act(Vtb_top_ticker___024root* vlSelf);

bool Vtb_top_ticker___024root___eval_phase__act(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_phase__act\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top_ticker___024root___eval_triggers__act(vlSelf);
    Vtb_top_ticker___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top_ticker___024root___timing_resume(vlSelf);
        Vtb_top_ticker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top_ticker___024root___eval_phase__nba(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_phase__nba\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top_ticker___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__nba(Vtb_top_ticker___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__act(Vtb_top_ticker___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_ticker___024root___eval(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_top_ticker___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_top_ticker.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top_ticker___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_top_ticker.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top_ticker___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top_ticker___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top_ticker___024root___eval_debug_assertions(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_debug_assertions\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
