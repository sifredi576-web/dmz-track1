// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_ticker.h for the primary calling header

#include "Vtb_top_ticker__pch.h"
#include "Vtb_top_ticker__Syms.h"
#include "Vtb_top_ticker___024root.h"

VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__1(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_top_ticker__DOT__py;
    tb_top_ticker__DOT__py = 0;
    IData/*31:0*/ tb_top_ticker__DOT__n;
    tb_top_ticker__DOT__n = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__14__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__14__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__14__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__15__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__15__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__15__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__15__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__15__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__15__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__16__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__16__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__16__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__16__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__16__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__16__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__19__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__19__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__19__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__20__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__20__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__20__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__21__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__21__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__21__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__21__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__21__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__21__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__22__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__22__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__22__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__22__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__22__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__22__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x13U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x14U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x14U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x15U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x15U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x16U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x16U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x17U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x17U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x18U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x18U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x19U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x19U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1aU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1aU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1bU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1bU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1cU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1cU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1dU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1dU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1eU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1eU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1fU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x1fU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x20U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x20U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x21U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x21U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x22U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x22U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x23U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x23U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x24U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x24U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x25U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x25U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x26U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x26U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x27U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x27U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x28U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x28U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x29U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy = 0x29U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__13__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__13__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x2aU;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__yy = 0x2edU;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__xx = 0x671U;
    __Vtask_tb_top_ticker__DOT__check_pixel__14__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__14__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__14__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__14__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__14__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__14__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__14__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__14__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__14__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__14__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__14__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__14__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__14__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__14__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__14__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__14__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__14__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__14__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__15__yy = 0x2d0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__15__xx = 0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__15__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__15__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__15__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__15__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__15__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__15__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__15__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__15__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__15__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__15__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__15__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__15__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__15__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__15__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__15__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__15__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__15__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__15__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__16__yy = 0x2cfU;
    __Vtask_tb_top_ticker__DOT__check_pixel__16__xx = 0x4ffU;
    __Vtask_tb_top_ticker__DOT__check_pixel__16__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__16__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__16__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__16__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__16__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__16__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__16__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__16__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__16__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__16__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__16__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__16__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__16__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__16__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__16__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__16__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__16__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__16__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    tb_top_ticker__DOT__n = 0U;
    while (VL_GTS_III(32, 0x5beU, tb_top_ticker__DOT__n)) {
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             24);
        vlSelfRef.tb_top_ticker__DOT__x = 0U;
        vlSelfRef.tb_top_ticker__DOT__y = 0x2d0U;
        vlSelfRef.tb_top_ticker__DOT__frame_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             25);
        vlSelfRef.tb_top_ticker__DOT__frame_tick = 0U;
        vlSelfRef.tb_top_ticker__DOT__frames = ((IData)(1U) 
                                                + vlSelfRef.tb_top_ticker__DOT__frames);
        vlSelfRef.tb_top_ticker__DOT__offset = VL_MODDIVS_III(32, 
                                                              VL_DIVS_III(32, vlSelfRef.tb_top_ticker__DOT__frames, (IData)(2U)), (IData)(0x400U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll) 
                          != (0x3ffU & vlSelfRef.tb_top_ticker__DOT__offset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:27: Assertion failed in %Ntb_top_ticker.tick: scroll speed/wrap mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 27, "", false);
        }
        tb_top_ticker__DOT__n = ((IData)(1U) + tb_top_ticker__DOT__n);
    }
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 1U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 1U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 2U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 2U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 3U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 3U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 4U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 4U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 5U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 5U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 6U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 6U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 7U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 7U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 8U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 8U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 9U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 9U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xaU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xaU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xbU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xbU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xcU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xcU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xdU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xdU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xeU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xeU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xfU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0xfU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x10U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x10U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x11U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x11U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x12U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x12U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x13U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x13U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x14U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x14U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x15U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x15U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x16U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x16U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x17U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x17U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x18U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x18U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x19U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x19U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1aU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1aU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1bU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1bU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1cU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1cU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1dU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1dU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1eU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1eU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1fU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x1fU;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x20U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x20U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x21U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x21U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x22U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x22U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x23U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x23U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x24U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x24U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x25U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x25U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x26U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x26U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x27U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x27U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x28U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x28U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x29U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__19__yy = 0x29U;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__19__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__19__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__19__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__19__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__19__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__19__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__19__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__19__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__19__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x2aU;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__yy = 0x2edU;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__xx = 0x671U;
    __Vtask_tb_top_ticker__DOT__check_pixel__20__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__20__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__20__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__20__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__20__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__20__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__20__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__20__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__20__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__20__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__20__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__20__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__20__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__20__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__20__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__20__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__20__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__20__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__21__yy = 0x2d0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__21__xx = 0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__21__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__21__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__21__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__21__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__21__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__21__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__21__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__21__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__21__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__21__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__21__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__21__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__21__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__21__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__21__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__21__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__21__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__21__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__22__yy = 0x2cfU;
    __Vtask_tb_top_ticker__DOT__check_pixel__22__xx = 0x4ffU;
    __Vtask_tb_top_ticker__DOT__check_pixel__22__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__22__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__22__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__22__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__22__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__22__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__22__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__22__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__22__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__22__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__22__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__22__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__22__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__22__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__22__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__22__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__22__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__22__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    tb_top_ticker__DOT__n = 0U;
    while (VL_GTS_III(32, 0x23eU, tb_top_ticker__DOT__n)) {
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             24);
        vlSelfRef.tb_top_ticker__DOT__x = 0U;
        vlSelfRef.tb_top_ticker__DOT__y = 0x2d0U;
        vlSelfRef.tb_top_ticker__DOT__frame_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             25);
        vlSelfRef.tb_top_ticker__DOT__frame_tick = 0U;
        vlSelfRef.tb_top_ticker__DOT__frames = ((IData)(1U) 
                                                + vlSelfRef.tb_top_ticker__DOT__frames);
        vlSelfRef.tb_top_ticker__DOT__offset = VL_MODDIVS_III(32, 
                                                              VL_DIVS_III(32, vlSelfRef.tb_top_ticker__DOT__frames, (IData)(2U)), (IData)(0x400U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_top_ticker__DOT__dut__DOT__scroll) 
                          != (0x3ffU & vlSelfRef.tb_top_ticker__DOT__offset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:27: Assertion failed in %Ntb_top_ticker.tick: scroll speed/wrap mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 27, "", false);
        }
        tb_top_ticker__DOT__n = ((IData)(1U) + tb_top_ticker__DOT__n);
    }
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 1U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 1U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 2U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 2U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 3U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 3U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 4U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 4U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 5U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 5U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 6U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 6U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 7U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 7U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 8U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 8U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 9U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 9U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xaU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xaU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xbU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xbU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xcU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xcU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xdU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xdU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xeU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xeU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0xfU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0xfU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x10U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x10U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x11U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x11U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x12U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x12U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x13U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x13U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x14U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x14U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x15U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x15U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x16U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x16U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x17U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x17U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x18U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x18U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x19U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x19U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1aU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1aU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1bU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1bU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1cU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1cU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1dU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1dU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1eU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1eU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x1fU;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x1fU;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x20U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x20U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x21U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x21U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x22U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x22U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x23U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x23U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x24U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x24U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x25U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x25U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x26U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x26U;
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                                    & VL_LTES_III(32, 4U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                   & VL_GTS_III(32, 0x24U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx) 
                                 & VL_GTS_III(32, 0x28U, vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__xx,
                         32,vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy,
                         32,vlSelfRef.tb_top_ticker__DOT__offset,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                         1,vlSelfRef.tb_top_ticker__DOT__expected,
                         1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
        }
        vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                            + vlSelfRef.tb_top_ticker__DOT__px);
    }
    tb_top_ticker__DOT__py = 0x27U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
}
