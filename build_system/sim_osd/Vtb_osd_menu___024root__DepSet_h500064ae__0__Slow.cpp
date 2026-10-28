// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_osd_menu.h for the primary calling header

#include "Vtb_osd_menu__pch.h"
#include "Vtb_osd_menu___024root.h"

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_static__TOP(Vtb_osd_menu___024root* vlSelf);

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_static(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_static\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_osd_menu___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_static__TOP(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_static__TOP\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_osd_menu__DOT__clk = 0U;
    vlSelfRef.tb_osd_menu__DOT__reset = 1U;
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    vlSelfRef.tb_osd_menu__DOT__rb = 0U;
    vlSelfRef.tb_osd_menu__DOT__tag = 0U;
    vlSelfRef.tb_osd_menu__DOT__wavs = 2U;
    vlSelfRef.tb_osd_menu__DOT__swaps = 0U;
    vlSelfRef.tb_osd_menu__DOT__selections = 0U;
    vlSelfRef.tb_osd_menu__DOT__x = 0U;
    vlSelfRef.tb_osd_menu__DOT__y = 0U;
    vlSelfRef.tb_osd_menu__DOT__show_menu = 1U;
    vlSelfRef.tb_osd_menu__DOT__show_alert = 0U;
}

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_final(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_final\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__stl(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_osd_menu___024root___eval_phase__stl(Vtb_osd_menu___024root* vlSelf);

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_settle(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_settle\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_osd_menu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_osd_menu.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_osd_menu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__stl(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___dump_triggers__stl\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_osd_menu___024root___stl_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf);

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_stl(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_stl\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_osd_menu___024root___stl_sequent__TOP__0(vlSelf);
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

VL_ATTR_COLD void Vtb_osd_menu___024root___stl_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___stl_sequent__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__c = 0;
    // Body
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
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
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__bits = __Vfunc_tb_osd_menu__DOT__osd__DOT__font__54__Vfuncout;
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
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__total = (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))
                                                    ? (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc)
                                                    : (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__ticker_x 
        = (0x3ffU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
                     + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)));
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

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_triggers__stl(Vtb_osd_menu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_osd_menu___024root___eval_phase__stl(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_phase__stl\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_osd_menu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_osd_menu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___dump_triggers__act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_osd_menu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_osd_menu.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__nba(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___dump_triggers__nba\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_osd_menu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_osd_menu.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_osd_menu___024root___ctor_var_reset(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___ctor_var_reset\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_osd_menu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__rv = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__rb = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__tag = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__wavs = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__opened = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__cv = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__query = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__cb = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__select_request = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__autoplay = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__selected = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_osd_menu__DOT__selections = VL_RAND_RESET_I(32);
    vlSelf->tb_osd_menu__DOT__chosen = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__x = VL_RAND_RESET_I(10);
    vlSelf->tb_osd_menu__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_osd_menu__DOT__ink = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__shade = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__color = VL_RAND_RESET_I(24);
    vlSelf->tb_osd_menu__DOT__show_menu = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__show_alert = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__px = VL_RAND_RESET_I(32);
    vlSelf->tb_osd_menu__DOT__rgb = VL_RAND_RESET_I(24);
    vlSelf->tb_osd_menu__DOT__gallery__DOT__loading = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__gallery__DOT__last_swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_osd_menu__DOT__gallery__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->tb_osd_menu__DOT__gallery__DOT__pending = VL_RAND_RESET_I(2);
    vlSelf->tb_osd_menu__DOT__gallery__DOT__direct_index = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__menu__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__opened = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__paused = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__muted = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__source = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__auto_mode = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__alert = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__vis = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__q = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__tag = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ic = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__img = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__osd__DOT__wc = VL_RAND_RESET_I(5);
    vlSelf->tb_osd_menu__DOT__osd__DOT__wi = VL_RAND_RESET_I(4);
    vlSelf->tb_osd_menu__DOT__osd__DOT__vol = VL_RAND_RESET_I(4);
    vlSelf->tb_osd_menu__DOT__osd__DOT__tm = VL_RAND_RESET_I(24);
    vlSelf->tb_osd_menu__DOT__osd__DOT__bri = VL_RAND_RESET_I(4);
    vlSelf->tb_osd_menu__DOT__osd__DOT__con = VL_RAND_RESET_I(4);
    vlSelf->tb_osd_menu__DOT__osd__DOT__scroll = VL_RAND_RESET_I(10);
    vlSelf->tb_osd_menu__DOT__osd__DOT__name = VL_RAND_RESET_Q(64);
    vlSelf->tb_osd_menu__DOT__osd__DOT__se = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ie = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__we = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ahead_y = VL_RAND_RESET_I(10);
    vlSelf->tb_osd_menu__DOT__osd__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ticker_x = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(320, vlSelf->tb_osd_menu__DOT__osd__DOT__line);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ch = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__glyph_pos = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__area = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__shade = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__selected = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__bits = VL_RAND_RESET_Q(64);
    vlSelf->tb_osd_menu__DOT__osd__DOT____Vlvbound_hb24767b3__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0 = VL_RAND_RESET_I(16);
    vlSelf->tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__29__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__30__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__31__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__32__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__33__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__34__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__35__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__36__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__37__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__38__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__39__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__40__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__41__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__42__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__43__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__44__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__45__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__46__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__47__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__48__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__49__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__50__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__51__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__52__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__53__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__55__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__56__n = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0 = VL_RAND_RESET_I(1);
}
