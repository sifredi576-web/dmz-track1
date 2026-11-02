// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_loader.h for the primary calling header

#include "Vtb_scene_loader__pch.h"
#include "Vtb_scene_loader__Syms.h"
#include "Vtb_scene_loader___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_scene_loader__ConstPool__CONST_h10ecac52_0;
extern const VlWide<8>/*255:0*/ Vtb_scene_loader__ConstPool__CONST_h6d4a89b7_0;

VL_INLINE_OPT VlCoroutine Vtb_scene_loader___024root___eval_initial__TOP__Vtiming__0(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_scene_loader__DOT__run__Vstatic__i;
    tb_scene_loader__DOT__run__Vstatic__i = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__scenario;
    __Vtask_tb_scene_loader__DOT__run__0__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__length;
    __Vtask_tb_scene_loader__DOT__run__0__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__expected_error;
    __Vtask_tb_scene_loader__DOT__run__0__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__scenario;
    __Vtask_tb_scene_loader__DOT__run__1__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__length;
    __Vtask_tb_scene_loader__DOT__run__1__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__expected_error;
    __Vtask_tb_scene_loader__DOT__run__1__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__scenario;
    __Vtask_tb_scene_loader__DOT__run__2__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__length;
    __Vtask_tb_scene_loader__DOT__run__2__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__expected_error;
    __Vtask_tb_scene_loader__DOT__run__2__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__scenario;
    __Vtask_tb_scene_loader__DOT__run__3__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__length;
    __Vtask_tb_scene_loader__DOT__run__3__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__expected_error;
    __Vtask_tb_scene_loader__DOT__run__3__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__scenario;
    __Vtask_tb_scene_loader__DOT__run__4__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__length;
    __Vtask_tb_scene_loader__DOT__run__4__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__expected_error;
    __Vtask_tb_scene_loader__DOT__run__4__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__scenario;
    __Vtask_tb_scene_loader__DOT__run__5__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__length;
    __Vtask_tb_scene_loader__DOT__run__5__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__expected_error;
    __Vtask_tb_scene_loader__DOT__run__5__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__scenario;
    __Vtask_tb_scene_loader__DOT__run__6__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__length;
    __Vtask_tb_scene_loader__DOT__run__6__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__expected_error;
    __Vtask_tb_scene_loader__DOT__run__6__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__scenario;
    __Vtask_tb_scene_loader__DOT__run__7__scenario = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__length;
    __Vtask_tb_scene_loader__DOT__run__7__length = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__expected_error;
    __Vtask_tb_scene_loader__DOT__run__7__expected_error = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    // Body
    VL_READMEM_N(true, 8, 3424, 0, VL_CVT_PACK_STR_NW(8, Vtb_scene_loader__ConstPool__CONST_h10ecac52_0)
                 ,  &(vlSelfRef.tb_scene_loader__DOT__course)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 320, 0, VL_CVT_PACK_STR_NW(8, Vtb_scene_loader__ConstPool__CONST_h6d4a89b7_0)
                 ,  &(vlSelfRef.tb_scene_loader__DOT__exhibit)
                 , 0, ~0ULL);
    __Vtask_tb_scene_loader__DOT__run__0__expected_error = 0U;
    __Vtask_tb_scene_loader__DOT__run__0__length = 0xd60U;
    __Vtask_tb_scene_loader__DOT__run__0__scenario = 0U;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__0__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__0__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__0__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__0__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__0__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__0__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__0__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel1;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel1;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel1: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__0__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__0__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__0__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__0__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__0__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__0__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__0__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__0__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__0__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__0__scenario);
    __Vtask_tb_scene_loader__DOT__run__1__expected_error = 0U;
    __Vtask_tb_scene_loader__DOT__run__1__length = 0x140U;
    __Vtask_tb_scene_loader__DOT__run__1__scenario = 1U;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__1__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__1__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__1__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__1__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__1__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__1__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__1__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel2;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel2;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel2: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__1__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__1__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__1__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__1__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__1__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__1__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__1__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__1__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__1__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__1__scenario);
    __Vtask_tb_scene_loader__DOT__run__2__expected_error = 3U;
    __Vtask_tb_scene_loader__DOT__run__2__length = 0xd60U;
    __Vtask_tb_scene_loader__DOT__run__2__scenario = 2U;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__2__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__2__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__2__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__2__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__2__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__2__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__2__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel3;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel3;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel3: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__2__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__2__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__2__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__2__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__2__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__2__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__2__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__2__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__2__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__2__scenario);
    __Vtask_tb_scene_loader__DOT__run__3__expected_error = 4U;
    __Vtask_tb_scene_loader__DOT__run__3__length = 0xd60U;
    __Vtask_tb_scene_loader__DOT__run__3__scenario = 3U;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__3__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__3__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__3__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__3__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__3__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__3__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__3__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel4;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel4;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel4: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__3__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__3__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__3__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__3__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__3__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__3__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__3__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__3__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__3__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__3__scenario);
    __Vtask_tb_scene_loader__DOT__run__4__expected_error = 7U;
    __Vtask_tb_scene_loader__DOT__run__4__length = 0xd60U;
    __Vtask_tb_scene_loader__DOT__run__4__scenario = 4U;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__4__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__4__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__4__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__4__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__4__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__4__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__4__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel5;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel5;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel5: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__4__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__4__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__4__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__4__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__4__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__4__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__4__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__4__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__4__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__4__scenario);
    __Vtask_tb_scene_loader__DOT__run__5__expected_error = 2U;
    __Vtask_tb_scene_loader__DOT__run__5__length = 0x64U;
    __Vtask_tb_scene_loader__DOT__run__5__scenario = 5U;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__5__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__5__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__5__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__5__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__5__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__5__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__5__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel6;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel6;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel6: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__5__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__5__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__5__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__5__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__5__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__5__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__5__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__5__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__5__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__5__scenario);
    __Vtask_tb_scene_loader__DOT__run__6__expected_error = 6U;
    __Vtask_tb_scene_loader__DOT__run__6__length = 0xd61U;
    __Vtask_tb_scene_loader__DOT__run__6__scenario = 6U;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__6__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__6__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__6__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__6__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__6__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__6__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__6__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel7;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel7;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel7: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__6__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__6__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__6__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__6__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__6__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__6__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__6__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__6__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__6__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__6__scenario);
    __Vtask_tb_scene_loader__DOT__run__7__expected_error = 5U;
    __Vtask_tb_scene_loader__DOT__run__7__length = 0xd60U;
    __Vtask_tb_scene_loader__DOT__run__7__scenario = 7U;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         25);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    vlSelfRef.tb_scene_loader__DOT__bv = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         26);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__writes = 0U;
    vlSelfRef.tb_scene_loader__DOT__commits = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         27);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    tb_scene_loader__DOT__run__Vstatic__i = 0U;
    while (VL_LTS_III(32, tb_scene_loader__DOT__run__Vstatic__i, __Vtask_tb_scene_loader__DOT__run__7__length)) {
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
            = ((1U == __Vtask_tb_scene_loader__DOT__run__7__scenario)
                ? ((0x13fU >= (0x1ffU & tb_scene_loader__DOT__run__Vstatic__i))
                    ? vlSelfRef.tb_scene_loader__DOT__exhibit
                   [(0x1ffU & tb_scene_loader__DOT__run__Vstatic__i)]
                    : 0U) : ((0xd5fU >= (0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U))))
                              ? vlSelfRef.tb_scene_loader__DOT__course
                             [(0xfffU & VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(0xd60U)))]
                              : 0U));
        if (((2U == __Vtask_tb_scene_loader__DOT__run__7__scenario) 
             & (4U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 3U;
        }
        if (((3U == __Vtask_tb_scene_loader__DOT__run__7__scenario) 
             & (0x10U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 0x41U;
        }
        if (((4U == __Vtask_tb_scene_loader__DOT__run__7__scenario) 
             & (0x64U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value 
                = (1U ^ (IData)(vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value));
        }
        if (((7U == __Vtask_tb_scene_loader__DOT__run__7__scenario) 
             & (0x14U == tb_scene_loader__DOT__run__Vstatic__i))) {
            vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value = 1U;
        }
        vlSelfRef.tb_scene_loader__DOT__data = vlSelfRef.tb_scene_loader__DOT__run__Vstatic__value;
        vlSelfRef.tb_scene_loader__DOT__bv = 1U;
        vlSelfRef.tb_scene_loader__DOT__last = (tb_scene_loader__DOT__run__Vstatic__i 
                                                == 
                                                (__Vtask_tb_scene_loader__DOT__run__7__length 
                                                 - (IData)(1U)));
        vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n = 0U;
        {
            while (1U) {
                co_await vlSelfRef.__VtrigSched_hc1fc6ec7__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     38);
                if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                        | (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         38);
                    goto __Vlabel8;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__busy)))) {
                    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_scene_loader.clk)", 
                                                                         "sim/platform\tb_scene_loader.sv", 
                                                                         39);
                    goto __Vlabel8;
                }
                vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n 
                    = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n);
                if (VL_UNLIKELY((VL_LTS_III(32, 0x64U, vlSelfRef.tb_scene_loader__DOT__run__Vstatic__n)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:40: Assertion failed in %Ntb_scene_loader.run.handshake: handshake stalled\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 40, "", false);
                }
            }
            __Vlabel8: ;
        }
        vlSelfRef.tb_scene_loader__DOT__bv = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__busy) {
            __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = VL_MODDIVS_III(32, tb_scene_loader__DOT__run__Vstatic__i, (IData)(3U));
            while (VL_LTS_III(32, 0U, __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge tb_scene_loader.clk)", 
                                                                     "sim/platform\tb_scene_loader.sv", 
                                                                     45);
                __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
        } else {
            tb_scene_loader__DOT__run__Vstatic__i = __Vtask_tb_scene_loader__DOT__run__7__length;
        }
        tb_scene_loader__DOT__run__Vstatic__i = ((IData)(1U) 
                                                 + tb_scene_loader__DOT__run__Vstatic__i);
    }
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         47);
    __Vtask_tb_scene_loader__DOT__run__7__tb_scene_loader__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_scene_loader__DOT__error) 
                        != __Vtask_tb_scene_loader__DOT__run__7__expected_error) 
                       | ((IData)(vlSelfRef.tb_scene_loader__DOT__ready) 
                          != (0U == __Vtask_tb_scene_loader__DOT__run__7__expected_error))) 
                      | (vlSelfRef.tb_scene_loader__DOT__commits 
                         != ((0U == __Vtask_tb_scene_loader__DOT__run__7__expected_error)
                              ? 1U : 0U)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:49: Assertion failed in %Ntb_scene_loader.run: scenario=%0d error=%0# ready=%0# commits=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,__Vtask_tb_scene_loader__DOT__run__7__scenario,
                     8,(IData)(vlSelfRef.tb_scene_loader__DOT__error),
                     1,vlSelfRef.tb_scene_loader__DOT__ready,
                     32,vlSelfRef.tb_scene_loader__DOT__commits);
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 49, "", false);
    }
    if (VL_UNLIKELY((((0U == __Vtask_tb_scene_loader__DOT__run__7__expected_error) 
                      & (vlSelfRef.tb_scene_loader__DOT__writes 
                         != (__Vtask_tb_scene_loader__DOT__run__7__length 
                             - (IData)(0x20U))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:50: Assertion failed in %Ntb_scene_loader.run: payload byte count\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 50, "", false);
    }
    if (VL_UNLIKELY((((1U == __Vtask_tb_scene_loader__DOT__run__7__scenario) 
                      & (((5U != (IData)(vlSelfRef.tb_scene_loader__DOT__resources)) 
                          | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__pages))) 
                         | (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__widgets))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:51: Assertion failed in %Ntb_scene_loader.run: exhibit counts\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 51, "", false);
    }
    VL_WRITEF_NX("PASS loader scenario %0d\n",0,32,
                 __Vtask_tb_scene_loader__DOT__run__7__scenario);
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         59);
    vlSelfRef.tb_scene_loader__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         59);
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         59);
    vlSelfRef.tb_scene_loader__DOT__reset = 0U;
    vlSelfRef.tb_scene_loader__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         60);
    vlSelfRef.tb_scene_loader__DOT__start = 0U;
    vlSelfRef.tb_scene_loader__DOT__stream_error = 1U;
    co_await vlSelfRef.__VtrigSched_hc1fc6e86__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scene_loader.clk)", 
                                                         "sim/platform\tb_scene_loader.sv", 
                                                         60);
    vlSelfRef.tb_scene_loader__DOT__stream_error = 0U;
    if (VL_UNLIKELY(((((1U != (IData)(vlSelfRef.tb_scene_loader__DOT__error)) 
                       | (IData)(vlSelfRef.tb_scene_loader__DOT__busy)) 
                      | (IData)(vlSelfRef.tb_scene_loader__DOT__ready))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:61: Assertion failed in %Ntb_scene_loader: stream error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 61, "", false);
    }
    VL_WRITEF_NX("PASS platform loader: both real configs, stalls, version, bounds, CRC, truncation, excess, reserved, I/O error\n",0);
    VL_FINISH_MT("sim/platform\\tb_scene_loader.sv", 62, "");
}

VL_INLINE_OPT VlCoroutine Vtb_scene_loader___024root___eval_initial__TOP__Vtiming__1(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x3b9aca00ULL, 
                                         nullptr, "sim/platform\tb_scene_loader.sv", 
                                         64);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:64: Assertion failed in %Ntb_scene_loader: timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 64, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scene_loader___024root___dump_triggers__act(Vtb_scene_loader___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_scene_loader___024root___eval_triggers__act(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___eval_triggers__act\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_scene_loader__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scene_loader__DOT__clk__0 
        = vlSelfRef.tb_scene_loader__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_scene_loader___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_scene_loader___024root___nba_sequent__TOP__0(Vtb_scene_loader___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scene_loader___024root___nba_sequent__TOP__0\n"); );
    Vtb_scene_loader__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__Vfuncout;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__old;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__old = 0;
    CData/*7:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__data;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__data = 0;
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value = 0;
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__Vfuncout;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__old;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__old = 0;
    CData/*7:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__data;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__data = 0;
    IData/*31:0*/ __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value;
    __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value = 0;
    IData/*31:0*/ __Vdly__tb_scene_loader__DOT__cycle;
    __Vdly__tb_scene_loader__DOT__cycle = 0;
    IData/*20:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__position;
    __Vdly__tb_scene_loader__DOT__dut__DOT__position = 0;
    IData/*31:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc;
    __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc = 0;
    IData/*31:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__crc;
    __Vdly__tb_scene_loader__DOT__dut__DOT__crc = 0;
    IData/*20:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes;
    __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes = 0;
    CData/*0:0*/ __Vdly__tb_scene_loader__DOT__busy;
    __Vdly__tb_scene_loader__DOT__busy = 0;
    CData/*0:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__header_done;
    __Vdly__tb_scene_loader__DOT__dut__DOT__header_done = 0;
    CData/*0:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix;
    __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 0;
    CData/*0:0*/ __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved;
    __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved = 0;
    CData/*7:0*/ __VdlyVal__tb_scene_loader__DOT__dut__DOT__header__v0;
    __VdlyVal__tb_scene_loader__DOT__dut__DOT__header__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_scene_loader__DOT__dut__DOT__header__v0;
    __VdlyDim0__tb_scene_loader__DOT__dut__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scene_loader__DOT__dut__DOT__header__v0;
    __VdlySet__tb_scene_loader__DOT__dut__DOT__header__v0 = 0;
    // Body
    __Vdly__tb_scene_loader__DOT__cycle = vlSelfRef.tb_scene_loader__DOT__cycle;
    __Vdly__tb_scene_loader__DOT__dut__DOT__position 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__position;
    __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__expected_crc;
    __Vdly__tb_scene_loader__DOT__dut__DOT__crc = vlSelfRef.tb_scene_loader__DOT__dut__DOT__crc;
    __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__payload_bytes;
    __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_prefix;
    __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_reserved;
    __Vdly__tb_scene_loader__DOT__busy = vlSelfRef.tb_scene_loader__DOT__busy;
    __Vdly__tb_scene_loader__DOT__dut__DOT__header_done 
        = vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done;
    __VdlySet__tb_scene_loader__DOT__dut__DOT__header__v0 = 0U;
    __Vdly__tb_scene_loader__DOT__cycle = ((IData)(1U) 
                                           + vlSelfRef.tb_scene_loader__DOT__cycle);
    if ((1U & (~ (IData)(vlSelfRef.tb_scene_loader__DOT__reset)))) {
        if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
             & ((IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done) 
                & ((IData)(vlSelfRef.tb_scene_loader__DOT__bv) 
                   & (2U != VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U))))))) {
            if (VL_UNLIKELY((((0xfffffU & (vlSelfRef.tb_scene_loader__DOT__dut__DOT__position 
                                           - (IData)(0x20U))) 
                              != vlSelfRef.tb_scene_loader__DOT__writes)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_scene_loader.sv:16: Assertion failed in %Ntb_scene_loader: nonsequential staging address\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/platform\\tb_scene_loader.sv", 16, "", false);
            }
            vlSelfRef.tb_scene_loader__DOT__writes 
                = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__writes);
        }
        if (vlSelfRef.tb_scene_loader__DOT__commit) {
            vlSelfRef.tb_scene_loader__DOT__commits 
                = ((IData)(1U) + vlSelfRef.tb_scene_loader__DOT__commits);
        }
    }
    vlSelfRef.tb_scene_loader__DOT__cycle = __Vdly__tb_scene_loader__DOT__cycle;
    if (vlSelfRef.tb_scene_loader__DOT__reset) {
        __Vdly__tb_scene_loader__DOT__dut__DOT__position = 0U;
        __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc = 0U;
        __Vdly__tb_scene_loader__DOT__dut__DOT__crc = 0xffffffffU;
        __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes = 0U;
        __Vdly__tb_scene_loader__DOT__busy = 0U;
        vlSelfRef.tb_scene_loader__DOT__ready = 0U;
        vlSelfRef.tb_scene_loader__DOT__commit = 0U;
        vlSelfRef.tb_scene_loader__DOT__error = 0U;
        vlSelfRef.tb_scene_loader__DOT__resources = 0U;
        vlSelfRef.tb_scene_loader__DOT__pages = 0U;
        vlSelfRef.tb_scene_loader__DOT__widgets = 0U;
        __Vdly__tb_scene_loader__DOT__dut__DOT__header_done = 0U;
        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 0U;
        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved = 0U;
    } else {
        vlSelfRef.tb_scene_loader__DOT__commit = 0U;
        if (vlSelfRef.tb_scene_loader__DOT__start) {
            __Vdly__tb_scene_loader__DOT__dut__DOT__position = 0U;
            __Vdly__tb_scene_loader__DOT__dut__DOT__crc = 0xffffffffU;
            __Vdly__tb_scene_loader__DOT__busy = 1U;
            vlSelfRef.tb_scene_loader__DOT__ready = 0U;
            vlSelfRef.tb_scene_loader__DOT__error = 0U;
            __Vdly__tb_scene_loader__DOT__dut__DOT__header_done = 0U;
            __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 0U;
            __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved = 0U;
        } else if (((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                    & (IData)(vlSelfRef.tb_scene_loader__DOT__stream_error))) {
            vlSelfRef.tb_scene_loader__DOT__error = 1U;
            __Vdly__tb_scene_loader__DOT__busy = 0U;
            vlSelfRef.tb_scene_loader__DOT__ready = 0U;
        } else if ((((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                     & (IData)(vlSelfRef.tb_scene_loader__DOT__bv)) 
                    & (IData)(vlSelfRef.tb_scene_loader__DOT__br))) {
            if (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done) {
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__data 
                    = vlSelfRef.tb_scene_loader__DOT__data;
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__old 
                    = vlSelfRef.tb_scene_loader__DOT__dut__DOT__crc;
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = (__Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__old 
                       ^ (IData)(__Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__data));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value 
                    = ((1U & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value)
                        ? (0xedb88320U ^ VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U))
                        : VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value, 1U));
                __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__Vfuncout 
                    = __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__value;
                __Vdly__tb_scene_loader__DOT__dut__DOT__crc 
                    = __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__9__Vfuncout;
                if (((0x1fffffU & (vlSelfRef.tb_scene_loader__DOT__dut__DOT__position 
                                   - (IData)(0x20U))) 
                     == (0x1fffffU & (vlSelfRef.tb_scene_loader__DOT__dut__DOT__payload_bytes 
                                      - (IData)(1U))))) {
                    if (vlSelfRef.tb_scene_loader__DOT__last) {
                        if (((~ ([&]() {
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__data 
                                                = vlSelfRef.tb_scene_loader__DOT__data;
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__old 
                                                = vlSelfRef.tb_scene_loader__DOT__dut__DOT__crc;
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (__Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__old 
                                                   ^ (IData)(__Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__data));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value 
                                                = (
                                                   (1U 
                                                    & __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value)
                                                    ? 
                                                   (0xedb88320U 
                                                    ^ 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value, 1U));
                                            __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__Vfuncout 
                                                = __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__value;
                                        }(), __Vfunc_tb_scene_loader__DOT__dut__DOT__crc_byte__10__Vfuncout)) 
                             != vlSelfRef.tb_scene_loader__DOT__dut__DOT__expected_crc)) {
                            vlSelfRef.tb_scene_loader__DOT__error = 7U;
                            __Vdly__tb_scene_loader__DOT__busy = 0U;
                            vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                        } else {
                            __Vdly__tb_scene_loader__DOT__busy = 0U;
                            vlSelfRef.tb_scene_loader__DOT__ready = 1U;
                            vlSelfRef.tb_scene_loader__DOT__commit = 1U;
                        }
                    } else {
                        vlSelfRef.tb_scene_loader__DOT__error = 6U;
                        __Vdly__tb_scene_loader__DOT__busy = 0U;
                        vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                    }
                } else if (vlSelfRef.tb_scene_loader__DOT__last) {
                    vlSelfRef.tb_scene_loader__DOT__error = 2U;
                    __Vdly__tb_scene_loader__DOT__busy = 0U;
                    vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                } else {
                    __Vdly__tb_scene_loader__DOT__dut__DOT__position 
                        = (0x1fffffU & ((IData)(1U) 
                                        + vlSelfRef.tb_scene_loader__DOT__dut__DOT__position));
                }
            } else {
                if ((0x14U > vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    __VdlyVal__tb_scene_loader__DOT__dut__DOT__header__v0 
                        = vlSelfRef.tb_scene_loader__DOT__data;
                    __VdlyDim0__tb_scene_loader__DOT__dut__DOT__header__v0 
                        = (0x1fU & vlSelfRef.tb_scene_loader__DOT__dut__DOT__position);
                    __VdlySet__tb_scene_loader__DOT__dut__DOT__header__v0 = 1U;
                }
                if (((0x14U <= vlSelfRef.tb_scene_loader__DOT__dut__DOT__position) 
                     & (0U != (IData)(vlSelfRef.tb_scene_loader__DOT__data)))) {
                    __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved = 1U;
                }
                if ((0U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if ((0x44U != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if ((1U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if ((0x4dU != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if ((2U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if ((0x5aU != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if ((3U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if ((0x50U != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if ((4U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if (((1U != (IData)(vlSelfRef.tb_scene_loader__DOT__data)) 
                         & (2U != (IData)(vlSelfRef.tb_scene_loader__DOT__data)))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if (((5U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position) 
                            || (7U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position))) {
                    if ((0U != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                } else if ((6U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if ((0x20U != (IData)(vlSelfRef.tb_scene_loader__DOT__data))) {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix = 1U;
                    }
                }
                if (vlSelfRef.tb_scene_loader__DOT__last) {
                    vlSelfRef.tb_scene_loader__DOT__error = 2U;
                    __Vdly__tb_scene_loader__DOT__busy = 0U;
                    vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                } else if ((0x1fU == vlSelfRef.tb_scene_loader__DOT__dut__DOT__position)) {
                    if (vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_prefix) {
                        vlSelfRef.tb_scene_loader__DOT__error = 3U;
                        __Vdly__tb_scene_loader__DOT__busy = 0U;
                        vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                    } else if (((((((((0U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                       [0x10U]) | (0x40U 
                                                   < 
                                                   vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                                   [0x10U])) 
                                     | (0U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                        [0x11U])) | 
                                    (0x20U < vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                     [0x11U])) | (0x80U 
                                                  < 
                                                  vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                                  [0x12U])) 
                                  | (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                     [0x13U] >= vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                     [0x11U])) | ((1U 
                                                   == 
                                                   vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                                   [4U]) 
                                                  & ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length 
                                                      != 
                                                      VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__count_sum), 5U)) 
                                                     | (0x1c00U 
                                                        < vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length)))) 
                                | ((2U == vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                    [4U]) & ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length 
                                              < VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__count_sum), 5U)) 
                                             | (0x100000U 
                                                < vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length))))) {
                        vlSelfRef.tb_scene_loader__DOT__error = 4U;
                        __Vdly__tb_scene_loader__DOT__busy = 0U;
                        vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                    } else if (((0U != (IData)(vlSelfRef.tb_scene_loader__DOT__data)) 
                                | (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_reserved))) {
                        vlSelfRef.tb_scene_loader__DOT__error = 5U;
                        __Vdly__tb_scene_loader__DOT__busy = 0U;
                        vlSelfRef.tb_scene_loader__DOT__ready = 0U;
                    } else {
                        __Vdly__tb_scene_loader__DOT__dut__DOT__header_done = 1U;
                        __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes 
                            = (0x1fffffU & vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length);
                        __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc 
                            = vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_crc;
                        vlSelfRef.tb_scene_loader__DOT__resources 
                            = (0x7fU & vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                               [0x10U]);
                        __Vdly__tb_scene_loader__DOT__dut__DOT__position = 0x20U;
                        vlSelfRef.tb_scene_loader__DOT__pages 
                            = (0x3fU & vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                               [0x11U]);
                        vlSelfRef.tb_scene_loader__DOT__widgets 
                            = vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                            [0x12U];
                    }
                } else {
                    __Vdly__tb_scene_loader__DOT__dut__DOT__position 
                        = (0x1fffffU & ((IData)(1U) 
                                        + vlSelfRef.tb_scene_loader__DOT__dut__DOT__position));
                }
            }
        }
    }
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__expected_crc 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__expected_crc;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__crc = __Vdly__tb_scene_loader__DOT__dut__DOT__crc;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__payload_bytes 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__payload_bytes;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_prefix 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__bad_prefix;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__bad_reserved 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__bad_reserved;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__position 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__position;
    vlSelfRef.tb_scene_loader__DOT__busy = __Vdly__tb_scene_loader__DOT__busy;
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done 
        = __Vdly__tb_scene_loader__DOT__dut__DOT__header_done;
    if (__VdlySet__tb_scene_loader__DOT__dut__DOT__header__v0) {
        vlSelfRef.tb_scene_loader__DOT__dut__DOT__header[__VdlyDim0__tb_scene_loader__DOT__dut__DOT__header__v0] 
            = __VdlyVal__tb_scene_loader__DOT__dut__DOT__header__v0;
    }
    vlSelfRef.tb_scene_loader__DOT__br = ((IData)(vlSelfRef.tb_scene_loader__DOT__busy) 
                                          & ((~ (IData)(vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_done)) 
                                             | (2U 
                                                != 
                                                VL_MODDIVS_III(32, vlSelfRef.tb_scene_loader__DOT__cycle, (IData)(7U)))));
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_length 
        = (((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
             [0xbU] << 0x18U) | (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                 [0xaU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
               [9U] << 8U) | vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
              [8U]));
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__count_sum 
        = (0x3ffU & (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                     [0x10U] + (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                [0x11U] + vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                [0x12U])));
    vlSelfRef.tb_scene_loader__DOT__dut__DOT__header_crc 
        = (((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
             [0xfU] << 0x18U) | (vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
                                 [0xeU] << 0x10U)) 
           | ((vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
               [0xdU] << 8U) | vlSelfRef.tb_scene_loader__DOT__dut__DOT__header
              [0xcU]));
}
