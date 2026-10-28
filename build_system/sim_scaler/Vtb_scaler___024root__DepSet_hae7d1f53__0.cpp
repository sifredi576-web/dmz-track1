// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaler.h for the primary calling header

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler___024root.h"

VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__0(Vtb_scaler___024root* vlSelf);
VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__1(Vtb_scaler___024root* vlSelf);
VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__2(Vtb_scaler___024root* vlSelf);

void Vtb_scaler___024root___eval_initial(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_initial\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scaler___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_scaler___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_scaler___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__2(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/media\tb_scaler.sv", 
                                             3);
        vlSelfRef.tb_scaler__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_scaler__DOT__clk)));
    }
}

void Vtb_scaler___024root___act_comb__TOP__0(Vtb_scaler___024root* vlSelf);

void Vtb_scaler___024root___eval_act(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_act\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xeULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_scaler___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_scaler___024root___act_comb__TOP__0(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___act_comb__TOP__0\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__content__0__Vfuncout;
    __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__p;
    __Vfunc_tb_scaler__DOT__content__0__p = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__content__0__n;
    __Vfunc_tb_scaler__DOT__content__0__n = 0;
    // Body
    vlSelfRef.tb_scaler__DOT__valid = (VL_LTS_III(32, vlSelfRef.tb_scaler__DOT__pos, vlSelfRef.tb_scaler__DOT__bytes) 
                                       & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_scaler__DOT__cycle, (IData)(0xdU))));
    __Vfunc_tb_scaler__DOT__content__0__p = vlSelfRef.tb_scaler__DOT__pos;
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__off = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__row = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__col = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__ch = VL_RAND_RESET_I(32);
    __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0U;
    if ((0U == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0x42U;
    } else if ((1U == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0x4dU;
    } else if ((0xaU == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0x46U;
    } else if ((0xeU == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0x28U;
    } else if ((0x1aU == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 1U;
    } else if ((0x1cU == __Vfunc_tb_scaler__DOT__content__0__p)) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
            = (0xffU & vlSelfRef.tb_scaler__DOT__bpp);
    }
    if ((VL_LTES_III(32, 2U, __Vfunc_tb_scaler__DOT__content__0__p) 
         & VL_GTS_III(32, 6U, __Vfunc_tb_scaler__DOT__content__0__p))) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
            = (0xffU & VL_SHIFTR_III(8,32,32, vlSelfRef.tb_scaler__DOT__bytes, 
                                     VL_MULS_III(32, (IData)(8U), 
                                                 (__Vfunc_tb_scaler__DOT__content__0__p 
                                                  - (IData)(2U)))));
    }
    if ((VL_LTES_III(32, 0x12U, __Vfunc_tb_scaler__DOT__content__0__p) 
         & VL_GTS_III(32, 0x16U, __Vfunc_tb_scaler__DOT__content__0__p))) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
            = (0xffU & VL_SHIFTR_III(8,32,32, vlSelfRef.tb_scaler__DOT__w, 
                                     VL_MULS_III(32, (IData)(8U), 
                                                 (__Vfunc_tb_scaler__DOT__content__0__p 
                                                  - (IData)(0x12U)))));
    }
    __Vfunc_tb_scaler__DOT__content__0__n = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                              ? (- vlSelfRef.tb_scaler__DOT__h)
                                              : vlSelfRef.tb_scaler__DOT__h);
    if ((VL_LTES_III(32, 0x16U, __Vfunc_tb_scaler__DOT__content__0__p) 
         & VL_GTS_III(32, 0x1aU, __Vfunc_tb_scaler__DOT__content__0__p))) {
        __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
            = (0xffU & VL_SHIFTR_III(8,32,32, __Vfunc_tb_scaler__DOT__content__0__n, 
                                     VL_MULS_III(32, (IData)(8U), 
                                                 (__Vfunc_tb_scaler__DOT__content__0__p 
                                                  - (IData)(0x16U)))));
    }
    if (VL_LTES_III(32, 0x46U, __Vfunc_tb_scaler__DOT__content__0__p)) {
        vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__off 
            = (__Vfunc_tb_scaler__DOT__content__0__p 
               - (IData)(0x46U));
        vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__row 
            = VL_DIVS_III(32, vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__off, vlSelfRef.tb_scaler__DOT__stride);
        vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__col 
            = VL_DIVS_III(32, VL_MODDIVS_III(32, vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__off, vlSelfRef.tb_scaler__DOT__stride), 
                          VL_DIVS_III(32, vlSelfRef.tb_scaler__DOT__bpp, (IData)(8U)));
        vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__ch 
            = VL_MODDIVS_III(32, VL_MODDIVS_III(32, vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__off, vlSelfRef.tb_scaler__DOT__stride), 
                             VL_DIVS_III(32, vlSelfRef.tb_scaler__DOT__bpp, (IData)(8U)));
        if (VL_LTS_III(32, vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__col, vlSelfRef.tb_scaler__DOT__w)) {
            if ((0U == vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__ch)) {
                __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
                    = (0xffU & vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__col);
            } else if ((1U == vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__ch)) {
                __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
                    = (0xffU & ((0U != vlSelfRef.tb_scaler__DOT__top)
                                 ? vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__row
                                 : ((vlSelfRef.tb_scaler__DOT__h 
                                     - (IData)(1U)) 
                                    - vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__row)));
            } else if ((2U == vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__ch)) {
                __Vfunc_tb_scaler__DOT__content__0__Vfuncout 
                    = (0xffU & (vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__col 
                                ^ ((0U != vlSelfRef.tb_scaler__DOT__top)
                                    ? vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__row
                                    : ((vlSelfRef.tb_scaler__DOT__h 
                                        - (IData)(1U)) 
                                       - vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__row))));
            } else if ((3U == vlSelfRef.__Vfunc_tb_scaler__DOT__content__0__ch)) {
                __Vfunc_tb_scaler__DOT__content__0__Vfuncout = 0xabU;
            }
        }
    }
    vlSelfRef.tb_scaler__DOT__bd = __Vfunc_tb_scaler__DOT__content__0__Vfuncout;
}

void Vtb_scaler___024root___nba_sequent__TOP__0(Vtb_scaler___024root* vlSelf);

void Vtb_scaler___024root___eval_nba(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_nba\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scaler___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_scaler___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_scaler___024root___timing_resume(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___timing_resume\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h91202e27__0.resume(
                                                   "@(negedge tb_scaler.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb1e29f47__0.resume(
                                                   "@( (8'h0 != tb_scaler.error))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h15c5c79e__0.resume(
                                                   "@( tb_scaler.done)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_scaler___024root___timing_commit(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___timing_commit\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h91202e27__0.commit(
                                                   "@(negedge tb_scaler.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb1e29f47__0.commit(
                                                   "@( (8'h0 != tb_scaler.error))");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h15c5c79e__0.commit(
                                                   "@( tb_scaler.done)");
    }
}

void Vtb_scaler___024root___eval_triggers__act(Vtb_scaler___024root* vlSelf);

bool Vtb_scaler___024root___eval_phase__act(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_phase__act\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_scaler___024root___eval_triggers__act(vlSelf);
    Vtb_scaler___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_scaler___024root___timing_resume(vlSelf);
        Vtb_scaler___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_scaler___024root___eval_phase__nba(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_phase__nba\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_scaler___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__nba(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__act(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_scaler___024root___eval(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scaler___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_scaler.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_scaler___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/media\\tb_scaler.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_scaler___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_scaler___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_scaler___024root___eval_debug_assertions(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_debug_assertions\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
