// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_osd_menu.h for the primary calling header

#include "Vtb_osd_menu__pch.h"
#include "Vtb_osd_menu___024root.h"

VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0(Vtb_osd_menu___024root* vlSelf);
VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1(Vtb_osd_menu___024root* vlSelf);
VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_initial(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_osd_menu.sv", 
                                             3);
        vlSelfRef.tb_osd_menu__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__clk)));
    }
}

void Vtb_osd_menu___024root___act_comb__TOP__0(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_osd_menu___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h36996a42_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h934acd01_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h1505f184_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h75e9574a_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h1e639333_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h79d2839a_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h07793636_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hedbe703e_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h91469838_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_h192a9777_0;
extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hc8144a76_0;

VL_INLINE_OPT void Vtb_osd_menu___024root___act_comb__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___act_comb__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
    if ((0x31eU <= (IData)(vlSelfRef.tb_osd_menu__DOT__x))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(vlSelfRef.tb_osd_menu__DOT__x) 
               - (IData)(0x31eU));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_osd_menu__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__y))));
    } else {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(2U) + (IData)(vlSelfRef.tb_osd_menu__DOT__x));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_osd_menu__DOT__y));
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x 
        = (0x3ffU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                     + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[0U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[1U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[2U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[3U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[4U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[5U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[6U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[7U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[8U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[9U];
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[9U];
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[9U];
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[9U];
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[9U];
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[9U];
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[9U];
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[9U];
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[9U];
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[9U];
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[9U];
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[9U];
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[9U];
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[0U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[1U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[2U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[3U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[4U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[5U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[6U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[7U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[8U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[9U];
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[0U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[1U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[2U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[3U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[4U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[5U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[6U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[7U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[8U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[9U];
    }
    if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xf8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0x14U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 0x10U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xe0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0xcU));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 8U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xc8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n 
                            = (0xfU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm);
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout))));
    }
    if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout) 
                  << 0x18U));
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout) 
                  << 0x18U));
    }
    if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xb8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xa0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout))));
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout) 
                  << 8U));
    }
    if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__source)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = (0x54535400U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U]));
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x53544f50U;
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__muted) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4d555445U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = (0x4c440000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = (0x484fU | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U]));
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0x58U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout))));
        if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4e4f4e45U;
        } else if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4641494cU;
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = (0x57415600U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]));
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  >> 8U));
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__name));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 8U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x10U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x18U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x28U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x30U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x38U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0));
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = (0x574156U | (0xff000000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U]));
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[9U];
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[9U];
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[9U];
        }
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[9U];
            } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[9U];
            } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[9U];
            } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[9U];
            } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[9U];
            } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[9U];
            } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                           >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[9U];
            } else {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[9U];
            }
        }
    }
    if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                            >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0x118U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xd8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0x98U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout))));
    }
}

void Vtb_osd_menu___024root___nba_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf);
void Vtb_osd_menu___024root___nba_comb__TOP__0(Vtb_osd_menu___024root* vlSelf);

void Vtb_osd_menu___024root___eval_nba(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_nba\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_osd_menu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_osd_menu___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0;
extern const VlWide<16>/*511:0*/ Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0;

VL_INLINE_OPT void Vtb_osd_menu___024root___nba_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___nba_sequent__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c = 0;
    IData/*31:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps = 0;
    IData/*31:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__timer;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0;
    CData/*1:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__pending;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__select_request;
    __Vdly__tb_osd_menu__DOT__select_request = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__gallery__DOT__loading;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 0;
    CData/*0:0*/ __Vdly__tb_osd_menu__DOT__opened;
    __Vdly__tb_osd_menu__DOT__opened = 0;
    CData/*5:0*/ __Vdly__tb_osd_menu__DOT__query;
    __Vdly__tb_osd_menu__DOT__query = 0;
    SData/*9:0*/ __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
    __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = 0;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    __Vdly__tb_osd_menu__DOT__opened = vlSelfRef.tb_osd_menu__DOT__opened;
    __Vdly__tb_osd_menu__DOT__query = vlSelfRef.tb_osd_menu__DOT__query;
    __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps 
        = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer;
    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending 
        = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending;
    if (vlSelfRef.tb_osd_menu__DOT__select_request) {
        __Vdly__tb_osd_menu__DOT__select_request = 1U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading 
            = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading;
        vlSelfRef.tb_osd_menu__DOT__selections = ((IData)(1U) 
                                                  + vlSelfRef.tb_osd_menu__DOT__selections);
        vlSelfRef.tb_osd_menu__DOT__chosen = vlSelfRef.tb_osd_menu__DOT__selected;
    } else {
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading 
            = vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading;
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        __Vtemp_2[0U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0U];
        __Vtemp_2[1U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[1U];
        __Vtemp_2[2U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[2U];
        __Vtemp_2[3U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[3U];
        __Vtemp_2[4U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[4U];
        __Vtemp_2[5U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[5U];
        __Vtemp_2[6U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[6U];
        __Vtemp_2[7U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[7U];
        __Vtemp_2[8U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[8U];
        __Vtemp_2[9U] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[9U];
        __Vtemp_2[0xaU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xaU];
        __Vtemp_2[0xbU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xbU];
        __Vtemp_2[0xcU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xcU];
        __Vtemp_2[0xdU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xdU];
        __Vtemp_2[0xeU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xeU];
        __Vtemp_2[0xfU] = Vtb_osd_menu__ConstPool__CONST_h9561fe9e_0[0xfU];
    } else {
        __Vtemp_2[0U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0U];
        __Vtemp_2[1U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[1U];
        __Vtemp_2[2U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[2U];
        __Vtemp_2[3U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[3U];
        __Vtemp_2[4U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[4U];
        __Vtemp_2[5U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[5U];
        __Vtemp_2[6U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[6U];
        __Vtemp_2[7U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[7U];
        __Vtemp_2[8U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[8U];
        __Vtemp_2[9U] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[9U];
        __Vtemp_2[0xaU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xaU];
        __Vtemp_2[0xbU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xbU];
        __Vtemp_2[0xcU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xcU];
        __Vtemp_2[0xdU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xdU];
        __Vtemp_2[0xeU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xeU];
        __Vtemp_2[0xfU] = Vtb_osd_menu__ConstPool__CONST_h9165c8e9_0[0xfU];
    }
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        __Vdly__tb_osd_menu__DOT__osd__DOT__scroll = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll 
            = __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__con = 4U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri = 4U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__source = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__muted = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode = 1U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__img = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol = 8U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__name = 0ULL;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__se = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__we = 0U;
        vlSelfRef.tb_osd_menu__DOT__color = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            __Vdly__tb_osd_menu__DOT__osd__DOT__scroll 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__con = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm = 0x12345U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__source = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__muted = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__img = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol = 8U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__name = 0x202020324f4d4544ULL;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__se = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie = 0U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__we = 0U;
        }
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll 
            = __Vdly__tb_osd_menu__DOT__osd__DOT__scroll;
        vlSelfRef.tb_osd_menu__DOT__color = ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected)
                                              ? 0x60ffffU
                                              : 0xffffffU);
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__selected 
        = ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
           && ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
               & ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U))) | (0xbU 
                                               == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U))))));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ch = ((IData)(vlSelfRef.tb_osd_menu__DOT__reset)
                                                 ? 0x20U
                                                 : 
                                                (0xffU 
                                                 & ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                         >> 4U)))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (((IData)(0x1ffU) 
                                                            - 
                                                            VL_SHIFTL_III(9,32,32, 
                                                                          (0x3fU 
                                                                           & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                              >> 4U)), 3U)) 
                                                           - (IData)(7U))))
                                                       ? 0U
                                                       : 
                                                      (__Vtemp_2[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x1ffU 
                                                          & (((IData)(0x1ffU) 
                                                              - 
                                                              VL_SHIFTL_III(9,32,32, 
                                                                            (0x3fU 
                                                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                                >> 4U)), 3U)) 
                                                             - (IData)(7U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (((IData)(0x1ffU) 
                                                             - 
                                                             VL_SHIFTL_III(9,32,32, 
                                                                           (0x3fU 
                                                                            & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                               >> 4U)), 3U)) 
                                                            - (IData)(7U)))))) 
                                                     | (__Vtemp_2[
                                                        (0xfU 
                                                         & ((((IData)(0x1ffU) 
                                                              - 
                                                              VL_SHIFTL_III(9,32,32, 
                                                                            (0x3fU 
                                                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                                >> 4U)), 3U)) 
                                                             - (IData)(7U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & (((IData)(0x1ffU) 
                                                             - 
                                                             VL_SHIFTL_III(9,32,32, 
                                                                           (0x3fU 
                                                                            & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                                                               >> 4U)), 3U)) 
                                                            - (IData)(7U)))))
                                                     : 
                                                    ((0x28U 
                                                      > 
                                                      (0x3fU 
                                                       & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                          >> 4U)))
                                                      ? 
                                                     ((0x13fU 
                                                       >= 
                                                       (0x1ffU 
                                                        & (((IData)(0x13fU) 
                                                            - 
                                                            VL_SHIFTL_III(9,32,32, 
                                                                          (0x3fU 
                                                                           & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                              >> 4U)), 3U)) 
                                                           - (IData)(7U))))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & (((IData)(0x13fU) 
                                                              - 
                                                              VL_SHIFTL_III(9,32,32, 
                                                                            (0x3fU 
                                                                             & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                                >> 4U)), 3U)) 
                                                             - (IData)(7U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[
                                                         (((IData)(7U) 
                                                           + 
                                                           (0x1ffU 
                                                            & (((IData)(0x13fU) 
                                                                - 
                                                                VL_SHIFTL_III(9,32,32, 
                                                                              (0x3fU 
                                                                               & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                                >> 4U)), 3U)) 
                                                               - (IData)(7U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & (((IData)(0x13fU) 
                                                               - 
                                                               VL_SHIFTL_III(9,32,32, 
                                                                             (0x3fU 
                                                                              & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                                >> 4U)), 3U)) 
                                                              - (IData)(7U)))))) 
                                                       | (vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[
                                                          (0xfU 
                                                           & ((((IData)(0x13fU) 
                                                                - 
                                                                VL_SHIFTL_III(9,32,32, 
                                                                              (0x3fU 
                                                                               & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                                >> 4U)), 3U)) 
                                                               - (IData)(7U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & (((IData)(0x13fU) 
                                                               - 
                                                               VL_SHIFTL_III(9,32,32, 
                                                                             (0x3fU 
                                                                              & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                                                                >> 4U)), 3U)) 
                                                              - (IData)(7U)))))
                                                       : 0U)
                                                      : 0x20U))));
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c 
        = vlSelfRef.tb_osd_menu__DOT__osd__DOT__ch;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout 
        = ((0x80U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
            ? 0x3844040810001000ULL : ((0x40U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                        ? ((0x20U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                            ? 0x3844040810001000ULL
                                            : ((0x10U 
                                                & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                ? (
                                                   (8U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c00ULL
                                                       : 0x3844040810001000ULL)
                                                      : 0x3844040810001000ULL)
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844040810001000ULL
                                                       : 0x7c04081020407c00ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x4444281010101000ULL
                                                       : 0x4444281028444400ULL)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x44444454546c4400ULL
                                                       : 0x4444444444281000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x4444444444443800ULL
                                                       : 0x7c10101010101000ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3c40403804047800ULL
                                                       : 0x7844447850484400ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844444454483400ULL
                                                       : 0x7844447840404000ULL))))
                                                : (
                                                   (8U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844444444443800ULL
                                                       : 0x4464544c44444400ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x446c545444444400ULL
                                                       : 0x4040404040407c00ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x4448506050484400ULL
                                                       : 0x1c08080848483000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3810101010103800ULL
                                                       : 0x4444447c44444400ULL)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844405c44443c00ULL
                                                       : 0x7c40407840404000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c40407840407c00ULL
                                                       : 0x7844444444447800ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844404040443800ULL
                                                       : 0x7844447844447800ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844447c44444400ULL
                                                       : 0x3844040810001000ULL))))))
                                        : ((0x20U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                            ? ((0x10U 
                                                & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                ? (
                                                   (8U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844040810001000ULL
                                                       : 0x4020100810204000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c007c000000ULL
                                                       : 0x3844040810001000ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844040810001000ULL
                                                       : 0x30300030300000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844443c04043800ULL
                                                       : 0x3844443844443800ULL)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c04081020202000ULL
                                                       : 0x3840407844443800ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c40407804047800ULL
                                                       : 0x81828487c080800ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7804043804047800ULL
                                                       : 0x3844040810207c00ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x1030101010103800ULL
                                                       : 0x38444c5464443800ULL))))
                                                : (
                                                   (8U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x404081020404000ULL
                                                       : 0x303000ULL)
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x7c00000000ULL
                                                       : 0x3844040810001000ULL))
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x10107c10100000ULL
                                                       : 0x3844040810001000ULL)
                                                      : 0x3844040810001000ULL))
                                                    : 
                                                   ((4U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                     ? 0x3844040810001000ULL
                                                     : 
                                                    ((2U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                      ? 0x3844040810001000ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c))
                                                       ? 0x3844040810001000ULL
                                                       : 0ULL)))))
                                            : 0x3844040810001000ULL)));
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__q = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc = 0U;
        vlSelfRef.tb_osd_menu__DOT__ink = 0U;
        vlSelfRef.tb_osd_menu__DOT__shade = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__q = 1U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic = 4U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc = 2U;
        }
        vlSelfRef.tb_osd_menu__DOT__ink = ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__area) 
                                           & (IData)(
                                                     (vlSelfRef.tb_osd_menu__DOT__osd__DOT__bits 
                                                      >> 
                                                      (0x3fU 
                                                       & ((IData)(0x3fU) 
                                                          - (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos))))));
        vlSelfRef.tb_osd_menu__DOT__shade = ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__area) 
                                             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade));
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__bits = __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__total = (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))
                                                    ? (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc)
                                                    : (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic));
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        vlSelfRef.tb_osd_menu__DOT__selected = 0U;
        __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 1U;
    } else {
        __Vdly__tb_osd_menu__DOT__select_request = 0U;
        if ((vlSelfRef.tb_osd_menu__DOT__swaps != vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps)) {
            __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps 
                = vlSelfRef.tb_osd_menu__DOT__swaps;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 0U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
        } else if ((((~ (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading)) 
                     & (IData)(vlSelfRef.tb_osd_menu__DOT__autoplay)) 
                    & (0xee6b27fU > vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer))) {
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer 
                = ((IData)(1U) + vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer);
        }
        if ((((~ (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading)) 
              & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__select_request))) 
             & ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending)) 
                | ((IData)(vlSelfRef.tb_osd_menu__DOT__autoplay) 
                   & (0xee6b27fU == vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer))))) {
            vlSelfRef.tb_osd_menu__DOT__selected = 
                ((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending))
                  ? (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index)
                  : ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending))
                      ? 3U : 1U));
            __Vdly__tb_osd_menu__DOT__select_request = 1U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__loading = 1U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
        }
        if (vlSelfRef.tb_osd_menu__DOT__cv) {
            if ((0x80U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                             & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 2U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                                if ((IData)(((0x80U 
                                              == (0xe0U 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                             & (4U 
                                                > (0x1fU 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                                }
                            } else {
                                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 1U;
                            }
                        } else if ((IData)(((0x80U 
                                             == (0xe0U 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                            & (4U > 
                                               (0x1fU 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                        }
                    } else {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((IData)(((0x80U == 
                                          (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                         & (4U > (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                            }
                        } else {
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 0U;
                            __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                        }
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                 & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__timer = 0U;
                } else if ((IData)(((0x80U == (0xe0U 
                                               & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                    & (4U > (0x1fU 
                                             & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
                }
            } else if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                __Vdly__tb_osd_menu__DOT__gallery__DOT__pending = 3U;
            }
        }
    }
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__last_swaps 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__last_swaps;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__timer 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__timer;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__pending 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__pending;
    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__loading 
        = __Vdly__tb_osd_menu__DOT__gallery__DOT__loading;
    vlSelfRef.tb_osd_menu__DOT__select_request = __Vdly__tb_osd_menu__DOT__select_request;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__area = ((1U 
                                                   & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
                                                  && ((0x280U 
                                                       > 
                                                       (0x3ffU 
                                                        & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1)) 
                                                      & (0x1e0U 
                                                         > (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__shade = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__reset))) 
                                                   && (((4U 
                                                         > 
                                                         (0x1fU 
                                                          & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                             >> 4U))) 
                                                        | (0x1bU 
                                                           <= 
                                                           (0x1fU 
                                                            & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                               >> 4U)))) 
                                                       | (((((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
                                                             & (0x40U 
                                                                <= 
                                                                (0x3ffU 
                                                                 & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1))) 
                                                            & (0x240U 
                                                               > 
                                                               (0x3ffU 
                                                                & vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1))) 
                                                           & (0x60U 
                                                              <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))) 
                                                          & (0x160U 
                                                             > (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))));
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos = 0U;
    } else {
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert 
                = vlSelfRef.tb_osd_menu__DOT__show_alert;
        }
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__glyph_pos 
            = ((0x38U & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         << 2U)) | (7U & ((0x1bU == 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                             >> 4U)))
                                           ? ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x) 
                                              >> 1U)
                                           : (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                                              >> 1U))));
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0 
        = ((([&]() {
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__n 
                        = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__Vfuncout 
                        = (0xffU & ((IData)(0x30U) 
                                    + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__n)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__Vfuncout)) 
            << 8U) | ([&]() {
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__n 
                    = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__Vfuncout 
                    = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__n)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__Vfuncout)));
    if (vlSelfRef.tb_osd_menu__DOT__reset) {
        vlSelfRef.tb_osd_menu__DOT__autoplay = 1U;
        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index = 0U;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened = 0U;
        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
        __Vdly__tb_osd_menu__DOT__opened = 0U;
        __Vdly__tb_osd_menu__DOT__query = 0U;
        vlSelfRef.tb_osd_menu__DOT__cb = 0U;
    } else {
        if (vlSelfRef.tb_osd_menu__DOT__cv) {
            if ((0x80U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                             & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                    vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                        = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                }
            } else if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                                if ((IData)(((0x80U 
                                              == (0xe0U 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                             & (4U 
                                                > (0x1fU 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                    vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                                    vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                        = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                                }
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            }
                        } else if ((IData)(((0x80U 
                                             == (0xe0U 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                            & (4U > 
                                               (0x1fU 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    } else {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                            if ((IData)(((0x80U == 
                                          (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                         & (4U > (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                                vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                    = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                            }
                        } else {
                            vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        }
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                            = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                    }
                } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                    if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                 & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                        vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                            = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                    }
                } else {
                    if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 1U;
                    } else if ((IData)(((0x80U == (0xe0U 
                                                   & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                        & (4U > (0x1fU 
                                                 & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                        vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))) {
                        if ((IData)(((0x80U == (0xe0U 
                                                & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                     & (4U > (0x1fU 
                                              & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                            vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                                = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
                        }
                    }
                }
            } else if ((IData)(((0x80U == (0xe0U & (IData)(vlSelfRef.tb_osd_menu__DOT__cb))) 
                                & (4U > (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
                vlSelfRef.tb_osd_menu__DOT__autoplay = 0U;
                vlSelfRef.tb_osd_menu__DOT__gallery__DOT__direct_index 
                    = (0x1fU & (IData)(vlSelfRef.tb_osd_menu__DOT__cb));
            }
        }
        if (((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_osd_menu__DOT__y)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened 
                = vlSelfRef.tb_osd_menu__DOT__show_menu;
        }
        vlSelfRef.tb_osd_menu__DOT__cv = 0U;
        if (vlSelfRef.tb_osd_menu__DOT__rv) {
            vlSelfRef.tb_osd_menu__DOT__cv = 1U;
            vlSelfRef.tb_osd_menu__DOT__cb = vlSelfRef.tb_osd_menu__DOT__rb;
            if ((1U & (~ ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                    if ((0x10U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__rb)))) {
                                        if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                            __Vdly__tb_osd_menu__DOT__query 
                                                = (0x20U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_osd_menu__DOT__query) 
                                                        >> 5U)) 
                                                      << 5U));
                                        } else {
                                            vlSelfRef.tb_osd_menu__DOT__cb = 0x43U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__rb)))) {
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                    __Vdly__tb_osd_menu__DOT__query = 0U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                    if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                        if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                            __Vdly__tb_osd_menu__DOT__query 
                                                = (
                                                   (0x20U 
                                                    & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                                   | (((0x3fU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0x1fU 
                                                            & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) 
                                                       >= (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))
                                                       ? 0U
                                                       : 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelfRef.tb_osd_menu__DOT__query)))));
                                        }
                                    } else {
                                        vlSelfRef.tb_osd_menu__DOT__cb = 0x5dU;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_osd_menu__DOT__rb) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                                if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                    if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total))) {
                                        __Vdly__tb_osd_menu__DOT__query 
                                            = ((0x20U 
                                                & (IData)(__Vdly__tb_osd_menu__DOT__query)) 
                                               | (0x1fU 
                                                  & ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                                      ? 
                                                     ((IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total) 
                                                      - (IData)(1U))
                                                      : 
                                                     ((IData)(vlSelfRef.tb_osd_menu__DOT__query) 
                                                      - (IData)(1U)))));
                                    }
                                } else {
                                    vlSelfRef.tb_osd_menu__DOT__cb = 0x5bU;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                        if ((2U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__rb)))) {
                                __Vdly__tb_osd_menu__DOT__opened 
                                    = (1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_osd_menu__DOT__rb))) {
                            if (vlSelfRef.tb_osd_menu__DOT__opened) {
                                if (((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__menu__DOT__total)) 
                                     & ((IData)(vlSelfRef.tb_osd_menu__DOT__tag) 
                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__query)))) {
                                    vlSelfRef.tb_osd_menu__DOT__cb 
                                        = ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
                                            ? (0xc0U 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__query)))
                                            : (0x80U 
                                               | (0x1fU 
                                                  & (IData)(vlSelfRef.tb_osd_menu__DOT__query))));
                                    __Vdly__tb_osd_menu__DOT__opened = 0U;
                                }
                            } else {
                                vlSelfRef.tb_osd_menu__DOT__cb = 0x44U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_osd_menu__DOT__opened = __Vdly__tb_osd_menu__DOT__opened;
    vlSelfRef.tb_osd_menu__DOT__query = __Vdly__tb_osd_menu__DOT__query;
}

VL_INLINE_OPT void Vtb_osd_menu___024root___nba_comb__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___nba_comb__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31eU <= (IData)(vlSelfRef.tb_osd_menu__DOT__x))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(vlSelfRef.tb_osd_menu__DOT__x) 
               - (IData)(0x31eU));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_osd_menu__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__y))));
    } else {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(2U) + (IData)(vlSelfRef.tb_osd_menu__DOT__x));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_osd_menu__DOT__y));
    }
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x 
        = (0x3ffU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                     + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[0U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[1U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[2U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[3U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[4U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[5U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[6U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[7U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[8U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
        = Vtb_osd_menu__ConstPool__CONST_h36996a42_0[9U];
    if (((((((((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                >> 4U))) | (1U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) | (3U == 
                                              (0x1fU 
                                               & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                  >> 4U)))) 
            | (7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (9U == (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
          | (0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                               >> 4U)))) | (0xdU == 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                >> 4U))))) {
        if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h934acd01_0[9U];
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_ha9c00b7f_0[9U];
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hd0b05b44_0[9U];
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h5b0f92d2_0[9U];
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h66c87c4c_0[9U];
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1505f184_0[9U];
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h76c7ce8c_0[9U];
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hb8c91d97_0[9U];
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hce6f5c91_0[9U];
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_hc57ea9b3_0[9U];
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h984b5ff5_0[9U];
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h1b3aeda5_0[9U];
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[0U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[1U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[2U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[3U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[4U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[5U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[6U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[7U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[8U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
            = Vtb_osd_menu__ConstPool__CONST_hd5e8c074_0[9U];
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[0U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[1U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[2U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[3U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[4U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[5U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[6U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[7U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[8U];
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
            = Vtb_osd_menu__ConstPool__CONST_h8e8c1eda_0[9U];
    }
    if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xf8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0x14U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 0x10U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xe0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0xcU));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 8U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xc8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n 
                            = (0xfU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm);
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout))));
    }
    if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout) 
                  << 0x18U));
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout) 
                  << 0x18U));
    }
    if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xb8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xa0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout))));
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout) 
                  << 8U));
    }
    if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__source)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = (0x54535400U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U]));
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x53544f50U;
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__muted) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4d555445U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = (0x4c440000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = (0x484fU | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U]));
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0x58U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout))));
        if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4e4f4e45U;
        } else if ((0U != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] = 0x4641494cU;
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = (0x57415600U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]));
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  >> 8U));
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__name));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 8U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x10U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x18U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x28U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x30U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x38U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0));
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = (0x574156U | (0xff000000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U]));
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h75e9574a_0[9U];
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h1e639333_0[9U];
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[0U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[1U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[2U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[3U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[4U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[5U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[6U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[7U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[8U];
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                = Vtb_osd_menu__ConstPool__CONST_h93f50b4b_0[9U];
        }
    }
    if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert) {
        if (((((((((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) | (7U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))) 
                  | (9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
                | (0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                     >> 4U)))) | (0xfU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                      >> 4U)))) 
              | (0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) | (0x13U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                     >> 4U))))) {
            if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                 >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hf43e2e74_0[9U];
            } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h25c2bb6f_0[9U];
            } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h79d2839a_0[9U];
            } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h07793636_0[9U];
            } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hedbe703e_0[9U];
            } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                          >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h91469838_0[9U];
            } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                           >> 4U)))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_h192a9777_0[9U];
            } else {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[0U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[0U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[1U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[1U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[2U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[2U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[3U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[3U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[4U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[4U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[5U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[5U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[6U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[6U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[7U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[7U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[8U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[8U];
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line[9U] 
                    = Vtb_osd_menu__ConstPool__CONST_hc8144a76_0[9U];
            }
        }
    }
    if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                            >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0x118U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0xd8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout))));
        VL_ASSIGNSEL_WI(320,16,0x98U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout))));
    }
}

void Vtb_osd_menu___024root___timing_resume(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___timing_resume\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd4d1918e__0.resume(
                                                   "@(negedge tb_osd_menu.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd4d191cf__0.resume(
                                                   "@(posedge tb_osd_menu.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_osd_menu___024root___timing_commit(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___timing_commit\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd4d1918e__0.commit(
                                                   "@(negedge tb_osd_menu.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd4d191cf__0.commit(
                                                   "@(posedge tb_osd_menu.clk)");
    }
}

void Vtb_osd_menu___024root___eval_triggers__act(Vtb_osd_menu___024root* vlSelf);

bool Vtb_osd_menu___024root___eval_phase__act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_phase__act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_osd_menu___024root___eval_triggers__act(vlSelf);
    Vtb_osd_menu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_osd_menu___024root___timing_resume(vlSelf);
        Vtb_osd_menu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_osd_menu___024root___eval_phase__nba(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_phase__nba\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_osd_menu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__nba(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__act(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_osd_menu___024root___eval(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_osd_menu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_osd_menu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_osd_menu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_osd_menu.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_osd_menu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_osd_menu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_osd_menu___024root___eval_debug_assertions(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_debug_assertions\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
