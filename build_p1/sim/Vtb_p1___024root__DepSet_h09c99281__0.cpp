// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1___024root.h"

VL_ATTR_COLD void Vtb_p1___024root___eval_initial__TOP(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__0(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__3(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__4(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__5(Vtb_p1___024root* vlSelf);
VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__6(Vtb_p1___024root* vlSelf);

void Vtb_p1___024root___eval_initial(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_p1___024root___eval_initial__TOP(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_p1___024root___eval_initial__TOP__Vtiming__6(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__2(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\phy_models.sv", 
                                             5);
        vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk 
            = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__3(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\phy_models.sv", 
                                             4);
        vlSelfRef.tb_p1__DOT__dut__DOT__pixel_clk = 
            (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__pixel_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__4(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\sim\p1\tb_p1.sv", 
                                             4);
        vlSelfRef.tb_p1__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__clk)));
    }
}

void Vtb_p1___024root___act_comb__TOP__0(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__0(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__1(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__2(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__3(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__4(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__5(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_sequent__TOP__6(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___act_comb__TOP__1(Vtb_p1___024root* vlSelf);

void Vtb_p1___024root___eval_act(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_act\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x7000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x38ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p1___024root___act_comb__TOP__0(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_comb__TOP__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__reset_async = (1U 
                                                   & ((~ (IData)(vlSelfRef.tb_p1__DOT__run_n)) 
                                                      | (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__locked))));
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__0(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data)))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 1U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 2U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 3U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 4U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 5U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 6U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 7U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 1U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 2U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 4U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 5U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 6U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 7U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                  >> 8U))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 9U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xaU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xbU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xcU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xdU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xeU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xfU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 9U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xaU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xbU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xcU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xdU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xeU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xfU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__2(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__2\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                  >> 0x10U))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 0x11U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x12U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x13U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x14U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x15U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x16U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x17U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x11U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x12U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x13U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x14U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x15U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x16U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x17U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__3(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__3\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes[0U] 
        = (0xffU & ((IData)(1U) + (~ ((IData)(0x91U) 
                                      + (((((((((((
                                                   (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                    [0xdU] 
                                                    + 
                                                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                    [0xcU]) 
                                                   + 
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                   [0xbU]) 
                                                  + 
                                                  vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                  [0xaU]) 
                                                 + 
                                                 vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                 [9U]) 
                                                + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                [8U]) 
                                               + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                               [7U]) 
                                              + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                              [6U]) 
                                             + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                             [5U]) 
                                            + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                            [4U]) + 
                                           vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                           [3U]) + 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                          [2U]) + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                         [1U])))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub[0U] 
        = (0x180080000ULL | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                            [0U])));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [3U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__4(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__4\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (0xffU & ((IData)(1U) + (~ ((IData)(0x9dU) 
                                            + (((((
                                                   (((((((((((((((((((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                      [0x19U] 
                                                                      + 
                                                                      vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                      [0x18U]) 
                                                                     + 
                                                                     vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                     [0x17U]) 
                                                                    + 
                                                                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                    [0x16U]) 
                                                                   + 
                                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                   [0x15U]) 
                                                                  + 
                                                                  vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                  [0x14U]) 
                                                                 + 
                                                                 vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                 [0x13U]) 
                                                                + 
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                [0x12U]) 
                                                               + 
                                                               vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                               [0x11U]) 
                                                              + 
                                                              vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                              [0x10U]) 
                                                             + 
                                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                             [0xfU]) 
                                                            + 
                                                            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                            [0xeU]) 
                                                           + 
                                                           vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                           [0xdU]) 
                                                          + 
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                          [0xcU]) 
                                                         + 
                                                         vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                         [0xbU]) 
                                                        + 
                                                        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                        [0xaU]) 
                                                       + 
                                                       vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                       [9U]) 
                                                      + 
                                                      vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                      [8U]) 
                                                     + 
                                                     vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                     [7U]) 
                                                    + 
                                                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                    [6U]) 
                                                   + 
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                   [5U]) 
                                                  + 
                                                  vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                  [4U]) 
                                                 + 
                                                 vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                 [3U]) 
                                                + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                [2U]) 
                                               + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                               [1U])))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes[0U] 
        = __Vtemp_1;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub[0U] 
        = (0x2020205a4d4400ULL | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                 [0U])));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [3U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__5(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__5\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes[0U] 
        = (0xffU & ((IData)(1U) + (~ ((IData)(0x8fU) 
                                      + ((((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                            [5U] + 
                                            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                            [4U]) + 
                                           vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                           [3U]) + 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                          [2U]) + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                         [1U])))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub[0U] 
        = (0x100ULL | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                      [0U])));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [3U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_p1___024root___act_sequent__TOP__6(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_sequent__TOP__6\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_p1__DOT____Vcellout__dut__HDMI_D2_P;
    tb_p1__DOT____Vcellout__dut__HDMI_D2_P = 0;
    CData/*0:0*/ tb_p1__DOT____Vcellout__dut__HDMI_D1_P;
    tb_p1__DOT____Vcellout__dut__HDMI_D1_P = 0;
    CData/*0:0*/ tb_p1__DOT____Vcellout__dut__HDMI_D0_P;
    tb_p1__DOT____Vcellout__dut__HDMI_D0_P = 0;
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT____Vcellout__lane__BRA__3__KET____DOT__ddr__q 
        = (1U & ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                 & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)
                     ? (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__rise_bit)
                     : (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__fall_bit))));
    tb_p1__DOT____Vcellout__dut__HDMI_D2_P = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                                               & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)
                                                   ? (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__rise_bit)
                                                   : (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__fall_bit))));
    tb_p1__DOT____Vcellout__dut__HDMI_D1_P = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                                               & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)
                                                   ? (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__rise_bit)
                                                   : (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__fall_bit))));
    tb_p1__DOT____Vcellout__dut__HDMI_D0_P = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                                               & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__serial_clk)
                                                   ? (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__rise_bit)
                                                   : (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__fall_bit))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tmds = (((IData)(tb_p1__DOT____Vcellout__dut__HDMI_D2_P) 
                                             << 2U) 
                                            | (((IData)(tb_p1__DOT____Vcellout__dut__HDMI_D1_P) 
                                                << 1U) 
                                               | (IData)(tb_p1__DOT____Vcellout__dut__HDMI_D0_P)));
}

VL_INLINE_OPT void Vtb_p1___024root___act_comb__TOP__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___act_comb__TOP__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit = 0;
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [0U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [3U];
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [3U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [3U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [2U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [2U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [1U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [1U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [0U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [0U]);
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [0U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [0U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[0U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [1U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [1U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[1U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [2U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [2U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[2U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [3U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [3U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[3U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data 
        = ((((0x100U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                 >> (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                           << 1U)))) 
                        << 8U)) | ((0x80U & ((IData)(
                                                     (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                                                      >> 
                                                      (1U 
                                                       | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                          << 1U)))) 
                                             << 7U)) 
                                   | (0x40U & ((IData)(
                                                       (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                                        >> 
                                                        (1U 
                                                         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                            << 1U)))) 
                                               << 6U)))) 
            | ((0x20U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                  >> (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                            << 1U)))) 
                         << 5U)) | (0x10U & ((IData)(
                                                     (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                                      >> 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                       << 1U))) 
                                             << 4U)))) 
           | (((8U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                               >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                   << 1U))) << 3U)) 
               | (4U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                 >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 2U))) 
              | ((2U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                 >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 1U)) 
                 | (1U & (((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [4U] << 0x18U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
                           [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]) 
                          >> (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [0U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [0U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[0U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [1U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [1U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[1U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [2U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [2U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[2U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [3U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [3U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[3U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout;
}

void Vtb_p1___024root___nba_sequent__TOP__0(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__1(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__2(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__3(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__4(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__5(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__6(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__7(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_sequent__TOP__8(Vtb_p1___024root* vlSelf);
void Vtb_p1___024root___nba_comb__TOP__1(Vtb_p1___024root* vlSelf);

void Vtb_p1___024root___eval_nba(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_nba\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x480ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x480ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x7200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x380ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x1d80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p1___024root___act_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__0(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__0\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle;
    vlSelfRef.__Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle 
        = (1U & ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                 & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle))));
}

extern const VlUnpacked<SData/*9:0*/, 16> Vtb_p1__ConstPool__TABLE_h0e17cbe9_0;
extern const VlUnpacked<SData/*9:0*/, 4> Vtb_p1__ConstPool__TABLE_h1d5d3245_0;

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*55:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0 = 0;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0 = 0;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2 = 0;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4 = 0;
    CData/*7:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 = 0;
    QData/*63:0*/ tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 = 0;
    SData/*15:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index;
    __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__ecc;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__next_bch_bit;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__next_bch_bit = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*1:0*/ __Vdly__tb_p1__DOT__dut__DOT__mute_sync;
    __Vdly__tb_p1__DOT__dut__DOT__mute_sync = 0;
    CData/*1:0*/ __Vdly__tb_p1__DOT__dut__DOT__pattern_sync;
    __Vdly__tb_p1__DOT__dut__DOT__pattern_sync = 0;
    IData/*24:0*/ __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator;
    __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator = 0;
    CData/*5:0*/ __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase;
    __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase = 0;
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__x;
    __Vdly__tb_p1__DOT__dut__DOT__x = 0;
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__y;
    __Vdly__tb_p1__DOT__dut__DOT__y = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control = 0;
    CData/*1:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current = 0;
    CData/*1:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0;
    CData/*7:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 0;
    CData/*5:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0;
    IData/*19:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0;
    CData/*0:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap = 0;
    CData/*4:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*0:0*/ __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    CData/*0:0*/ __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6 = 0;
    IData/*23:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 0;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_11;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<6>/*191:0*/ __Vtemp_19;
    VlWide<6>/*191:0*/ __Vtemp_20;
    // Body
    __Vdly__tb_p1__DOT__dut__DOT__pattern_sync = vlSelfRef.tb_p1__DOT__dut__DOT__pattern_sync;
    __Vdly__tb_p1__DOT__dut__DOT__mute_sync = vlSelfRef.tb_p1__DOT__dut__DOT__mute_sync;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__accumulator;
    __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__phase;
    __Vdly__tb_p1__DOT__dut__DOT__y = vlSelfRef.tb_p1__DOT__dut__DOT__y;
    __Vdly__tb_p1__DOT__dut__DOT__x = vlSelfRef.tb_p1__DOT__dut__DOT__x;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0U;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 0U;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0U;
    __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0U;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
    if ((1U != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc = 0U;
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add)));
    }
    if ((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__control_coding;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__control_coding;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__control_coding;
    } else if ((1U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out;
    } else if ((2U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds = 0x2ccU;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds = 0x2ccU;
    } else if ((3U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__terc4_coding;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__terc4_coding;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__terc4_coding;
    } else if ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = ((0U == (3U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data)))
                ? 0x28eU : ((1U == (3U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data)))
                             ? 0x271U : ((2U == (3U 
                                                 & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data)))
                                          ? 0x163U : 0x2c3U)));
    }
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__pattern_sync = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__heartbeat = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__mute_sync = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__x = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__y = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
        __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 1U;
    } else {
        __Vdly__tb_p1__DOT__dut__DOT__pattern_sync 
            = ((2U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__pattern_sync) 
                      << 1U)) | (IData)(vlSelfRef.tb_p1__DOT__pattern));
        vlSelfRef.tb_p1__DOT__dut__DOT__heartbeat = 
            (0xffffffU & ((IData)(1U) + vlSelfRef.tb_p1__DOT__dut__DOT__heartbeat));
        __Vdly__tb_p1__DOT__dut__DOT__mute_sync = (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__mute_sync) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_p1__DOT__mute));
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
            = (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control) 
                << 1U) | (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain) 
                                >> 1U)));
        if ((0x31fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))) {
            __Vdly__tb_p1__DOT__dut__DOT__x = 0U;
            __Vdly__tb_p1__DOT__dut__DOT__y = (0x3ffU 
                                               & ((0x20cU 
                                                   == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))));
        } else {
            __Vdly__tb_p1__DOT__dut__DOT__x = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)));
            __Vdly__tb_p1__DOT__dut__DOT__y = (0x3ffU 
                                               & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y));
        }
        if (vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce) {
            __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
                = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control)));
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 
                = vlSelfRef.tb_p1__DOT__dut__DOT__audio_words
                [1U];
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 1U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3 
                = vlSelfRef.tb_p1__DOT__dut__DOT__audio_words
                [0U];
        }
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[1U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[0U] = 0U;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3;
    }
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter = 0U;
        __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 1U;
    } else if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)));
        if ((0x1cU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                [3U];
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 1U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                [2U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                [1U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                [0U];
            if ((0x18U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
                __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 
                    = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
                    [4U];
                __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 1U;
            }
        } else if ((0x1fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 1U;
        }
    } else {
        __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 1U;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap = 0U;
    } else {
        if (((0x1fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)) 
             & (2U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type)))) {
            __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
                = ((0xbcU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                    ? 0U : (0xffU & ((IData)(4U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
        }
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
            = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data 
            = ((3U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data)) 
               | ((0xff0U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                             << 3U)) | (((0U != (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                                         << 3U) | (4U 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                                      << 2U)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data 
            = ((0xffcU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data)) 
               | (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__vsync) 
                   << 1U) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__hsync)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
            = vlSelfRef.tb_p1__DOT__dut__DOT__rgb;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
            = (0xfffffU & ((IData)(1U) + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter));
        if (vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce) {
            if ((0x2fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter))) {
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
                    = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap)));
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0U;
                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter));
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0U;
            } else {
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter)));
            }
        }
    }
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(3U) 
                                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x43U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(3U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(2U) 
                                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x42U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(2U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x41U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(1U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0 
        = (0xffU & ((0xc0U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     ? ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter) 
                        - (IData)(0xc0U)) : (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter)));
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet = 0U;
    } else if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0U;
    }
    if (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset) 
         | ((0x27fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
            & (0x1dfU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))))) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0U;
    } else if (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous) 
                & (0U == (0x1fU & ((IData)(0x12U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)))))) {
        if (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap) 
             ^ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 1U;
            __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
        } else if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 2U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [3U][1U];
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 1U;
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet = 0xfU;
            __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 1U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [3U][0U];
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 1U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [2U][1U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [2U][0U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [1U][1U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [1U][0U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [0U][1U];
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [0U][0U];
        } else if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent) {
            if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent) {
                if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent) {
                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0U;
                } else {
                    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x83U;
                    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 1U;
                }
            } else {
                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x82U;
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 1U;
            }
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x84U;
            __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 1U;
        }
    }
    __Vtableidx2 = (0xfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_p1__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx2];
    __Vtableidx4 = (0xfU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data) 
                            >> 4U));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_p1__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx4];
    __Vtableidx6 = (0xfU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__data_island_data) 
                            >> 8U));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_p1__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx6];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data) 
                         + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                  >> 1U))) + (1U & 
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 2U))) 
                       + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U))) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                  >> 4U))) 
                     + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                              >> 5U))) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                >> 6U))) 
                   + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                            >> 7U))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 8U)) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                 >> 9U))) 
                        + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                 >> 0xaU))) + (1U & 
                                               (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                >> 0xbU))) 
                      + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                               >> 0xcU))) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                   >> 0xdU))) 
                    + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                             >> 0xeU))) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                 >> 0xfU))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x10U)) + (1U & 
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 0x11U))) 
                        + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                 >> 0x12U))) + (1U 
                                                & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                   >> 0x13U))) 
                      + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                               >> 0x14U))) + (1U & 
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 0x15U))) 
                    + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                             >> 0x16U))) + (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                                  >> 0x17U))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal[1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal[2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal[0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds;
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        vlSelfRef.tb_p1__DOT__dut__DOT__rgb = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode = 2U;
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__rgb = (0xffffffU 
                                               & ((2U 
                                                   & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__pattern_sync))
                                                   ? 
                                                  ((0xff0000U 
                                                    & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x) 
                                                            ^ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))))
                                                   : 
                                                  ((0x190U 
                                                    <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))
                                                    ? 
                                                   ((((0x27fU 
                                                       <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                       ? 0xffU
                                                       : 
                                                      (0xffU 
                                                       & (((IData)(0x33U) 
                                                           * (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                                                          >> 7U))) 
                                                     << 0x10U) 
                                                    | ((((0x27fU 
                                                          <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                          ? 0xffU
                                                          : 
                                                         (0xffU 
                                                          & (((IData)(0x33U) 
                                                              * (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                                                             >> 7U))) 
                                                        << 8U) 
                                                       | ((0x27fU 
                                                           <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                           ? 0xffU
                                                           : 
                                                          (0xffU 
                                                           & (((IData)(0x33U) 
                                                               * (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                                                              >> 7U)))))
                                                    : 
                                                   ((0x50U 
                                                     > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                     ? 0xffffffU
                                                     : 
                                                    ((0xa0U 
                                                      > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                      ? 0xffff00U
                                                      : 
                                                     ((0xf0U 
                                                       > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                       ? 0xffffU
                                                       : 
                                                      ((0x140U 
                                                        > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                        ? 0xff00U
                                                        : 
                                                       ((0x190U 
                                                         > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                         ? 0xff00ffU
                                                         : 
                                                        ((0x1e0U 
                                                          > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                          ? 0xff0000U
                                                          : 
                                                         ((0x230U 
                                                           > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                                                           ? 0xffU
                                                           : 0U))))))))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data 
            = (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble) 
                << 4U) | ((((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_preamble) 
                            | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble)) 
                           << 2U) | (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__vsync) 
                                      << 1U) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__hsync))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__mode 
            = ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_guard)
                ? 4U : ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period)
                         ? 3U : ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_guard)
                                  ? 2U : ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data_period)
                                           ? 1U : 0U))));
    }
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce = 0U;
        vlSelfRef.tb_p1__DOT__dut__DOT__sample = 0U;
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce = 0U;
        if ((0x17cbcc0U <= vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__accumulator)) {
            __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator 
                = (0x1ffffffU & (vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__accumulator 
                                 - (IData)(0x17cbcc0U)));
            vlSelfRef.tb_p1__DOT__dut__DOT__sample_ce = 1U;
            vlSelfRef.tb_p1__DOT__dut__DOT__sample 
                = ((2U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__mute_sync))
                    ? 0U : ([&]() {
                        __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index 
                            = vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__phase;
                        __Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__Vfuncout 
                            = ((0x20U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                ? ((0x10U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                    ? 0U : ((8U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xfde9U
                                                   : 0xfbdcU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf9e1U
                                                   : 0xf800U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf643U
                                                   : 0xf4b0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf34fU
                                                   : 0xf226U)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf139U
                                                   : 0xf08dU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf024U
                                                   : 0xf001U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf024U
                                                   : 0xf08dU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                   ? 0xf139U
                                                   : 0xf226U)))))
                                : ((0x10U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                    ? ((8U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                        ? ((4U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xf34fU
                                                    : 0xf4b0U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xf643U
                                                    : 0xf801U))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xf9e1U
                                                    : 0xfbdcU)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xfde9U
                                                    : 0U)))
                                        : ((4U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x217U
                                                    : 0x424U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x61fU
                                                    : 0x7ffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x9bdU
                                                    : 0xb50U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xcb1U
                                                    : 0xddaU))))
                                    : ((8U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                        ? ((4U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xec7U
                                                    : 0xf73U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xfdcU
                                                    : 0xfffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xfdcU
                                                    : 0xf73U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xec7U
                                                    : 0xddaU)))
                                        : ((4U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0xcb1U
                                                    : 0xb50U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x9bdU
                                                    : 0x7ffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x61fU
                                                    : 0x424U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__index))
                                                    ? 0x217U
                                                    : 0U))))));
                    }(), (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tone__DOT__sine__2__Vfuncout)));
            __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase 
                = ((0x2fU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__phase))
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__phase))));
        } else {
            __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator 
                = (0x1ffffffU & ((IData)(0xbb80U) + vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__accumulator));
        }
    }
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0U;
    } else {
        if (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 0U;
        }
        if ((1U & VL_REDXOR_2(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain))) {
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, 
                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux
                                             [0U], 8U));
            __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
            __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
            __VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 1U;
            __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, 
                                             vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux
                                             [1U], 8U));
            __VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
            __VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
            if ((3U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining))) {
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
                    = (1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)));
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0U;
                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 1U;
            } else {
                __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining)));
            }
        }
    }
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0 
        = (((QData)((IData)((0x180000U | (0xffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp)))) 
            << 0x18U) | (QData)((IData)(((0xff0000U 
                                          & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                                             << 8U)) 
                                         | (0xf00U 
                                            & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                                               >> 8U))))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[3U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[2U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[1U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[0U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[3U][1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    }
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[3U][0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[2U][1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[2U][0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[1U][1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[1U][0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[0U][1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[0U][0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7;
    }
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data)))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 1U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 2U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 3U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 4U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 5U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 6U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 7U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 1U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 2U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 4U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 5U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 6U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 7U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                  >> 8U))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 9U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xaU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xbU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xcU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xdU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xeU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xfU))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 9U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xaU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xbU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xcU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xdU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xeU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xfU)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    if (((4U < (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                  >> 0x10U))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                           >> 0x11U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x12U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x13U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x14U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x15U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x16U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x17U))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x11U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x12U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x13U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x14U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x15U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x16U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x17U)));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    vlSelfRef.tb_p1__DOT__dut__DOT__pattern_sync = __Vdly__tb_p1__DOT__dut__DOT__pattern_sync;
    vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__accumulator 
        = __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__accumulator;
    vlSelfRef.tb_p1__DOT__dut__DOT__tone__DOT__phase 
        = __Vdly__tb_p1__DOT__dut__DOT__tone__DOT__phase;
    vlSelfRef.tb_p1__DOT__dut__DOT__mute_sync = __Vdly__tb_p1__DOT__dut__DOT__mute_sync;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[0U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[1U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[2U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[3U] 
        = tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers[2U] 
        = (2U | (((0xff800000U & (((0U == (IData)(tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6)) 
                                   << 0x17U) & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                << 0x14U))) 
                  | (0xffc00000U & (((0U == (IData)(tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4)) 
                                     << 0x16U) & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                  << 0x14U)))) 
                 | ((0xffe00000U & (((0U == (IData)(tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2)) 
                                     << 0x15U) & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                  << 0x14U))) 
                    | ((((0U == (IData)(tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0)) 
                         & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet)) 
                        << 0x14U) | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                     << 8U)))));
    __Vtemp_5[0U] = 0x2100004U;
    __Vtemp_5[1U] = 2U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_5[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[0U] 
        = ((2U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [0U]) | (1U & (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [0U]) && (1U & (__Vtemp_5[
                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [0U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U])))) 
                           ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [0U] ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [0U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [0U]
                                                          [0U]))))));
    __Vtemp_6[0U] = 0x2200004U;
    __Vtemp_6[1U] = 2U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[0U] 
        = ((1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [0U]) | (2U & ((((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [0U]) && (1U & (__Vtemp_6[
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [0U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [0U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [0U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [0U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [0U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_7[0U] = 0x2100004U;
    __Vtemp_7[1U] = 2U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    __Vtemp_7[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[1U] 
        = ((2U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [1U]) | (1U & (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [1U]) && (1U & (__Vtemp_7[
                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [1U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U])))) 
                           ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [1U] ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [1U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [1U]
                                                          [0U]))))));
    __Vtemp_8[0U] = 0x2200004U;
    __Vtemp_8[1U] = 2U;
    __Vtemp_8[2U] = 0U;
    __Vtemp_8[3U] = 0U;
    __Vtemp_8[4U] = 0U;
    __Vtemp_8[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[1U] 
        = ((1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [1U]) | (2U & ((((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [1U]) && (1U & (__Vtemp_8[
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [1U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [1U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [1U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [1U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [1U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_9[0U] = 0x2100004U;
    __Vtemp_9[1U] = 2U;
    __Vtemp_9[2U] = 0U;
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    __Vtemp_9[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[2U] 
        = ((2U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [2U]) | (1U & (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [2U]) && (1U & (__Vtemp_9[
                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [2U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U])))) 
                           ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [2U] ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [2U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [2U]
                                                          [0U]))))));
    __Vtemp_10[0U] = 0x2200004U;
    __Vtemp_10[1U] = 2U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = 0U;
    __Vtemp_10[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[2U] 
        = ((1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [2U]) | (2U & ((((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [2U]) && (1U & (__Vtemp_10[
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [2U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [2U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [2U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [2U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [2U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_11[0U] = 0x2100004U;
    __Vtemp_11[1U] = 2U;
    __Vtemp_11[2U] = 0U;
    __Vtemp_11[3U] = 0U;
    __Vtemp_11[4U] = 0U;
    __Vtemp_11[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[3U] 
        = ((2U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [3U]) | (1U & (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [3U]) && (1U & (__Vtemp_11[
                                             (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [3U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U])))) 
                           ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [3U] ^ (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [3U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [3U]
                                                          [0U]))))));
    __Vtemp_12[0U] = 0x2200004U;
    __Vtemp_12[1U] = 2U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    __Vtemp_12[4U] = 0U;
    __Vtemp_12[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[3U] 
        = ((1U & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [3U]) | (2U & ((((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [3U]) && (1U & (__Vtemp_12[
                                              (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [3U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [3U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [3U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [3U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [3U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtableidx1 = (3U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_p1__ConstPool__TABLE_h1d5d3245_0[__Vtableidx1];
    __Vtableidx3 = (3U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data) 
                          >> 2U));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_p1__ConstPool__TABLE_h1d5d3245_0[__Vtableidx3];
    __Vtableidx5 = (3U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__control_data) 
                          >> 4U));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_p1__ConstPool__TABLE_h1d5d3245_0[__Vtableidx5];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && ((0x284U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
               & (0x28cU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_preamble 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (((0x316U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                & (0x31eU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))) 
               & ((0x20cU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)) 
                  | (0x1dfU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_guard 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (((0x28cU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                & (0x28eU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))) 
               | ((0x30eU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                  & (0x310U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_guard 
        = ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset) 
           || (((0x31eU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                & (0x320U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))) 
               & ((0x20cU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)) 
                  | (0x1dfU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__video_data_period 
        = ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
           & ((0x280U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
              & (0x1e0U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))));
    vlSelfRef.tb_p1__DOT__dut__DOT__audio_words[0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__sample;
    vlSelfRef.tb_p1__DOT__dut__DOT__audio_words[1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__sample;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [3U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [0U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    if (__VdlySet__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer[__VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0][__VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0][0U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer[__VdlyDim2__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1][__VdlyDim1__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1][1U] 
            = __VdlyVal__tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    }
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type];
    __Vtemp_13[0U] = 0x2200004U;
    __Vtemp_13[1U] = 2U;
    __Vtemp_13[2U] = 0U;
    __Vtemp_13[3U] = 0U;
    __Vtemp_13[4U] = 0U;
    __Vtemp_13[5U] = 0U;
    __Vtemp_14[0U] = 0x2100004U;
    __Vtemp_14[1U] = 2U;
    __Vtemp_14[2U] = 0U;
    __Vtemp_14[3U] = 0U;
    __Vtemp_14[4U] = 0U;
    __Vtemp_14[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[0U] 
        = ((1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [0U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [0U]) && (1U 
                                                  & (__Vtemp_13[
                                                     (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [0U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [0U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [0U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [0U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [0U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [0U]) && 
                                         (1U & (__Vtemp_14[
                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [0U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [0U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [0U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [0U][0U])))
            : 0ULL);
    __Vtemp_15[0U] = 0x2200004U;
    __Vtemp_15[1U] = 2U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = 0U;
    __Vtemp_15[4U] = 0U;
    __Vtemp_15[5U] = 0U;
    __Vtemp_16[0U] = 0x2100004U;
    __Vtemp_16[1U] = 2U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    __Vtemp_16[4U] = 0U;
    __Vtemp_16[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[1U] 
        = ((2U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [1U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [1U]) && (1U 
                                                  & (__Vtemp_15[
                                                     (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [1U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [1U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [1U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [1U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [1U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [1U]) && 
                                         (1U & (__Vtemp_16[
                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [1U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [1U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [1U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [1U][0U])))
            : 0ULL);
    __Vtemp_17[0U] = 0x2200004U;
    __Vtemp_17[1U] = 2U;
    __Vtemp_17[2U] = 0U;
    __Vtemp_17[3U] = 0U;
    __Vtemp_17[4U] = 0U;
    __Vtemp_17[5U] = 0U;
    __Vtemp_18[0U] = 0x2100004U;
    __Vtemp_18[1U] = 2U;
    __Vtemp_18[2U] = 0U;
    __Vtemp_18[3U] = 0U;
    __Vtemp_18[4U] = 0U;
    __Vtemp_18[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[2U] 
        = ((4U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [2U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [2U]) && (1U 
                                                  & (__Vtemp_17[
                                                     (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [2U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [2U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [2U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [2U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [2U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [2U]) && 
                                         (1U & (__Vtemp_18[
                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [2U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [2U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [2U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [2U][0U])))
            : 0ULL);
    __Vtemp_19[0U] = 0x2200004U;
    __Vtemp_19[1U] = 2U;
    __Vtemp_19[2U] = 0U;
    __Vtemp_19[3U] = 0U;
    __Vtemp_19[4U] = 0U;
    __Vtemp_19[5U] = 0U;
    __Vtemp_20[0U] = 0x2100004U;
    __Vtemp_20[1U] = 2U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    __Vtemp_20[4U] = 0U;
    __Vtemp_20[5U] = 0U;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[3U] 
        = ((8U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [3U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [3U]) && (1U 
                                                  & (__Vtemp_19[
                                                     (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [3U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [3U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [3U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [3U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [3U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [3U]) && 
                                         (1U & (__Vtemp_20[
                                                (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [3U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [3U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [3U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [3U][0U])))
            : 0ULL);
    vlSelfRef.tb_p1__DOT__dut__DOT__y = __Vdly__tb_p1__DOT__dut__DOT__y;
    vlSelfRef.tb_p1__DOT__dut__DOT__x = __Vdly__tb_p1__DOT__dut__DOT__x;
    if ((1U & VL_REDXOR_2(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain))) {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[1U] 
            = (0xffffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer
               [1U]);
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[0U] 
            = (0xffffU & vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer
               [0U]);
    } else {
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[1U] 
            = (0xffffU & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                          [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current]
                          [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining]
                          [1U] >> 8U));
        vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[0U] 
            = (0xffffU & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                          [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current]
                          [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining]
                          [0U] >> 8U));
    }
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__next_bch_bit 
        = ((0x17U >= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)) 
           && (1U & (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
                     >> (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [4U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[4U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__11__Vfuncout;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [3U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [0U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__hsync 
        = (1U & (~ ((0x290U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
                    & (0x2f0U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous 
        = ((0x28eU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)) 
           & (0x30eU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__vsync 
        = (1U & ((0x1e9U == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))
                  ? (0x290U > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                  : ((0x1ebU == (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y))
                      ? (0x290U <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__x))
                      : (~ ((0x1eaU <= (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)) 
                            & (0x1ecU > (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__y)))))));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [0U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [1U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [2U];
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[3U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [3U];
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [3U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [3U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [2U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [2U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [1U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [1U]);
    tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
        = (((QData)((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [0U])) << 0x38U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [0U]);
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [0U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [0U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[0U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__3__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [1U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [1U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[1U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__5__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [2U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [2U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[2U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__7__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [3U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [3U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[3U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__9__Vfuncout;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data 
        = ((((0x100U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                 >> (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                           << 1U)))) 
                        << 8U)) | ((0x80U & ((IData)(
                                                     (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                                                      >> 
                                                      (1U 
                                                       | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                          << 1U)))) 
                                             << 7U)) 
                                   | (0x40U & ((IData)(
                                                       (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                                        >> 
                                                        (1U 
                                                         | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                            << 1U)))) 
                                               << 6U)))) 
            | ((0x20U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                  >> (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                            << 1U)))) 
                         << 5U)) | (0x10U & ((IData)(
                                                     (tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                                      >> 
                                                      ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                       << 1U))) 
                                             << 4U)))) 
           | (((8U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                               >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                   << 1U))) << 3U)) 
               | (4U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                 >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 2U))) 
              | ((2U & ((IData)((tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                 >> ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 1U)) 
                 | (1U & (((vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [4U] << 0x18U) | vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
                           [vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]) 
                          >> (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [0U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [0U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[0U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__4__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [1U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [1U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[1U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__6__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [2U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [2U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[2U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__8__Vfuncout;
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [3U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [3U];
    __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__ecc)) 
                               ^ (IData)(__Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[3U] 
        = __Vfunc_tb_p1__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__10__Vfuncout;
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__2(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__2\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__reset_pipe = ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset_async)
                                                   ? 0xfU
                                                   : 
                                                  (0xeU 
                                                   & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset_pipe) 
                                                      << 1U)));
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__3(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__3\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift = 0;
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift = 0;
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift = 0;
    SData/*9:0*/ __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift = 0;
    // Body
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift;
    __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift;
    if (vlSelfRef.tb_p1__DOT__dut__DOT__reset) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift = 0U;
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift = 0U;
    } else if (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__meta) 
                ^ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__sync))) {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words
            [0U];
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words
            [1U];
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words
            [2U];
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift 
            = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words
            [3U];
    } else {
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift 
            = (0xffU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift) 
                        >> 2U));
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift 
            = (0xffU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift) 
                        >> 2U));
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift 
            = (0xffU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift) 
                        >> 2U));
        __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift 
            = (0xffU & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift) 
                        >> 2U));
    }
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__rise_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__ddr__DOT__fall_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift) 
                     >> 1U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__rise_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__ddr__DOT__fall_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift) 
                     >> 1U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__rise_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__ddr__DOT__fall_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift) 
                     >> 1U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__rise_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__ddr__DOT__fall_bit 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift) 
                     >> 1U)));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__3__KET____DOT__shift;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__0__KET____DOT__shift;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__1__KET____DOT__shift;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift 
        = __Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__lane__BRA__2__KET____DOT__shift;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__sync 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__meta));
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__meta 
        = ((1U & (~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset))) 
           && (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle));
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__4(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__4\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__locked = vlSelfRef.tb_p1__DOT__run_n;
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__6(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__6\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words[0U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words[1U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__words[2U] 
        = vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds;
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__7(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__7\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle 
        = vlSelfRef.__Vdly__tb_p1__DOT__dut__DOT__tx__DOT__serializer__DOT__toggle;
}

VL_INLINE_OPT void Vtb_p1___024root___nba_sequent__TOP__8(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_sequent__TOP__8\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__dut__DOT__reset = (1U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset_pipe) 
                                                   >> 3U));
}

VL_INLINE_OPT void Vtb_p1___024root___nba_comb__TOP__1(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___nba_comb__TOP__1\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p1__DOT__leds = (((8U & ((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__mute_sync) 
                                          << 2U)) | 
                                   (4U & ((~ (IData)(vlSelfRef.tb_p1__DOT__dut__DOT__reset)) 
                                          << 2U))) 
                                  | (((IData)(vlSelfRef.tb_p1__DOT__dut__DOT__locked) 
                                      << 1U) | (1U 
                                                & (vlSelfRef.tb_p1__DOT__dut__DOT__heartbeat 
                                                   >> 0x17U))));
}

void Vtb_p1___024root___timing_resume(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_resume\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h25a6b4de__0.resume(
                                                   "@( (32'shcd140 == tb_p1.cycles))");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h864d5bac__0.resume(
                                                   "@( (32'sh1339e0 == tb_p1.cycles))");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_had2ebf53__0.resume(
                                                   "@(posedge tb_p1.dut.serial_clk)");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_had2ebf12__0.resume(
                                                   "@(negedge tb_p1.dut.serial_clk)");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p1___024root___timing_commit(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___timing_commit\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x2000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h25a6b4de__0.commit(
                                                   "@( (32'shcd140 == tb_p1.cycles))");
    }
    if ((! (0x4000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h864d5bac__0.commit(
                                                   "@( (32'sh1339e0 == tb_p1.cycles))");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_had2ebf53__0.commit(
                                                   "@(posedge tb_p1.dut.serial_clk)");
    }
    if ((! (0x8000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_had2ebf12__0.commit(
                                                   "@(negedge tb_p1.dut.serial_clk)");
    }
}

void Vtb_p1___024root___eval_triggers__act(Vtb_p1___024root* vlSelf);

bool Vtb_p1___024root___eval_phase__act(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_phase__act\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<16> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_p1___024root___eval_triggers__act(vlSelf);
    Vtb_p1___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_p1___024root___timing_resume(vlSelf);
        Vtb_p1___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_p1___024root___eval_phase__nba(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_phase__nba\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_p1___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__nba(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p1___024root___eval(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_p1___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_p1___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p1\\tb_p1.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_p1___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_p1___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_p1___024root___eval_debug_assertions(Vtb_p1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_debug_assertions\n"); );
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
