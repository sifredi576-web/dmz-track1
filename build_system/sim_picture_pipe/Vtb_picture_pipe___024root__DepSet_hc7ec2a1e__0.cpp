// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_picture_pipe.h for the primary calling header

#include "Vtb_picture_pipe__pch.h"
#include "Vtb_picture_pipe___024root.h"

VlCoroutine Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__0(Vtb_picture_pipe___024root* vlSelf);
VlCoroutine Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__1(Vtb_picture_pipe___024root* vlSelf);

void Vtb_picture_pipe___024root___eval_initial(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_initial\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__1(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_picture_pipe.sv", 
                                             3);
        vlSelfRef.tb_picture_pipe__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_picture_pipe__DOT__clk)));
    }
}

void Vtb_picture_pipe___024root___act_comb__TOP__0(Vtb_picture_pipe___024root* vlSelf);

void Vtb_picture_pipe___024root___eval_act(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_act\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_picture_pipe___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_picture_pipe___024root___act_comb__TOP__0(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___act_comb__TOP__0\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_picture_pipe__DOT__expected = (((4U 
                                                  == (IData)(vlSelfRef.tb_picture_pipe__DOT__b)) 
                                                 & (4U 
                                                    == (IData)(vlSelfRef.tb_picture_pipe__DOT__c)))
                                                 ? vlSelfRef.tb_picture_pipe__DOT__rgb
                                                 : 
                                                ((([&]() {
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c 
                            = vlSelfRef.tb_picture_pipe__DOT__c;
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__b 
                            = vlSelfRef.tb_picture_pipe__DOT__b;
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p 
                            = (0xffU & (vlSelfRef.tb_picture_pipe__DOT__rgb 
                                        >> 0x10U));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__product 
                            = (0xfffU & (((((((((0U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c)) 
                                                | (1U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                             | (4U 
                                                == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                            | (5U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                           | (6U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))) 
                                          | (7U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c)))
                                          ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                               ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                   ? 
                                                  ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                   << 1U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                    ? 
                                                   (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                     << 1U) 
                                                    + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                     ? 
                                                    ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                     << 2U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                      ? 
                                                     (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                       << 2U) 
                                                      + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                       ? 
                                                      (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                        << 2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                        << 1U))
                                                       : 
                                                      (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                        << 3U) 
                                                       - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p)))))))))
                                          : ((8U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                              ? ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                 << 3U)
                                              : (((
                                                   ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                    << 3U) 
                                                   + 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                     ? 
                                                    ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                     << 2U)
                                                     : 0U)) 
                                                  + 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p) 
                                                    << 1U)
                                                    : 0U)) 
                                                 + 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c))
                                                   ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__p)
                                                   : 0U)))));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__sum 
                            = (0xfffU & ((IData)(0x40U) 
                                         + (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__product), 2U) 
                                            + ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__b) 
                                               << 4U))));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__bias 
                            = ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__c) 
                               << 5U);
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__difference 
                            = (0xfffU & ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__sum) 
                                         - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__bias)));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__sum) 
                                < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__bias))
                                ? 0U : ((0xffU < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__difference))
                                         ? 0xffU : 
                                        (0xffU & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__difference))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__0__Vfuncout)) 
                                                  << 0x10U) 
                                                 | ((([&]() {
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c 
                                = vlSelfRef.tb_picture_pipe__DOT__c;
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__b 
                                = vlSelfRef.tb_picture_pipe__DOT__b;
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p 
                                = (0xffU & (vlSelfRef.tb_picture_pipe__DOT__rgb 
                                            >> 8U));
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__product 
                                = (0xfffU & (((((((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c)) 
                                                    | (1U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                               | (6U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))) 
                                              | (7U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c)))
                                              ? ((0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                   ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                    << 1U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                     ? 
                                                    (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                      << 1U) 
                                                     + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                      ? 
                                                     ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                      << 2U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                       ? 
                                                      (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                        << 2U) 
                                                       + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                        ? 
                                                       (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                         << 2U) 
                                                        + 
                                                        ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                         << 1U))
                                                        : 
                                                       (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                         << 3U) 
                                                        - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p)))))))))
                                              : ((8U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                  ? 
                                                 ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                  << 3U)
                                                  : 
                                                 (((((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                     << 3U) 
                                                    + 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                      ? 
                                                     ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                      << 2U)
                                                      : 0U)) 
                                                   + 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                     ? 
                                                    ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p) 
                                                     << 1U)
                                                     : 0U)) 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c))
                                                    ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__p)
                                                    : 0U)))));
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__sum 
                                = (0xfffU & ((IData)(0x40U) 
                                             + (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__product), 2U) 
                                                + ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__b) 
                                                   << 4U))));
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__bias 
                                = ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__c) 
                                   << 5U);
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__difference 
                                = (0xfffU & ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__sum) 
                                             - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__bias)));
                            vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__Vfuncout 
                                = (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__sum) 
                                    < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__bias))
                                    ? 0U : ((0xffU 
                                             < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__difference))
                                             ? 0xffU
                                             : (0xffU 
                                                & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__difference))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__1__Vfuncout)) 
                                                     << 8U) 
                                                    | ([&]() {
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c 
                            = vlSelfRef.tb_picture_pipe__DOT__c;
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__b 
                            = vlSelfRef.tb_picture_pipe__DOT__b;
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p 
                            = (0xffU & vlSelfRef.tb_picture_pipe__DOT__rgb);
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__product 
                            = (0xfffU & (((((((((0U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c)) 
                                                | (1U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                             | (4U 
                                                == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                            | (5U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                           | (6U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))) 
                                          | (7U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c)))
                                          ? ((0U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                               ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                   ? 
                                                  ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                   << 1U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                    ? 
                                                   (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                     << 1U) 
                                                    + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                     ? 
                                                    ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                     << 2U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                      ? 
                                                     (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                       << 2U) 
                                                      + (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                       ? 
                                                      (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                        << 2U) 
                                                       + 
                                                       ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                        << 1U))
                                                       : 
                                                      (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                        << 3U) 
                                                       - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p)))))))))
                                          : ((8U == (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                              ? ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                 << 3U)
                                              : (((
                                                   ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                    << 3U) 
                                                   + 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                     ? 
                                                    ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                     << 2U)
                                                     : 0U)) 
                                                  + 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                    ? 
                                                   ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p) 
                                                    << 1U)
                                                    : 0U)) 
                                                 + 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c))
                                                   ? (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__p)
                                                   : 0U)))));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__sum 
                            = (0xfffU & ((IData)(0x40U) 
                                         + (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__product), 2U) 
                                            + ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__b) 
                                               << 4U))));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__bias 
                            = ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__c) 
                               << 5U);
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__difference 
                            = (0xfffU & ((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__sum) 
                                         - (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__bias)));
                        vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__Vfuncout 
                            = (((IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__sum) 
                                < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__bias))
                                ? 0U : ((0xffU < (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__difference))
                                         ? 0xffU : 
                                        (0xffU & (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__difference))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_picture_pipe__DOT__reference_model__DOT__channel__2__Vfuncout)))));
}

void Vtb_picture_pipe___024root___nba_sequent__TOP__0(Vtb_picture_pipe___024root* vlSelf);

void Vtb_picture_pipe___024root___eval_nba(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_nba\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_picture_pipe___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_picture_pipe___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_picture_pipe___024root___nba_sequent__TOP__0(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___nba_sequent__TOP__0\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_picture_pipe__DOT__reset) {
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__result = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__result = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__result = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__b = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__c = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__product = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__b = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__c = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__product = 0U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__b = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__c = 4U;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__product = 0U;
    } else {
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__result 
            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value)))
                ? 0U : (VL_LTS_III(32, 0xffU, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value)))
                         ? 0xffU : (0xffU & (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value))));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__result 
            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value)))
                ? 0U : (VL_LTS_III(32, 0xffU, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value)))
                         ? 0xffU : (0xffU & (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value))));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__result 
            = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value)))
                ? 0U : (VL_LTS_III(32, 0xffU, VL_EXTENDS_II(32,13, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value)))
                         ? 0xffU : (0xffU & (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value))));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__value 
            = (0x1fffU & (((IData)(0x40U) + ((0xfffU 
                                              & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__product), 2U)) 
                                             + ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__b) 
                                                << 4U))) 
                          - ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__c) 
                             << 5U)));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__value 
            = (0x1fffU & (((IData)(0x40U) + ((0xfffU 
                                              & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__product), 2U)) 
                                             + ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__b) 
                                                << 4U))) 
                          - ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__c) 
                             << 5U)));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__value 
            = (0x1fffU & (((IData)(0x40U) + ((0xfffU 
                                              & VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__product), 2U)) 
                                             + ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__b) 
                                                << 4U))) 
                          - ((IData)(vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__c) 
                             << 5U)));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__b 
            = vlSelfRef.tb_picture_pipe__DOT__b;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__c 
            = vlSelfRef.tb_picture_pipe__DOT__c;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__0__KET____DOT__product 
            = (0xfffU & ((0xffU & vlSelfRef.tb_picture_pipe__DOT__rgb) 
                         * (IData)(vlSelfRef.tb_picture_pipe__DOT__c)));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__b 
            = vlSelfRef.tb_picture_pipe__DOT__b;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__c 
            = vlSelfRef.tb_picture_pipe__DOT__c;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__1__KET____DOT__product 
            = (0xfffU & ((0xffU & (vlSelfRef.tb_picture_pipe__DOT__rgb 
                                   >> 8U)) * (IData)(vlSelfRef.tb_picture_pipe__DOT__c)));
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__b 
            = vlSelfRef.tb_picture_pipe__DOT__b;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__c 
            = vlSelfRef.tb_picture_pipe__DOT__c;
        vlSelfRef.tb_picture_pipe__DOT__dut__DOT__channel__BRA__2__KET____DOT__product 
            = (0xfffU & ((0xffU & (vlSelfRef.tb_picture_pipe__DOT__rgb 
                                   >> 0x10U)) * (IData)(vlSelfRef.tb_picture_pipe__DOT__c)));
    }
}

void Vtb_picture_pipe___024root___timing_resume(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___timing_resume\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he3ad2920__0.resume(
                                                   "@(negedge tb_picture_pipe.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_picture_pipe___024root___timing_commit(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___timing_commit\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he3ad2920__0.commit(
                                                   "@(negedge tb_picture_pipe.clk)");
    }
}

void Vtb_picture_pipe___024root___eval_triggers__act(Vtb_picture_pipe___024root* vlSelf);

bool Vtb_picture_pipe___024root___eval_phase__act(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_phase__act\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_picture_pipe___024root___eval_triggers__act(vlSelf);
    Vtb_picture_pipe___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_picture_pipe___024root___timing_resume(vlSelf);
        Vtb_picture_pipe___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_picture_pipe___024root___eval_phase__nba(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_phase__nba\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_picture_pipe___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__nba(Vtb_picture_pipe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_picture_pipe___024root___dump_triggers__act(Vtb_picture_pipe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_picture_pipe___024root___eval(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_picture_pipe___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_picture_pipe.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_picture_pipe___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_picture_pipe.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_picture_pipe___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_picture_pipe___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_picture_pipe___024root___eval_debug_assertions(Vtb_picture_pipe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_picture_pipe___024root___eval_debug_assertions\n"); );
    Vtb_picture_pipe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
