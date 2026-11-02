// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display__Syms.h"
#include "Vtb_display___024root.h"

VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__0__0(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x40U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x50U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x60U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x70U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x80U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0x90U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0xa0U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0xb0U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = 0xc0U;
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (vlSelfRef.tb_display__DOT__k 
                                                                 - (IData)(0x80U)), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelfRef.tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelfRef.tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             18);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (vlSelfRef.tb_display__DOT__k 
                                                                             - (IData)(0x80U))), 2U));
        if (VL_GTS_III(32, 0U, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0U;
        }
        if (VL_LTS_III(32, 0xffU, vlSelfRef.tb_display__DOT__expected)) {
            vlSelfRef.tb_display__DOT__expected = 0xffU;
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((0xff0000U & (vlSelfRef.tb_display__DOT__expected 
                                            << 0x10U)) 
                              | ((0xff00U & (vlSelfRef.tb_display__DOT__expected 
                                             << 8U)) 
                                 | (0xffU & vlSelfRef.tb_display__DOT__expected))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=0 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=1 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=2 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=3 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=4 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=1 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=2 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=3 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=4 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=5 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=6 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=7 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 5U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 5U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=5 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (vlSelfRef.tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (((IData)(0xffU) 
                                                  - vlSelfRef.tb_display__DOT__k) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (0x55U 
                                                   ^ vlSelfRef.tb_display__DOT__k))));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             24);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != ((([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                            = vlSelfRef.tb_display__DOT__k;
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__0__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__Vfuncout)) 
                               << 0x10U) | ((([&]() {
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 0U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 6U;
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                = ((IData)(0xffU) 
                                                   - vlSelfRef.tb_display__DOT__k);
                                            vlSelf->__Vfunc_tb_display__DOT__reference_channel__1__v = VL_RAND_RESET_I(32);
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v 
                                                = ((IData)(0x80U) 
                                                   + 
                                                   (VL_SHIFTRS_III(32,32,32, 
                                                                   VL_MULS_III(32, 
                                                                               (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__pixel 
                                                                                - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv), 2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x10U), 
                                                                (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv 
                                                                 - (IData)(4U)))));
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout 
                                                = (
                                                   VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                    ? 0U
                                                    : 
                                                   (VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)
                                                     ? 0xffU
                                                     : 
                                                    (0xffU 
                                                     & VL_EXTENDS_II(32,8, 
                                                                     (0xffU 
                                                                      & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__v)))));
                                        }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__Vfuncout)) 
                                             << 8U) 
                                            | ([&]() {
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 0U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 6U;
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                            = (0x55U 
                                               ^ vlSelfRef.tb_display__DOT__k);
                                        vlSelf->__Vfunc_tb_display__DOT__reference_channel__2__v = VL_RAND_RESET_I(32);
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v 
                                            = ((IData)(0x80U) 
                                               + (VL_SHIFTRS_III(32,32,32, 
                                                                 VL_MULS_III(32, 
                                                                             (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__pixel 
                                                                              - (IData)(0x80U)), vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv), 2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(0x10U), 
                                                              (vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv 
                                                               - (IData)(4U)))));
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout 
                                            = (VL_GTS_III(32, 0U, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                ? 0U
                                                : (
                                                   VL_LTS_III(32, 0xffU, vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & VL_EXTENDS_II(32,8, 
                                                                    (0xffU 
                                                                     & vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__v)))));
                                    }(), (IData)(vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__Vfuncout)))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=0 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__k = 0U;
}
