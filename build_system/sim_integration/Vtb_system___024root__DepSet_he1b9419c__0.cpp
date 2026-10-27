// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system___024root.h"

VL_ATTR_COLD void Vtb_system___024root___eval_initial__TOP(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__1(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__2(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__3(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__4(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__5(Vtb_system___024root* vlSelf);
VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__6(Vtb_system___024root* vlSelf);

void Vtb_system___024root___eval_initial(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_system___024root___eval_initial__TOP(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_system___024root___eval_initial__TOP__Vtiming__6(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/system\tb_system.sv", 
                                             49);
        vlSelfRef.tb_system__DOT__dut__DOT__mem_clk 
            = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__mem_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                             nullptr, 
                                             "sim/system\tb_system.sv", 
                                             49);
        vlSelfRef.tb_system__DOT__dut__DOT__serial_clk 
            = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__serial_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__4(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "sim/system\tb_system.sv", 
                                             49);
        vlSelfRef.tb_system__DOT__dut__DOT__pixel_clk 
            = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__5(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/system\tb_system.sv", 
                                             4);
        vlSelfRef.tb_system__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__6____Vfork_1__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__6____Vfork_1__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1770ULL, 
                                         nullptr, "sim/p2\sdram_model.sv", 
                                         28);
    vlSelfRef.__VdlyVal__tb_system__DOT__model_data__v0 
        = vlSelfRef.__Vintraval_hc463ab01__0;
    vlSelfRef.__VdlySet__tb_system__DOT__model_data__v0 = 1U;
}

void Vtb_system___024root___act_comb__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__1(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__2(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__3(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__4(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__5(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_comb__TOP__1(Vtb_system___024root* vlSelf);

void Vtb_system___024root___eval_act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x78040ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x38ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_system___024root___act_comb__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_comb__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__ar = (1U & 
                                              ((~ (IData)(vlSelfRef.tb_system__DOT__run_n)) 
                                               | (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__locked))));
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data)))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 1U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 2U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 3U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 4U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 5U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 6U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 7U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 1U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 2U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 4U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 5U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 6U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 7U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                  >> 8U))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 9U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xaU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xbU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xcU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xdU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xeU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xfU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 9U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xaU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xbU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xcU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xdU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xeU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xfU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07 
        = ((8U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 1U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 2U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 3U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                 >> 4U))) 
                    + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                             >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                               >> 6U))) 
                  + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                           >> 7U)))) ? ((4U & (((((
                                                   (((1U 
                                                      & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 1U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 2U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 3U))) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 4U))) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                                                + (1U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U))) 
                                               + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U))))
                                         ? 0U : ((2U 
                                                  & ((((((((1U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                               >> 1U))) 
                                                          + 
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                              >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 3U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 4U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 5U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 6U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 7U))))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            + 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U)) 
                                                           + 
                                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U)) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U)))
                                                   ? 0U
                                                   : 8U)))
            : ((4U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                            + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 1U))) + (1U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                    >> 2U))) 
                          + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 3U))) + (1U & 
                                               ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U))) 
                        + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 5U))) + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 6U))) 
                      + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                               >> 7U)))) ? ((2U & (
                                                   (((((((1U 
                                                          & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                             >> 1U))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                            >> 2U))) 
                                                       + 
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 3U))) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 4U))) 
                                                     + 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 5U))) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 6U))) 
                                                   + 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 7U))))
                                             ? ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 7U
                                                 : 6U)
                                             : ((1U 
                                                 & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          + 
                                                          ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                           >> 1U)) 
                                                         + 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                          >> 2U)) 
                                                        + 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                         >> 3U)) 
                                                       + 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                        >> 4U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                       >> 5U)) 
                                                     + 
                                                     ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                      >> 6U)) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 7U)))
                                                 ? 5U
                                                 : 4U))
                : ((2U & ((((((((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                                + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                         >> 1U))) + 
                               (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 2U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 3U))) 
                             + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                      >> 4U))) + (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                     >> 5U))) 
                           + (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    >> 6U))) + (1U 
                                                & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                   >> 7U))))
                    ? ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 3U : 2U)
                    : ((1U & ((((((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                    + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                       >> 1U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                  >> 2U)) 
                                  + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                     >> 3U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                                >> 4U)) 
                                + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                   >> 5U)) + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                              >> 6U)) 
                              + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                 >> 7U))) ? 1U : 0U))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07 
        = (0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                  >> 0x10U))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 0x11U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x12U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x13U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x14U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x15U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x16U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x17U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x11U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x12U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x13U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x14U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x15U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x16U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x17U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes[0U] 
        = (0xffU & ((IData)(1U) + (~ ((IData)(0x91U) 
                                      + (((((((((((
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                    [0xdU] 
                                                    + 
                                                    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                    [0xcU]) 
                                                   + 
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                   [0xbU]) 
                                                  + 
                                                  vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                  [0xaU]) 
                                                 + 
                                                 vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                 [9U]) 
                                                + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                                [8U]) 
                                               + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                               [7U]) 
                                              + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                              [6U]) 
                                             + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                             [5U]) 
                                            + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                            [4U]) + 
                                           vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                           [3U]) + 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                          [2U]) + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                         [1U])))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub[0U] 
        = (0x180080000ULL | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes
                                            [0U])));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [3U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x82U][0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__auxiliary_video_information_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__4(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (0xffU & ((IData)(1U) + (~ ((IData)(0x9dU) 
                                            + (((((
                                                   (((((((((((((((((((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                      [0x19U] 
                                                                      + 
                                                                      vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                      [0x18U]) 
                                                                     + 
                                                                     vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                     [0x17U]) 
                                                                    + 
                                                                    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                    [0x16U]) 
                                                                   + 
                                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                   [0x15U]) 
                                                                  + 
                                                                  vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                  [0x14U]) 
                                                                 + 
                                                                 vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                 [0x13U]) 
                                                                + 
                                                                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                                [0x12U]) 
                                                               + 
                                                               vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                               [0x11U]) 
                                                              + 
                                                              vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                              [0x10U]) 
                                                             + 
                                                             vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                             [0xfU]) 
                                                            + 
                                                            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                            [0xeU]) 
                                                           + 
                                                           vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                           [0xdU]) 
                                                          + 
                                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                          [0xcU]) 
                                                         + 
                                                         vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                         [0xbU]) 
                                                        + 
                                                        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                        [0xaU]) 
                                                       + 
                                                       vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                       [9U]) 
                                                      + 
                                                      vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                      [8U]) 
                                                     + 
                                                     vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                     [7U]) 
                                                    + 
                                                    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                    [6U]) 
                                                   + 
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                   [5U]) 
                                                  + 
                                                  vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                  [4U]) 
                                                 + 
                                                 vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                 [3U]) 
                                                + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                [2U]) 
                                               + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                               [1U])))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes[0U] 
        = __Vtemp_1;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub[0U] 
        = (0x2020205a4d4400ULL | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes
                                                 [0U])));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [3U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x83U][0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__source_product_description_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__5(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes[0U] 
        = (0xffU & ((IData)(1U) + (~ ((IData)(0x8fU) 
                                      + ((((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                            [5U] + 
                                            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                            [4U]) + 
                                           vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                           [3U]) + 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                          [2U]) + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                         [1U])))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub[0U] 
        = (0x100ULL | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes
                                      [0U])));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [3U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[0x84U][0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_info_frame__sub
        [0U];
}

VL_INLINE_OPT void Vtb_system___024root___act_comb__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_comb__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit = 0;
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [0U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [3U];
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [3U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [3U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [2U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [2U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [1U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [1U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [0U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [0U]);
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [0U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [0U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[0U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [1U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [1U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[1U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [2U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [2U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[2U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [3U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [3U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[3U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data 
        = ((((0x100U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                 >> (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                           << 1U)))) 
                        << 8U)) | ((0x80U & ((IData)(
                                                     (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                                                      >> 
                                                      (1U 
                                                       | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                          << 1U)))) 
                                             << 7U)) 
                                   | (0x40U & ((IData)(
                                                       (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                                        >> 
                                                        (1U 
                                                         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                            << 1U)))) 
                                               << 6U)))) 
            | ((0x20U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                  >> (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                            << 1U)))) 
                         << 5U)) | (0x10U & ((IData)(
                                                     (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                                      >> 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                       << 1U))) 
                                             << 4U)))) 
           | (((8U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                               >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                   << 1U))) << 3U)) 
               | (4U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                 >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 2U))) 
              | ((2U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                 >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 1U)) 
                 | (1U & (((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [4U] << 0x18U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
                           [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]) 
                          >> (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [0U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [0U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[0U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [1U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [1U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[1U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [2U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [2U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[2U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [3U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [3U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[3U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout;
}

void Vtb_system___024root___nba_sequent__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__1(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__2(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__3(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__4(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__5(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__6(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__7(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__8(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__9(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__10(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__11(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__12(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__13(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_comb__TOP__1(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__14(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__15(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_comb__TOP__2(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_comb__TOP__3(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__16(Vtb_system___024root* vlSelf);

void Vtb_system___024root___eval_nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x240ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x6000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x78440ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x8800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x240ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x6000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x240ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__16(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__mr 
        = vlSelfRef.tb_system__DOT__dut__DOT__mr;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__mr 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ar)
            ? 0xfU : (0xeU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__mr) 
                              << 1U)));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__pr 
        = vlSelfRef.tb_system__DOT__dut__DOT__pr;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__pr 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ar)
            ? 0xfU : (0xeU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pr) 
                              << 1U)));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__fr 
        = vlSelfRef.tb_system__DOT__dut__DOT__fr;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__fr 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset)
            ? 7U : (6U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr) 
                          << 1U)));
}

extern const VlWide<8>/*255:0*/ Vtb_system__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__4(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_system__DOT__dut__DOT__req_ready;
    tb_system__DOT__dut__DOT__req_ready = 0;
    SData/*11:0*/ tb_system__DOT__dut__DOT__fifo_used;
    tb_system__DOT__dut__DOT__fifo_used = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__image_name;
    tb_system__DOT__dut__DOT__image_name = 0;
    IData/*20:0*/ tb_system__DOT__dut__DOT__bist__DOT__check_addr;
    tb_system__DOT__dut__DOT__bist__DOT__check_addr = 0;
    IData/*17:0*/ tb_system__DOT__dut__DOT__loader__DOT____VdfgRegularize_h5b62b4c5_1_0;
    tb_system__DOT__dut__DOT__loader__DOT____VdfgRegularize_h5b62b4c5_1_0 = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a = 0;
    CData/*1:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__a;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__a = 0;
    CData/*1:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__mixed;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__mixed = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__8__argument;
    __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__8__argument = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__11__argument;
    __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__11__argument = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__previous;
    __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__previous = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__value;
    __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__value = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c;
    __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__13__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__13__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__14__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__16__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__17__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__17__lba = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__18__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__19__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__20__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__21__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__22__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__22__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__23__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__24__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__24__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__25__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__26__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__26__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__27__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__27__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__28__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__28__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__29__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__30__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__30__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__31__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__31__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__32__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__33__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__33__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__34__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__34__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__35__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__35__lba = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__36__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__36__lba = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__40__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__40__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__41__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__42__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d32__43__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d32__43__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__44__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__44__lba = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__45__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__46__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__47__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__47__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__48__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__48__lba = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__49__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__49__lba = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__50__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__51__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__52__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__53__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__54__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__55__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__56__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__57__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__58__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__59__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__60__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__61__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__62__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__62__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__63__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__63__lba = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__64__lba;
    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__64__lba = 0;
    CData/*4:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__init_done;
    __Vdly__tb_system__DOT__dut__DOT__init_done = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__refreshes;
    __Vdly__tb_system__DOT__dut__DOT__refreshes = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_system__DOT__dut__DOT__rdata;
    VL_ZERO_W(256, __Vdly__tb_system__DOT__dut__DOT__rdata);
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data;
    VL_ZERO_W(256, __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data);
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading = 0;
    IData/*20:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__errors;
    __Vdly__tb_system__DOT__dut__DOT__errors = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__checked;
    __Vdly__tb_system__DOT__dut__DOT__checked = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 0;
    QData/*47:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0;
    IData/*19:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2 = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high = 0;
    SData/*8:0*/ __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__sd_sectors;
    __Vdly__tb_system__DOT__dut__DOT__sd_sectors = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 0;
    CData/*4:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__sd_start;
    __Vdly__tb_system__DOT__dut__DOT__sd_start = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__sd_lba;
    __Vdly__tb_system__DOT__dut__DOT__sd_lba = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16 = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file = 0;
    SData/*8:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos = 0;
    SData/*9:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 0;
    CData/*3:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x = 0;
    SData/*8:0*/ __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__image_pixels;
    __Vdly__tb_system__DOT__dut__DOT__image_pixels = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__load_last;
    __Vdly__tb_system__DOT__dut__DOT__load_last = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush = 0;
    IData/*17:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__front_bank;
    __Vdly__tb_system__DOT__dut__DOT__front_bank = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__swaps;
    __Vdly__tb_system__DOT__dut__DOT__swaps = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__frames_written;
    __Vdly__tb_system__DOT__dut__DOT__frames_written = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__dma_reads;
    __Vdly__tb_system__DOT__dut__DOT__dma_reads = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__entry__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__entry__v0;
    __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__entry__v0;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__cache__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__cache__v0;
    __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__cache__v0;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__header__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__header__v0;
    __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__header__v0;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__header__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0;
    __VdlyDim0__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0;
    __VdlySet__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 = 0;
    // Body
    vlSelfRef.__Vdly__tb_system__DOT__sck = vlSelfRef.tb_system__DOT__sck;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__rx 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__busy 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__reading;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__hold_count;
    __Vdly__tb_system__DOT__dut__DOT__checked = vlSelfRef.tb_system__DOT__dut__DOT__checked;
    __Vdly__tb_system__DOT__dut__DOT__errors = vlSelfRef.tb_system__DOT__dut__DOT__errors;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address;
    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__continuation;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__power_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__init_attempts;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__extra_count;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__high_capacity;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2 = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__v2;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__reading;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__crc_left;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_crc;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__received_crc_high;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd_initialized 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd_initialized;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_index;
    __Vdly__tb_system__DOT__dut__DOT__sd_sectors = vlSelfRef.tb_system__DOT__dut__DOT__sd_sectors;
    vlSelfRef.__Vdly__tb_system__DOT__cs = vlSelfRef.tb_system__DOT__cs;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__frame;
    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__last_frame;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__front_bank = vlSelfRef.tb_system__DOT__dut__DOT__front_bank;
    __Vdly__tb_system__DOT__dut__DOT__swaps = vlSelfRef.tb_system__DOT__dut__DOT__swaps;
    __Vdly__tb_system__DOT__dut__DOT__frames_written 
        = vlSelfRef.tb_system__DOT__dut__DOT__frames_written;
    __Vdly__tb_system__DOT__dut__DOT__dma_reads = vlSelfRef.tb_system__DOT__dut__DOT__dma_reads;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__transaction_last;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__frame_pending;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__back_ready;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__rd_addr;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush 
        = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush;
    __VdlySet__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__after_read;
    __Vdly__tb_system__DOT__dut__DOT__sd_start = vlSelfRef.tb_system__DOT__dut__DOT__sd_start;
    __Vdly__tb_system__DOT__dut__DOT__sd_lba = vlSelfRef.tb_system__DOT__dut__DOT__sd_lba;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__volume_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_base;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_sectors;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_size;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_offset;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__bmp_offset;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__rgba;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_for_file;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__directory_sectors;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__low_pixel;
    __Vdly__tb_system__DOT__dut__DOT__image_pixels 
        = vlSelfRef.tb_system__DOT__dut__DOT__image_pixels;
    __Vdly__tb_system__DOT__dut__DOT__load_last = vlSelfRef.tb_system__DOT__dut__DOT__load_last;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__header__v0 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_x;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__source_y;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos;
    __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh;
    __Vdly__tb_system__DOT__dut__DOT__init_done = vlSelfRef.tb_system__DOT__dut__DOT__init_done;
    __Vdly__tb_system__DOT__dut__DOT__refreshes = vlSelfRef.tb_system__DOT__dut__DOT__refreshes;
    __Vdly__tb_system__DOT__dut__DOT__rdata[0U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[0U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[1U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[1U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[2U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[2U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[3U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[3U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[4U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[4U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[5U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[5U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[6U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[6U];
    __Vdly__tb_system__DOT__dut__DOT__rdata[7U] = vlSelfRef.tb_system__DOT__dut__DOT__rdata[7U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U];
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__restart_sync 
        = ((8U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__mr))
            ? 0U : ((2U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__restart_sync) 
                           << 1U)) | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count))));
    if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset)))) {
        __VdlyVal__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat), 5U)))
                 ? 0U : (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[
                         (((IData)(0x1fU) + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat), 5U))))) 
               | (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[
                  (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat), 5U))));
        __VdlyDim0__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 
            = (0x7ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wp));
        __VdlySet__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset) {
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg2 = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wgray = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wp = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg1 = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg2 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg1;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wgray 
            = (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wn), 1U) 
                         ^ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wn)));
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wp 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wn;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg1 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rgray;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__mem[__VdlyDim0__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0] 
            = __VdlyVal__tb_system__DOT__dut__DOT__fifo__DOT__mem__v0;
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__reset) {
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat = 0U;
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern = 0U;
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading = 0U;
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address = 0U;
        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__errors = 0U;
        __Vdly__tb_system__DOT__dut__DOT__checked = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[0U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[1U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[2U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[3U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[4U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[5U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[6U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[7U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__hold_count 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count;
        vlSelfRef.tb_system__DOT__dut__DOT__checked 
            = __Vdly__tb_system__DOT__dut__DOT__checked;
        vlSelfRef.tb_system__DOT__dut__DOT__errors 
            = __Vdly__tb_system__DOT__dut__DOT__errors;
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat;
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 0x270fU;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age = 0U;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh = 0U;
        __Vdly__tb_system__DOT__dut__DOT__init_done = 0U;
        __Vdly__tb_system__DOT__dut__DOT__refreshes = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__rsp_valid = 0U;
        __Vdly__tb_system__DOT__dut__DOT__rdata[0U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[1U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[2U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[3U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[4U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[5U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[6U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_system__DOT__dut__DOT__rdata[7U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr = 0U;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write = 0U;
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT__init_done) {
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__bist__req_ready) {
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__bist__rsp_valid) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__reading) {
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[0U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[0U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[1U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[1U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[2U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[2U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[3U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[3U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[4U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[4U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[5U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[5U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[6U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[6U];
                    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[7U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__rdata[7U];
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 3U;
                } else if ((0xff8U == vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address)) {
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count = 0x1387U;
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 4U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address 
                        = (0x1fffffU & ((IData)(8U) 
                                        + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 1U;
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
            __Vdly__tb_system__DOT__dut__DOT__checked 
                = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__checked);
            if ((vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__actual 
                 != vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__expected)) {
                if ((0xffffffffU != vlSelfRef.tb_system__DOT__dut__DOT__errors)) {
                    __Vdly__tb_system__DOT__dut__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__errors);
                }
            }
            if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat))) {
                if ((0xff8U == vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address)) {
                    if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern))) {
                        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 5U;
                    } else {
                        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern)));
                        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address = 0U;
                        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading = 0U;
                        __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address 
                        = (0x1fffffU & ((IData)(8U) 
                                        + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
                    __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 1U;
                }
            } else {
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat)));
            }
        } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
            if ((0U == vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__hold_count)) {
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading = 1U;
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state = 1U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count 
                    = (vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__hold_count 
                       - (IData)(1U));
            }
        }
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__hold_count 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__hold_count;
        vlSelfRef.tb_system__DOT__dut__DOT__checked 
            = __Vdly__tb_system__DOT__dut__DOT__checked;
        vlSelfRef.tb_system__DOT__dut__DOT__errors 
            = __Vdly__tb_system__DOT__dut__DOT__errors;
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__beat;
        vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern 
            = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__pattern;
        vlSelfRef.tb_system__DOT__dut__DOT__rsp_valid = 0U;
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__init_done) 
             & (0xffffU != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age)))) {
            __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age)));
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 1U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 2U;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 3U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh)));
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 4U;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 3U;
            } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state 
                        = ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh))
                            ? 5U : 3U);
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 6U;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((6U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 7U;
                    __Vdly__tb_system__DOT__dut__DOT__init_done = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age = 0U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0x186U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0x10U;
            } else if (((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))
                         ? (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fvalid)
                         : (1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)))) {
                if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr 
                        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req)
                            ? (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__front_bank) 
                                << 0x12U) | vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__rd_addr)
                            : ((0x40000U & ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__front_bank)) 
                                            << 0x12U)) 
                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__pending_addr));
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write 
                        = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req)));
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[0U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[1U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[2U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[3U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[4U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[5U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[6U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_data[7U];
                } else {
                    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address;
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write 
                        = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__reading)));
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[0U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[1U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[2U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[3U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[4U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[5U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[6U];
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__bwdata[7U];
                }
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 8U;
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                          | (9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                         | (0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                        | (0xbU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                       | (0xcU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                      | (0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                     | (0xeU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) 
                    | (0xfU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))) {
            if ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 9U;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state 
                        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write)
                            ? 0xdU : 0xaU);
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0xbU;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 2U;
            } else if ((0xbU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0xcU;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0xcU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat), 5U)), __Vdly__tb_system__DOT__dut__DOT__rdata, vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__dq_capture);
                if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0xfU;
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 3U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat)));
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] = 0U;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0xeU;
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat = 1U;
            } else if ((0xeU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U];
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] = 0U;
                if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat))) {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0xfU;
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 3U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat)));
                }
            } else if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 7U;
                vlSelfRef.tb_system__DOT__dut__DOT__rsp_valid = 1U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            __Vdly__tb_system__DOT__dut__DOT__refreshes 
                = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__refreshes);
            __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0x11U;
            __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count = 3U;
            __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age = 0U;
        } else if ((0x11U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 7U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else {
            __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__wait_count 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__wait_count;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__init_refresh;
    vlSelfRef.tb_system__DOT__dut__DOT__refreshes = __Vdly__tb_system__DOT__dut__DOT__refreshes;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__beat 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__beat;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__transaction_write;
    vlSelfRef.tb_system__DOT__dut__DOT__init_done = __Vdly__tb_system__DOT__dut__DOT__init_done;
    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__reading 
        = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__reading;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age;
    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address 
        = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__address;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__bist__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[1U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[2U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[3U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[4U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[5U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[6U];
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U] 
        = __Vdly__tb_system__DOT__dut__DOT__ctrl__DOT__write_data[7U];
    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__actual 
        = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat), 5U)))
             ? 0U : (vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[
                     (((IData)(0x1fU) + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat), 5U))))) 
           | (vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__read_data[
              (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat), 5U) 
                     >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat), 5U))));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[0U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[1U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(2U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[2U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(3U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[3U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(4U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[4U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(5U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[5U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(6U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[6U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
        = (0x1fffffU & ((IData)(7U) + vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bwdata[7U] 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__3__Vfuncout;
    tb_system__DOT__dut__DOT__bist__DOT__check_addr 
        = (0x1fffffU & (vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__address 
                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__beat)));
    vlSelfRef.tb_system__DOT__dut__DOT__ras_n = 1U;
    vlSelfRef.tb_system__DOT__dut__DOT__cas_n = 1U;
    vlSelfRef.tb_system__DOT__dut__DOT__we_n = 1U;
    vlSelfRef.tb_system__DOT__dut__DOT__sa = 0U;
    if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
        vlSelfRef.tb_system__DOT__dut__DOT__ras_n = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__we_n = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sa = (0x400U 
                                                  | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa));
    } else {
        if (((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__ras_n = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_system__DOT__dut__DOT__ras_n = 0U;
        } else if ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_system__DOT__dut__DOT__ras_n = 0U;
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_system__DOT__dut__DOT__we_n = 0U;
                vlSelfRef.tb_system__DOT__dut__DOT__sa = 0x33U;
            } else {
                if ((8U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                    if ((0xaU != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                        if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                            vlSelfRef.tb_system__DOT__dut__DOT__we_n = 0U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sa 
                        = (0x7ffU & (vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr 
                                     >> 8U));
                } else if ((0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sa 
                        = (0x400U | (0xffU & vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr));
                } else if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sa 
                        = (0x400U | (0xffU & vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr));
                }
            }
        }
    }
    vlSelfRef.tb_system__DOT__dut__DOT__ba = (3U & 
                                              (vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__transaction_addr 
                                               >> 0x13U));
    if ((1U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
        if (((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__cas_n = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_system__DOT__dut__DOT__cas_n = 0U;
        } else if ((8U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
            if ((0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_system__DOT__dut__DOT__cas_n = 0U;
            } else if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_system__DOT__dut__DOT__cas_n = 0U;
            }
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_system__DOT__dut__DOT__ba = 0U;
            }
        }
    }
    tb_system__DOT__dut__DOT__req_ready = ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                                           & (0x186U 
                                              > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__refresh_age)));
    vlSelfRef.tb_system__DOT__dut__DOT__dq_oe = ((0xdU 
                                                  == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)) 
                                                 | (0xeU 
                                                    == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__state)));
    vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__bist__rsp_valid 
        = ((5U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__rsp_valid));
    if (vlSelfRef.tb_system__DOT__dut__DOT__reset) {
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd_start = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd_lba = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16 = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__top_down = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__blue = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__green = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x = 0U;
        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__pending_addr = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__image_error = 0U;
        __Vdly__tb_system__DOT__dut__DOT__image_pixels = 0U;
        tb_system__DOT__dut__DOT__image_name = 0ULL;
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[0U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[1U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[2U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[3U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[4U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[5U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[6U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_system__DOT__dut__DOT__load_data[7U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_system__DOT__dut__DOT__load_last = 0U;
    } else {
        __Vdly__tb_system__DOT__dut__DOT__sd_start = 0U;
        if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_error))) {
            vlSelfRef.tb_system__DOT__dut__DOT__image_error 
                = (0x80U | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_error));
            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
        } else if (((((((((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state)) 
                          | (1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                         | (2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                        | (3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                       | (5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                      | (0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                     | (4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) 
                    | (6U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist_passed) 
                     & ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                        & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_initialized)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd_lba = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 2U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd_done) {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state 
                        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__after_read;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                if ((0xaa55U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                } else if (((0x200U == ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__16__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0xcU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0xbU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__16__Vfuncout))) 
                            & (0U != vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                               [0xdU]))) {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 3U;
                } else if ((0U != vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__partition_start)) {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base 
                        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__partition_start;
                    __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 3U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__17__lba 
                        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__partition_start;
                    __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                        = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__17__lba;
                } else {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 2U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                }
            } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                if (((((((0xaa55U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature)) 
                         | (0x200U != ([&]() {
                                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__18__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                          [0xcU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                         [0xbU]);
                                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__18__Vfuncout)))) 
                        | (0U == vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                           [0xdU])) | (0U != (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                              [0xdU] 
                                              & (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0xdU] 
                                                 - (IData)(1U))))) 
                      | (0U == ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__19__Vfuncout 
                                            = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__19__Vfuncout)))) 
                     | (0U == vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                        [0x10U]))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 3U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc 
                        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                        [0xdU];
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 5U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16 
                        = (0U != ([&]() {
                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__20__Vfuncout 
                                    = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__20__Vfuncout)));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base 
                        = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__volume_base 
                           + VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__21__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0xfU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0xeU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__21__Vfuncout))));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors 
                        = VL_SHIFTR_III(32,32,32, ((IData)(0xfU) 
                                                   + 
                                                   VL_EXTEND_II(32,16, 
                                                                ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__22__Vfuncout 
                                            = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                [0x12U] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0x11U]);
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__22__Vfuncout)))), 4U);
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base 
                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__volume_base 
                            + VL_EXTEND_II(32,16, ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__23__Vfuncout 
                                            = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                [0xfU] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xeU]);
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__23__Vfuncout)))) 
                           + (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                              [0x10U] * ((0U != ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__24__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__24__Vfuncout)))
                                          ? VL_EXTEND_II(32,16, 
                                                         ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__25__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                    [0x17U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x16U]);
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__25__Vfuncout)))
                                          : ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__26__Vfuncout 
                                            = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0x27U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x26U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x25U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                  [0x24U]));
                                    }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__26__Vfuncout))));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base 
                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__volume_base 
                             + VL_EXTEND_II(32,16, 
                                            ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__27__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                    [0xfU] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0xeU]);
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__27__Vfuncout)))) 
                            + (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                               [0x10U] * ((0U != ([&]() {
                                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__28__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__28__Vfuncout)))
                                           ? VL_EXTEND_II(32,16, 
                                                          ([&]() {
                                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__29__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                      [0x17U] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                     [0x16U]);
                                            }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__29__Vfuncout)))
                                           : ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__30__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                     [0x27U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                       [0x26U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                       [0x25U] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                      [0x24U]));
                                        }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__30__Vfuncout)))) 
                           + VL_SHIFTR_III(32,32,32, 
                                           ((IData)(0xfU) 
                                            + VL_EXTEND_II(32,16, 
                                                           ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__31__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                    [0x12U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x11U]);
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__31__Vfuncout)))), 4U));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster 
                        = ((0U != ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__32__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0x17U] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x16U]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__32__Vfuncout)))
                            ? 0U : (0xfffffffU & ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__33__Vfuncout 
                                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                             [0x2fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0x2eU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0x2dU] 
                                               << 8U) 
                                              | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                              [0x2cU]));
                                }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__33__Vfuncout)));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed 
                        = (0U != ([&]() {
                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__34__Vfuncout 
                                    = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                        [0x17U] << 8U) 
                                       | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                       [0x16U]);
                            }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__34__Vfuncout)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__directory_sectors)));
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index = 0U;
                if ((0xfffU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__directory_sectors))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 4U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                } else if (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed) {
                    if ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index 
                         >= vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_sectors)) {
                        vlSelfRef.tb_system__DOT__dut__DOT__image_error = 5U;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                    } else {
                        __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__35__lba 
                            = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_base 
                               + vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index);
                        __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                            = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__35__lba;
                        __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 0xdU;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                    }
                } else if ((2U > vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster)) {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 6U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                } else {
                    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__36__lba 
                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base 
                            + ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster 
                                - (IData)(2U)) * (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc))) 
                           + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector));
                    __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                        = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__36__lba;
                    __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 0xdU;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 
                    = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache_byte;
                __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 
                    = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index;
                __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__entry__v0 = 1U;
                if ((0x1fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index))) {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 4U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index = 0U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
                if ((0U == vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                     [0U])) {
                    vlSelfRef.tb_system__DOT__dut__DOT__image_error = 5U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
                } else if (((((((0xe5U != vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                 [0U]) & (0U == (0x18U 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                 [0xbU]))) 
                               & (0xfU != vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                  [0xbU])) & (0x42U 
                                              == ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c 
                                                = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                [8U];
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__Vfuncout 
                                                = (0xffU 
                                                   & (((0x61U 
                                                        <= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c)) 
                                                       & (0x7aU 
                                                          >= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c)))
                                                       ? 
                                                      ((IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c) 
                                                       - (IData)(0x20U))
                                                       : (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__c)));
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__37__Vfuncout)))) 
                             & (0x4dU == ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c 
                                            = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                            [9U];
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__Vfuncout 
                                            = (0xffU 
                                               & (((0x61U 
                                                    <= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c)) 
                                                   & (0x7aU 
                                                      >= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c)))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c) 
                                                   - (IData)(0x20U))
                                                   : (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__c)));
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__38__Vfuncout)))) 
                            & (0x50U == ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c 
                                        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                        [0xaU];
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__Vfuncout 
                                        = (0xffU & 
                                           (((0x61U 
                                              <= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c)) 
                                             & (0x7aU 
                                                >= (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c)))
                                             ? ((IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c) 
                                                - (IData)(0x20U))
                                             : (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__c)));
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__upper__39__Vfuncout))))) {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster 
                        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16)
                            ? VL_EXTEND_II(32,16, ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__40__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                            [0x1bU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                           [0x1aU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__40__Vfuncout)))
                            : (VL_EXTEND_II(32,16, 
                                            ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__41__Vfuncout 
                                            = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__41__Vfuncout))) 
                               | VL_SHIFTL_III(32,32,32, 
                                               VL_EXTEND_II(32,16, 
                                                            ([&]() {
                                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__42__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                    [0x15U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                   [0x14U]);
                                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__42__Vfuncout))), 0x10U)));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 7U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d32__43__Vfuncout 
                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                             [0x1fU] << 0x18U) | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                  [0x1eU] 
                                                  << 0x10U)) 
                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                               [0x1dU] << 8U) | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                              [0x1cU]));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size 
                        = __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d32__43__Vfuncout;
                    tb_system__DOT__dut__DOT__image_name 
                        = ((0xffffffffff000000ULL & tb_system__DOT__dut__DOT__image_name) 
                           | (IData)((IData)(((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                 [0U])))));
                    tb_system__DOT__dut__DOT__image_name 
                        = ((0xffff000000ffffffULL & tb_system__DOT__dut__DOT__image_name) 
                           | ((QData)((IData)(((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                [5U] 
                                                << 0x10U) 
                                               | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                   [4U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                  [3U])))) 
                              << 0x18U));
                    tb_system__DOT__dut__DOT__image_name 
                        = ((0xffffffffffffULL & tb_system__DOT__dut__DOT__image_name) 
                           | ((QData)((IData)(((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                [7U] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                               [6U]))) 
                              << 0x30U));
                    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__44__lba 
                        = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base 
                           + ((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16)
                                 ? VL_EXTEND_II(32,16, 
                                                ([&]() {
                                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__45__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                      [0x1bU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                     [0x1aU]);
                                            }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__45__Vfuncout)))
                                 : (VL_EXTEND_II(32,16, 
                                                 ([&]() {
                                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__46__Vfuncout 
                                                        = 
                                                        ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                          [0x1bU] 
                                                          << 8U) 
                                                         | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                         [0x1aU]);
                                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__46__Vfuncout))) 
                                    | VL_SHIFTL_III(32,32,32, 
                                                    VL_EXTEND_II(32,16, 
                                                                 ([&]() {
                                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__47__Vfuncout 
                                                            = 
                                                            ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                              [0x15U] 
                                                              << 8U) 
                                                             | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry
                                                             [0x14U]);
                                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__d16__47__Vfuncout))), 0x10U))) 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc)));
                    __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                        = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__44__lba;
                } else if ((0x1e0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos))) {
                    if (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed) {
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index);
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 5U;
                    } else if ((((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector)) 
                                < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc))) {
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector)));
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 5U;
                    } else {
                        __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__48__lba 
                            = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_base 
                               + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16)
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster, 8U)
                                   : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster, 7U)));
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file = 0U;
                        __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                            = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__48__lba;
                        __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 6U;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos 
                        = (0x1ffU & ((IData)(0x20U) 
                                     + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos)));
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0xdU;
                }
            } else if (((2U > vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry) 
                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16)
                            ? (0xfff8U <= vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry)
                            : (0xffffff8U <= vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry)))) {
                vlSelfRef.tb_system__DOT__dut__DOT__image_error 
                    = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_for_file)
                        ? 7U : 5U);
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster 
                    = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector = 0U;
                if (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_for_file) {
                    __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__49__lba 
                        = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base 
                           + ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry 
                               - (IData)(2U)) * (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc)));
                    __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                        = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__49__lba;
                    __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 8U;
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 5U;
                }
            }
        } else if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
            if (((((0x4d42U != ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__50__Vfuncout 
                                            = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                [1U] 
                                                << 8U) 
                                               | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0U]);
                                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__50__Vfuncout))) 
                   | (0x28U > ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__51__Vfuncout 
                                            = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0x11U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x10U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0xfU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                  [0xeU]));
                                    }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__51__Vfuncout))) 
                  | (1U != ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__52__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0x1bU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x1aU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__52__Vfuncout)))) 
                 | (0U != ([&]() {
                                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__53__Vfuncout 
                                    = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                         [0x21U] << 0x18U) 
                                        | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x20U] 
                                           << 0x10U)) 
                                       | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x1fU] 
                                           << 8U) | 
                                          vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                          [0x1eU]));
                            }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__53__Vfuncout)))) {
                vlSelfRef.tb_system__DOT__dut__DOT__image_error = 8U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
            } else if ((((0x280U != ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__54__Vfuncout 
                                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                             [0x15U] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0x14U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0x13U] 
                                               << 8U) 
                                              | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                              [0x12U]));
                                }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__54__Vfuncout)) 
                         | ((0x1e0U != ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__55__Vfuncout 
                                            = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0x19U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x18U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x17U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                  [0x16U]));
                                    }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__55__Vfuncout)) 
                            & (0xfffffe20U != ([&]() {
                                        __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__56__Vfuncout 
                                            = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0x19U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x18U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                   [0x17U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                  [0x16U]));
                                    }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__56__Vfuncout)))) 
                        | ((0x18U != ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__57__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0x1dU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x1cU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__57__Vfuncout))) 
                           & (0x20U != ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__58__Vfuncout 
                                        = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                            [0x1dU] 
                                            << 8U) 
                                           | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                           [0x1cU]);
                                }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__58__Vfuncout)))))) {
                vlSelfRef.tb_system__DOT__dut__DOT__image_error = 9U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
            } else if ((((0x36U > ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__59__Vfuncout 
                                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                             [0xdU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xcU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xbU] 
                                               << 8U) 
                                              | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                              [0xaU]));
                                }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__59__Vfuncout)) 
                         | (0x100000U < ([&]() {
                                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__60__Vfuncout 
                                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                             [0xdU] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xcU] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                               [0xbU] 
                                               << 8U) 
                                              | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                              [0xaU]));
                                }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__60__Vfuncout))) 
                        | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_size 
                           < vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__required_file_end))) {
                vlSelfRef.tb_system__DOT__dut__DOT__image_error = 0xaU;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
            } else {
                __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__61__Vfuncout 
                    = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                         [0xdU] << 0x18U) | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                             [0xcU] 
                                             << 0x10U)) 
                       | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                           [0xbU] << 8U) | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                          [0xaU]));
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset 
                    = __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__61__Vfuncout;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y = 0U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 8U;
                vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__top_down 
                    = (1U & (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                             [0x19U] >> 7U));
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba 
                    = (0x20U == ([&]() {
                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__62__Vfuncout 
                                = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                    [0x1dU] << 8U) 
                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                   [0x1cU]);
                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__62__Vfuncout)));
            }
        } else if ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
            if ((0x200U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos))) {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 9U;
            } else if ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_offset 
                        >= vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_size)) {
                vlSelfRef.tb_system__DOT__dut__DOT__image_error = 7U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos)));
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset 
                    = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_offset);
                if ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_offset 
                     >= vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__bmp_offset)) {
                    if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel))) {
                        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__blue 
                            = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache_byte;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 1U;
                    } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel))) {
                        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__green 
                            = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache_byte;
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel))) {
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel 
                            = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__rgba)
                                ? 3U : 0U);
                        __Vdly__tb_system__DOT__dut__DOT__image_pixels 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__image_pixels);
                        if ((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel))) {
                            VL_ASSIGNSEL_WI(256,32,
                                            (0xe0U 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel), 4U)), vlSelfRef.tb_system__DOT__dut__DOT__load_data, 
                                            (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__color) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__low_pixel)));
                        } else {
                            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel 
                                = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__color;
                        }
                        if ((0xfU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel))) {
                            if ((0x27U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_x))) {
                                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y 
                                    = (0x1ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__source_y)));
                                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x = 0U;
                            } else {
                                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_x)));
                            }
                            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel = 0U;
                            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__pending_addr 
                                = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__target_addr;
                            __Vdly__tb_system__DOT__dut__DOT__load_last 
                                = (0x4afffU == vlSelfRef.tb_system__DOT__dut__DOT__image_pixels);
                            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0xaU;
                        } else {
                            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel)));
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel))) {
                        __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel = 0U;
                    }
                }
            }
        } else if ((9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos = 0U;
            if ((((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector)) 
                 < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc))) {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector)));
                __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__63__lba 
                    = ((IData)(1U) + ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base 
                                       + ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster 
                                           - (IData)(2U)) 
                                          * (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc))) 
                                      + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector)));
                __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                    = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__63__lba;
                __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 8U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
            } else {
                __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__64__lba 
                    = (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_base 
                       + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16)
                           ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster, 8U)
                           : VL_SHIFTR_III(32,32,32, vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster, 7U)));
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file = 1U;
                __Vdly__tb_system__DOT__dut__DOT__sd_lba 
                    = __Vtask_tb_system__DOT__dut__DOT__loader__DOT__sector__64__lba;
                __Vdly__tb_system__DOT__dut__DOT__sd_start = 1U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read = 6U;
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 1U;
            }
        } else if ((0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
            if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fvalid) 
                 & ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req)) 
                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__req_ready)))) {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0xbU;
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT__load_ack) {
                __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state 
                    = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__load_last)
                        ? 0xcU : 8U);
            }
        } else if ((1U & (~ ((0xcU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state)) 
                             || (0x3fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state)))))) {
            vlSelfRef.tb_system__DOT__dut__DOT__image_error = 0xffU;
            __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state = 0x3fU;
        }
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__sd_byte_valid) {
        __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 
            = vlSelfRef.tb_system__DOT__dut__DOT__sd_byte;
        __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 
            = vlSelfRef.tb_system__DOT__dut__DOT__sd_index;
        __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__cache__v0 = 1U;
        if ((0x40U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index))) {
            __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__header__v0 
                = vlSelfRef.tb_system__DOT__dut__DOT__sd_byte;
            __VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__header__v0 
                = (0x3fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index));
            __VdlySet__tb_system__DOT__dut__DOT__loader__DOT__header__v0 = 1U;
        }
        if ((0x1feU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature 
                = ((0xff00U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature)) 
                   | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte));
        }
        if (((0x1c6U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index)) 
             & (0x1c9U >= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__partition_start 
                = (((~ ((IData)(0xffU) << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
                                                          - (IData)(0x1c6U)), 3U)))) 
                    & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__partition_start) 
                   | (0xffffffffULL & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte) 
                                       << (0x1fU & 
                                           VL_SHIFTL_III(5,32,32, 
                                                         ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
                                                          - (IData)(0x1c6U)), 3U)))));
        }
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
             == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached 
                = ((0xffffff00U & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached) 
                   | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte));
        }
        if ((0x1ffU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature 
                = ((0xffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__signature)) 
                   | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
             == ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached 
                = ((0xffff00ffU & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte) 
                      << 8U));
        }
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
             == ((IData)(2U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached 
                = ((0xff00ffffU & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte) 
                      << 0x10U));
        }
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_index) 
             == ((IData)(3U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset)))) {
            vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached 
                = ((0xffffffU & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached) 
                   | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_byte) 
                      << 0x18U));
        }
    }
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p 
        = vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__pattern;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__a 
        = tb_system__DOT__dut__DOT__bist__DOT__check_addr;
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__a 
                           << 0x15U) | __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__a));
    __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__p))
                                       ? __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__mixed
                                       : (~ __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__mixed))));
    vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__expected 
        = __Vfunc_tb_system__DOT__dut__DOT__bist__DOT__pattern_word__4__Vfuncout;
    vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__bist__req_ready 
        = ((5U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & (IData)(tb_system__DOT__dut__DOT__req_ready));
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__after_read 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__after_read;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__volume_base 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__volume_base;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_base 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_base;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__data_base 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__data_base;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_base 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_base;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__root_sectors 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__root_sectors;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__spc 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__spc;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster_sector 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster_sector;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_size 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_size;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__file_offset 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__file_offset;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__bmp_offset 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__bmp_offset;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_is_fixed;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__rgba 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__rgba;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_for_file 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat_for_file;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fixed_root_index;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__directory_sectors 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__directory_sectors;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__channel 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__channel;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_pixel 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_pixel;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__low_pixel 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__low_pixel;
    vlSelfRef.tb_system__DOT__dut__DOT__image_pixels 
        = __Vdly__tb_system__DOT__dut__DOT__image_pixels;
    if (__VdlySet__tb_system__DOT__dut__DOT__loader__DOT__entry__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry[__VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__entry__v0] 
            = __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__entry__v0;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__cluster;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_x 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__burst_x;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__fat16;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__source_y 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__source_y;
    vlSelfRef.tb_system__DOT__dut__DOT__bist_passed 
        = ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & (0U == vlSelfRef.tb_system__DOT__dut__DOT__errors));
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__entry_index;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__dir_pos;
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__byte_pos;
    if (__VdlySet__tb_system__DOT__dut__DOT__loader__DOT__cache__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache[__VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__cache__v0] 
            = __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__cache__v0;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__loader__DOT__state;
    tb_system__DOT__dut__DOT__fifo_used = (0xfffU & 
                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wp) 
                                            - ([&]() {
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g 
                        = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g)));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__g)));
                    vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_system__DOT__dut__DOT__fifo__DOT__binary__65__Vfuncout))));
    if (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat16) {
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset 
            = (0x1feU & (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster 
                         << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry 
            = (0xffffU & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached);
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_byte_offset 
            = (0x1fcU & (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cluster 
                         << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_entry 
            = (0xfffffffU & vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__fat_cached);
    }
    tb_system__DOT__dut__DOT__loader__DOT____VdfgRegularize_h5b62b4c5_1_0 
        = (0x1ffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__top_down)
                      ? (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__source_y)
                      : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__source_y))));
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache_byte 
        = vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache
        [(0x1ffU & ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))
                     ? ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos) 
                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index))
                     : (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos)))];
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__color 
        = ((0xf800U & (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__cache
                       [(0x1ffU & ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))
                                    ? ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__dir_pos) 
                                       + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__entry_index))
                                    : (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__byte_pos)))] 
                       << 8U)) | ((0x7e0U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__green) 
                                             << 3U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__blue) 
                                              >> 3U))));
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__required_file_end 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__reset)
            ? 0U : (([&]() {
                    __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__13__Vfuncout 
                        = (((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                             [0xdU] << 0x18U) | (vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                                 [0xcU] 
                                                 << 0x10U)) 
                           | ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                               [0xbU] << 8U) | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                              [0xaU]));
                }(), __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le32__13__Vfuncout) 
                    + ((0x18U == ([&]() {
                            __Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__14__Vfuncout 
                                = ((vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                    [0x1dU] << 8U) 
                                   | vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header
                                   [0x1cU]);
                        }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__loader__DOT__le16__14__Vfuncout)))
                        ? 0xe1000U : 0x12c000U)));
    if (vlSelfRef.tb_system__DOT__dut__DOT__reset) {
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0ULL;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count = 0xc350U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response = 0xffU;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2 = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd_initialized = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_done = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_byte_valid = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_index = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_byte = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 0U;
        __Vdly__tb_system__DOT__dut__DOT__sd_sectors = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__cs = 1U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr = 0x25800U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[0U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[1U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[2U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[3U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[4U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[5U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[6U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[7U] 
            = Vtb_system__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_system__DOT__dut__DOT__display_valid = 0U;
        __Vdly__tb_system__DOT__dut__DOT__front_bank = 0U;
        __Vdly__tb_system__DOT__dut__DOT__swaps = 0U;
        __Vdly__tb_system__DOT__dut__DOT__frames_written = 0U;
        __Vdly__tb_system__DOT__dut__DOT__dma_reads = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fb_fault = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__load_ack = 0U;
        __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__sd_done = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd_byte_valid = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((0U == vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__power_count)) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 0xaU;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 1U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count 
                        = (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__power_count 
                           - (IData)(1U));
                }
            } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                    if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left))) {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 3U;
                    } else {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left 
                            = (0xfU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left) 
                                       - (IData)(1U)));
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0x400000000095ULL;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 4U;
                vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
            } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0x48000001aa87ULL;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 4U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 5U;
                    vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response)) 
                     & (0x1aaU == (0xfffU & vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2 = 1U;
                } else if ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2 = 0U;
                } else {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 2U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                }
                if (((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response)) 
                     | (5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0x770000000001ULL;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 7U;
                vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
            } else if ((1U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response))) {
                vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 3U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
            } else {
                __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__8__argument 
                    = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__v2)
                        ? 0x40000000U : 0U);
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame 
                    = (0x690000000001ULL | ((QData)((IData)(__Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__8__argument)) 
                                            << 8U));
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 8U;
                vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                          | (9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                         | (0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                        | (0xbU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                       | (0xcU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                      | (0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                     | (0x14U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                    | (0x15U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)))) {
            if ((8U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 9U;
                } else if (((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response)) 
                            & (0x7d0U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__init_attempts)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__init_attempts)));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 6U;
                } else {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 4U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                }
            } else if ((9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0x7a0000000001ULL;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 4U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 0xaU;
                vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
            } else if ((0xaU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response)) 
                           | (~ (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra 
                                 >> 0x1fU))))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 5U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity 
                        = (1U & (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra 
                                 >> 0x1eU));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state 
                        = ((0x40000000U & vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra)
                            ? 0xcU : 0xbU);
                }
            } else if ((0xbU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame = 0x500000020001ULL;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 0xcU;
                vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
            } else if ((0xcU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 6U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                } else {
                    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd_initialized = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0xdU;
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd_start) {
                    __Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__11__argument 
                        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__high_capacity)
                            ? vlSelfRef.tb_system__DOT__dut__DOT__sd_lba
                            : VL_SHIFTL_III(32,32,32, vlSelfRef.tb_system__DOT__dut__DOT__sd_lba, 9U));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame 
                        = (0x510000000001ULL | ((QData)((IData)(__Vtask_tb_system__DOT__dut__DOT__sd__DOT__command__11__argument)) 
                                                << 8U));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left = 6U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation = 0xdU;
                    vlSelfRef.__Vdly__tb_system__DOT__cs = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
                }
            } else if ((0x14U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x15U;
                }
            } else if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame 
                    = (0xffULL | (0xffffffffff00ULL 
                                  & (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__frame 
                                     << 8U)));
                if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x16U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left 
                        = (0xfU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left) 
                                   - (IData)(1U)));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x14U;
                }
            }
        } else if (((((((((0x16U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                          | (0x17U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                         | (0x18U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                        | (0x19U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                       | (0x1aU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                      | (0x1bU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                     | (0x1cU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) 
                    | (0x1dU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)))) {
            if ((0x16U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x17U;
                }
            } else if ((0x17U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                    if ((0x80U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx))) {
                        if ((0x7fU == vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count)) {
                            vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 7U;
                            __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                        } else {
                            __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count 
                                = (0xfffffU & ((IData)(1U) 
                                               + vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count));
                            __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x16U;
                        }
                    } else {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response 
                            = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx;
                        if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__reading) {
                            if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx))) {
                                vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 8U;
                                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                            } else {
                                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count = 0U;
                                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1cU;
                            }
                        } else {
                            __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state 
                                = (((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__extra_count)) 
                                    & (5U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx)))
                                    ? 0x18U : 0x1aU);
                        }
                    }
                }
            } else if ((0x18U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x19U;
                }
            } else if ((0x19U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra 
                        = ((vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra 
                            << 8U) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx));
                    if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__extra_count))) {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1aU;
                    } else {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count 
                            = (7U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__extra_count) 
                                     - (IData)(1U)));
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x18U;
                    }
                }
            } else if ((0x1aU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                vlSelfRef.__Vdly__tb_system__DOT__cs = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1bU;
                }
            } else if ((0x1bU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state 
                        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__continuation;
                    if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__reading) {
                        __Vdly__tb_system__DOT__dut__DOT__sd_sectors 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__sd_sectors);
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading = 0U;
                        vlSelfRef.tb_system__DOT__dut__DOT__sd_done = 1U;
                    }
                }
            } else if ((0x1cU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1dU;
                }
            } else if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                if ((0xfeU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc = 0U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1eU;
                } else if (((0xffU != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx)) 
                            | (0x7ffffU == vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count))) {
                    vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 9U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1cU;
                }
            }
        } else if ((0x1eU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1fU;
            }
        } else if ((0x1fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__value 
                    = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx;
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__previous 
                    = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_crc;
                vlSelfRef.tb_system__DOT__dut__DOT__sd_byte 
                    = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx;
                vlSelfRef.tb_system__DOT__dut__DOT__sd_index 
                    = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_index;
                vlSelfRef.tb_system__DOT__dut__DOT__sd_byte_valid = 1U;
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = ((IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__previous) 
                       ^ ((IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__value) 
                          << 8U));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c 
                    = (0xffffU & ((0x8000U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c))
                                   ? (0x1021U ^ VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U))
                                   : VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c), 1U)));
                if ((0x1ffU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_index))) {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left = 2U;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x20U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_index)));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1eU;
                }
                __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__Vfuncout 
                    = __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__c;
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc 
                    = __Vfunc_tb_system__DOT__dut__DOT__sd__DOT__crc16_byte__12__Vfuncout;
            }
        } else if ((0x20U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)))) {
                __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x21U;
            }
        } else if ((0x21U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done) {
                if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__crc_left))) {
                    if (((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__received_crc_high) 
                           << 8U) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx)) 
                         != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_crc))) {
                        vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 0xaU;
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
                    } else {
                        __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x1aU;
                    }
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left 
                        = (3U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__crc_left) 
                                 - (IData)(1U)));
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high 
                        = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx;
                    __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x20U;
                }
            }
        } else if ((0x3fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))) {
            vlSelfRef.__Vdly__tb_system__DOT__cs = 1U;
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__sd_error = 0xffU;
            __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state = 0x3fU;
        }
        vlSelfRef.tb_system__DOT__dut__DOT__load_ack = 0U;
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__ft2) 
             != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__last_frame))) {
            __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame 
                = vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__ft2;
            __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending = 1U;
        }
        if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush))) {
            __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush 
                = (0x3fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush) 
                            - (IData)(1U)));
        }
        if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state)) 
             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__frame_pending))) {
            __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending = 0U;
            if (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__enabled) {
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush = 0x1fU;
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr = 0U;
                if (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__back_ready) {
                    __Vdly__tb_system__DOT__dut__DOT__front_bank 
                        = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__front_bank)));
                    __Vdly__tb_system__DOT__dut__DOT__swaps 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__swaps);
                    vlSelfRef.tb_system__DOT__dut__DOT__display_valid = 1U;
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready = 0U;
                }
            }
        } else if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state))) {
            if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fvalid) 
                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__req_ready))) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req) {
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 1U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 3U;
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last 
                        = vlSelfRef.tb_system__DOT__dut__DOT__load_last;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__rsp_valid) {
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr 
                    = (0x3ffffU & ((IData)(8U) + vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__rd_addr));
                __Vdly__tb_system__DOT__dut__DOT__dma_reads 
                    = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__dma_reads);
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[0U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[0U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[1U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[1U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[2U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[2U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[3U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[3U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[4U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[4U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[5U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[5U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[6U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[6U];
                vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__read_buffer[7U] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__rdata[7U];
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat = 0U;
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_full)))) {
                if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat))) {
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 0U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state))) {
            if (vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__rsp_valid) {
                __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 0U;
                vlSelfRef.tb_system__DOT__dut__DOT__load_ack = 1U;
                if (vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__transaction_last) {
                    __Vdly__tb_system__DOT__dut__DOT__frames_written 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__frames_written);
                    __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready = 1U;
                }
            }
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__fb_fault = 1U;
            __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__target_addr 
        = (0x3ffffU & (VL_SHIFTL_III(18,18,32, tb_system__DOT__dut__DOT__loader__DOT____VdfgRegularize_h5b62b4c5_1_0, 8U) 
                       + (VL_SHIFTL_III(18,18,32, tb_system__DOT__dut__DOT__loader__DOT____VdfgRegularize_h5b62b4c5_1_0, 6U) 
                          + ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__burst_x) 
                             << 3U))));
    if (__VdlySet__tb_system__DOT__dut__DOT__loader__DOT__header__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__header[__VdlyDim0__tb_system__DOT__dut__DOT__loader__DOT__header__v0] 
            = __VdlyVal__tb_system__DOT__dut__DOT__loader__DOT__header__v0;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__sd_start = __Vdly__tb_system__DOT__dut__DOT__sd_start;
    vlSelfRef.tb_system__DOT__dut__DOT__sd_lba = __Vdly__tb_system__DOT__dut__DOT__sd_lba;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__continuation 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__continuation;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__bytes_left 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__bytes_left;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__power_count 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__power_count;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response_extra 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response_extra;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__timeout_count 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__timeout_count;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__init_attempts 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__init_attempts;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__response 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__response;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__extra_count 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__extra_count;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__high_capacity 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__high_capacity;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__v2 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__v2;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__reading 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__reading;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__crc_left 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__crc_left;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_crc 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_crc;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__received_crc_high 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__received_crc_high;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__data_index 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__data_index;
    vlSelfRef.tb_system__DOT__dut__DOT__sd_sectors 
        = __Vdly__tb_system__DOT__dut__DOT__sd_sectors;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__frame 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__frame;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__sd__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__last_frame 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__last_frame;
    vlSelfRef.tb_system__DOT__dut__DOT__swaps = __Vdly__tb_system__DOT__dut__DOT__swaps;
    vlSelfRef.tb_system__DOT__dut__DOT__frames_written 
        = __Vdly__tb_system__DOT__dut__DOT__frames_written;
    vlSelfRef.tb_system__DOT__dut__DOT__dma_reads = __Vdly__tb_system__DOT__dut__DOT__dma_reads;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__transaction_last 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__transaction_last;
    vlSelfRef.tb_system__DOT__dut__DOT__front_bank 
        = __Vdly__tb_system__DOT__dut__DOT__front_bank;
    vlSelfRef.tb_system__DOT__dut__DOT__load_last = __Vdly__tb_system__DOT__dut__DOT__load_last;
    vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__rsp_valid 
        = ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__rsp_valid));
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[0U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[0U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[1U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[1U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[2U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[2U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[3U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[3U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[4U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[4U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[5U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[5U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[6U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[6U];
    vlSelfRef.tb_system__DOT__dut__DOT__rdata[7U] = 
        __Vdly__tb_system__DOT__dut__DOT__rdata[7U];
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__beat 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__beat;
    vlSelfRef.tb_system__DOT__dut__DOT____Vcellinp__fb__req_ready 
        = ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & (IData)(tb_system__DOT__dut__DOT__req_ready));
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__frame_pending 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__frame_pending;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__back_ready 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__back_ready;
    vlSelfRef.tb_system__DOT__dut__DOT__fifo_full = 
        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wgray) 
         == ((0xc00U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg2) 
                            >> 0xaU)) << 0xaU)) | (0x3ffU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__rd_addr 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__rd_addr;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush 
        = __Vdly__tb_system__DOT__dut__DOT__fb__DOT__flush;
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__enabled 
        = ((5U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
           & ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb_fault)) 
              & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist_passed)));
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__display_valid) 
           & ((0x25800U > vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__rd_addr) 
              & (0x7f0U >= (IData)(tb_system__DOT__dut__DOT__fifo_used))));
    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__push 
        = (((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_full)) 
            & (2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state))) 
           & (0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush)));
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__ft2 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__reset))) 
           && (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__ft1));
    vlSelfRef.tb_system__DOT__dut__DOT__fvalid = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__enabled) 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__state)) 
                                                     & ((0U 
                                                         == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush)) 
                                                        & ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__frame_pending)) 
                                                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__video_req) 
                                                              | ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__back_ready)) 
                                                                 & (0xaU 
                                                                    == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state))))))));
    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wn 
        = (0xfffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wp) 
                     + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__push)));
    vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__ft1 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__reset))) 
           && (IData)(vlSelfRef.tb_system__DOT__dut__DOT__frame_toggle));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__5(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_system__DOT__cs) {
        vlSelfRef.tb_system__DOT__card__DOT__cmdbytes = 0U;
        vlSelfRef.tb_system__DOT__card__DOT__bits = 0U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__6(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__6\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__locked = vlSelfRef.tb_system__DOT__run_n;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__8(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__8\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__dq_capture 
        = ((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)
              ? 0U : 0xffffffffU) & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)
                                       ? 0U : 0xffffffffU) 
                                     & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)
                                         ? 0U : vlSelfRef.tb_system__DOT__model_data))) 
           | (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)
                ? vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U]
                : 0U) & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)
                          ? 0xffffffffU : 0U)));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__9(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__9\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__pr = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__pr;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__10(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__10\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__mr = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__mr;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__11(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__11\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count;
    vlSelfRef.tb_system__DOT__dut__DOT__frame_toggle 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__frame_toggle;
    vlSelfRef.tb_system__DOT__dut__DOT__tone_muted 
        = ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count)) 
           | ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__audio_mode)) 
              | (((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__beep_phase)) 
                  & (3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__audio_mode))) 
                 | ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__audio_mode)) 
                    & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__ms) 
                        >> 1U) | ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__cs) 
                                      >> 1U)) & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__beep_phase))))))));
    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rgray 
        = ((4U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr))
            ? 0U : (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rn), 1U) 
                              ^ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rn))));
    vlSelfRef.tb_system__DOT__dut__DOT__fifo_empty 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rgray) 
           == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg2));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__12(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__12\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_system__DOT__dut__DOT__reset) {
        vlSelfRef.__Vdly__tb_system__DOT__sck = 0U;
        vlSelfRef.tb_system__DOT__mosi = 1U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__busy = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__rx = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done = 0U;
        if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy) {
            if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count))) {
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count 
                    = (0xffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count) 
                                - (IData)(1U)));
            } else {
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count 
                    = (0xffU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_initialized)
                                  ? 2U : 0x7dU) - (IData)(1U)));
                if (vlSelfRef.tb_system__DOT__sck) {
                    vlSelfRef.__Vdly__tb_system__DOT__sck = 0U;
                    if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno))) {
                        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__busy = 0U;
                        vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi_done = 1U;
                        vlSelfRef.tb_system__DOT__mosi = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno 
                            = (7U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno) 
                                     - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift 
                            = (1U | (0xfeU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift) 
                                              << 1U)));
                        vlSelfRef.tb_system__DOT__mosi 
                            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift) 
                                     >> 6U));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__rx 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx) 
                                     << 1U)) | (IData)(vlSelfRef.tb_system__DOT__miso));
                    vlSelfRef.__Vdly__tb_system__DOT__sck = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_system__DOT__sck = 0U;
            if (vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT____Vcellinp__spi__start) {
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__busy = 1U;
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift 
                    = vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__send_byte;
                vlSelfRef.tb_system__DOT__mosi = (1U 
                                                  & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__send_byte) 
                                                     >> 7U));
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count 
                    = (0xffU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_initialized)
                                  ? 2U : 0x7dU) - (IData)(1U)));
                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno = 7U;
            }
        }
    }
    vlSelfRef.tb_system__DOT__sck = vlSelfRef.__Vdly__tb_system__DOT__sck;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__count;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__shift;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__spi__DOT__bitno;
    vlSelfRef.tb_system__DOT__dut__DOT__sd_initialized 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd_initialized;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__rx 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__rx;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__send_byte 
        = ((0x14U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))
            ? (0xffU & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__frame 
                                >> 0x28U))) : 0xffU);
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy 
        = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__sd__DOT__busy;
    vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT____Vcellinp__spi__start 
        = ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__busy)) 
           & ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
              | ((0x14U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                 | ((0x16U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                    | ((0x18U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                       | ((0x1aU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                          | ((0x1cU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                             | ((0x1eU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state)) 
                                | (0x20U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state))))))))));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__13(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__13\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_system__DOT__model_data__v0) {
        vlSelfRef.__VdlySet__tb_system__DOT__model_data__v0 = 0U;
        vlSelfRef.tb_system__DOT__model_data = vlSelfRef.__VdlyVal__tb_system__DOT__model_data__v0;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_comb__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_comb__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset 
        = (IData)((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pr) 
                    >> 3U) | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count))));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__14(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__14\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__fr = vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__fr;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__15(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__15\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_system__DOT__cs) {
        vlSelfRef.tb_system__DOT__card__DOT__head = 0U;
        vlSelfRef.tb_system__DOT__card__DOT__tail = 0U;
        vlSelfRef.tb_system__DOT__card__DOT__outbit = 7U;
        vlSelfRef.tb_system__DOT__miso = 1U;
    } else if (VL_LTS_III(32, vlSelfRef.tb_system__DOT__card__DOT__head, vlSelfRef.tb_system__DOT__card__DOT__tail)) {
        vlSelfRef.tb_system__DOT__miso = (1U & (vlSelfRef.tb_system__DOT__card__DOT__response
                                                [(0x3ffU 
                                                  & vlSelfRef.tb_system__DOT__card__DOT__head)] 
                                                >> 
                                                (7U 
                                                 & vlSelfRef.tb_system__DOT__card__DOT__outbit)));
        if ((0U == vlSelfRef.tb_system__DOT__card__DOT__outbit)) {
            vlSelfRef.tb_system__DOT__card__DOT__head 
                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__head);
            vlSelfRef.tb_system__DOT__card__DOT__outbit = 7U;
        } else {
            vlSelfRef.tb_system__DOT__card__DOT__outbit 
                = (vlSelfRef.tb_system__DOT__card__DOT__outbit 
                   - (IData)(1U));
        }
    } else {
        vlSelfRef.tb_system__DOT__miso = 1U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_comb__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_comb__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__reset = (IData)(
                                                        (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__mr) 
                                                          >> 3U) 
                                                         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__restart_sync) 
                                                            >> 1U)));
    vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset 
        = (1U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__display_valid) 
                     & (0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb__DOT__flush)))) 
                 | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__reset)));
}

VL_INLINE_OPT void Vtb_system___024root___nba_comb__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_comb__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rn 
        = (0xfffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rp) 
                     + ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_empty)) 
                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__active) 
                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__x) 
                              & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr) 
                                     >> 2U)) & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dv) 
                                                >> 1U)))))));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__16(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__16\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__cs = vlSelfRef.__Vdly__tb_system__DOT__cs;
}

void Vtb_system___024root___timing_resume(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___timing_resume\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1608b681__0.resume(
                                                   "@( ((tb_system.dut.display_valid | (8'h0 != tb_system.dut.image_error)) | (8'h0 != tb_system.dut.sd_error)))");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3b5ce6be__0.resume(
                                                   "@( (32'sh2 == tb_system.frames))");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h536dd497__0.resume(
                                                   "@(negedge tb_system.dut.pixel_clk)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h536dd4d6__0.resume(
                                                   "@(posedge tb_system.dut.pixel_clk)");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5c3be8d7__0.resume(
                                                   "@(negedge tb_system.dut.mem_clk)");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_system___024root___timing_commit(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___timing_commit\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x10000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1608b681__0.commit(
                                                   "@( ((tb_system.dut.display_valid | (8'h0 != tb_system.dut.image_error)) | (8'h0 != tb_system.dut.sd_error)))");
    }
    if ((! (0x20000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3b5ce6be__0.commit(
                                                   "@( (32'sh2 == tb_system.frames))");
    }
    if ((! (0x40000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h536dd497__0.commit(
                                                   "@(negedge tb_system.dut.pixel_clk)");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h536dd4d6__0.commit(
                                                   "@(posedge tb_system.dut.pixel_clk)");
    }
    if ((! (0x800ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5c3be8d7__0.commit(
                                                   "@(negedge tb_system.dut.mem_clk)");
    }
}

void Vtb_system___024root___eval_triggers__act(Vtb_system___024root* vlSelf);

bool Vtb_system___024root___eval_phase__act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<19> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_system___024root___eval_triggers__act(vlSelf);
    Vtb_system___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_system___024root___timing_resume(vlSelf);
        Vtb_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_system___024root___eval_phase__nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_system___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__nba(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_system___024root___eval(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_system___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_system.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_system___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_system.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_system___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_system___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_system___024root___eval_debug_assertions(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_debug_assertions\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
