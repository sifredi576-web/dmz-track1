// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_ticker.h for the primary calling header

#include "Vtb_top_ticker__pch.h"
#include "Vtb_top_ticker___024root.h"

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_static__TOP(Vtb_top_ticker___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_static(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_static\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top_ticker___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_static__TOP(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_static__TOP\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_ticker__DOT__clk = 0U;
    vlSelfRef.tb_top_ticker__DOT__reset = 1U;
    vlSelfRef.tb_top_ticker__DOT__frame_tick = 0U;
    vlSelfRef.tb_top_ticker__DOT__x = 0U;
    vlSelfRef.tb_top_ticker__DOT__y = 0x64U;
    vlSelfRef.tb_top_ticker__DOT__offset = 0U;
    vlSelfRef.tb_top_ticker__DOT__frames = 0U;
}

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_initial__TOP(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial__TOP\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0U] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[1U] = 0x810U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[2U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[3U] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[4U] = 0x910U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[5U] = 0x8d0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[6U] = 0x830U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[7U] = 0xffffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[8U] = 0x830U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[9U] = 0x8d0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xaU] = 0x910U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbU] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xcU] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdU] = 0x810U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xeU] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10U] = 0x1008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11U] = 0x3008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12U] = 0x1008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13U] = 0xff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14U] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15U] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17U] = 0x4ff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18U] = 0x2012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19U] = 0x181aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1aU] = 0x7d6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1bU] = 0x1012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1cU] = 0x2012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1dU] = 0x4ff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1eU] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2aU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2bU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2cU] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x30U] = 0x8100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x31U] = 0x4100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x32U] = 0x2100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x33U] = 0x1d7fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x34U] = 0x2149U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x35U] = 0x4149U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x36U] = 0x8149U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x37U] = 0xff49U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x38U] = 0x8949U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x39U] = 0x8949U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3aU] = 0x8949U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3bU] = 0x897fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3cU] = 0x8900U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3dU] = 0x8100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3eU] = 0x8100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x3fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x40U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x41U] = 0x8090U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x42U] = 0x808cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x43U] = 0x8484U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x44U] = 0x4684U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x45U] = 0x4984U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x46U] = 0x28f5U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x47U] = 0x1086U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x48U] = 0x1084U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x49U] = 0x2c84U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4aU] = 0x2384U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4bU] = 0x4084U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4cU] = 0x8094U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4dU] = 0x8cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4eU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x4fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x50U] = 0x4000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x51U] = 0x7e3eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x52U] = 0x4022U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x53U] = 0x3fe2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x54U] = 0x2222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x55U] = 0x223eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x56U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x57U] = 0x110U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x58U] = 0xfe88U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x59U] = 0x4257U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5aU] = 0x4224U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5bU] = 0x4254U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5cU] = 0xfe8cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5dU] = 0x100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5eU] = 0x100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x5fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x60U] = 0x824U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x61U] = 0x624U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x62U] = 0x1a4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x63U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x64U] = 0xa3U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x65U] = 0x122U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x66U] = 0x400U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x67U] = 0x422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x68U] = 0x4ccU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x69U] = 0x400U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6aU] = 0x400U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6bU] = 0xffffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6cU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6dU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6eU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x6fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x70U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x71U] = 0x4410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x72U] = 0x8210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x73U] = 0x7fffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x74U] = 0x110U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x75U] = 0x8090U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x76U] = 0x8008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x77U] = 0x4088U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x78U] = 0x4388U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x79U] = 0x2c88U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7aU] = 0x10ffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7bU] = 0x2888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7cU] = 0x4688U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7dU] = 0x8188U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7eU] = 0x8008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x7fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x80U] = 0x888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x81U] = 0x886U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x82U] = 0x4a2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x83U] = 0x82aaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x84U] = 0xbfaaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x85U] = 0x42feU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x86U] = 0x22aaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x87U] = 0x1eabU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x88U] = 0x22aaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x89U] = 0x42feU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8aU] = 0xbfaaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8bU] = 0x2aaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8cU] = 0x4a2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8dU] = 0x88aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8eU] = 0x886U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x8fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x90U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x91U] = 0x4040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x92U] = 0x2042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x93U] = 0x1fccU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x94U] = 0x2000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x95U] = 0x4008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x96U] = 0x5fe9U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x97U] = 0x4aaaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x98U] = 0x4ab8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x99U] = 0x4aa8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9aU] = 0x4aa8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9bU] = 0x4aaaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9cU] = 0x5fe9U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9dU] = 0x4008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9eU] = 0x4000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x9fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa0U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa1U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa2U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa3U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa4U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa5U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa6U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa7U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa8U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xa9U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xaaU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xabU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xacU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xadU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xaeU] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xafU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb0U] = 0x1008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb1U] = 0x3008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb2U] = 0x1008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb3U] = 0xff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb4U] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb5U] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb6U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb7U] = 0x4ff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb8U] = 0x2012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xb9U] = 0x181aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbaU] = 0x7d6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbbU] = 0x1012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbcU] = 0x2012U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbdU] = 0x4ff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbeU] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xbfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc0U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc1U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc2U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc3U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc4U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc5U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc6U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc7U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc8U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xc9U] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xcaU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xcbU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xccU] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xcdU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xceU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xcfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd0U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd1U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd2U] = 0x5800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd3U] = 0x3800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd4U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd5U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd6U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd7U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd8U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xd9U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdaU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdbU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdcU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xddU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdeU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xdfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe0U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe1U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe2U] = 8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe3U] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe4U] = 0x408U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe5U] = 0x208U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe6U] = 0x188U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe7U] = 0x7fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe8U] = 0x88U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xe9U] = 0x108U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xeaU] = 0x208U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xebU] = 0x4c08U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xecU] = 0x8008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xedU] = 0x7ff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xeeU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xefU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf0U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf1U] = 0x40cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf2U] = 0x244U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf3U] = 0xfe24U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf4U] = 0x4514U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf5U] = 0x4484U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf6U] = 0x4445U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf7U] = 0x4426U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf8U] = 0x4444U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xf9U] = 0x4484U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfaU] = 0x4514U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfbU] = 0xfe24U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfcU] = 0x244U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfdU] = 0x414U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xfeU] = 0x40cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0xffU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x100U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x101U] = 0x4020U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x102U] = 0x2022U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x103U] = 0x102cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x104U] = 0x820U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x105U] = 0x620U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x106U] = 0x1e0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x107U] = 0x3fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x108U] = 0x120U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x109U] = 0x4620U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10aU] = 0x8020U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10bU] = 0x4020U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10cU] = 0x3fe0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x10fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x110U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x111U] = 0x310U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x112U] = 0xd0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x113U] = 0xffffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x114U] = 0x90U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x115U] = 0x110U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x116U] = 0x8080U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x117U] = 0x8048U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x118U] = 0x4328U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x119U] = 0x2c09U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11aU] = 0x100eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11bU] = 0x2c08U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11cU] = 0x4328U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11dU] = 0x8048U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11eU] = 0x8088U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x11fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x120U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x121U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x122U] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x123U] = 0x5042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x124U] = 0x4c4aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x125U] = 0x43caU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x126U] = 0x404aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x127U] = 0x404aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x128U] = 0x4fcaU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x129U] = 0x504aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12aU] = 0x504aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12bU] = 0x5c42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12cU] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12dU] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x12fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x130U] = 0x8008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x131U] = 0x8108U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x132U] = 0x4088U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x133U] = 0x4068U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x134U] = 0x2108U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x135U] = 0x2208U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x136U] = 0x1409U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x137U] = 0x80eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x138U] = 0x1408U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x139U] = 0x2208U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13aU] = 0x4188U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13bU] = 0x4028U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13cU] = 0x8048U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13dU] = 0x8188U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13eU] = 0x8008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x13fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x140U] = 0x4000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x141U] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x142U] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x143U] = 0x4702U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x144U] = 0x44e2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x145U] = 0x443eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x146U] = 0x4422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x147U] = 0x4422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x148U] = 0x4422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x149U] = 0x7422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14aU] = 0x4e22U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14bU] = 0x41e2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14cU] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14dU] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14eU] = 0x4000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x14fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x150U] = 0x2220U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x151U] = 0x6730U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x152U] = 0x22acU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x153U] = 0x1263U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x154U] = 0x1230U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x155U] = 0x220U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x156U] = 0x110U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x157U] = 0x2118U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x158U] = 0x24a7U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x159U] = 0x4444U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15aU] = 0x48a4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15bU] = 0x9114U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15cU] = 0x10cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15dU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15eU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x15fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x160U] = 0x20c8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x161U] = 0x6f08U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x162U] = 0x2009U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x163U] = 0x1c0eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x164U] = 0x13e8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x165U] = 0x1008U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x166U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x167U] = 0xfe5eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x168U] = 0x250U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x169U] = 0x7f50U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16aU] = 0x2dfU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16bU] = 0x7e50U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16cU] = 0x8250U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16dU] = 0xfe5eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16eU] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x16fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x170U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x171U] = 0x460U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x172U] = 0x7e02U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x173U] = 0x18cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x174U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x175U] = 0x800cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x176U] = 0x4fa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x177U] = 0x2aa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x178U] = 0xaa5U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x179U] = 0xfe6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17aU] = 0xaa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17bU] = 0x2aa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17cU] = 0x4fa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17dU] = 0x800cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x17fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x180U] = 0x2040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x181U] = 0x1040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x182U] = 0x842U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x183U] = 0x642U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x184U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x185U] = 0x4042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x186U] = 0x8042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x187U] = 0x7fc2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x188U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x189U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18aU] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18bU] = 0x242U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18cU] = 0x442U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18dU] = 0x840U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18eU] = 0x3040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x18fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x190U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x191U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x192U] = 0x5800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x193U] = 0x3800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x194U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x195U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x196U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x197U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x198U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x199U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19aU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19bU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19cU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x19fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a0U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a1U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a2U] = 0x3fccU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a3U] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a4U] = 0x800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a5U] = 0x2200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a6U] = 0x12feU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a7U] = 0xa92U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a8U] = 0x692U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1a9U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1aaU] = 0x692U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1abU] = 0xa92U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1acU] = 0x12feU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1adU] = 0x2200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1aeU] = 0x2000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1afU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b0U] = 0x100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b1U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b2U] = 0x60U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b3U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b4U] = 7U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b5U] = 0x280U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b6U] = 0x260U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b7U] = 0x21cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b8U] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1b9U] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1baU] = 0xffffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1bbU] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1bcU] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1bdU] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1beU] = 0x200U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1bfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c0U] = 0x100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c1U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c2U] = 0x60U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c3U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c4U] = 7U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c5U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c6U] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c7U] = 0x401eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c8U] = 0x20e2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1c9U] = 0x1302U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1caU] = 0xc02U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1cbU] = 0x1302U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ccU] = 0x20e2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1cdU] = 0x401eU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ceU] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1cfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d0U] = 0x100U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d1U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d2U] = 0x60U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d3U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d4U] = 7U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d5U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d6U] = 0x30U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d7U] = 0xfU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d8U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1d9U] = 0x888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1daU] = 0x888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1dbU] = 0x888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1dcU] = 0x888U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ddU] = 0x808U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1deU] = 8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1dfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e0U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e1U] = 0x460U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e2U] = 0x7e02U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e3U] = 0x18cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e4U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e5U] = 0x800cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e6U] = 0x4fa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e7U] = 0x2aa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e8U] = 0xaa5U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1e9U] = 0xfe6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1eaU] = 0xaa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ebU] = 0x2aa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ecU] = 0x4fa4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1edU] = 0x800cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1eeU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1efU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f0U] = 0x2040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f1U] = 0x1040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f2U] = 0x842U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f3U] = 0x642U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f4U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f5U] = 0x4042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f6U] = 0x8042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f7U] = 0x7fc2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f8U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1f9U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1faU] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1fbU] = 0x242U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1fcU] = 0x442U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1fdU] = 0x840U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1feU] = 0x3040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x1ffU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x200U] = 0x80U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x201U] = 0x60U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x202U] = 0xfff8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x203U] = 7U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x204U] = 0x8004U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x205U] = 0x81e4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x206U] = 0x4524U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x207U] = 0x2924U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x208U] = 0x1124U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x209U] = 0x2fffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20aU] = 0x4124U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20bU] = 0x4124U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20cU] = 0x8124U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20dU] = 0x81e4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20eU] = 0x8004U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x20fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x210U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x211U] = 0x6000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x212U] = 0x1ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x213U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x214U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x215U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x216U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x217U] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x218U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x219U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21aU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21bU] = 0x8222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21cU] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x21fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x220U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x221U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x222U] = 0x5800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x223U] = 0x3800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x224U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x225U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x226U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x227U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x228U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x229U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22aU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22bU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22cU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x22fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x230U] = 0x410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x231U] = 0x840cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x232U] = 0x8404U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x233U] = 0x4484U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x234U] = 0x4714U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x235U] = 0x2464U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x236U] = 0x1405U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x237U] = 0xc06U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x238U] = 0x7f4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x239U] = 0xc04U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23aU] = 0x1404U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23bU] = 0x2404U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23cU] = 0x4404U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23dU] = 0x8414U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23eU] = 0x40cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x23fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x240U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x241U] = 0xfffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x242U] = 0x422U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x243U] = 0x85aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x244U] = 0x786U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x245U] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x246U] = 0xc20U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x247U] = 0x322U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x248U] = 0x4022U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x249U] = 0x8022U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24aU] = 0x7fe2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24bU] = 0x22U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24cU] = 0x122U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24dU] = 0x622U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24eU] = 0x1820U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x24fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x250U] = 0x4000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x251U] = 0x3000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x252U] = 0xffcU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x253U] = 0x4004U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x254U] = 0x4044U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x255U] = 0x4184U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x256U] = 0x4e04U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x257U] = 0x4025U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x258U] = 0x40c6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x259U] = 0x6304U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25aU] = 0x5004U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25bU] = 0x4c04U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25cU] = 0x4304U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25dU] = 0x40e4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25eU] = 0x4004U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x25fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x260U] = 0x8000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x261U] = 0x6000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x262U] = 0x1ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x263U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x264U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x265U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x266U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x267U] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x268U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x269U] = 0x222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26aU] = 0x4222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26bU] = 0x8222U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26cU] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26dU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x26fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x270U] = 0x1020U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x271U] = 0x3020U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x272U] = 0x1fffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x273U] = 0x820U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x274U] = 0x2820U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x275U] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x276U] = 0x8c42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x277U] = 0x43e2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x278U] = 0x2052U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x279U] = 0x184aU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27aU] = 0x47c6U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27bU] = 0x8042U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27cU] = 0x4040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27dU] = 0x3fc0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27eU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x27fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x280U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x281U] = 0x4040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x282U] = 0x2040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x283U] = 0xf5fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x284U] = 0x955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x285U] = 0x4955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x286U] = 0x8955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x287U] = 0x7975U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x288U] = 0x955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x289U] = 0x955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28aU] = 0x955U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28bU] = 0xf5fU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28cU] = 0x2040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28dU] = 0x4040U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28eU] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x28fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x290U] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x291U] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x292U] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x293U] = 0xff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x294U] = 0x412U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x295U] = 0x412U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x296U] = 0x412U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x297U] = 0xff2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x298U] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x299U] = 0x4002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29aU] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29bU] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29cU] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29dU] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29eU] = 2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x29fU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a0U] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a1U] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a2U] = 0x87f2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a3U] = 0x4c92U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a4U] = 0x5492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a5U] = 0x2492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a6U] = 0x3492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a7U] = 0x4ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a8U] = 0x4492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2a9U] = 0x4492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2aaU] = 0x8492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2abU] = 0x8492U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2acU] = 0x87f2U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2adU] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2aeU] = 0x8002U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2afU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b0U] = 0x210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b1U] = 0x4210U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b2U] = 0x8110U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b3U] = 0x7fffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b4U] = 0x90U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b5U] = 0x8420U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b6U] = 0x8410U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b7U] = 0x47e8U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b8U] = 0x2427U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2b9U] = 0x1c24U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2baU] = 0x7e4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2bbU] = 0x1c34U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2bcU] = 0x242cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2bdU] = 0x47e0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2beU] = 0x8400U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2bfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c0U] = 0x40U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c1U] = 0x42U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c2U] = 0x3fccU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c3U] = 0x1000U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c4U] = 0x8800U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c5U] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c6U] = 0x82U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c7U] = 0x1e92U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c8U] = 0x1292U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2c9U] = 0x12feU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2caU] = 0x1292U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2cbU] = 0x5e92U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2ccU] = 0x8082U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2cdU] = 0x7ffeU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2ceU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2cfU] = 0U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d0U] = 0x8204U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d1U] = 0x8974U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d2U] = 0x88d4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d3U] = 0xe854U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d4U] = 0x8bffU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d5U] = 0x8854U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d6U] = 0x88d4U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d7U] = 0xf974U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d8U] = 0xa814U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2d9U] = 0xaa08U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2daU] = 0xa977U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2dbU] = 0xa884U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2dcU] = 0xa944U;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2ddU] = 0x8a3cU;
    vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[0x2deU] = 0x8204U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x2dfU;
    while ((__Vilp1 <= 0x3ffU)) {
        vlSelfRef.tb_top_ticker__DOT__dut__DOT__font_rom[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_final(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_final\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__stl(Vtb_top_ticker___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top_ticker___024root___eval_phase__stl(Vtb_top_ticker___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_settle(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_settle\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_top_ticker___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_top_ticker.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top_ticker___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__stl(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___dump_triggers__stl\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_top_ticker___024root___act_comb__TOP__0(Vtb_top_ticker___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_stl(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_stl\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_top_ticker___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_top_ticker___024root___eval_triggers__stl(Vtb_top_ticker___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top_ticker___024root___eval_phase__stl(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_phase__stl\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top_ticker___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top_ticker___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__act(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___dump_triggers__act\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_ticker.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_top_ticker.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__nba(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___dump_triggers__nba\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_ticker.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_top_ticker.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_ticker___024root___ctor_var_reset(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___ctor_var_reset\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_top_ticker__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__frame_tick = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__x = VL_RAND_RESET_I(11);
    vlSelf->tb_top_ticker__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_top_ticker__DOT__ink = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__shade = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_ticker__DOT__reference_columns[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_top_ticker__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->tb_top_ticker__DOT__frames = VL_RAND_RESET_I(32);
    vlSelf->tb_top_ticker__DOT__px = VL_RAND_RESET_I(32);
    vlSelf->tb_top_ticker__DOT__expected = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__dut__DOT__scroll = VL_RAND_RESET_I(10);
    vlSelf->tb_top_ticker__DOT__dut__DOT__half_frame = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__dut__DOT__ahead_x = VL_RAND_RESET_I(11);
    vlSelf->tb_top_ticker__DOT__dut__DOT__ahead_y = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top_ticker__DOT__dut__DOT__font_rom[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_top_ticker__DOT__dut__DOT__column = VL_RAND_RESET_I(16);
    vlSelf->tb_top_ticker__DOT__dut__DOT__row_q = VL_RAND_RESET_I(4);
    vlSelf->tb_top_ticker__DOT__dut__DOT__inside_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_ticker__DOT__dut__DOT__text_q = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_top_ticker__DOT__check_pixel__13__xx = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_top_ticker__DOT__check_pixel__25__xx = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0 = VL_RAND_RESET_I(1);
}
