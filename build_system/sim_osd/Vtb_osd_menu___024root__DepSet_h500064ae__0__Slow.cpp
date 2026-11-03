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
    vlSelfRef.tb_osd_menu__DOT__course = 0U;
    vlSelfRef.tb_osd_menu__DOT__swaps = 0U;
    vlSelfRef.tb_osd_menu__DOT__selections = 0U;
    vlSelfRef.tb_osd_menu__DOT__x = 0U;
    vlSelfRef.tb_osd_menu__DOT__y = 0U;
    vlSelfRef.tb_osd_menu__DOT__show_menu = 1U;
    vlSelfRef.tb_osd_menu__DOT__show_alert = 0U;
}

VL_ATTR_COLD void Vtb_osd_menu___024root___eval_initial__TOP(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial__TOP\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_osd_menu__DOT__osd__DOT__ti;
    tb_osd_menu__DOT__osd__DOT__ti = 0;
    IData/*31:0*/ tb_osd_menu__DOT__osd__DOT__fi;
    tb_osd_menu__DOT__osd__DOT__fi = 0;
    QData/*63:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__Vfuncout;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c;
    __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c = 0;
    // Body
    tb_osd_menu__DOT__osd__DOT__ti = 0U;
    while (VL_GTS_III(32, 0x1000U, tb_osd_menu__DOT__osd__DOT__ti)) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[(0xfffU 
                                                        & tb_osd_menu__DOT__osd__DOT__ti)] = 0x20U;
        tb_osd_menu__DOT__osd__DOT__ti = ((IData)(1U) 
                                          + tb_osd_menu__DOT__osd__DOT__ti);
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x42U] = 0x5aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x45U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x46U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x47U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4bU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4cU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4dU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4fU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x51U] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x52U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x53U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x56U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x57U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5aU] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5bU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5cU] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80U] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x81U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x82U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x86U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x87U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8aU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8bU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8cU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8dU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94U] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x95U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x96U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x99U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9aU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9bU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9cU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc0U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc1U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc2U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc3U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc4U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc5U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc7U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc8U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xc9U] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xcaU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xcbU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xccU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xcdU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xceU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x100U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x101U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x102U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x103U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x105U] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x106U] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x107U] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x109U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x10aU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x10bU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x10dU] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x10eU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x10fU] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x112U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x113U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x114U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x115U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x116U] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x118U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x119U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11aU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11bU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11cU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11dU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11eU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x11fU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x146U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x147U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x149U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x14aU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x14bU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x14cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x14eU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x14fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x150U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x151U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x152U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x153U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x186U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x187U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x188U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x189U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x18aU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x18cU] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x18dU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x18eU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x193U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x194U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x195U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x196U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x198U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x199U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x19aU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x19bU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x19cU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1c6U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1c7U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1c8U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1c9U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1caU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1d4U] = 0x2eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1d5U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1d6U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x1d7U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x200U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x207U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x208U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x209U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x20aU] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x20bU] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x20dU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x20eU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x214U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x215U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x216U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x217U] = 0x36U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x219U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x21aU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x21bU] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x21cU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x246U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x247U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x248U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x249U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x24aU] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x24cU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x24dU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x24eU] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x253U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x254U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x255U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x256U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x257U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x259U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x25aU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x25bU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x25cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x25dU] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x25eU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x285U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x286U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x287U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x288U] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x28aU] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x28bU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x28cU] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x28dU] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x292U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x293U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x294U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x295U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x296U] = 0x35U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x298U] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x299U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x29aU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x29bU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2c6U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2c7U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2c8U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2c9U] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2caU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2cbU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2cdU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2ceU] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2cfU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d0U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d2U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d3U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d4U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d5U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d6U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d7U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2d9U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2daU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2dcU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2ddU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2deU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x2dfU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x304U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x305U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x306U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x308U] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x309U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30aU] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30bU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30cU] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30dU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30eU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x30fU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x311U] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x313U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x314U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x315U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x316U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x318U] = 0x2bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x31aU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x31bU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x31cU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x31dU] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x31eU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x320U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x321U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x322U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x323U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x324U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x340U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x341U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x342U] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x343U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x344U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x347U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x348U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x349U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x34aU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x34bU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x34cU] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x34fU] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x350U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x351U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x352U] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x353U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x354U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x380U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x381U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x382U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x383U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x384U] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x386U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x387U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x388U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x389U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x38cU] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x38dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x38eU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x38fU] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x391U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x392U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x393U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x394U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x395U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x398U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x399U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x39aU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x39bU] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x39dU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x39eU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x39fU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3a0U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c0U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c1U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c2U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c3U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c4U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c5U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c6U] = 0x3bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c7U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c8U] = 0x6cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3c9U] = 0x73U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3caU] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3ccU] = 0x69U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3cdU] = 0x66U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3ceU] = 0x28U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3cfU] = 0x6dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d0U] = 0x75U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d1U] = 0x74U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d2U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d3U] = 0x64U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d4U] = 0x29U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d6U] = 0x6cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d7U] = 0x69U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d8U] = 0x6eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3d9U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3daU] = 0x5bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3dbU] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3dcU] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3ddU] = 0x39U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3deU] = 0x2dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3dfU] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e0U] = 0x2aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e1U] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e2U] = 0x2dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e3U] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e4U] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e5U] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e6U] = 0x5dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x3e7U] = 0x3dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x400U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x401U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x402U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x403U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x404U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x405U] = 0U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x406U] = 0x3bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x407U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x408U] = 0x6cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x409U] = 0x73U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40aU] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40cU] = 0x69U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40dU] = 0x66U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40eU] = 0x28U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x40fU] = 0x77U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x410U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x411U] = 0x21U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x412U] = 0x3dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x413U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x414U] = 0x29U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x416U] = 0x6cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x417U] = 0x69U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x418U] = 0x6eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x419U] = 0x65U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41aU] = 0x5bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41bU] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41cU] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41dU] = 0x39U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41eU] = 0x2dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x41fU] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x420U] = 0x2aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x421U] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x422U] = 0x2dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x423U] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x424U] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x425U] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x426U] = 0x5dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x427U] = 0x3dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x446U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x447U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x448U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x449U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44aU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44bU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44cU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44dU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x44fU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x450U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x452U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x453U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x454U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x455U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x486U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x487U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x489U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48aU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48bU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48dU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x48fU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x490U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x492U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x493U] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x494U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x495U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x497U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x498U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x499U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x49aU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4c6U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4c7U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4c8U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4c9U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4caU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4cbU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4ccU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4ceU] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4cfU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d0U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d1U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d3U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d4U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d5U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x4d6U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x506U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x507U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x508U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x509U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50aU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50bU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50cU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50eU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x50fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x510U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x511U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x512U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x513U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x514U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x515U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x546U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x547U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x548U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x549U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x54aU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x54bU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x54dU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x54eU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x54fU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x550U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x551U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x552U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x553U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x554U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x586U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x587U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x588U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x589U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58aU] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58bU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58cU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58eU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x58fU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5c5U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5c6U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5c7U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5c8U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5c9U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5caU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5ccU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5cdU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5ceU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5cfU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5d1U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5d2U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5d3U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5d4U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x5d5U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x605U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x606U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x607U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x608U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x609U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x60aU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x60cU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x60dU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x60eU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x60fU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x610U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x611U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x613U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x614U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x615U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x616U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x617U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x618U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x619U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x61aU] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x646U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x647U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x648U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x649U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x64aU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x64bU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x64cU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x64dU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x685U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x686U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x687U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x688U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x689U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x68aU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x68cU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x68dU] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x68fU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x690U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x691U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x693U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x694U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x695U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x696U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x697U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x698U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x699U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6c6U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6c7U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6c8U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6c9U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6caU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6cbU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6ccU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6ceU] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6cfU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d0U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d1U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d2U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d3U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d4U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d6U] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d7U] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x6d8U] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x705U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x706U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x707U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x708U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x709U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x70aU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x70cU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x70dU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x70eU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x70fU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x711U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x712U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x713U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x714U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x715U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x716U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x717U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x718U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x746U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x747U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x749U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x74aU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x74bU] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x74cU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x74eU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x74fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x750U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x751U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x752U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x753U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x755U] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x757U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x758U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x75aU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x75bU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x75cU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x75dU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x75eU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x785U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x786U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x787U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x788U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x789U] = 0x32U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x78bU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x78cU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x78dU] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x78fU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x791U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x792U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x793U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x794U] = 0x38U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x796U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x797U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x798U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x799U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7c6U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7c7U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7c8U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7c9U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7cbU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7ccU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7cdU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7ceU] = 0x48U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7cfU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d1U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d2U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d3U] = 0x4aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d4U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d5U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d6U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d8U] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7d9U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7daU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7dbU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x7dcU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x805U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x806U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x807U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x808U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80aU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80bU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80cU] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x80eU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x810U] = 0x42U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x811U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x812U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x813U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x814U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x815U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x816U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x817U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x818U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x819U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x845U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x846U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x847U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x848U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84aU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84bU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84cU] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x84eU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x850U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x851U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x852U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x853U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x854U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x855U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x856U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x857U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x858U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x859U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85bU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85cU] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85eU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x85fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x885U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x886U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x887U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x888U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x88aU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x88bU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x88cU] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x88dU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x88eU] = 0x3aU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x890U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x891U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x892U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x893U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x894U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x895U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c0U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c1U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c2U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c3U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c4U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c6U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c7U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c8U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8c9U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8caU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8ccU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8cdU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8ceU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8cfU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d1U] = 0x2dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d3U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d4U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d5U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d6U] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d8U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8d9U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8daU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x8dbU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x907U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x908U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x909U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90aU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90bU] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90dU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90eU] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x90fU] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x911U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x912U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x913U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x914U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x915U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x916U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x945U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x946U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x947U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x948U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x949U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94aU] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94cU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94dU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94eU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x94fU] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x950U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x952U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x953U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x954U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x955U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x956U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x957U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x958U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x959U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x95aU] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x95bU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x95cU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x95dU] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98aU] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98bU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98dU] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x98fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x990U] = 0x58U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x991U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x992U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x993U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x995U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x996U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x997U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x998U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x999U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9c9U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9caU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9ccU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9cdU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9ceU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d0U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d1U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d2U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d4U] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d5U] = 0x49U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d6U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d7U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0x9d8U] = 0x53U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa03U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa04U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa05U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa07U] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa08U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa09U] = 0x57U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa0aU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa0cU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa0eU] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa0fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa10U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa11U] = 0x34U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa13U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa14U] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa16U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa17U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa18U] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa19U] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa1aU] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa1bU] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa44U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa45U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa46U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa47U] = 0x33U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa49U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa4aU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa4bU] = 0x54U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa4cU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa4eU] = 0x2fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa50U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa51U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa52U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa53U] = 0x31U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa55U] = 0x4bU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa56U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa57U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa58U] = 0x30U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5aU] = 0x56U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5bU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5cU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5dU] = 0x55U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5eU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa5fU] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa86U] = 0x46U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa87U] = 0x50U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa88U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa89U] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa8bU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa8cU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa8dU] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa8eU] = 0x41U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa8fU] = 0x4cU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa91U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa92U] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa93U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa94U] = 0x52U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa95U] = 0x47U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa96U] = 0x45U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa97U] = 0x4eU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa98U] = 0x43U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa99U] = 0x59U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa9bU] = 0x4dU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa9cU] = 0x4fU;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa9dU] = 0x44U;
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__text_rom[0xa9eU] = 0x45U;
    tb_osd_menu__DOT__osd__DOT__fi = 0U;
    while (VL_GTS_III(32, 0x400U, tb_osd_menu__DOT__osd__DOT__fi)) {
        __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c 
            = (0xffU & (tb_osd_menu__DOT__osd__DOT__fi 
                        >> 3U));
        __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__Vfuncout 
            = ((0x80U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                ? 0x3844040810001000ULL : ((0x40U & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                            ? ((0x20U 
                                                & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                ? 0x3844040810001000ULL
                                                : (
                                                   (0x10U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c00ULL
                                                        : 0x3844040810001000ULL)
                                                       : 0x3844040810001000ULL)
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844040810001000ULL
                                                        : 0x7c04081020407c00ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x4444281010101000ULL
                                                        : 0x4444281028444400ULL)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x44444454546c4400ULL
                                                        : 0x4444444444281000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x4444444444443800ULL
                                                        : 0x7c10101010101000ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3c40403804047800ULL
                                                        : 0x7844447850484400ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844444454483400ULL
                                                        : 0x7844447840404000ULL))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844444444443800ULL
                                                        : 0x4464544c44444400ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x446c545444444400ULL
                                                        : 0x4040404040407c00ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x4448506050484400ULL
                                                        : 0x1c08080848483000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3810101010103800ULL
                                                        : 0x4444447c44444400ULL)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844405c44443c00ULL
                                                        : 0x7c40407840404000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c40407840407c00ULL
                                                        : 0x7844444444447800ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844404040443800ULL
                                                        : 0x7844447844447800ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844447c44444400ULL
                                                        : 0x3844040810001000ULL))))))
                                            : ((0x20U 
                                                & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844040810001000ULL
                                                        : 0x4020100810204000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c007c000000ULL
                                                        : 0x3844040810001000ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844040810001000ULL
                                                        : 0x30300030300000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844443c04043800ULL
                                                        : 0x3844443844443800ULL)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c04081020202000ULL
                                                        : 0x3840407844443800ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c40407804047800ULL
                                                        : 0x81828487c080800ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7804043804047800ULL
                                                        : 0x3844040810207c00ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x1030101010103800ULL
                                                        : 0x38444c5464443800ULL))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x404081020404000ULL
                                                        : 0x303000ULL)
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x7c00000000ULL
                                                        : 0x3844040810001000ULL))
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x10107c10100000ULL
                                                        : 0x3844040810001000ULL)
                                                       : 0x3844040810001000ULL))
                                                     : 
                                                    ((4U 
                                                      & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                      ? 0x3844040810001000ULL
                                                      : 
                                                     ((2U 
                                                       & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                       ? 0x3844040810001000ULL
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__c))
                                                        ? 0x3844040810001000ULL
                                                        : 0ULL)))))
                                                : 0x3844040810001000ULL)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__init_glyph 
            = __Vfunc_tb_osd_menu__DOT__osd__DOT__font__92__Vfuncout;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__font_rom[(0x3ffU 
                                                        & tb_osd_menu__DOT__osd__DOT__fi)] 
            = (0xffU & (IData)(VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_osd_menu__DOT__osd__DOT__init_glyph, 
                                             VL_MULS_III(32, (IData)(8U), 
                                                         ((IData)(7U) 
                                                          - 
                                                          VL_MODDIVS_III(32, tb_osd_menu__DOT__osd__DOT__fi, (IData)(8U)))))));
        tb_osd_menu__DOT__osd__DOT__fi = ((IData)(1U) 
                                          + tb_osd_menu__DOT__osd__DOT__fi);
    }
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

extern const VlWide<10>/*319:0*/ Vtb_osd_menu__ConstPool__CONST_hab76c978_0;

VL_ATTR_COLD void Vtb_osd_menu___024root___stl_sequent__TOP__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___stl_sequent__TOP__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x31dU <= (IData)(vlSelfRef.tb_osd_menu__DOT__x))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(vlSelfRef.tb_osd_menu__DOT__x) 
               - (IData)(0x31dU));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & ((0x20cU == (IData)(vlSelfRef.tb_osd_menu__DOT__y))
                          ? 0U : ((IData)(1U) + (IData)(vlSelfRef.tb_osd_menu__DOT__y))));
    } else {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 
            = ((IData)(3U) + (IData)(vlSelfRef.tb_osd_menu__DOT__x));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y 
            = (0x3ffU & (IData)(vlSelfRef.tb_osd_menu__DOT__y));
    }
    vlSelfRef.tb_osd_menu__DOT__menu__DOT__total = 
        ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__query))
          ? (IData)(vlSelfRef.tb_osd_menu__DOT__wavs)
          : 4U);
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__total = (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))
                                                    ? (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc)
                                                    : (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0U;
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
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 1U;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 2U;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 3U;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 4U;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 5U;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 6U;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 7U;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 8U;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 9U;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xaU;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xbU;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xcU;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xdU;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0xeU;
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x12U;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x13U;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x11U;
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x14U : 0x15U);
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x16U : ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course)
                                ? 0x17U : 0x18U));
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x19U : 0x1aU);
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1bU : 0x1cU);
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1dU;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x1eU;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section))
                    ? 0x1fU : 0x20U);
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x21U;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id = 0x22U;
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
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__line_id 
                = ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U))) ? 0x23U
                    : ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                        >> 4U))) ? 0x24U
                        : ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                            >> 4U)))
                            ? 0x25U : ((0xbU == (0x1fU 
                                                 & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                    >> 4U)))
                                        ? 0x26U : (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                        >> 4U)))
                                                    ? 0x27U
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                         >> 4U)))
                                                     ? 0x28U
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                                          >> 4U)))
                                                      ? 0x29U
                                                      : 0x2aU)))))));
        }
    }
    vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0 
        = ((([&]() {
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__n 
                        = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                    vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__Vfuncout 
                        = (0xffU & ((IData)(0x30U) 
                                    + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__n)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__Vfuncout)) 
            << 8U) | ([&]() {
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__n 
                    = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total), (IData)(0xaU)));
                vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__Vfuncout 
                    = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__n)));
            }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__Vfuncout)));
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[0U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[0U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[1U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[1U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[2U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[3U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[4U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[5U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[6U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[7U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[8U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
        = Vtb_osd_menu__ConstPool__CONST_hab76c978_0[9U];
    vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
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
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                  >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x15U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__vis) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    } else if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    } else if ((0x1dU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                   >> 4U)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
    }
    if ((2U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xf8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0x14U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 0x10U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x30000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xe0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 0xcU));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n 
                            = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                       >> 8U));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x6000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xc8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n 
                                = (0xfU & (vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n 
                            = (0xfU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm);
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout))));
    }
    if ((3U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout) 
                  << 0x18U));
    }
    if ((0U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0xb8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__img)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xa0U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ic), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x300000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n 
            = vlSelfRef.tb_osd_menu__DOT__osd__DOT__vol;
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout 
            = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout) 
                  << 8U));
    }
    if ((1U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                         >> 4U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__source)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U] 
                = (0x54535400U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[9U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__paused) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4d555445U;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__auto_mode)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x4c440000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
                = (0x484fU | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wi)), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x58U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n 
                                = (0x3fU & VL_DIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n 
                            = (0x3fU & VL_MODDIV_III(32, (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__wc))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] = 0x4641494cU;
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xf00000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
                = (0x57415600U | (0xffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0xe000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        VL_ASSIGNSEL_WI(320,16,0x70U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n 
                                = (0x3fU & VL_DIV_III(32, 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x1fU 
                                                         & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout 
                                = (0xffU & ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n)));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n 
                            = (0x3fU & VL_MODDIV_III(32, 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q)))), (IData)(0xaU)));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout 
                            = (0xffU & ((IData)(0x30U) 
                                        + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0xc000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[2U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0) 
                  >> 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__name));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x8000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 8U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x4000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x10U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x2000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x18U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x20U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x18U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x800000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x28U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 0x10U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x400000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x30U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffff00ffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0) 
                  << 8U));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x200000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 
            = (0xffU & (IData)((vlSelfRef.tb_osd_menu__DOT__osd__DOT__name 
                                >> 0x38U)));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U] 
            = ((0xffffff00U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[5U]) 
               | (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x100000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        if ((0x20U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U] 
                = (0x574156U | (0xff000000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[4U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x70000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if (vlSelfRef.tb_osd_menu__DOT__osd__DOT__ready) {
            if ((0U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__total))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            } else if ((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__valid)) 
                              | ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__tag) 
                                 != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__q))))) {
                vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
            }
        } else {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((IData)(((0x10U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))) 
                 & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired)))) {
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U] 
            = (0x49520000U | (0xffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[6U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U] 
            = (0x5041U | (0xffff0000U & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[7U]));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x3c000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
    }
    if (((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__opened) 
         & (2U <= (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)))) {
        if ((7U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                             >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((9U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                    >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xbU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xdU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0xfU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                      >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x11U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if ((0x13U == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                                       >> 4U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
        if (((0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                       >> 4U)) == ((IData)(9U) + ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__cursor) 
                                                  << 1U)))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U] 
                = (0x3e0000U | (0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[8U]));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x400000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0x90U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__bri;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__Vfuncout) 
                      << 0x10U));
        }
        if ((IData)(((2U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                     & (0xb0U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y)))))) {
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__n 
                = vlSelfRef.tb_osd_menu__DOT__osd__DOT__con;
            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__Vfuncout 
                = (0xffU & ((IData)(0x30U) + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__n)));
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
                = (0x4000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U] 
                = ((0xff00ffffU & vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line[3U]) 
                   | ((IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__Vfuncout) 
                      << 0x10U));
        }
        if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                      & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
             & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__course))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        } else if (((IData)(((3U == (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__section)) 
                             & (0x130U == (0x1f0U & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y))))) 
                    & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__paired))) {
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
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
            vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask = 0ULL;
        }
    }
    if ((0x1cU == (0x1fU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ahead_y) 
                            >> 4U)))) {
        VL_ASSIGNSEL_WI(320,16,0x118U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__se));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x1800000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0xd8U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__ie));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x18000000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
        VL_ASSIGNSEL_WI(320,16,0x98U, vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_line, 
                        ((([&]() {
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__n 
                                = (0xfU & ((IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we) 
                                           >> 4U));
                            vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__Vfuncout 
                                = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__n))
                                             ? ((IData)(0x30U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__n))
                                             : ((IData)(0x37U) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__n))));
                        }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__Vfuncout)) 
                          << 8U) | ([&]() {
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__n 
                            = (0xfU & (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__we));
                        vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__Vfuncout 
                            = (0xffU & ((0xaU > (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__n))
                                         ? ((IData)(0x30U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__n))
                                         : ((IData)(0x37U) 
                                            + (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__n))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__Vfuncout))));
        vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask 
            = (0x180000ULL | vlSelfRef.tb_osd_menu__DOT__osd__DOT__dynamic_mask);
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
    vlSelf->tb_osd_menu__DOT__course = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__section = VL_RAND_RESET_I(2);
    vlSelf->tb_osd_menu__DOT__cursor = VL_RAND_RESET_I(2);
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
    vlSelf->tb_osd_menu__DOT__osd__DOT__section = VL_RAND_RESET_I(2);
    vlSelf->tb_osd_menu__DOT__osd__DOT__cursor = VL_RAND_RESET_I(2);
    vlSelf->tb_osd_menu__DOT__osd__DOT__paired = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__course = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__opened = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__paused = VL_RAND_RESET_I(1);
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
    vlSelf->tb_osd_menu__DOT__osd__DOT__name = VL_RAND_RESET_Q(64);
    vlSelf->tb_osd_menu__DOT__osd__DOT__se = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ie = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__we = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__ahead_y = VL_RAND_RESET_I(10);
    vlSelf->tb_osd_menu__DOT__osd__DOT__total = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__line_id = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(320, vlSelf->tb_osd_menu__DOT__osd__DOT__dynamic_line);
    vlSelf->tb_osd_menu__DOT__osd__DOT__dynamic_mask = VL_RAND_RESET_Q(40);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_osd_menu__DOT__osd__DOT__text_rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_osd_menu__DOT__osd__DOT__font_rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_osd_menu__DOT__osd__DOT__init_glyph = VL_RAND_RESET_Q(64);
    vlSelf->tb_osd_menu__DOT__osd__DOT__text_char = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__dynamic_char = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__font_row = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT__dynamic_used = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__glyph_pos = VL_RAND_RESET_I(6);
    vlSelf->tb_osd_menu__DOT__osd__DOT__glyph_x = VL_RAND_RESET_I(3);
    vlSelf->tb_osd_menu__DOT__osd__DOT__area = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__shade = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__selected = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__area_q = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__shade_q = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT__selected_q = VL_RAND_RESET_I(1);
    vlSelf->tb_osd_menu__DOT__osd__DOT____Vlvbound_h0a0eb560__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_osd_menu__DOT__osd__DOT____VdfgExtracted_h1af66735__0 = VL_RAND_RESET_I(16);
    vlSelf->tb_osd_menu__DOT__osd__DOT____VdfgRegularize_h9fb4f622_0_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__65__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__66__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__67__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__68__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__69__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__70__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__71__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__72__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__73__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__74__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__75__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__76__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__77__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__78__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__79__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__80__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__81__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__82__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__83__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__84__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__85__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__86__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__87__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__88__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__89__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__90__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__hexchar__91__n = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__93__n = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tb_osd_menu__DOT__osd__DOT__digit__94__n = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0 = VL_RAND_RESET_I(1);
}
