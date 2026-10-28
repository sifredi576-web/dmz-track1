// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display__Syms.h"
#include "Vtb_display___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__0(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_display__DOT__k;
    tb_display__DOT__k = 0;
    IData/*31:0*/ tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__0__v;
    __Vtask_tb_display__DOT__send__0__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__0__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__0__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__1__v;
    __Vtask_tb_display__DOT__send__1__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__2__v;
    __Vtask_tb_display__DOT__send__2__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__3__v;
    __Vtask_tb_display__DOT__send__3__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__4__v;
    __Vtask_tb_display__DOT__send__4__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__5__v;
    __Vtask_tb_display__DOT__send__5__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 0U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x40U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 1U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x50U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 2U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x60U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 3U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x70U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 4U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x80U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 5U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0x90U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xa0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 7U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xb0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 0U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 1U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 2U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(2U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 3U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(3U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 4U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(4U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 5U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(5U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 6U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(6U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 7U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(7U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 8U;
        vlSelfRef.tb_display__DOT__cc = 8U;
        vlSelfRef.tb_display__DOT__rgb = ((0xff0000U 
                                           & (tb_display__DOT__k 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (tb_display__DOT__k 
                                                 << 8U)) 
                                             | (0xffU 
                                                & tb_display__DOT__k)));
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_display.sv", 
                                             12);
        vlSelfRef.tb_display__DOT__expected = ((IData)(0xc0U) 
                                               + VL_SHIFTRS_III(32,32,32, 
                                                                VL_MULS_III(32, (IData)(8U), 
                                                                            (tb_display__DOT__k 
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:15: Assertion failed in %Ntb_display: Pixel clamp mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_display.sv", 15, "", false);
        }
        tb_display__DOT__k = ((IData)(1U) + tb_display__DOT__k);
    }
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         17);
    vlSelfRef.tb_display__DOT__reset = 0U;
    tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1c20U;
    while (VL_LTS_III(32, 0U, tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_display.clk)", 
                                                             "sim/system\tb_display.sv", 
                                                             17);
        tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0x10000U != vlSelfRef.tb_display__DOT__tm)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:18: Assertion failed in %Ntb_display: Hour carry %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     24,vlSelfRef.tb_display__DOT__tm);
        VL_STOP_MT("sim/system\\tb_display.sv", 18, "", false);
    }
    __Vtask_tb_display__DOT__send__0__v = 0x5dU;
    __Vtask_tb_display__DOT__send__0__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__0__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__0__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__0__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:19: Assertion failed in %Ntb_display: Brightness step\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 19, "", false);
    }
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__1__v = 0x5dU;
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__1__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__1__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:20: Assertion failed in %Ntb_display: Brightness upper clamp\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 20, "", false);
    }
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__2__v = 0x5bU;
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__2__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__2__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:21: Assertion failed in %Ntb_display: Brightness lower clamp\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 21, "", false);
    }
    __Vtask_tb_display__DOT__send__3__v = 0x43U;
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__3__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_display__DOT__c))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:22: Assertion failed in %Ntb_display: Contrast step\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 22, "", false);
    }
    __Vtask_tb_display__DOT__send__4__v = 0x43U;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x43U;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x43U;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x43U;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_display__DOT__c))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:22: Assertion failed in %Ntb_display: Contrast wrap\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 22, "", false);
    }
    __Vtask_tb_display__DOT__send__5__v = 0x44U;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         9);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY((((4U != (IData)(vlSelfRef.tb_display__DOT__b)) 
                      | (4U != (IData)(vlSelfRef.tb_display__DOT__c)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:23: Assertion failed in %Ntb_display: Defaults\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 23, "", false);
    }
    VL_WRITEF_NX("PASS all 20736 pixel/parameter combinations, identity/clamp, BCD hour carry and parameter controls\n",0);
    VL_FINISH_MT("sim/system\\tb_display.sv", 24, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_display___024root___dump_triggers__act(Vtb_display___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_display___024root___eval_triggers__act(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_triggers__act\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_display__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_display__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_display__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_display__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_display__DOT__clk__0 
        = vlSelfRef.tb_display__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_display___024root___dump_triggers__act(vlSelf);
    }
#endif
}
