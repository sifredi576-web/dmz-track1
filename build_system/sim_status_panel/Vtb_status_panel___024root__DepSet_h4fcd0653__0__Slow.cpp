// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_panel.h for the primary calling header

#include "Vtb_status_panel__pch.h"
#include "Vtb_status_panel___024root.h"

VL_ATTR_COLD void Vtb_status_panel___024root___eval_static__TOP(Vtb_status_panel___024root* vlSelf);

VL_ATTR_COLD void Vtb_status_panel___024root___eval_static(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_static\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_status_panel___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_status_panel___024root___eval_static__TOP(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_static__TOP\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_status_panel__DOT__clk = 0U;
    vlSelfRef.tb_status_panel__DOT__reset = 1U;
    vlSelfRef.tb_status_panel__DOT__frame = 0U;
    vlSelfRef.tb_status_panel__DOT__en = 1U;
    vlSelfRef.tb_status_panel__DOT__muted = 0U;
    vlSelfRef.tb_status_panel__DOT__paused = 0U;
    vlSelfRef.tb_status_panel__DOT__loading = 0U;
    vlSelfRef.tb_status_panel__DOT__aenabled = 1U;
    vlSelfRef.tb_status_panel__DOT__active = 1U;
    vlSelfRef.tb_status_panel__DOT__ended = 0U;
    vlSelfRef.tb_status_panel__DOT__fault = 0U;
    vlSelfRef.tb_status_panel__DOT__volume = 8U;
    vlSelfRef.tb_status_panel__DOT__b = 4U;
    vlSelfRef.tb_status_panel__DOT__c = 4U;
    vlSelfRef.tb_status_panel__DOT__x = 0U;
    vlSelfRef.tb_status_panel__DOT__y = 0U;
    vlSelfRef.tb_status_panel__DOT__st = 0U;
    vlSelfRef.tb_status_panel__DOT__bf = 0U;
    vlSelfRef.tb_status_panel__DOT__cf = 0U;
    vlSelfRef.tb_status_panel__DOT__bu = 0U;
    vlSelfRef.tb_status_panel__DOT__cu = 0U;
}

VL_ATTR_COLD void Vtb_status_panel___024root___eval_initial__TOP(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_initial__TOP\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_status_panel__DOT__dut__DOT__i;
    tb_status_panel__DOT__dut__DOT__i = 0;
    // Body
    tb_status_panel__DOT__dut__DOT__i = 0U;
    while (VL_GTS_III(32, 0x200U, tb_status_panel__DOT__dut__DOT__i)) {
        vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[(0x1ffU 
                                                            & tb_status_panel__DOT__dut__DOT__i)] = 0U;
        tb_status_panel__DOT__dut__DOT__i = ((IData)(1U) 
                                             + tb_status_panel__DOT__dut__DOT__i);
    }
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x12U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x13U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x14U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x15U] = 0xffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x17U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x18U] = 0x8c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x19U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1aU] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1bU] = 0x800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1cU] = 0x1000U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1dU] = 0x3000U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x22U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x23U] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x24U] = 0x210U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x25U] = 0x210U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x26U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x28U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x29U] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x2aU] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x2bU] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x2cU] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x2dU] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x31U] = 0x81eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x32U] = 0x9feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x33U] = 0x3ebcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x34U] = 0xbffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x35U] = 0x8fcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x36U] = 0xd33U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x37U] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x38U] = 0x3932U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x39U] = 0x9feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x3aU] = 0x922U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x3bU] = 0x9feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x3cU] = 0x3902U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x41U] = 0x430U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x42U] = 0x630U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x43U] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x44U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x45U] = 0x866U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x46U] = 0x8e4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x47U] = 0xf24U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x48U] = 0x93cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x49U] = 0x918U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x4aU] = 0x1918U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x4bU] = 0x117eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x4cU] = 0x27c3U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x52U] = 0xc3eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x53U] = 0x3fa0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x54U] = 0x167fU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x55U] = 0x1fc4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x56U] = 0x7c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x57U] = 0x3fc4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x58U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x59U] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x5aU] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x5bU] = 0x804U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x5cU] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x62U] = 0x420U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x63U] = 0xfffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x64U] = 0x800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x65U] = 0x19fcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x66U] = 0x1904U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x67U] = 0x39fcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x68U] = 0x2800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x69U] = 0xbffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x6aU] = 0xa01U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x6bU] = 0x9fcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x6cU] = 0x830U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x6dU] = 0x8e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x72U] = 0x420U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x73U] = 0x3f7cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x74U] = 0x448U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x75U] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x76U] = 0x412U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x77U] = 0x3f12U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x78U] = 0x11ffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x79U] = 0x1f12U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x7aU] = 0x117eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x7bU] = 0x1f10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x7cU] = 0x1110U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x7dU] = 0x1770U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x82U] = 0xc10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x83U] = 0x9ffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x84U] = 0x1610U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x85U] = 0x3e10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x86U] = 0xdfeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x87U] = 0x1800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x88U] = 0x1efeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x89U] = 0x3882U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x8aU] = 0x82U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x8bU] = 0xe82U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x8cU] = 0x38feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x8dU] = 0x82U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x92U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x93U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x94U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x95U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x96U] = 0x8c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x97U] = 0x8c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x98U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x99U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x9aU] = 0x2d0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x9bU] = 0xcccU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x9cU] = 0x30c3U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x9dU] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa1U] = 0xc00U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa2U] = 0xc00U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa3U] = 0xc3eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa4U] = 0x3fa2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa5U] = 0xda2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa6U] = 0xda2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa7U] = 0x9a2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa8U] = 0x9a2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xa9U] = 0x9a2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xaaU] = 0x9a2U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xabU] = 0x19beU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xacU] = 0x1722U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xadU] = 0x2022U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb2U] = 0x22cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb3U] = 0x1fa6U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb4U] = 0x220U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb5U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb6U] = 0x430U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb7U] = 0x1ff6U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb8U] = 0x1a14U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xb9U] = 0x1fdcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xbaU] = 0x219U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xbbU] = 0x7f9U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xbcU] = 0x3e6fU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xbdU] = 0x246U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc2U] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc3U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc4U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc5U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc6U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc7U] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc8U] = 0x160U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xc9U] = 0x360U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xcaU] = 0x261U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xcbU] = 0x463U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xccU] = 0x1863U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xcdU] = 0x303eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd1U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd2U] = 0xc04U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd3U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd5U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd6U] = 0x8c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd7U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd8U] = 0x8c4U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xd9U] = 0xffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xdaU] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xdbU] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xdcU] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xddU] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe2U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe3U] = 0x1fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe4U] = 0x408U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe5U] = 0x7f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe6U] = 0x408U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe8U] = 0x1ffeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xe9U] = 0x1002U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xeaU] = 0x3f0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xebU] = 0x211U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xecU] = 0xe13U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xedU] = 0x381eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf2U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf3U] = 0x1fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf4U] = 0x1908U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf5U] = 0x1fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf6U] = 0x1908U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf7U] = 0x19f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf8U] = 0x1800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xf9U] = 0x1ffcU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xfaU] = 0x1908U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xfbU] = 0x10f0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xfcU] = 0x31f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0xfdU] = 0x2f0fU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x101U] = 0x3f04U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x102U] = 0x104U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x103U] = 0x13ffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x104U] = 0x1b04U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x105U] = 0xa44U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x106U] = 0xe64U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x107U] = 0x624U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x108U] = 0x624U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x109U] = 0xf04U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x10aU] = 0x904U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x10bU] = 0x1104U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x10cU] = 0x203cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x112U] = 0x1040U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x113U] = 0x1040U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x114U] = 0x1042U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x115U] = 0x1046U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x116U] = 0x1f4cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x117U] = 0x1078U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x118U] = 0x1060U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x119U] = 0x1040U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x11aU] = 0x1043U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x11bU] = 0x1343U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x11cU] = 0x1f43U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x11dU] = 0x187eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x121U] = 0x84cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x122U] = 0x19feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x123U] = 0x1e4cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x124U] = 0x304cU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x125U] = 0x3fffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x126U] = 0x800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x127U] = 0x8feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x128U] = 0x3e82U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x129U] = 0x8feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x12aU] = 0xa82U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x12bU] = 0xcfeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x12cU] = 0x882U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x132U] = 0x19feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x133U] = 0xd06U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x134U] = 0x1feU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x135U] = 0x106U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x136U] = 0x3800U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x137U] = 0xbfeU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x138U] = 0x820U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x139U] = 0xbffU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x13aU] = 0x870U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x13bU] = 0xad8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x13cU] = 0xf8eU;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x13dU] = 0xb03U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x142U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x143U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x144U] = 0x310U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x145U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x146U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x147U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x148U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x149U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x14aU] = 0x310U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x14bU] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x14cU] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x152U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x153U] = 0x1c0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x154U] = 0x3c0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x155U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x156U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x157U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x158U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x159U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x15aU] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x15bU] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x15cU] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x162U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x163U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x164U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x165U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x166U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x167U] = 0x60U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x168U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x169U] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x16aU] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x16bU] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x16cU] = 0x3f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x172U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x173U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x174U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x175U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x176U] = 0x60U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x177U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x178U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x179U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x17aU] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x17bU] = 0x230U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x17cU] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x182U] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x183U] = 0x60U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x184U] = 0xe0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x185U] = 0xa0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x186U] = 0x1a0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x187U] = 0x320U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x188U] = 0x620U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x189U] = 0x7f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x18aU] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x18bU] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x18cU] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x192U] = 0x1f0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x193U] = 0x100U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x194U] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x195U] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x196U] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x197U] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x198U] = 0x70U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x199U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x19aU] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x19bU] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x19cU] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a2U] = 0xf0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a3U] = 0x190U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a4U] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a5U] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a6U] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a7U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a8U] = 0x318U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1a9U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1aaU] = 0x318U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1abU] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1acU] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b2U] = 0x3f8U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b3U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b4U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b5U] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b6U] = 0x60U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b7U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b8U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1b9U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1baU] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1bbU] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1bcU] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c2U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c3U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c4U] = 0x310U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c5U] = 0x310U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c6U] = 0x120U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c7U] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c8U] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1c9U] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1caU] = 0x218U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1cbU] = 0x330U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1ccU] = 0x1e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d1U] = 0x10U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d2U] = 0x30U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d3U] = 0x20U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d4U] = 0x60U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d5U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d6U] = 0x40U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d7U] = 0xc0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d8U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1d9U] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1daU] = 0x180U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1dbU] = 0x100U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1dcU] = 0x300U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1ddU] = 0x200U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e2U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e3U] = 0x1c0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e4U] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e5U] = 0x2a0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e6U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e7U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e8U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1e9U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1eaU] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1ebU] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1ecU] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1edU] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f2U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f3U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f4U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f5U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f6U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f7U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f8U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1f9U] = 0x80U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1faU] = 0x2a0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1fbU] = 0x3e0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1fcU] = 0x1c0U;
    vlSelfRef.tb_status_panel__DOT__dut__DOT__font_rom[0x1fdU] = 0x80U;
}

VL_ATTR_COLD void Vtb_status_panel___024root___eval_final(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_final\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__stl(Vtb_status_panel___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_status_panel___024root___eval_phase__stl(Vtb_status_panel___024root* vlSelf);

VL_ATTR_COLD void Vtb_status_panel___024root___eval_settle(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_settle\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_status_panel___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_status_panel.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_status_panel___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__stl(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___dump_triggers__stl\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_status_panel___024root___act_sequent__TOP__0(Vtb_status_panel___024root* vlSelf);

VL_ATTR_COLD void Vtb_status_panel___024root___eval_stl(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_stl\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_status_panel___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_status_panel___024root___eval_triggers__stl(Vtb_status_panel___024root* vlSelf);

VL_ATTR_COLD bool Vtb_status_panel___024root___eval_phase__stl(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___eval_phase__stl\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_status_panel___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_status_panel___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__act(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___dump_triggers__act\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_status_panel.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_status_panel.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_panel___024root___dump_triggers__nba(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___dump_triggers__nba\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_status_panel.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_status_panel.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_status_panel___024root___ctor_var_reset(Vtb_status_panel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_panel___024root___ctor_var_reset\n"); );
    Vtb_status_panel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_status_panel__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__frame = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__muted = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__paused = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__loading = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__aenabled = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__ended = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__fault = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__volume = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__x = VL_RAND_RESET_I(10);
    vlSelf->tb_status_panel__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_status_panel__DOT__ink = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__shade = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__color = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_status_panel__DOT__font_ref[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->tb_status_panel__DOT__st = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__bf = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__cf = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__bu = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__cu = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__xx = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__row = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__col = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__lx = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__ly = VL_RAND_RESET_I(32);
    vlSelf->tb_status_panel__DOT__expected = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__expected_color = VL_RAND_RESET_I(24);
    vlSelf->tb_status_panel__DOT__dut__DOT__vol = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__dut__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__dut__DOT__c = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__dut__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_status_panel__DOT__dut__DOT__b_timer = VL_RAND_RESET_I(7);
    vlSelf->tb_status_panel__DOT__dut__DOT__c_timer = VL_RAND_RESET_I(7);
    vlSelf->tb_status_panel__DOT__dut__DOT__b_up = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__dut__DOT__c_up = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__dut__DOT__physical_x = VL_RAND_RESET_I(11);
    vlSelf->tb_status_panel__DOT__dut__DOT__physical_y = VL_RAND_RESET_I(10);
    vlSelf->tb_status_panel__DOT__dut__DOT__glyph = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_status_panel__DOT__dut__DOT__font_rom[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->tb_status_panel__DOT__dut__DOT__font_row = VL_RAND_RESET_I(14);
    vlSelf->tb_status_panel__DOT__dut__DOT__gx = VL_RAND_RESET_I(4);
    vlSelf->tb_status_panel__DOT__dut__DOT__px = VL_RAND_RESET_I(10);
    vlSelf->tb_status_panel__DOT__dut__DOT__py = VL_RAND_RESET_I(10);
    vlSelf->tb_status_panel__DOT__dut__DOT__area = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__dut__DOT__flash = VL_RAND_RESET_I(1);
    vlSelf->tb_status_panel__DOT__dut__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__112__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__113__value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_tb_status_panel__DOT__dut__DOT__digit__114__value = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_status_panel__DOT__clk__0 = VL_RAND_RESET_I(1);
}
