// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_display.h for the primary calling header

#include "Vtb_display__pch.h"
#include "Vtb_display__Syms.h"
#include "Vtb_display___024root.h"

VlCoroutine Vtb_display___024root___eval_initial__TOP__Vtiming__0__1(Vtb_display___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_display___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vtb_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
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
    CData/*7:0*/ __Vtask_tb_display__DOT__send__6__v;
    __Vtask_tb_display__DOT__send__6__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__6__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__6__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__7__v;
    __Vtask_tb_display__DOT__send__7__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__8__v;
    __Vtask_tb_display__DOT__send__8__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__8__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__8__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_display__DOT__send__9__v;
    __Vtask_tb_display__DOT__send__9__v = 0;
    IData/*31:0*/ __Vtask_tb_display__DOT__send__9__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_display__DOT__send__9__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
        vlSelfRef.tb_display__DOT__bb = 6U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 1U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 1U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=1 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 2U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 2U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=2 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 3U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 3U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=3 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 4U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 4U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=4 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 5U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 5U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=5 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 6U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 6U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=6 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=7 rgb=%x out=%x\n",0,
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__cv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__cv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=6 c=8 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=0 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=1 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=2 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=3 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=4 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=5 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=6 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=7 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 7U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 7U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 7U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=7 c=8 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=0 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=1 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=2 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=3 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=4 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=5 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=6 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=7 rgb=%x out=%x\n",0,
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
        vlSelfRef.tb_display__DOT__bb = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__0__bv = 8U;
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
                                            vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__1__bv = 8U;
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
                                        vlSelfRef.__Vfunc_tb_display__DOT__reference_channel__2__bv = 8U;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:26: Assertion failed in %Ntb_display: Mixed-color adjustment mismatch b=8 c=8 rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 26, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    vlSelfRef.tb_display__DOT__bb = 4U;
    vlSelfRef.tb_display__DOT__cc = 4U;
    vlSelfRef.tb_display__DOT__k = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_display__DOT__k)) {
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
                                             31);
        if (VL_UNLIKELY(((vlSelfRef.tb_display__DOT__out 
                          != vlSelfRef.tb_display__DOT__rgb)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:32: Assertion failed in %Ntb_display: Neutral mixed-color RGB mismatch rgb=%x out=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),24,vlSelfRef.tb_display__DOT__rgb,
                         24,vlSelfRef.tb_display__DOT__out);
            VL_STOP_MT("sim/system\\tb_display.sv", 32, "", false);
        }
        vlSelfRef.tb_display__DOT__k = ((IData)(1U) 
                                        + vlSelfRef.tb_display__DOT__k);
    }
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         34);
    vlSelfRef.tb_display__DOT__reset = 0U;
    tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1c20U;
    while (VL_LTS_III(32, 0U, tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_display.clk)", 
                                                             "sim/system\tb_display.sv", 
                                                             34);
        tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_display__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0x10000U != vlSelfRef.tb_display__DOT__tm)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:35: Assertion failed in %Ntb_display: Hour carry %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     24,vlSelfRef.tb_display__DOT__tm);
        VL_STOP_MT("sim/system\\tb_display.sv", 35, "", false);
    }
    __Vtask_tb_display__DOT__send__3__v = 0x5dU;
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__3__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__3__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:36: Assertion failed in %Ntb_display: Brightness step\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 36, "", false);
    }
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__4__v = 0x5dU;
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__4__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__4__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:37: Assertion failed in %Ntb_display: Brightness upper clamp\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 37, "", false);
    }
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__5__v = 0x5bU;
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__5__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__5__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_display__DOT__b))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:38: Assertion failed in %Ntb_display: Brightness lower clamp\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 38, "", false);
    }
    __Vtask_tb_display__DOT__send__6__v = 0x43U;
    __Vtask_tb_display__DOT__send__6__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__6__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__6__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__6__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_display__DOT__c))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:39: Assertion failed in %Ntb_display: Contrast step\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 39, "", false);
    }
    __Vtask_tb_display__DOT__send__7__v = 0x43U;
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__7__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__7__v = 0x43U;
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__7__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__7__v = 0x43U;
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__7__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    __Vtask_tb_display__DOT__send__7__v = 0x43U;
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__7__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__7__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_display__DOT__c))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:39: Assertion failed in %Ntb_display: Contrast wrap\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 39, "", false);
    }
    __Vtask_tb_display__DOT__send__8__v = 0x63U;
    __Vtask_tb_display__DOT__send__8__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__8__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__8__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__8__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_display__DOT__c))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:40: Assertion failed in %Ntb_display: Contrast decrement wrap\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 40, "", false);
    }
    __Vtask_tb_display__DOT__send__9__v = 0x44U;
    __Vtask_tb_display__DOT__send__9__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 1U;
    vlSelfRef.tb_display__DOT__cmd = __Vtask_tb_display__DOT__send__9__v;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    vlSelfRef.tb_display__DOT__cv = 0U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__9__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h70ce6aa5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_display.clk)", 
                                                         "sim/system\tb_display.sv", 
                                                         15);
    __Vtask_tb_display__DOT__send__9__tb_display__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    if (VL_UNLIKELY((((4U != (IData)(vlSelfRef.tb_display__DOT__b)) 
                      | (4U != (IData)(vlSelfRef.tb_display__DOT__c)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_display.sv:41: Assertion failed in %Ntb_display: Defaults\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_display.sv", 41, "", false);
    }
    VL_WRITEF_NX("PASS all 20736 grayscale plus 20736 mixed-color combinations, neutral RGB identity/clamp, BCD hour carry and parameter controls\n",0);
    VL_FINISH_MT("sim/system\\tb_display.sv", 42, "");
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
