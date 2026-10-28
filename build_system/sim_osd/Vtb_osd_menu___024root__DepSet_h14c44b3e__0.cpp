// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_osd_menu.h for the primary calling header

#include "Vtb_osd_menu__pch.h"
#include "Vtb_osd_menu__Syms.h"
#include "Vtb_osd_menu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_osd_menu__DOT__fd;
    tb_osd_menu__DOT__fd = 0;
    IData/*31:0*/ tb_osd_menu__DOT__py;
    tb_osd_menu__DOT__py = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__0__b;
    __Vtask_tb_osd_menu__DOT__send__0__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__1__b;
    __Vtask_tb_osd_menu__DOT__send__1__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__2__b;
    __Vtask_tb_osd_menu__DOT__send__2__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__3__b;
    __Vtask_tb_osd_menu__DOT__send__3__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__4__b;
    __Vtask_tb_osd_menu__DOT__send__4__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__5__b;
    __Vtask_tb_osd_menu__DOT__send__5__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__6__b;
    __Vtask_tb_osd_menu__DOT__send__6__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__7__b;
    __Vtask_tb_osd_menu__DOT__send__7__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__8__b;
    __Vtask_tb_osd_menu__DOT__send__8__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__9__b;
    __Vtask_tb_osd_menu__DOT__send__9__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__10__b;
    __Vtask_tb_osd_menu__DOT__send__10__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__11__b;
    __Vtask_tb_osd_menu__DOT__send__11__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__12__b;
    __Vtask_tb_osd_menu__DOT__send__12__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__13__b;
    __Vtask_tb_osd_menu__DOT__send__13__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__14__b;
    __Vtask_tb_osd_menu__DOT__send__14__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__15__b;
    __Vtask_tb_osd_menu__DOT__send__15__b = 0;
    CData/*7:0*/ __Vtask_tb_osd_menu__DOT__send__16__b;
    __Vtask_tb_osd_menu__DOT__send__16__b = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__17__px;
    __Vtask_tb_osd_menu__DOT__pixel__17__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__17__py;
    __Vtask_tb_osd_menu__DOT__pixel__17__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__18__px;
    __Vtask_tb_osd_menu__DOT__pixel__18__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__18__py;
    __Vtask_tb_osd_menu__DOT__pixel__18__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__19__px;
    __Vtask_tb_osd_menu__DOT__pixel__19__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__19__py;
    __Vtask_tb_osd_menu__DOT__pixel__19__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__20__px;
    __Vtask_tb_osd_menu__DOT__pixel__20__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__20__py;
    __Vtask_tb_osd_menu__DOT__pixel__20__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__21__px;
    __Vtask_tb_osd_menu__DOT__pixel__21__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__21__py;
    __Vtask_tb_osd_menu__DOT__pixel__21__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__22__px;
    __Vtask_tb_osd_menu__DOT__pixel__22__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__22__py;
    __Vtask_tb_osd_menu__DOT__pixel__22__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__23__px;
    __Vtask_tb_osd_menu__DOT__pixel__23__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__23__py;
    __Vtask_tb_osd_menu__DOT__pixel__23__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__24__px;
    __Vtask_tb_osd_menu__DOT__pixel__24__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__24__py;
    __Vtask_tb_osd_menu__DOT__pixel__24__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__25__px;
    __Vtask_tb_osd_menu__DOT__pixel__25__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__25__py;
    __Vtask_tb_osd_menu__DOT__pixel__25__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__26__px;
    __Vtask_tb_osd_menu__DOT__pixel__26__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__26__py;
    __Vtask_tb_osd_menu__DOT__pixel__26__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__27__px;
    __Vtask_tb_osd_menu__DOT__pixel__27__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__27__py;
    __Vtask_tb_osd_menu__DOT__pixel__27__py = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__28__px;
    __Vtask_tb_osd_menu__DOT__pixel__28__px = 0;
    IData/*31:0*/ __Vtask_tb_osd_menu__DOT__pixel__28__py;
    __Vtask_tb_osd_menu__DOT__pixel__28__py = 0;
    VlWide<7>/*223:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_5;
    // Body
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    vlSelfRef.tb_osd_menu__DOT__reset = 0U;
    vlSelfRef.tb_osd_menu__DOT__swaps = 1U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         25);
    __Vtask_tb_osd_menu__DOT__send__0__b = 0x46U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__0__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)) 
                            | (0x46U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:26: Assertion failed in %Ntb_osd_menu: Open menu\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 26, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__1__b = 0x49U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__1__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_osd_menu__DOT__query))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:27: Assertion failed in %Ntb_osd_menu: Previous wrap\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 27, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__2__b = 0x45U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__2__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)) 
                            | (0x45U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:28: Assertion failed in %Ntb_osd_menu: Stale metadata committed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 28, "", false);
    }
    vlSelfRef.tb_osd_menu__DOT__tag = 3U;
    __Vtask_tb_osd_menu__DOT__send__3__b = 0x45U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__3__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_osd_menu__DOT__opened) 
                      | (0x83U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:29: Assertion failed in %Ntb_osd_menu: Indexed image commit\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 29, "", false);
    }
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         30);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         30);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         30);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         30);
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         30);
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_osd_menu__DOT__autoplay) 
                       | (1U != vlSelfRef.tb_osd_menu__DOT__selections)) 
                      | (3U != (IData)(vlSelfRef.tb_osd_menu__DOT__chosen)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:30: Assertion failed in %Ntb_osd_menu: Menu selection did not reach gallery controller\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 30, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__4__b = 0x46U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__4__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    __Vtask_tb_osd_menu__DOT__send__5__b = 0x56U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__5__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x20U != (IData)(vlSelfRef.tb_osd_menu__DOT__query))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:31: Assertion failed in %Ntb_osd_menu: WAV category\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 31, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__6__b = 0x4fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__6__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x21U != (IData)(vlSelfRef.tb_osd_menu__DOT__query))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:32: Assertion failed in %Ntb_osd_menu: Next WAV\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 32, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__7__b = 0x4fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__7__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x20U != (IData)(vlSelfRef.tb_osd_menu__DOT__query))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:33: Assertion failed in %Ntb_osd_menu: WAV wrap\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 33, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__8__b = 0x49U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__8__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    vlSelfRef.tb_osd_menu__DOT__tag = 0x21U;
    __Vtask_tb_osd_menu__DOT__send__9__b = 0x45U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__9__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_osd_menu__DOT__opened) 
                      | (0xc1U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:34: Assertion failed in %Ntb_osd_menu: Indexed WAV commit\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 34, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__10__b = 0x46U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__10__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    vlSelfRef.tb_osd_menu__DOT__wavs = 0U;
    __Vtask_tb_osd_menu__DOT__send__11__b = 0x45U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__11__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__opened)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:35: Assertion failed in %Ntb_osd_menu: Empty category accepted\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 35, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__12__b = 0x52U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__12__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_osd_menu__DOT__opened) 
                      | (0U != (IData)(vlSelfRef.tb_osd_menu__DOT__query)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:36: Assertion failed in %Ntb_osd_menu: Reload menu reset\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 36, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__13__b = 0x49U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__13__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x5bU != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:37: Assertion failed in %Ntb_osd_menu: Brightness down mapping\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 37, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__14__b = 0x4fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__14__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x5dU != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:38: Assertion failed in %Ntb_osd_menu: Brightness up mapping\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 38, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__15__b = 0x56U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__15__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x43U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:39: Assertion failed in %Ntb_osd_menu: Contrast mapping\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 39, "", false);
    }
    __Vtask_tb_osd_menu__DOT__send__16__b = 0x45U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 1U;
    vlSelfRef.tb_osd_menu__DOT__rb = __Vtask_tb_osd_menu__DOT__send__16__b;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         14);
    vlSelfRef.tb_osd_menu__DOT__rv = 0U;
    if (VL_UNLIKELY(((0x44U != (IData)(vlSelfRef.tb_osd_menu__DOT__cb))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:40: Assertion failed in %Ntb_osd_menu: Default mapping\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 40, "", false);
    }
    __Vtask_tb_osd_menu__DOT__pixel__17__py = 0x1e0U;
    __Vtask_tb_osd_menu__DOT__pixel__17__px = 0U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__17__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__17__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__18__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__18__px = 0x31eU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__18__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__18__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__19__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__19__px = 0x31fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__19__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__19__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtemp_1[0U] = 0x2e70706dU;
    __Vtemp_1[1U] = 0x76696577U;
    __Vtemp_1[2U] = 0x5f707265U;
    __Vtemp_1[3U] = 0x6d656e75U;
    __Vtemp_1[4U] = 0x6f73645fU;
    __Vtemp_1[5U] = 0x6f63732fU;
    __Vtemp_1[6U] = 0x64U;
    tb_osd_menu__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                                       , std::string{"w"});
    ;
    VL_FWRITEF_NX(tb_osd_menu__DOT__fd,"P3\n640 480\n255\n",0);
    tb_osd_menu__DOT__py = 0U;
    while (VL_GTS_III(32, 0x20dU, tb_osd_menu__DOT__py)) {
        vlSelfRef.tb_osd_menu__DOT__px = 0U;
        while (VL_GTS_III(32, 0x320U, vlSelfRef.tb_osd_menu__DOT__px)) {
            __Vtask_tb_osd_menu__DOT__pixel__20__py 
                = tb_osd_menu__DOT__py;
            __Vtask_tb_osd_menu__DOT__pixel__20__px 
                = vlSelfRef.tb_osd_menu__DOT__px;
            co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_osd_menu.clk)", 
                                                                 "sim/system\tb_osd_menu.sv", 
                                                                 22);
            vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU 
                                             & __Vtask_tb_osd_menu__DOT__pixel__20__px);
            vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU 
                                             & __Vtask_tb_osd_menu__DOT__pixel__20__py);
            co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_osd_menu.clk)", 
                                                                 "sim/system\tb_osd_menu.sv", 
                                                                 22);
            if (VL_UNLIKELY(((((2U == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0U == tb_osd_menu__DOT__py)) 
                              & ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__ink)) 
                                 | (~ (IData)(vlSelfRef.tb_osd_menu__DOT__shade))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:46: Assertion failed in %Ntb_osd_menu: First glyph/alignment\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 46, "", false);
            }
            if (VL_UNLIKELY(((((0x64U == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0x46U == tb_osd_menu__DOT__py)) 
                              & ((IData)(vlSelfRef.tb_osd_menu__DOT__ink) 
                                 | (IData)(vlSelfRef.tb_osd_menu__DOT__shade)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:47: Assertion failed in %Ntb_osd_menu: OSD changed image outside panels\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 47, "", false);
            }
            if (VL_UNLIKELY(((((0x40U == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0x60U == tb_osd_menu__DOT__py)) 
                              & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__shade)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:48: Assertion failed in %Ntb_osd_menu: Menu left edge alignment\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 48, "", false);
            }
            if (VL_UNLIKELY(((((0x3fU == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0x60U == tb_osd_menu__DOT__py)) 
                              & (IData)(vlSelfRef.tb_osd_menu__DOT__shade))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:49: Assertion failed in %Ntb_osd_menu: Menu leaked left edge\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 49, "", false);
            }
            if (VL_UNLIKELY(((((0x23fU == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0x60U == tb_osd_menu__DOT__py)) 
                              & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__shade)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:50: Assertion failed in %Ntb_osd_menu: Menu right edge alignment\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 50, "", false);
            }
            if (VL_UNLIKELY(((((0x240U == vlSelfRef.tb_osd_menu__DOT__px) 
                               & (0x60U == tb_osd_menu__DOT__py)) 
                              & (IData)(vlSelfRef.tb_osd_menu__DOT__shade))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:51: Assertion failed in %Ntb_osd_menu: Menu leaked right edge\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 51, "", false);
            }
            if (VL_UNLIKELY(((VL_LTES_III(32, 0x280U, vlSelfRef.tb_osd_menu__DOT__px) 
                              & (IData)(vlSelfRef.tb_osd_menu__DOT__ink))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:52: Assertion failed in %Ntb_osd_menu: Text in blanking\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/system\\tb_osd_menu.sv", 52, "", false);
            }
            if (VL_UNLIKELY(((VL_GTS_III(32, 0x280U, vlSelfRef.tb_osd_menu__DOT__px) 
                              & VL_GTS_III(32, 0x1e0U, tb_osd_menu__DOT__py))))) {
                vlSelfRef.tb_osd_menu__DOT__rgb = ((IData)(vlSelfRef.tb_osd_menu__DOT__ink)
                                                    ? vlSelfRef.tb_osd_menu__DOT__color
                                                    : 
                                                   ((IData)(vlSelfRef.tb_osd_menu__DOT__shade)
                                                     ? 0x182838U
                                                     : 0x305070U));
                VL_FWRITEF_NX(tb_osd_menu__DOT__fd,"%0# %0# %0#\n",0,
                              8,(0xffU & (vlSelfRef.tb_osd_menu__DOT__rgb 
                                          >> 0x10U)),
                              8,(0xffU & (vlSelfRef.tb_osd_menu__DOT__rgb 
                                          >> 8U)),8,
                              (0xffU & vlSelfRef.tb_osd_menu__DOT__rgb));
            }
            vlSelfRef.tb_osd_menu__DOT__px = ((IData)(1U) 
                                              + vlSelfRef.tb_osd_menu__DOT__px);
        }
        tb_osd_menu__DOT__py = ((IData)(1U) + tb_osd_menu__DOT__py);
    }
    VL_FCLOSE_I(tb_osd_menu__DOT__fd); vlSelfRef.tb_osd_menu__DOT__show_menu = 0U;
    __Vtask_tb_osd_menu__DOT__pixel__21__py = 0x1e0U;
    __Vtask_tb_osd_menu__DOT__pixel__21__px = 0U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__21__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__21__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__22__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__22__px = 0x31eU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__22__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__22__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__23__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__23__px = 0x31fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__23__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__23__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__px = 0U;
    while (VL_GTES_III(32, 0x41U, vlSelfRef.tb_osd_menu__DOT__px)) {
        __Vtask_tb_osd_menu__DOT__pixel__24__py = 0x60U;
        __Vtask_tb_osd_menu__DOT__pixel__24__px = vlSelfRef.tb_osd_menu__DOT__px;
        co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_osd_menu.clk)", 
                                                             "sim/system\tb_osd_menu.sv", 
                                                             22);
        vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__24__px);
        vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__24__py);
        co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_osd_menu.clk)", 
                                                             "sim/system\tb_osd_menu.sv", 
                                                             22);
        vlSelfRef.tb_osd_menu__DOT__px = ((IData)(1U) 
                                          + vlSelfRef.tb_osd_menu__DOT__px);
    }
    if (VL_UNLIKELY((((3U != (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__scroll)) 
                      | (0x12345U != vlSelfRef.tb_osd_menu__DOT__osd__DOT__tm))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:61: Assertion failed in %Ntb_osd_menu: Scroll/time frame snapshot\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 61, "", false);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_osd_menu__DOT__shade) 
                      | (IData)(vlSelfRef.tb_osd_menu__DOT__ink))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:62: Assertion failed in %Ntb_osd_menu: Closed menu remains visible\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 62, "", false);
    }
    vlSelfRef.tb_osd_menu__DOT__show_alert = 1U;
    __Vtask_tb_osd_menu__DOT__pixel__25__py = 0x1e0U;
    __Vtask_tb_osd_menu__DOT__pixel__25__px = 0U;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__25__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__25__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__26__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__26__px = 0x31eU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__26__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__26__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtask_tb_osd_menu__DOT__pixel__27__py = 0x20cU;
    __Vtask_tb_osd_menu__DOT__pixel__27__px = 0x31fU;
    co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__27__px);
    vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU & __Vtask_tb_osd_menu__DOT__pixel__27__py);
    co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_osd_menu.clk)", 
                                                         "sim/system\tb_osd_menu.sv", 
                                                         22);
    __Vtemp_5[0U] = 0x2e70706dU;
    __Vtemp_5[1U] = 0x76696577U;
    __Vtemp_5[2U] = 0x5f707265U;
    __Vtemp_5[3U] = 0x656e6379U;
    __Vtemp_5[4U] = 0x6d657267U;
    __Vtemp_5[5U] = 0x63732f65U;
    __Vtemp_5[6U] = 0x646fU;
    tb_osd_menu__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(7, __Vtemp_5)
                                       , std::string{"w"});
    ;
    VL_FWRITEF_NX(tb_osd_menu__DOT__fd,"P3\n640 480\n255\n",0);
    tb_osd_menu__DOT__py = 0U;
    while (VL_GTS_III(32, 0x20dU, tb_osd_menu__DOT__py)) {
        vlSelfRef.tb_osd_menu__DOT__px = 0U;
        while (VL_GTS_III(32, 0x320U, vlSelfRef.tb_osd_menu__DOT__px)) {
            __Vtask_tb_osd_menu__DOT__pixel__28__py 
                = tb_osd_menu__DOT__py;
            __Vtask_tb_osd_menu__DOT__pixel__28__px 
                = vlSelfRef.tb_osd_menu__DOT__px;
            co_await vlSelfRef.__VtrigSched_hd4d1918e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_osd_menu.clk)", 
                                                                 "sim/system\tb_osd_menu.sv", 
                                                                 22);
            vlSelfRef.tb_osd_menu__DOT__x = (0x3ffU 
                                             & __Vtask_tb_osd_menu__DOT__pixel__28__px);
            vlSelfRef.tb_osd_menu__DOT__y = (0x3ffU 
                                             & __Vtask_tb_osd_menu__DOT__pixel__28__py);
            co_await vlSelfRef.__VtrigSched_hd4d191cf__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_osd_menu.clk)", 
                                                                 "sim/system\tb_osd_menu.sv", 
                                                                 22);
            if (VL_UNLIKELY(((VL_GTS_III(32, 0x280U, vlSelfRef.tb_osd_menu__DOT__px) 
                              & VL_GTS_III(32, 0x1e0U, tb_osd_menu__DOT__py))))) {
                vlSelfRef.tb_osd_menu__DOT__rgb = ((IData)(vlSelfRef.tb_osd_menu__DOT__ink)
                                                    ? vlSelfRef.tb_osd_menu__DOT__color
                                                    : 0x600808U);
                VL_FWRITEF_NX(tb_osd_menu__DOT__fd,"%0# %0# %0#\n",0,
                              8,(0xffU & (vlSelfRef.tb_osd_menu__DOT__rgb 
                                          >> 0x10U)),
                              8,(0xffU & (vlSelfRef.tb_osd_menu__DOT__rgb 
                                          >> 8U)),8,
                              (0xffU & vlSelfRef.tb_osd_menu__DOT__rgb));
            }
            vlSelfRef.tb_osd_menu__DOT__px = ((IData)(1U) 
                                              + vlSelfRef.tb_osd_menu__DOT__px);
        }
        tb_osd_menu__DOT__py = ((IData)(1U) + tb_osd_menu__DOT__py);
    }
    VL_FCLOSE_I(tb_osd_menu__DOT__fd); if (VL_UNLIKELY((
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_osd_menu__DOT__osd__DOT__alert)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:72: Assertion failed in %Ntb_osd_menu: Emergency text state\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_osd_menu.sv", 72, "", false);
    }
    VL_WRITEF_NX("PASS menu indexed BMP/WAV, wrap, empty/stale guards, OSD raster/font/borders/blanking and closed transparency\n",0);
    VL_FINISH_MT("sim/system\\tb_osd_menu.sv", 73, "");
}

VL_INLINE_OPT VlCoroutine Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x4a817c800ULL, 
                                         nullptr, "sim/system\tb_osd_menu.sv", 
                                         75);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_osd_menu.sv:75: Assertion failed in %Ntb_osd_menu: OSD timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/system\\tb_osd_menu.sv", 75, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_osd_menu___024root___dump_triggers__act(Vtb_osd_menu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_osd_menu___024root___eval_triggers__act(Vtb_osd_menu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_osd_menu___024root___eval_triggers__act\n"); );
    Vtb_osd_menu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_osd_menu__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_osd_menu__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_osd_menu__DOT__clk__0 
        = vlSelfRef.tb_osd_menu__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_osd_menu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
