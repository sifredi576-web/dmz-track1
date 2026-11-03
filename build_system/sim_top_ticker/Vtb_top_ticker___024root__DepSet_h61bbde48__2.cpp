// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_ticker.h for the primary calling header

#include "Vtb_top_ticker__pch.h"
#include "Vtb_top_ticker__Syms.h"
#include "Vtb_top_ticker___024root.h"

VlCoroutine Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__2(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_top_ticker__DOT__py;
    tb_top_ticker__DOT__py = 0;
    IData/*31:0*/ tb_top_ticker__DOT__n;
    tb_top_ticker__DOT__n = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__25__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__26__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__26__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__26__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__27__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__27__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__27__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__27__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__27__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__27__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__28__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__28__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__28__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__28__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__28__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__28__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__32__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__32__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__32__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__33__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__33__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__33__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__33__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__33__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__33__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__34__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__34__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__34__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__34__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__34__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__34__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__35__xx;
    __Vtask_tb_top_ticker__DOT__check_pixel__35__xx = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__35__yy;
    __Vtask_tb_top_ticker__DOT__check_pixel__35__yy = 0;
    IData/*31:0*/ __Vtask_tb_top_ticker__DOT__check_pixel__35__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_top_ticker__DOT__check_pixel__35__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x27U;
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
    tb_top_ticker__DOT__py = 0x28U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x28U;
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
    tb_top_ticker__DOT__py = 0x29U;
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        vlSelfRef.__Vtask_tb_top_ticker__DOT__check_pixel__25__yy = 0x29U;
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
    tb_top_ticker__DOT__py = 0x2aU;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__yy = 0x2edU;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__xx = 0x671U;
    __Vtask_tb_top_ticker__DOT__check_pixel__26__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__26__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__26__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__26__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__26__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__26__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__26__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__26__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__26__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__26__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__26__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__26__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__26__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__26__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__26__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__26__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__26__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__26__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__27__yy = 0x2d0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__27__xx = 0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__27__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__27__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__27__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__27__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__27__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__27__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__27__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__27__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__27__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__27__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__27__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__27__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__27__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__27__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__27__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__27__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__27__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__27__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__28__yy = 0x2cfU;
    __Vtask_tb_top_ticker__DOT__check_pixel__28__xx = 0x4ffU;
    __Vtask_tb_top_ticker__DOT__check_pixel__28__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__28__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__28__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__28__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__28__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__28__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__28__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__28__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__28__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__28__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__28__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__28__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__28__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__28__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__28__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__28__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__28__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__28__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
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
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 27, "", false);
    }
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
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 27, "", false);
    }
    vlSelfRef.tb_top_ticker__DOT__px = 0U;
    while (VL_GTS_III(32, 0x502U, vlSelfRef.tb_top_ticker__DOT__px)) {
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 1U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 2U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 3U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 4U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 5U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 6U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 7U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 8U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 9U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xaU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xbU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xcU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xdU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xeU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0xfU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x10U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x11U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x12U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x13U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x14U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x15U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x16U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x17U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x18U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x19U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1aU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1bU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1cU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1dU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1eU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x1fU;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x20U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x21U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x22U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x23U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x24U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x25U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x26U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x27U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x28U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
        __Vtask_tb_top_ticker__DOT__check_pixel__32__yy = 0x29U;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
            = vlSelfRef.tb_top_ticker__DOT__px;
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             13);
        if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx)) {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(0x670U) 
                                                  + __Vtask_tb_top_ticker__DOT__check_pixel__32__xx));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & ((0U 
                                                   == __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)
                                                   ? 0x2edU
                                                   : 
                                                  (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                   - (IData)(1U))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & (__Vtask_tb_top_ticker__DOT__check_pixel__32__xx 
                                                  - (IData)(2U)));
            vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU 
                                               & __Vtask_tb_top_ticker__DOT__check_pixel__32__yy);
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             16);
        __Vtask_tb_top_ticker__DOT__check_pixel__32__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             16);
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                                    & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                   & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx, (IData)(2U)) 
                                                                        + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (__Vtask_tb_top_ticker__DOT__check_pixel__32__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__32__xx) 
                                 & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__32__yy))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,__Vtask_tb_top_ticker__DOT__check_pixel__32__xx,
                         32,__Vtask_tb_top_ticker__DOT__check_pixel__32__yy,
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
    __Vtask_tb_top_ticker__DOT__check_pixel__33__yy = 0x2edU;
    __Vtask_tb_top_ticker__DOT__check_pixel__33__xx = 0x671U;
    __Vtask_tb_top_ticker__DOT__check_pixel__33__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__33__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__33__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__33__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__33__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__33__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__33__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__33__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__33__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__33__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__33__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__33__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__33__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__33__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__33__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__33__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__33__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__33__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__34__yy = 0x2d0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__34__xx = 0U;
    __Vtask_tb_top_ticker__DOT__check_pixel__34__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__34__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__34__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__34__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__34__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__34__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__34__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__34__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__34__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__34__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__34__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__34__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__34__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__34__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__34__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__34__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__34__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__34__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    __Vtask_tb_top_ticker__DOT__check_pixel__35__yy = 0x2cfU;
    __Vtask_tb_top_ticker__DOT__check_pixel__35__xx = 0x4ffU;
    __Vtask_tb_top_ticker__DOT__check_pixel__35__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         13);
    if (VL_GTS_III(32, 2U, __Vtask_tb_top_ticker__DOT__check_pixel__35__xx)) {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           ((IData)(0x670U) 
                                            + __Vtask_tb_top_ticker__DOT__check_pixel__35__xx));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & 
                                           ((0U == __Vtask_tb_top_ticker__DOT__check_pixel__35__yy)
                                             ? 0x2edU
                                             : (__Vtask_tb_top_ticker__DOT__check_pixel__35__yy 
                                                - (IData)(1U))));
    } else {
        vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU & 
                                           (__Vtask_tb_top_ticker__DOT__check_pixel__35__xx 
                                            - (IData)(2U)));
        vlSelfRef.tb_top_ticker__DOT__y = (0x3ffU & __Vtask_tb_top_ticker__DOT__check_pixel__35__yy);
    }
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__35__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         16);
    __Vtask_tb_top_ticker__DOT__check_pixel__35__tb_top_ticker__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_top_ticker.sv", 
                                         16);
    vlSelfRef.tb_top_ticker__DOT__expected = (((VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__35__xx) 
                                                & VL_LTES_III(32, 4U, __Vtask_tb_top_ticker__DOT__check_pixel__35__yy)) 
                                               & VL_GTS_III(32, 0x24U, __Vtask_tb_top_ticker__DOT__check_pixel__35__yy)) 
                                              & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                 [(0x3ffU 
                                                   & VL_MODDIVS_III(32, 
                                                                    (VL_DIVS_III(32, __Vtask_tb_top_ticker__DOT__check_pixel__35__xx, (IData)(2U)) 
                                                                     + vlSelfRef.tb_top_ticker__DOT__offset), (IData)(0x400U)))] 
                                                 >> 
                                                 (0xfU 
                                                  & VL_MODDIVS_III(32, 
                                                                   VL_DIVS_III(32, 
                                                                               (__Vtask_tb_top_ticker__DOT__check_pixel__35__yy 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                       != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                      | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                         != (VL_GTS_III(32, 0x500U, __Vtask_tb_top_ticker__DOT__check_pixel__35__xx) 
                             & VL_GTS_III(32, 0x28U, __Vtask_tb_top_ticker__DOT__check_pixel__35__yy))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:19: Assertion failed in %Ntb_top_ticker.check_pixel: raster x=%0d y=%0d offset=%0d ink=%b expected=%b shade=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__35__xx,
                     32,__Vtask_tb_top_ticker__DOT__check_pixel__35__yy,
                     32,vlSelfRef.tb_top_ticker__DOT__offset,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__ink),
                     1,vlSelfRef.tb_top_ticker__DOT__expected,
                     1,(IData)(vlSelfRef.tb_top_ticker__DOT__shade));
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 19, "", false);
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_top_ticker__DOT__offset)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:44: Assertion failed in %Ntb_top_ticker: full loop did not return to origin\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_top_ticker.sv", 44, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         46);
    vlSelfRef.tb_top_ticker__DOT__x = 0x66fU;
    vlSelfRef.tb_top_ticker__DOT__y = 0x2edU;
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         47);
    co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top_ticker.clk)", 
                                                         "sim/system\tb_top_ticker.sv", 
                                                         47);
    tb_top_ticker__DOT__n = 0U;
    while (VL_GTS_III(32, 0x10eb4U, tb_top_ticker__DOT__n)) {
        co_await vlSelfRef.__VtrigSched_h5192931f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             49);
        if ((0x671U == (IData)(vlSelfRef.tb_top_ticker__DOT__x))) {
            vlSelfRef.tb_top_ticker__DOT__x = 0U;
            vlSelfRef.tb_top_ticker__DOT__y = ((0x2edU 
                                                == (IData)(vlSelfRef.tb_top_ticker__DOT__y))
                                                ? 0U
                                                : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_top_ticker__DOT__y))));
        } else {
            vlSelfRef.tb_top_ticker__DOT__x = (0x7ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_top_ticker__DOT__x)));
        }
        co_await vlSelfRef.__VtrigSched_h5192935e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top_ticker.clk)", 
                                                             "sim/system\tb_top_ticker.sv", 
                                                             51);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "sim/system\tb_top_ticker.sv", 
                                             51);
        if ((0x671U == (IData)(vlSelfRef.tb_top_ticker__DOT__x))) {
            vlSelfRef.tb_top_ticker__DOT__px = 0U;
            tb_top_ticker__DOT__py = ((0x2edU == (IData)(vlSelfRef.tb_top_ticker__DOT__y))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelfRef.tb_top_ticker__DOT__y)));
        } else {
            vlSelfRef.tb_top_ticker__DOT__px = ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_top_ticker__DOT__x));
            tb_top_ticker__DOT__py = vlSelfRef.tb_top_ticker__DOT__y;
        }
        vlSelfRef.tb_top_ticker__DOT__expected = ((
                                                   (VL_GTS_III(32, 0x500U, vlSelfRef.tb_top_ticker__DOT__px) 
                                                    & VL_LTES_III(32, 4U, tb_top_ticker__DOT__py)) 
                                                   & VL_GTS_III(32, 0x24U, tb_top_ticker__DOT__py)) 
                                                  & (vlSelfRef.tb_top_ticker__DOT__reference_columns
                                                     [
                                                     (0x3ffU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, vlSelfRef.tb_top_ticker__DOT__px, (IData)(2U)), (IData)(0x400U)))] 
                                                     >> 
                                                     (0xfU 
                                                      & VL_MODDIVS_III(32, 
                                                                       VL_DIVS_III(32, 
                                                                                (tb_top_ticker__DOT__py 
                                                                                - (IData)(4U)), (IData)(2U)), (IData)(0x10U)))));
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_top_ticker__DOT__ink) 
                           != (IData)(vlSelfRef.tb_top_ticker__DOT__expected)) 
                          | ((IData)(vlSelfRef.tb_top_ticker__DOT__shade) 
                             != (VL_GTS_III(32, 0x500U, vlSelfRef.tb_top_ticker__DOT__px) 
                                 & VL_GTS_III(32, 0x28U, tb_top_ticker__DOT__py))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_top_ticker.sv:54: Assertion failed in %Ntb_top_ticker: continuous raster pipeline alignment\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_top_ticker.sv", 54, "", false);
        }
        tb_top_ticker__DOT__n = ((IData)(1U) + tb_top_ticker__DOT__n);
    }
    VL_WRITEF_NX("PASS Chinese ticker: full raster, padding, right/left edges, blanking, frame pacing, trailing 18 spaces and complete wrap\n",0);
    VL_FINISH_MT("sim/system\\tb_top_ticker.sv", 57, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_ticker___024root___dump_triggers__act(Vtb_top_ticker___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_ticker___024root___eval_triggers__act(Vtb_top_ticker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_ticker___024root___eval_triggers__act\n"); );
    Vtb_top_ticker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_top_ticker__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_top_ticker__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top_ticker__DOT__clk__0 
        = vlSelfRef.tb_top_ticker__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_ticker___024root___dump_triggers__act(vlSelf);
    }
#endif
}
