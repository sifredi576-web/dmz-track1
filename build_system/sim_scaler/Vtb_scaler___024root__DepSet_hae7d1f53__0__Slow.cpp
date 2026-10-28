// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaler.h for the primary calling header

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler___024root.h"

VL_ATTR_COLD void Vtb_scaler___024root___eval_static__TOP(Vtb_scaler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scaler___024root___eval_static(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_static\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_scaler___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h35d5581d__1 = (0U != (IData)(vlSelfRef.tb_scaler__DOT__error));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__done__0 
        = vlSelfRef.tb_scaler__DOT__done;
}

VL_ATTR_COLD void Vtb_scaler___024root___eval_static__TOP(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_static__TOP\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_scaler__DOT__clk = 0U;
    vlSelfRef.tb_scaler__DOT__reset = 1U;
    vlSelfRef.tb_scaler__DOT__start = 0U;
    vlSelfRef.tb_scaler__DOT__w = 0x141U;
    vlSelfRef.tb_scaler__DOT__h = 0xf1U;
    vlSelfRef.tb_scaler__DOT__bpp = 0x18U;
    vlSelfRef.tb_scaler__DOT__top = 0U;
    vlSelfRef.tb_scaler__DOT__pos = 0U;
    vlSelfRef.tb_scaler__DOT__cycle = 0U;
    vlSelfRef.tb_scaler__DOT__bursts = 0U;
    vlSelfRef.tb_scaler__DOT__delay_ack = 0U;
    vlSelfRef.tb_scaler__DOT__lr = 1U;
    vlSelfRef.tb_scaler__DOT__ack = 0U;
}

VL_ATTR_COLD void Vtb_scaler___024root___eval_final(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_final\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__stl(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_scaler___024root___eval_phase__stl(Vtb_scaler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scaler___024root___eval_settle(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_settle\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_scaler___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/media\\tb_scaler.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_scaler___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__stl(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___dump_triggers__stl\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_scaler___024root___stl_sequent__TOP__0(Vtb_scaler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scaler___024root___eval_stl(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_stl\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_scaler___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_scaler___024root___stl_sequent__TOP__0(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tb_scaler__DOT__dut__DOT__actual_y = 
        (0x3ffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__top_down)
                    ? (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)
                    : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row))));
    vlSelfRef.tb_scaler__DOT__valid = (VL_LTS_III(32, vlSelfRef.tb_scaler__DOT__pos, vlSelfRef.tb_scaler__DOT__bytes) 
                                       & (0U != VL_MODDIVS_III(32, vlSelfRef.tb_scaler__DOT__cycle, (IData)(0xdU))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height 
        = ((0x80U & vlSelfRef.tb_scaler__DOT__dut__DOT__header
            [0x19U]) ? ((IData)(1U) + (~ ([&]() {
                        vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout 
                            = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                 [0x19U] << 0x18U) 
                                | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                   [0x18U] << 0x10U)) 
                               | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                   [0x17U] << 8U) | 
                                  vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                  [0x16U]));
                    }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout)))
            : ([&]() {
                vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout 
                    = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                         [0x19U] << 0x18U) | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                              [0x18U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                           [0x17U] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                          [0x16U]));
            }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout));
    vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x = 
        ((~ (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__blank_row)) 
         & (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x) 
             >= (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad)) 
            & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x) 
               < (0x3ffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w) 
                            + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad))))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width = 
        (0x7ffU & ([&]() {
                vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout 
                    = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                         [0x15U] << 0x18U) | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                              [0x14U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                           [0x13U] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                          [0x12U]));
            }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial 
        = (((QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__rem)) 
            << 1U) | (QData)((IData)((vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
                                      >> 0x1fU))));
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
    vlSelfRef.tb_scaler__DOT__dut__DOT__sample565 = 
        ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x)
          ? (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__row_q)
          : 0U);
    vlSelfRef.tb_scaler__DOT__dut__DOT__row_bytes = 
        (0x1fffU & ((0x20U == ([&]() {
                        vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout 
                            = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                [0x1dU] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                               [0x1cU]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout)))
                     ? VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width), 2U)
                     : ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width) 
                        + VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width), 1U))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__take 
        = (vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial 
           >= (QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__divisor)));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__take));
}

VL_ATTR_COLD void Vtb_scaler___024root___eval_triggers__stl(Vtb_scaler___024root* vlSelf);

VL_ATTR_COLD bool Vtb_scaler___024root___eval_phase__stl(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_phase__stl\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_scaler___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_scaler___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__act(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___dump_triggers__act\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_scaler.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_scaler.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( (8'h0 != tb_scaler.error))\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_scaler.done)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__nba(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___dump_triggers__nba\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_scaler.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_scaler.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( (8'h0 != tb_scaler.error))\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_scaler.done)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_scaler___024root___ctor_var_reset(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___ctor_var_reset\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_scaler__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__h = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__bpp = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__top = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__bytes = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__stride = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__pos = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__cycle = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__bursts = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__delay_ack = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dw = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dh = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__lx = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__py0 = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__filebytes = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__error = VL_RAND_RESET_I(8);
    vlSelf->tb_scaler__DOT__addr = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(256, vlSelf->tb_scaler__DOT__data);
    vlSelf->tb_scaler__DOT__pixels = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__lr = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__bd = VL_RAND_RESET_I(8);
    vlSelf->tb_scaler__DOT__dut__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->tb_scaler__DOT__dut__DOT__after_ack = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 54; ++__Vi0) {
        vlSelf->tb_scaler__DOT__dut__DOT__header[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_scaler__DOT__dut__DOT__position = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__length = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__width = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__height = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__source_x = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__source_y = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__wanted_y = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__sample_x = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__draw_w = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__draw_h = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__left_pad = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__first_pad = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__out_x = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__dest_row = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__drawn_rows = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__x_error = VL_RAND_RESET_I(12);
    vlSelf->tb_scaler__DOT__dut__DOT__y_error = VL_RAND_RESET_I(12);
    vlSelf->tb_scaler__DOT__dut__DOT__channel = VL_RAND_RESET_I(2);
    vlSelf->tb_scaler__DOT__dut__DOT__padding = VL_RAND_RESET_I(2);
    vlSelf->tb_scaler__DOT__dut__DOT__pad_left = VL_RAND_RESET_I(2);
    vlSelf->tb_scaler__DOT__dut__DOT__blue = VL_RAND_RESET_I(8);
    vlSelf->tb_scaler__DOT__dut__DOT__green = VL_RAND_RESET_I(8);
    vlSelf->tb_scaler__DOT__dut__DOT__rgba = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__top_down = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__width_limited = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__blank_row = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__input_finished = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__burst_pixel = VL_RAND_RESET_I(4);
    vlSelf->tb_scaler__DOT__dut__DOT__low_pixel = VL_RAND_RESET_I(16);
    vlSelf->tb_scaler__DOT__dut__DOT__row_q = VL_RAND_RESET_I(16);
    vlSelf->tb_scaler__DOT__dut__DOT__sample565 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_scaler__DOT__dut__DOT__row_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_scaler__DOT__dut__DOT__abs_height = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__raw_width = VL_RAND_RESET_I(11);
    vlSelf->tb_scaler__DOT__dut__DOT__row_bytes = VL_RAND_RESET_I(13);
    vlSelf->tb_scaler__DOT__dut__DOT__required_end = VL_RAND_RESET_Q(33);
    vlSelf->tb_scaler__DOT__dut__DOT__divider_done = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__scaled = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__actual_y = VL_RAND_RESET_I(10);
    vlSelf->tb_scaler__DOT__dut__DOT__inside_x = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT____Vlvbound_h2fb5cc83__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__shift = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__rem = VL_RAND_RESET_Q(33);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__trial = VL_RAND_RESET_Q(33);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__take = VL_RAND_RESET_I(1);
    vlSelf->tb_scaler__DOT__dut__DOT__divider__DOT__next_shift = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__off = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__row = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__col = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__content__0__ch = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h35d5581d__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_scaler__DOT__done__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
