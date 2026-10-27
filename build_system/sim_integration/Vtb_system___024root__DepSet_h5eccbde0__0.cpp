// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system__Syms.h"
#include "Vtb_system___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_system__DOT__before_nonzero;
    tb_system__DOT__before_nonzero = 0;
    IData/*31:0*/ tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    CData/*7:0*/ __Vtask_tb_system__DOT__command__0__value;
    __Vtask_tb_system__DOT__command__0__value = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k;
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    CData/*7:0*/ __Vtask_tb_system__DOT__command__1__value;
    __Vtask_tb_system__DOT__command__1__value = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k;
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "sim/system\tb_system.sv", 
                                         31);
    vlSelfRef.tb_system__DOT__run_n = 1U;
    while ((1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__display_valid) 
                      | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__image_error))) 
                     | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_error)))))) {
        co_await vlSelfRef.__VtrigSched_h1608b681__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((tb_system.dut.display_valid | (8'h0 != tb_system.dut.image_error)) | (8'h0 != tb_system.dut.sd_error)))", 
                                                             "sim/system\tb_system.sv", 
                                                             32);
    }
    if (VL_UNLIKELY(((1U & ((((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__image_error)) 
                              | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_error))) 
                             | (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist_passed))) 
                            | (0U != vlSelfRef.tb_system__DOT__dut__DOT__errors)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:33: Assertion failed in %Ntb_system: integrated boot/CRC/file error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_system.sv", 33, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone_muted)) 
                            | (2U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__audio_mode))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:34: Assertion failed in %Ntb_system: integrated boot must be silent\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_system.sv", 34, "", false);
    }
    while ((2U != vlSelfRef.tb_system__DOT__frames)) {
        co_await vlSelfRef.__VtrigSched_h3b5ce6be__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'sh2 == tb_system.frames))", 
                                                             "sim/system\tb_system.sv", 
                                                             35);
    }
    if (VL_UNLIKELY(((((0x96000U != vlSelfRef.tb_system__DOT__pixels) 
                       | (0U != vlSelfRef.tb_system__DOT__dut__DOT__underflow)) 
                      | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fb_fault))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:36: Assertion failed in %Ntb_system: integrated frame count/underflow\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_system.sv", 36, "", false);
    }
    __Vtask_tb_system__DOT__command__0__value = 0x55U;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 0;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_system.dut.pixel_clk)", 
                                                         "sim/system\tb_system.sv", 
                                                         25);
    vlSelfRef.tb_system__DOT__rx = 0U;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             25);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_system__DOT__rx = (1U & (IData)(__Vtask_tb_system__DOT__command__0__value));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 1U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 1U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 2U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 2U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 3U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 3U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 4U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 4U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 5U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 5U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 6U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 6U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 7U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__0__value) 
                                          >> 7U));
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__0__unnamedblk1__DOT__k = 8U;
    vlSelfRef.tb_system__DOT__rx = 1U;
    __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x12cU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             27);
        __Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_system__DOT__command__0__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    tb_system__DOT__before_nonzero = vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets;
    tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x7a120U;
    while (VL_LTS_III(32, 0U, tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        co_await vlSelfRef.__VtrigSched_h536dd4d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             38);
        tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_system__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone_muted) 
                       | (vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets 
                          <= tb_system__DOT__before_nonzero)) 
                      | (1U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:39: Assertion failed in %Ntb_system: integrated unmute\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_system.sv", 39, "", false);
    }
    __Vtask_tb_system__DOT__command__1__value = 0x4dU;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 0;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_system.dut.pixel_clk)", 
                                                         "sim/system\tb_system.sv", 
                                                         25);
    vlSelfRef.tb_system__DOT__rx = 0U;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             25);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_system__DOT__rx = (1U & (IData)(__Vtask_tb_system__DOT__command__1__value));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 1U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 1U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 2U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 2U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 3U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 3U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 4U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 4U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 5U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 5U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 6U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 6U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 7U;
    vlSelfRef.tb_system__DOT__rx = (1U & ((IData)(__Vtask_tb_system__DOT__command__1__value) 
                                          >> 7U));
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xd9U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             26);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_system__DOT__command__1__unnamedblk1__DOT__k = 8U;
    vlSelfRef.tb_system__DOT__rx = 1U;
    __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x12cU;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h536dd497__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             27);
        __Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_system__DOT__command__1__tb_system__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0xbb8U;
    while (VL_LTS_III(32, 0U, tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h536dd4d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             40);
        tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_system__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    tb_system__DOT__before_nonzero = vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets;
    tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x186a0U;
    while (VL_LTS_III(32, 0U, tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h536dd4d6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.dut.pixel_clk)", 
                                                             "sim/system\tb_system.sv", 
                                                             41);
        tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_system__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & ((((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone_muted)) 
                              | (vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets 
                                 != tb_system__DOT__before_nonzero)) 
                             | (2U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count))) 
                            | (0U != vlSelfRef.tb_system__DOT__dut__DOT__underflow)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:42: Assertion failed in %Ntb_system: integrated mute\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_system.sv", 42, "", false);
    }
    VL_WRITEF_NX("PASS integrated SPI+CRC+FAT+BMP+SDRAM+FIFO+HDMI/control: two frames/614400 pixels, muted boot, unmute/mute; model wait2/BIST4096\n",0);
    VL_FINISH_MT("sim/system\\tb_system.sv", 43, "");
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2ba7def3000ULL, 
                                         nullptr, "sim/system\tb_system.sv", 
                                         45);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:45: Assertion failed in %Ntb_system: integrated timeout SD=%0# BMP=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,(IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd__DOT__state),
                 8,vlSelfRef.tb_system__DOT__dut__DOT__loader__DOT__state);
    VL_STOP_MT("sim/system\\tb_system.sv", 45, "", false);
}

VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__6____Vfork_1__1(Vtb_system___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__6(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h5c3be8d7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_system.dut.mem_clk)", 
                                                             "sim/p2\sdram_model.sv", 
                                                             15);
        vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
            = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__cycle);
        if (vlSelfRef.tb_system__DOT__dut__DOT__reset) {
            vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__mode_set = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__ref_count = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__last_refresh 
                = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
            vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[0U] = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[1U] = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[2U] = 0U;
            vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[3U] = 0U;
        } else {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_system__DOT__memory_model__DOT__mode_set) 
                              & VL_LTS_III(32, 0x30cU, 
                                           (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                            - vlSelfRef.tb_system__DOT__memory_model__DOT__last_refresh)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:19: Assertion failed in %Ntb_system.memory_model: refresh overdue\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/p2\\sdram_model.sv", 19, "", false);
            }
            if ((0U != vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:21: Assertion failed in %Ntb_system.memory_model: missing write data\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 21, "", false);
                }
                vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left 
                    = (vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left 
                       - (IData)(1U));
                vlSelfRef.tb_system__DOT__memory_model__DOT__mem[(0x1fffffU 
                                                                  & vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address)] 
                    = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U];
                if ((0U == vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left)) {
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[(3U 
                                                                            & vlSelfRef.tb_system__DOT__memory_model__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[(3U 
                                                                            & vlSelfRef.tb_system__DOT__memory_model__DOT__bank_active)] 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__cycle);
                }
                vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address 
                    = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address);
            }
            if ((0U != vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read)) {
                vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read 
                    = (vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read 
                       - (IData)(1U));
                if ((0U == vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read)) {
                    vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left = 8U;
                }
            }
            if ((0U != vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left)) {
                if (VL_UNLIKELY((vlSelfRef.tb_system__DOT__dut__DOT__dq_oe))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:27: Assertion failed in %Ntb_system.memory_model: DQ contention\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 27, "", false);
                }
                vlSelfRef.__Vintraval_hc463ab01__0 
                    = (vlSelfRef.tb_system__DOT__memory_model__DOT__mem
                       [(0x1fffffU & vlSelfRef.tb_system__DOT__memory_model__DOT__rd_address)] 
                       ^ (((IData)(vlSelfRef.tb_system__DOT__memory_model__DOT__inject) 
                           & (0x17U == vlSelfRef.tb_system__DOT__memory_model__DOT__rd_address))
                           ? 1U : 0U));
                Vtb_system___024root___eval_initial__TOP__Vtiming__6____Vfork_1__1(vlSelf);
                vlSelfRef.tb_system__DOT__memory_model__DOT__rd_address 
                    = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__rd_address);
                vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left 
                    = (vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left 
                       - (IData)(1U));
                if ((0U == vlSelfRef.tb_system__DOT__memory_model__DOT__rd_left)) {
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[(3U 
                                                                            & vlSelfRef.tb_system__DOT__memory_model__DOT__bank_active)] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[(3U 
                                                                            & vlSelfRef.tb_system__DOT__memory_model__DOT__bank_active)] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                }
            }
            if (vlSelfRef.tb_system__DOT__dut__DOT__ras_n) {
                if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__cas_n)))) {
                    if (VL_UNLIKELY(((1U & ((0x400U 
                                             != (0x407U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa))) 
                                            | ((~ vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                                [vlSelfRef.tb_system__DOT__dut__DOT__ba]) 
                                               | VL_GTS_III(32, 2U, 
                                                            (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                             - 
                                                             vlSelfRef.tb_system__DOT__memory_model__DOT__last_active
                                                             [vlSelfRef.tb_system__DOT__dut__DOT__ba])))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:51: Assertion failed in %Ntb_system.memory_model: READ/WRITE timing/address\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("sim/p2\\sdram_model.sv", 51, "", false);
                    }
                    vlSelfRef.tb_system__DOT__memory_model__DOT__bank_active 
                        = vlSelfRef.tb_system__DOT__dut__DOT__ba;
                    if (vlSelfRef.tb_system__DOT__dut__DOT__we_n) {
                        vlSelfRef.tb_system__DOT__memory_model__DOT__rd_address 
                            = (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ba) 
                                << 0x13U) | ((vlSelfRef.tb_system__DOT__memory_model__DOT__rows
                                              [vlSelfRef.tb_system__DOT__dut__DOT__ba] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa))));
                        vlSelfRef.tb_system__DOT__memory_model__DOT__delay_read = 3U;
                    } else {
                        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__dq_oe)))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:55: Assertion failed in %Ntb_system.memory_model: first write beat\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p2\\sdram_model.sv", 55, "", false);
                        }
                        vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address 
                            = (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ba) 
                                << 0x13U) | ((vlSelfRef.tb_system__DOT__memory_model__DOT__rows
                                              [vlSelfRef.tb_system__DOT__dut__DOT__ba] 
                                              << 8U) 
                                             | (0xffU 
                                                & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa))));
                        vlSelfRef.tb_system__DOT__memory_model__DOT__mem[(0x1fffffU 
                                                                          & vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address)] 
                            = vlSelfRef.tb_system__DOT__dut__DOT__ctrl__DOT__write_data[0U];
                        vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__wr_address);
                        vlSelfRef.tb_system__DOT__memory_model__DOT__wr_left = 7U;
                    }
                }
            } else if (vlSelfRef.tb_system__DOT__dut__DOT__cas_n) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__we_n) {
                    if (VL_UNLIKELY(((1U & (((((~ (IData)(vlSelfRef.tb_system__DOT__memory_model__DOT__mode_set)) 
                                               | vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                               [vlSelfRef.tb_system__DOT__dut__DOT__ba]) 
                                              | VL_GTS_III(32, 2U, 
                                                           (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                            - 
                                                            vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at
                                                            [vlSelfRef.tb_system__DOT__dut__DOT__ba]))) 
                                             | VL_GTS_III(32, 4U, 
                                                          (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                           - vlSelfRef.tb_system__DOT__memory_model__DOT__last_refresh))) 
                                            | VL_GTS_III(32, 2U, 
                                                         (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                          - vlSelfRef.tb_system__DOT__memory_model__DOT__last_mrs))))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:47: Assertion failed in %Ntb_system.memory_model: ACT timing\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("sim/p2\\sdram_model.sv", 47, "", false);
                    }
                    vlSelfRef.tb_system__DOT__memory_model__DOT__rows[vlSelfRef.tb_system__DOT__dut__DOT__ba] 
                        = vlSelfRef.tb_system__DOT__dut__DOT__sa;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[vlSelfRef.tb_system__DOT__dut__DOT__ba] = 1U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__last_active[vlSelfRef.tb_system__DOT__dut__DOT__ba] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                } else if ((0x400U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa))) {
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[0U] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[0U] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[1U] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[1U] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[2U] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[2U] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[3U] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[3U] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                } else {
                    vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank[vlSelfRef.tb_system__DOT__dut__DOT__ba] = 0U;
                    vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at[vlSelfRef.tb_system__DOT__dut__DOT__ba] 
                        = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                }
            } else if (vlSelfRef.tb_system__DOT__dut__DOT__we_n) {
                if (VL_UNLIKELY(((vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                  [0U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at
                                                     [0U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_system.memory_model.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                  [1U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at
                                                     [1U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_system.memory_model.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                  [2U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at
                                                     [2U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_system.memory_model.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY(((vlSelfRef.tb_system__DOT__memory_model__DOT__open_bank
                                  [3U] | VL_GTS_III(32, 2U, 
                                                    (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                                     - 
                                                     vlSelfRef.tb_system__DOT__memory_model__DOT__closed_at
                                                     [3U])))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:38: Assertion failed in %Ntb_system.memory_model.unnamedblk4: refresh with open bank/tRP\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 38, "", false);
                }
                if (VL_UNLIKELY((VL_GTS_III(32, 4U, 
                                            (vlSelfRef.tb_system__DOT__memory_model__DOT__cycle 
                                             - vlSelfRef.tb_system__DOT__memory_model__DOT__last_refresh))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:39: Assertion failed in %Ntb_system.memory_model: tRFC\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 39, "", false);
                }
                vlSelfRef.tb_system__DOT__memory_model__DOT__last_refresh 
                    = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
                vlSelfRef.tb_system__DOT__memory_model__DOT__ref_count 
                    = ((IData)(1U) + vlSelfRef.tb_system__DOT__memory_model__DOT__ref_count);
            } else {
                if (VL_UNLIKELY((((VL_GTS_III(32, 8U, vlSelfRef.tb_system__DOT__memory_model__DOT__ref_count) 
                                   | (0x33U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sa))) 
                                  | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__ba)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: sdram_model.sv:43: Assertion failed in %Ntb_system.memory_model: initialization/mode\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("sim/p2\\sdram_model.sv", 43, "", false);
                }
                vlSelfRef.tb_system__DOT__memory_model__DOT__mode_set = 1U;
                vlSelfRef.tb_system__DOT__memory_model__DOT__last_mrs 
                    = vlSelfRef.tb_system__DOT__memory_model__DOT__cycle;
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_system___024root___eval_triggers__act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_triggers__act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h923f708f__0;
    __Vtrigprevexpr_h923f708f__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hab6ba0a6__0;
    __Vtrigprevexpr_hab6ba0a6__0 = 0;
    // Body
    __Vtrigprevexpr_h923f708f__0 = (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__display_valid) 
                                     | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__image_error))) 
                                    | (0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sd_error)));
    __Vtrigprevexpr_hab6ba0a6__0 = (2U == vlSelfRef.tb_system__DOT__frames);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(5U, vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__1.neq(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__pixel_clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__ar) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__ar__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__mem_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__mem_clk__0))));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__fifo_reset__0))));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.tb_system__DOT__clk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__mem_clk)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__mem_clk__0)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSelfRef.tb_system__DOT__sck) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__sck__0))));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSelfRef.tb_system__DOT__cs) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__cs__0))));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((~ (IData)(vlSelfRef.tb_system__DOT__sck)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__sck__0)));
    vlSelfRef.__VactTriggered.setBit(0xfU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(__Vtrigprevexpr_h923f708f__0) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr_h923f708f__1)));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(__Vtrigprevexpr_hab6ba0a6__0) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr_hab6ba0a6__1)));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_clk)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__pixel_clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes__1.assign(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame__DOT__packet_bytes);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__pixel_clk__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__pixel_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__ar__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__ar;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__mem_clk__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__mem_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__dut__DOT__fifo_reset__0 
        = vlSelfRef.tb_system__DOT__dut__DOT__fifo_reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clk__0 
        = vlSelfRef.tb_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__sck__0 
        = vlSelfRef.tb_system__DOT__sck;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__cs__0 
        = vlSelfRef.tb_system__DOT__cs;
    vlSelfRef.__Vtrigprevexpr_h923f708f__1 = __Vtrigprevexpr_h923f708f__0;
    vlSelfRef.__Vtrigprevexpr_hab6ba0a6__1 = __Vtrigprevexpr_hab6ba0a6__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x10U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x11U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<SData/*9:0*/, 16> Vtb_system__ConstPool__TABLE_h0e17cbe9_0;
extern const VlUnpacked<SData/*9:0*/, 4> Vtb_system__ConstPool__TABLE_h1d5d3245_0;

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*55:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0 = 0;
    CData/*7:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0 = 0;
    CData/*7:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2 = 0;
    CData/*7:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4 = 0;
    CData/*7:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 = 0;
    QData/*63:0*/ tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index;
    __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__ecc;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__ecc = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__next_bch_bit;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__next_bch_bit = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*1:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__dv;
    __Vdly__tb_system__DOT__dut__DOT__dv = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__fail;
    __Vdly__tb_system__DOT__dut__DOT__fail = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__underflow;
    __Vdly__tb_system__DOT__dut__DOT__underflow = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift = 0;
    IData/*24:0*/ __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count;
    __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__beep_phase;
    __Vdly__tb_system__DOT__dut__DOT__beep_phase = 0;
    SData/*15:0*/ __Vdly__tb_system__DOT__dut__DOT__command_count;
    __Vdly__tb_system__DOT__dut__DOT__command_count = 0;
    IData/*24:0*/ __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator;
    __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase;
    __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase = 0;
    SData/*9:0*/ __Vdly__tb_system__DOT__dut__DOT__x;
    __Vdly__tb_system__DOT__dut__DOT__x = 0;
    SData/*9:0*/ __Vdly__tb_system__DOT__dut__DOT__y;
    __Vdly__tb_system__DOT__dut__DOT__y = 0;
    IData/*31:0*/ __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets;
    __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current = 0;
    CData/*1:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0;
    CData/*7:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 0;
    CData/*5:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0;
    IData/*19:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0;
    CData/*0:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap = 0;
    CData/*4:0*/ __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0;
    SData/*15:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*0:0*/ __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    CData/*1:0*/ __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    CData/*0:0*/ __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6 = 0;
    IData/*23:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 0;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_11;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<6>/*191:0*/ __Vtemp_19;
    VlWide<6>/*191:0*/ __Vtemp_20;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<6>/*191:0*/ __Vtemp_23;
    // Body
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator 
        = vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__accumulator;
    __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase 
        = vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__phase;
    __Vdly__tb_system__DOT__dut__DOT__underflow = vlSelfRef.tb_system__DOT__dut__DOT__underflow;
    __Vdly__tb_system__DOT__dut__DOT__fail = vlSelfRef.tb_system__DOT__dut__DOT__fail;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__frame_toggle 
        = vlSelfRef.tb_system__DOT__dut__DOT__frame_toggle;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state 
        = vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count 
        = vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno 
        = vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno;
    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift 
        = vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__shift;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
    __Vdly__tb_system__DOT__dut__DOT__y = vlSelfRef.tb_system__DOT__dut__DOT__y;
    __Vdly__tb_system__DOT__dut__DOT__x = vlSelfRef.tb_system__DOT__dut__DOT__x;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__command_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__command_count;
    __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__second_count;
    __Vdly__tb_system__DOT__dut__DOT__beep_phase = vlSelfRef.tb_system__DOT__dut__DOT__beep_phase;
    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count 
        = vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count;
    __Vdly__tb_system__DOT__dut__DOT__dv = vlSelfRef.tb_system__DOT__dut__DOT__dv;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
    __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets 
        = vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 0U;
    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 0U;
    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
    if ((((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset)) 
          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dv) 
             >> 1U)) & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr) 
                           >> 2U)))) {
        if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
             & (0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))) {
            vlSelfRef.tb_system__DOT__checking = 1U;
        }
        if ((((IData)(vlSelfRef.tb_system__DOT__checking) 
              & (0x280U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) 
             & (0x1e0U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))) {
            vlSelfRef.tb_system__DOT__r = (0xffU & 
                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__x) 
                                            ^ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)));
            vlSelfRef.tb_system__DOT__g = (0xffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y));
            vlSelfRef.tb_system__DOT__pixels = ((IData)(1U) 
                                                + vlSelfRef.tb_system__DOT__pixels);
            vlSelfRef.tb_system__DOT__b = (0xffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x));
            vlSelfRef.tb_system__DOT__expected = ((0xf800U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__r) 
                                                      << 8U)) 
                                                  | ((0x7e0U 
                                                      & ((IData)(vlSelfRef.tb_system__DOT__g) 
                                                         << 3U)) 
                                                     | (0x1fU 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__b) 
                                                           >> 3U))));
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_empty) 
                              | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                 != (IData)(vlSelfRef.tb_system__DOT__expected)))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_system.sv:19: Assertion failed in %Ntb_system: integrated image mismatch x=%0# y=%0# actual=%x expected=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),10,
                             (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x),
                             10,vlSelfRef.tb_system__DOT__dut__DOT__y,
                             16,(IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565),
                             16,vlSelfRef.tb_system__DOT__expected);
                VL_STOP_MT("sim/system\\tb_system.sv", 19, "", false);
            }
        }
        if ((((IData)(vlSelfRef.tb_system__DOT__checking) 
              & (0x31fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) 
             & (0x1dfU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))) {
            vlSelfRef.tb_system__DOT__frames = ((IData)(1U) 
                                                + vlSelfRef.tb_system__DOT__frames);
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pr))) {
        vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__cs = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__ms = 3U;
        __Vdly__tb_system__DOT__dut__DOT__command_count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__beep_phase = 1U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 2U;
        __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 0U;
        __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count = 0U;
        __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno = 0U;
        __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__command_byte = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__command_valid = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__cs 
            = (1U | (2U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__cs) 
                           << 1U)));
        vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__ms 
            = (1U | (2U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__ms) 
                           << 1U)));
        if ((0x17d783fU == vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__second_count)) {
            __Vdly__tb_system__DOT__dut__DOT__beep_phase 
                = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__beep_phase)));
            __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
        } else {
            __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count 
                = (0x1ffffffU & ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__second_count));
        }
        if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count))) {
            vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count 
                = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__restart_count) 
                              - (IData)(1U)));
        }
        if (vlSelfRef.tb_system__DOT__dut__DOT__command_valid) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                    if ((0x10U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                        __Vdly__tb_system__DOT__dut__DOT__command_count 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count)));
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                                    __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
                                                                    __Vdly__tb_system__DOT__dut__DOT__beep_phase = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                                    vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count = 0x61a8U;
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                                    vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 1U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (2U 
                                                                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            vlSelfRef.tb_system__DOT__dut__DOT__audio_mode 
                                                                = 
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))
                                                                  ? 0U
                                                                  : 2U);
                                                        }
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                                vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 2U;
                                                            }
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                            vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 3U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                __Vdly__tb_system__DOT__dut__DOT__command_count 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count)));
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                            __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
                                                            __Vdly__tb_system__DOT__dut__DOT__beep_phase = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                            vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count = 0x61a8U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    vlSelfRef.tb_system__DOT__dut__DOT__audio_mode 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))
                                                          ? 0U
                                                          : 2U);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 2U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                    vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 3U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                        if ((4U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                    __Vdly__tb_system__DOT__dut__DOT__command_count 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count)));
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                                __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
                                                                __Vdly__tb_system__DOT__dut__DOT__beep_phase = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((0x10U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                                vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count = 0x61a8U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                                vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        vlSelfRef.tb_system__DOT__dut__DOT__audio_mode 
                                                            = 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))
                                                              ? 0U
                                                              : 2U);
                                                    }
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 2U;
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                            >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                        vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 3U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                __Vdly__tb_system__DOT__dut__DOT__command_count 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_count)));
                                if ((1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                            __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count = 0U;
                                                            __Vdly__tb_system__DOT__dut__DOT__beep_phase = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                            vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__controls__DOT__restart_count = 0x61a8U;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                            vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                    vlSelfRef.tb_system__DOT__dut__DOT__audio_mode 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))
                                                          ? 0U
                                                          : 2U);
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                            if ((4U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                        vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 2U;
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte) 
                                                        >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_byte)))) {
                                                    vlSelfRef.tb_system__DOT__dut__DOT__audio_mode = 3U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.tb_system__DOT__dut__DOT__command_valid = 0U;
        if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r2)))) {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count = 0x6bU;
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count))) {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count) 
                                  - (IData)(1U)));
            } else if (vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r2) {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 0U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 2U;
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count = 0xd8U;
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count))) {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count) 
                                  - (IData)(1U)));
            } else {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno))) 
                        & (IData)(__Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift)) 
                       | (0xffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r2) 
                                   << (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno))));
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count = 0xd8U;
                if ((7U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno))) {
                    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 3U;
                } else {
                    __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count))) {
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count) 
                                  - (IData)(1U)));
            } else {
                if (vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r2) {
                    vlSelfRef.tb_system__DOT__dut__DOT__command_byte 
                        = vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__shift;
                    vlSelfRef.tb_system__DOT__dut__DOT__command_valid = 1U;
                }
                __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state = 0U;
            }
        }
    }
    if ((1U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc 
            = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc) 
                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add)));
    }
    vlSelfRef.tb_system__DOT__dut__DOT__fifo_out = 
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__mem
        [(0x7ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rn))];
    if ((4U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr))) {
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rp = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg2 = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rp 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__rn;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg2 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg1;
        vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wg1 
            = vlSelfRef.tb_system__DOT__dut__DOT__fifo__DOT__wgray;
    }
    if ((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__control_coding;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__control_coding;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__control_coding;
    } else if ((1U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out;
    } else if ((2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds = 0x2ccU;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds = 0x2ccU;
    } else if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__terc4_coding;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__terc4_coding;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__terc4_coding;
    } else if ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds = 0x133U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds 
            = ((0U == (3U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data)))
                ? 0x28eU : ((1U == (3U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data)))
                             ? 0x271U : ((2U == (3U 
                                                 & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data)))
                                          ? 0x163U : 0x2c3U)));
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain = 0U;
        __Vdly__tb_system__DOT__dut__DOT__underflow = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__underflow 
            = __Vdly__tb_system__DOT__dut__DOT__underflow;
        __Vdly__tb_system__DOT__dut__DOT__fail = 0U;
        vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__frame_toggle = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
        __Vdly__tb_system__DOT__dut__DOT__x = 0U;
        __Vdly__tb_system__DOT__dut__DOT__y = 0U;
        __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0 = 1U;
    } else {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
            = (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control) 
                << 1U) | (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain) 
                                >> 1U)));
        if (((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__active) 
               & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dv) 
                  >> 1U)) & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr) 
                                >> 2U))) & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_empty))) {
            __Vdly__tb_system__DOT__dut__DOT__underflow 
                = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__underflow);
        }
        vlSelfRef.tb_system__DOT__dut__DOT__underflow 
            = __Vdly__tb_system__DOT__dut__DOT__underflow;
        __Vdly__tb_system__DOT__dut__DOT__fail = ((2U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fail) 
                                                      << 1U)) 
                                                  | ((5U 
                                                      == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist__DOT__state)) 
                                                     & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__bist_passed))));
        if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
             & (0x1e0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))) {
            vlSelfRef.__Vdly__tb_system__DOT__dut__DOT__frame_toggle 
                = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__frame_toggle)));
        }
        if (vlSelfRef.tb_system__DOT__dut__DOT__sample_ce) {
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
                = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control)));
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 
                = vlSelfRef.tb_system__DOT__dut__DOT__aw
                [1U];
            __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2 = 1U;
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3 
                = vlSelfRef.tb_system__DOT__dut__DOT__aw
                [0U];
        }
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control;
        if ((0x31fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) {
            __Vdly__tb_system__DOT__dut__DOT__x = 0U;
            __Vdly__tb_system__DOT__dut__DOT__y = (0x3ffU 
                                                   & ((0x20cU 
                                                       == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))));
        } else {
            __Vdly__tb_system__DOT__dut__DOT__x = (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)));
            __Vdly__tb_system__DOT__dut__DOT__y = (0x3ffU 
                                                   & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y));
        }
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[1U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[0U] = 0U;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v2;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer[0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer__v3;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__command_count 
        = __Vdly__tb_system__DOT__dut__DOT__command_count;
    vlSelfRef.tb_system__DOT__dut__DOT__controls__DOT__second_count 
        = __Vdly__tb_system__DOT__dut__DOT__controls__DOT__second_count;
    vlSelfRef.tb_system__DOT__dut__DOT__beep_phase 
        = __Vdly__tb_system__DOT__dut__DOT__beep_phase;
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        __Vdly__tb_system__DOT__dut__DOT__dv = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter = 0U;
        __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets 
            = __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets;
        __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0 = 1U;
    } else {
        __Vdly__tb_system__DOT__dut__DOT__dv = ((2U 
                                                 & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__dv) 
                                                    << 1U)) 
                                                | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__display_valid));
        if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period) {
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)));
            if ((0x1cU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
                __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 
                    = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                    [3U];
                __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5 = 1U;
                __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6 
                    = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                    [2U];
                __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7 
                    = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                    [1U];
                __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8 
                    = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next
                    [0U];
                if ((0x18U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
                    __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 
                        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
                        [4U];
                    __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9 = 1U;
                }
            } else if ((0x1fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))) {
                __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10 = 1U;
            }
        } else {
            __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15 = 1U;
        }
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period) 
             & (0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)))) {
            if ((2U == (0xffU & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header))) {
                if ((0ULL != (0xffffffffffffULL & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                              [0U]))) {
                    __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets);
                }
            }
        }
        vlSelfRef.tb_system__DOT__dut__DOT__dbg_nonzero_packets 
            = __Vdly__tb_system__DOT__dut__DOT__dbg_nonzero_packets;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v5;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v6;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v7;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v8;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v9;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v10) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity__v15) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[4U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[3U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[2U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[1U] = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity[0U] = 0U;
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap = 0U;
    } else {
        if (((0x1fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)) 
             & (2U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type)))) {
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
                = ((0xbcU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                    ? 0U : (0xffU & ((IData)(4U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
        }
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter 
            = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data 
            = ((3U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data)) 
               | ((0xff0U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                             << 3U)) | (((0U != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                                         << 3U) | (4U 
                                                   & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data) 
                                                      << 2U)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data 
            = ((0xffcU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data)) 
               | (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__vsync) 
                   << 1U) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__hsync)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
            = vlSelfRef.tb_system__DOT__dut__DOT__rgb;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
            = (0xfffffU & ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter));
        if (vlSelfRef.tb_system__DOT__dut__DOT__sample_ce) {
            if ((0x2fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter))) {
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
                    = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap)));
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter = 0U;
                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter));
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter = 0U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter)));
            }
        }
    }
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__clk_audio_counter;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp_counter;
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(3U) 
                                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x43U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(3U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(2U) 
                                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x42U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(2U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2 
        = (0xffU & ((0xc0U <= (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))))
                     ? ((IData)(0x41U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     : ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))));
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0 
        = (0xffU & ((0xc0U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter))
                     ? ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter) 
                        - (IData)(0xc0U)) : (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__frame_counter)));
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet = 0U;
    } else if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used) {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 0U;
    }
    if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) 
         | ((0x27fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
            & (0x1dfU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))))) {
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0U;
    } else if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous) 
                & (0U == (0x1fU & ((IData)(0x12U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)))))) {
        if (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap) 
             ^ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 1U;
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
        } else if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 2U;
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [3U][1U];
            __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0 = 1U;
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet = 0xfU;
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used = 1U;
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [3U][0U];
            __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1 = 1U;
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [2U][1U];
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [2U][0U];
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [1U][1U];
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [1U][0U];
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [0U][1U];
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                [(1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)))]
                [0U][0U];
        } else if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent) {
            if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent) {
                if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent) {
                    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0U;
                } else {
                    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x83U;
                    __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent = 1U;
                }
            } else {
                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x82U;
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent = 1U;
            }
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type = 0x84U;
            __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent = 1U;
        }
    }
    __Vtableidx2 = (0xfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_system__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx2];
    __Vtableidx4 = (0xfU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data) 
                            >> 4U));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_system__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx4];
    __Vtableidx6 = (0xfU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__data_island_data) 
                            >> 8U));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__terc4_coding 
        = Vtb_system__ConstPool__TABLE_h0e17cbe9_0[__Vtableidx6];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_internal[1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__1__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_internal[2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__2__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_internal[0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT____Vcellout__tmds_gen__BRA__0__KET____DOT__tmds_channel__tmds;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data) 
                         + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                  >> 1U))) + (1U & 
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 2U))) 
                       + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U))) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                  >> 4U))) 
                     + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                              >> 5U))) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                >> 6U))) 
                   + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                            >> 7U))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 8U)) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                 >> 9U))) 
                        + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                 >> 0xaU))) + (1U & 
                                               (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                >> 0xbU))) 
                      + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                               >> 0xcU))) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                   >> 0xdU))) 
                    + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                             >> 0xeU))) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                 >> 0xfU))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D 
        = (0xfU & ((((((((1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x10U)) + (1U & 
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 0x11U))) 
                        + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                 >> 0x12U))) + (1U 
                                                & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                   >> 0x13U))) 
                      + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                               >> 0x14U))) + (1U & 
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                               >> 0x15U))) 
                    + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                             >> 0x16U))) + (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                                  >> 0x17U))));
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode = 2U;
        vlSelfRef.tb_system__DOT__dut__DOT__rgb = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data 
            = (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble) 
                << 4U) | ((((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_preamble) 
                            | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble)) 
                           << 2U) | (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__vsync) 
                                      << 1U) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__hsync))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__mode 
            = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_guard)
                ? 4U : ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period)
                         ? 3U : ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_guard)
                                  ? 2U : ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data_period)
                                           ? 1U : 0U))));
        vlSelfRef.tb_system__DOT__dut__DOT__rgb = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__fail))
                                                    ? 0xff0000U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__dv))
                                                     ? 
                                                    (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fifo_empty) 
                                                      | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__fr) 
                                                         >> 2U))
                                                      ? 0xff00ffU
                                                      : 
                                                     (((0xf80000U 
                                                        & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                           << 8U)) 
                                                       | (0x70000U 
                                                          & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                             << 3U))) 
                                                      | (((0xfc00U 
                                                           & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                              << 5U)) 
                                                          | (0x300U 
                                                             & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                                >> 1U))) 
                                                         | ((0xf8U 
                                                             & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                                << 3U)) 
                                                            | (7U 
                                                               & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__p565) 
                                                                  >> 2U))))))
                                                     : 
                                                    ((0U 
                                                      != (IData)(vlSelfRef.tb_system__DOT__dut__DOT__image_error))
                                                      ? 0xff8000U
                                                      : 0x40U)));
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sample_ce = 0U;
        vlSelfRef.tb_system__DOT__dut__DOT__sample = 0U;
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__sample_ce = 0U;
        if ((0x17cbcc0U <= vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__accumulator)) {
            __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator 
                = (0x1ffffffU & (vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__accumulator 
                                 - (IData)(0x17cbcc0U)));
            vlSelfRef.tb_system__DOT__dut__DOT__sample_ce = 1U;
            vlSelfRef.tb_system__DOT__dut__DOT__sample 
                = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone_muted)
                    ? 0U : ([&]() {
                        __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index 
                            = vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__phase;
                        __Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__Vfuncout 
                            = ((0x20U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                ? ((0x10U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                    ? 0U : ((8U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                             ? ((4U 
                                                 & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xfde9U
                                                   : 0xfbdcU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf9e1U
                                                   : 0xf800U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf643U
                                                   : 0xf4b0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf34fU
                                                   : 0xf226U)))
                                             : ((4U 
                                                 & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf139U
                                                   : 0xf08dU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf024U
                                                   : 0xf001U))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf024U
                                                   : 0xf08dU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                   ? 0xf139U
                                                   : 0xf226U)))))
                                : ((0x10U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                    ? ((8U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                        ? ((4U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xf34fU
                                                    : 0xf4b0U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xf643U
                                                    : 0xf801U))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xf9e1U
                                                    : 0xfbdcU)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xfde9U
                                                    : 0U)))
                                        : ((4U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x217U
                                                    : 0x424U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x61fU
                                                    : 0x7ffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x9bdU
                                                    : 0xb50U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xcb1U
                                                    : 0xddaU))))
                                    : ((8U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                        ? ((4U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xec7U
                                                    : 0xf73U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xfdcU
                                                    : 0xfffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xfdcU
                                                    : 0xf73U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xec7U
                                                    : 0xddaU)))
                                        : ((4U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0xcb1U
                                                    : 0xb50U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x9bdU
                                                    : 0x7ffU))
                                            : ((2U 
                                                & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x61fU
                                                    : 0x424U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__index))
                                                    ? 0x217U
                                                    : 0U))))));
                    }(), (IData)(__Vfunc_tb_system__DOT__dut__DOT__tone__DOT__sine__66__Vfuncout)));
            __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase 
                = ((0x2fU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__phase))
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__phase))));
        } else {
            __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator 
                = (0x1ffffffU & ((IData)(0xbb80U) + vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__accumulator));
        }
    }
    if (vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current = 0U;
        __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0U;
    } else {
        if (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 0U;
        }
        if ((1U & VL_REDXOR_2(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain))) {
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, 
                                             vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux
                                             [0U], 8U));
            __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
            __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
            __VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0 = 1U;
            __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, 
                                             vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux
                                             [1U], 8U));
            __VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
            __VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1 
                = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
            if ((3U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining))) {
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
                    = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current)));
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining = 0U;
                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_ready = 1U;
            } else {
                __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining)));
            }
        }
    }
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0 
        = (((QData)((IData)((0x180000U | (0xffU & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp)))) 
            << 0x18U) | (QData)((IData)(((0xff0000U 
                                          & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                                             << 8U)) 
                                         | (0xf00U 
                                            & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT__cycle_time_stamp 
                                               >> 8U))))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[3U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[2U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[1U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter[0U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__last_clk_audio_counter_wrap;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_info_frame_sent;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__auxiliary_video_information_info_frame_sent;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__source_product_description_info_frame_sent;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__clk_audio_counter_wrap;
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[3U][1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v0;
    }
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[3U][0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v1;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[2U][1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v2;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[2U][0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v3;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[1U][1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v4;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[1U][0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v5;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[0U][1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v6;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet[0U][0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet__v7;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__state 
        = __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__state;
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__count 
        = __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__count;
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__bitno 
        = __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__bitno;
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__shift 
        = __Vdly__tb_system__DOT__dut__DOT__command_rx__DOT__shift;
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data)))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 1U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 2U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 3U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 4U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 5U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 6U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 7U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 1U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 2U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 3U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 4U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 5U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 6U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 7U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                  >> 8U))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 9U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xaU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xbU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xcU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xdU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xeU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0xfU))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 8U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 9U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xaU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xbU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xcU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xdU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xeU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0xfU)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    if (((4U < (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
         | ((4U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1D)) 
            & (~ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                  >> 0x10U))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                        ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                           >> 0x11U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x12U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x13U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x14U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x15U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x16U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0 
            = (1U & (~ (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                         >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                   >> 0x17U))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__0) 
                  << 7U));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1feU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x10U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                     ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                        >> 0x11U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fdU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 1U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 1U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x12U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1fbU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 2U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 2U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x13U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1f7U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 3U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 3U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x14U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1efU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 4U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 4U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x15U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1dfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 5U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 5U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x16U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x1bfU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                  << 6U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1 
            = (1U & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                      >> 6U) ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data 
                                >> 0x17U)));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m 
            = ((0x7fU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
               | (0x100U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT____Vlvbound_hc3d8fcce__1) 
                            << 7U)));
    }
    if (((0U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
            == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)))) {
        if ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))) {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        } else {
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
                = (0x1fU & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                            - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)));
            vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
                = ((0x200U & ((~ ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m) 
                                  >> 8U)) << 9U)) | 
                   ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                    | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        }
    } else if (((VL_LTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                 & VL_GTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))) 
                | (VL_GTS_III(5, 0U, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc)) 
                   & VL_LTS_III(5, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07), (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07))))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x200U | ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)) 
                         | (0xffU & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m)))));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07)) 
                        + ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 2U : 0U)));
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_out 
            = (0x1ffU & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__acc_add 
            = (0x1fU & (((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N1q_m07) 
                         - (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__N0q_m07)) 
                        - ((0x100U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__q_m))
                            ? 0U : 2U)));
    }
    vlSelfRef.tb_system__DOT__dut__DOT__fail = __Vdly__tb_system__DOT__dut__DOT__fail;
    vlSelfRef.tb_system__DOT__dut__DOT__dv = __Vdly__tb_system__DOT__dut__DOT__dv;
    vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__accumulator 
        = __Vdly__tb_system__DOT__dut__DOT__tone__DOT__accumulator;
    vlSelfRef.tb_system__DOT__dut__DOT__tone__DOT__phase 
        = __Vdly__tb_system__DOT__dut__DOT__tone__DOT__phase;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[0U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[1U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[2U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub[3U] 
        = tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_clock_regeneration_packet__DOT____VdfgRegularize_hd7ad8ea1_0_0;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers[2U] 
        = (2U | (((0xff800000U & (((0U == (IData)(tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_6)) 
                                   << 0x17U) & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                << 0x14U))) 
                  | (0xffc00000U & (((0U == (IData)(tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_4)) 
                                     << 0x16U) & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                  << 0x14U)))) 
                 | ((0xffe00000U & (((0U == (IData)(tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_2)) 
                                     << 0x15U) & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                                  << 0x14U))) 
                    | ((((0U == (IData)(tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT____VdfgRegularize_h62abbef7_0_0)) 
                         & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet)) 
                        << 0x14U) | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet) 
                                     << 8U)))));
    __Vtemp_8[0U] = 0x2100004U;
    __Vtemp_8[1U] = 2U;
    __Vtemp_8[2U] = 0U;
    __Vtemp_8[3U] = 0U;
    __Vtemp_8[4U] = 0U;
    __Vtemp_8[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[0U] 
        = ((2U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [0U]) | (1U & (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [0U]) && (1U & (__Vtemp_8[
                                             (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [0U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U])))) 
                           ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [0U] ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [0U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [0U]
                                                          [0U]))))));
    __Vtemp_9[0U] = 0x2200004U;
    __Vtemp_9[1U] = 2U;
    __Vtemp_9[2U] = 0U;
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    __Vtemp_9[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[0U] 
        = ((1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [0U]) | (2U & ((((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [0U]) && (1U & (__Vtemp_9[
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [0U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [0U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [0U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [0U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [0U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_10[0U] = 0x2100004U;
    __Vtemp_10[1U] = 2U;
    __Vtemp_10[2U] = 0U;
    __Vtemp_10[3U] = 0U;
    __Vtemp_10[4U] = 0U;
    __Vtemp_10[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[1U] 
        = ((2U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [1U]) | (1U & (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [1U]) && (1U & (__Vtemp_10[
                                             (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [1U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U])))) 
                           ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [1U] ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [1U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [1U]
                                                          [0U]))))));
    __Vtemp_11[0U] = 0x2200004U;
    __Vtemp_11[1U] = 2U;
    __Vtemp_11[2U] = 0U;
    __Vtemp_11[3U] = 0U;
    __Vtemp_11[4U] = 0U;
    __Vtemp_11[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[1U] 
        = ((1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [1U]) | (2U & ((((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [1U]) && (1U & (__Vtemp_11[
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [1U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [1U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [1U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [1U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [1U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_12[0U] = 0x2100004U;
    __Vtemp_12[1U] = 2U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    __Vtemp_12[4U] = 0U;
    __Vtemp_12[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[2U] 
        = ((2U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [2U]) | (1U & (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [2U]) && (1U & (__Vtemp_12[
                                             (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [2U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U])))) 
                           ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [2U] ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [2U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [2U]
                                                          [0U]))))));
    __Vtemp_13[0U] = 0x2200004U;
    __Vtemp_13[1U] = 2U;
    __Vtemp_13[2U] = 0U;
    __Vtemp_13[3U] = 0U;
    __Vtemp_13[4U] = 0U;
    __Vtemp_13[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[2U] 
        = ((1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [2U]) | (2U & ((((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [2U]) && (1U & (__Vtemp_13[
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [2U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [2U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [2U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [2U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [2U]
                                                                [1U]) 
                                                   << 1U))))));
    __Vtemp_14[0U] = 0x2100004U;
    __Vtemp_14[1U] = 2U;
    __Vtemp_14[2U] = 0U;
    __Vtemp_14[3U] = 0U;
    __Vtemp_14[4U] = 0U;
    __Vtemp_14[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[3U] 
        = ((2U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [3U]) | (1U & (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                             [3U]) && (1U & (__Vtemp_14[
                                             (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                              [3U] 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U])))) 
                           ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                              [3U] ^ (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                      [3U] ^ VL_REDXOR_32(
                                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                          [3U]
                                                          [0U]))))));
    __Vtemp_15[0U] = 0x2200004U;
    __Vtemp_15[1U] = 2U;
    __Vtemp_15[2U] = 0U;
    __Vtemp_15[3U] = 0U;
    __Vtemp_15[4U] = 0U;
    __Vtemp_15[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit[3U] 
        = ((1U & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
            [3U]) | (2U & ((((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                              [3U]) && (1U & (__Vtemp_15[
                                              (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                               [3U] 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                  [3U])))) 
                            << 1U) ^ ((0xfffffffeU 
                                       & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                       [3U]) ^ ((0xfffffffeU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                                 [3U]) 
                                                ^ (
                                                   VL_REDXOR_32(
                                                                vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                                                [3U]
                                                                [1U]) 
                                                   << 1U))))));
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r2 
        = ((1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pr) 
                  >> 3U)) || (IData)(vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r1));
    __Vtableidx1 = (3U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__0__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_system__ConstPool__TABLE_h1d5d3245_0[__Vtableidx1];
    __Vtableidx3 = (3U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data) 
                          >> 2U));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__1__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_system__ConstPool__TABLE_h1d5d3245_0[__Vtableidx3];
    __Vtableidx5 = (3U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__control_data) 
                          >> 4U));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__tmds_gen__BRA__2__KET____DOT__tmds_channel__DOT__control_coding 
        = Vtb_system__ConstPool__TABLE_h1d5d3245_0[__Vtableidx5];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_preamble 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset))) 
           && ((0x284U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
               & (0x28cU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_preamble 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset))) 
           && (((0x316U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                & (0x31eU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) 
               & ((0x20cU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)) 
                  | (0x1dfU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset))) 
           && (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_guard 
        = ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset))) 
           && (((0x28cU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                & (0x28eU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) 
               | ((0x30eU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                  & (0x310U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__video_guard 
        = ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset) 
           || (((0x31eU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                & (0x320U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))) 
               & ((0x20cU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)) 
                  | (0x1dfU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__video_data_period 
        = ((~ (IData)(vlSelfRef.tb_system__DOT__dut__DOT__pixel_reset)) 
           & ((0x280U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
              & (0x1e0U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))));
    vlSelfRef.tb_system__DOT__dut__DOT__aw[0U] = (0xffffU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sample), 1U));
    vlSelfRef.tb_system__DOT__dut__DOT__aw[1U] = (0xffffU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.tb_system__DOT__dut__DOT__sample), 1U));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [3U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[1U][0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_clock_regeneration_packet__sub
        [0U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_used;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current 
        = __Vdly__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current;
    if (__VdlySet__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer[__VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0][__VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0][0U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v0;
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer[__VdlyDim2__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1][__VdlyDim1__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1][1U] 
            = __VdlyVal__tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer__v1;
    }
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type];
    __Vtemp_16[0U] = 0x2200004U;
    __Vtemp_16[1U] = 2U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    __Vtemp_16[4U] = 0U;
    __Vtemp_16[5U] = 0U;
    __Vtemp_17[0U] = 0x2100004U;
    __Vtemp_17[1U] = 2U;
    __Vtemp_17[2U] = 0U;
    __Vtemp_17[3U] = 0U;
    __Vtemp_17[4U] = 0U;
    __Vtemp_17[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[0U] 
        = ((1U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [0U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [0U]) && (1U 
                                                  & (__Vtemp_16[
                                                     (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [0U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [0U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [0U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [0U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [0U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [0U]) && 
                                         (1U & (__Vtemp_17[
                                                (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [0U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [0U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [0U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [0U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [0U][0U])))
            : 0ULL);
    __Vtemp_18[0U] = 0x2200004U;
    __Vtemp_18[1U] = 2U;
    __Vtemp_18[2U] = 0U;
    __Vtemp_18[3U] = 0U;
    __Vtemp_18[4U] = 0U;
    __Vtemp_18[5U] = 0U;
    __Vtemp_19[0U] = 0x2100004U;
    __Vtemp_19[1U] = 2U;
    __Vtemp_19[2U] = 0U;
    __Vtemp_19[3U] = 0U;
    __Vtemp_19[4U] = 0U;
    __Vtemp_19[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[1U] 
        = ((2U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [1U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [1U]) && (1U 
                                                  & (__Vtemp_18[
                                                     (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [1U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [1U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [1U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [1U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [1U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [1U]) && 
                                         (1U & (__Vtemp_19[
                                                (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [1U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [1U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [1U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [1U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [1U][0U])))
            : 0ULL);
    __Vtemp_20[0U] = 0x2200004U;
    __Vtemp_20[1U] = 2U;
    __Vtemp_20[2U] = 0U;
    __Vtemp_20[3U] = 0U;
    __Vtemp_20[4U] = 0U;
    __Vtemp_20[5U] = 0U;
    __Vtemp_21[0U] = 0x2100004U;
    __Vtemp_21[1U] = 2U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[2U] 
        = ((4U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [2U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [2U]) && (1U 
                                                  & (__Vtemp_20[
                                                     (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [2U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [2U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [2U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [2U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [2U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [2U]) && 
                                         (1U & (__Vtemp_21[
                                                (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [2U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [2U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [2U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [2U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [2U][0U])))
            : 0ULL);
    __Vtemp_22[0U] = 0x2200004U;
    __Vtemp_22[1U] = 2U;
    __Vtemp_22[2U] = 0U;
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_22[5U] = 0U;
    __Vtemp_23[0U] = 0x2100004U;
    __Vtemp_23[1U] = 2U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub[3U] 
        = ((8U & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_present_packet))
            ? (((QData)((IData)(((((0x80000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                                   [3U] 
                                                   << 0x1eU)) 
                                   | (((0xbfU >= vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                        [3U]) && (1U 
                                                  & (__Vtemp_22[
                                                     (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [3U] 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                      [3U])))) 
                                      << 0x1eU)) | 
                                  ((0x20000000U & (
                                                   vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                                   [3U] 
                                                   << 0x1cU)) 
                                   | (0x10000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                       [3U] << 0x1bU)))) 
                                 | (((0x8000000U & 
                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__parity_bit
                                       [3U] << 0x1bU)) 
                                     | (((0xbfU >= 
                                          vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                          [3U]) && 
                                         (1U & (__Vtemp_23[
                                                (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U] 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_packet__DOT__aligned_frame_counter
                                                 [3U])))) 
                                        << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__user_data_bit
                                           [3U] << 0x19U)) 
                                       | ((0x1000000U 
                                           & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellinp__audio_sample_packet__valid_bit
                                              [3U] 
                                              << 0x18U)) 
                                          | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                          [3U][1U])))))) 
                << 0x18U) | (QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_packet
                                            [3U][0U])))
            : 0ULL);
    vlSelfRef.tb_system__DOT__dut__DOT__y = __Vdly__tb_system__DOT__dut__DOT__y;
    vlSelfRef.tb_system__DOT__dut__DOT__x = __Vdly__tb_system__DOT__dut__DOT__x;
    if ((1U & VL_REDXOR_2(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_control_synchronizer_chain))) {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[1U] 
            = (0xffffU & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer
               [1U]);
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[0U] 
            = (0xffffU & vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer
               [0U]);
    } else {
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[1U] 
            = (0xffffU & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                          [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current]
                          [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining]
                          [1U] >> 8U));
        vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_transfer_mux[0U] 
            = (0xffffU & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__audio_sample_word_buffer
                          [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__sample_buffer_current]
                          [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__samples_remaining]
                          [0U] >> 8U));
    }
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__next_bch_bit 
        = ((0x17U >= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter)) 
           && (1U & (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__header 
                     >> (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [4U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[4U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__75__Vfuncout;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [3U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs[2U][0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT____Vcellout__audio_sample_packet__sub
        [0U];
    vlSelfRef.tb_system__DOT__dut__DOT__command_rx__DOT__r1 
        = ((1U & ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__pr) 
                  >> 3U)) || (IData)(vlSelfRef.tb_system__DOT__rx));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__hsync 
        = (1U & (~ ((0x290U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                    & (0x2f0U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)))));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__data_island_period_instantaneous 
        = ((0x28eU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
           & (0x30eU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__vsync 
        = (1U & ((0x1e9U == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))
                  ? (0x290U > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))
                  : ((0x1ebU == (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y))
                      ? (0x290U <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))
                      : (~ ((0x1eaU <= (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)) 
                            & (0x1ecU > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)))))));
    vlSelfRef.tb_system__DOT__dut__DOT__p565 = (0xffffU 
                                                & ((1U 
                                                    & (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x))
                                                    ? 
                                                   (vlSelfRef.tb_system__DOT__dut__DOT__fifo_out 
                                                    >> 0x10U)
                                                    : vlSelfRef.tb_system__DOT__dut__DOT__fifo_out));
    vlSelfRef.tb_system__DOT__dut__DOT__active = ((0x280U 
                                                   > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__x)) 
                                                  & (0x1e0U 
                                                     > (IData)(vlSelfRef.tb_system__DOT__dut__DOT__y)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[0U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [0U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[1U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [1U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[2U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [2U];
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub[3U] 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__subs
        [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]
        [3U];
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [3U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [3U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [2U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [2U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [1U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [1U]);
    tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
        = (((QData)((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [0U])) << 0x38U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
           [0U]);
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [0U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [0U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[0U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__67__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [1U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [1U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[1U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__69__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [2U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [2U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[2U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__71__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit 
        = ((0x37U >= ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                      << 1U)) && (1U & (IData)((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                [3U] 
                                                >> 
                                                ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                 << 1U)))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
        [3U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next[3U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__73__Vfuncout;
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_data 
        = ((((0x100U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                 >> (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                           << 1U)))) 
                        << 8U)) | ((0x80U & ((IData)(
                                                     (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                                                      >> 
                                                      (1U 
                                                       | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                          << 1U)))) 
                                             << 7U)) 
                                   | (0x40U & ((IData)(
                                                       (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                                        >> 
                                                        (1U 
                                                         | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                            << 1U)))) 
                                               << 6U)))) 
            | ((0x20U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                  >> (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                            << 1U)))) 
                         << 5U)) | (0x10U & ((IData)(
                                                     (tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_3 
                                                      >> 
                                                      ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                       << 1U))) 
                                             << 4U)))) 
           | (((8U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_2 
                               >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                   << 1U))) << 3U)) 
               | (4U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_1 
                                 >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 2U))) 
              | ((2U & ((IData)((tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT____VdfgRegularize_he7ff1125_0_0 
                                 >> ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                     << 1U))) << 1U)) 
                 | (1U & (((vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity
                            [4U] << 0x18U) | vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__headers
                           [vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_picker__DOT__packet_type]) 
                          >> (IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [0U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [0U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[0U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__68__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [1U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [1U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[1U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__70__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [2U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [2U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[2U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__72__Vfuncout;
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit 
        = ((0x37U >= (1U | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                            << 1U))) && (1U & (IData)(
                                                      (vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__sub
                                                       [3U] 
                                                       >> 
                                                       (1U 
                                                        | ((IData)(vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_pixel_counter) 
                                                           << 1U))))));
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc 
        = vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next
        [3U];
    __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout 
        = (0xffU & (VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc), 1U) 
                    ^ ((0U != ((1U & (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__ecc)) 
                               ^ (IData)(__Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__next_bch_bit)))
                        ? 0x83U : 0U)));
    vlSelfRef.tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__parity_next_next[3U] 
        = __Vfunc_tb_system__DOT__dut__DOT__tx__DOT__true_hdmi_output__DOT__packet_assembler__DOT__next_ecc__74__Vfuncout;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__7(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__7\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_system__DOT__card__DOT__put__86__b;
    __Vtask_tb_system__DOT__card__DOT__put__86__b = 0;
    CData/*7:0*/ __Vtask_tb_system__DOT__card__DOT__put__97__b;
    __Vtask_tb_system__DOT__card__DOT__put__97__b = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__l;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__l = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__i;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__i = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__c;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__c = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__entry;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__entry = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__pix;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__pix = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__x;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__x = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__y;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__y = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__channel;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__channel = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__root_lba;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__fat_end;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__fat_end = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__file_bytes;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__file_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__value;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__value = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__f16;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__f16 = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__mbr;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__mbr = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__rgba;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__rgba = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__98__top;
    __Vfunc_tb_system__DOT__card__DOT__disk__98__top = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__Vfuncout;
    __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__old;
    __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__old = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b;
    __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b = 0;
    SData/*15:0*/ __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c;
    __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c = 0;
    CData/*7:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__l;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__l = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__i;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__i = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__c;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__c = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__entry;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__entry = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__pix;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__pix = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__x;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__x = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__y;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__y = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__channel;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__channel = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__root_lba;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__root_lba = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__fat_end;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__fat_end = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__file_bytes;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__file_bytes = 0;
    IData/*31:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__value;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__value = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__f16;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__f16 = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__mbr;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__mbr = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__rgba;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__rgba = 0;
    CData/*0:0*/ __Vfunc_tb_system__DOT__card__DOT__disk__100__top;
    __Vfunc_tb_system__DOT__card__DOT__disk__100__top = 0;
    CData/*7:0*/ __Vtask_tb_system__DOT__card__DOT__put__101__b;
    __Vtask_tb_system__DOT__card__DOT__put__101__b = 0;
    CData/*7:0*/ __Vtask_tb_system__DOT__card__DOT__put__102__b;
    __Vtask_tb_system__DOT__card__DOT__put__102__b = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_system__DOT__cs)))) {
        vlSelfRef.tb_system__DOT__card__DOT__complete_byte 
            = ((0xfeU & ((IData)(vlSelfRef.tb_system__DOT__card__DOT__receive_byte) 
                         << 1U)) | (IData)(vlSelfRef.tb_system__DOT__mosi));
        vlSelfRef.tb_system__DOT__card__DOT__receive_byte 
            = vlSelfRef.tb_system__DOT__card__DOT__complete_byte;
        if ((7U == vlSelfRef.tb_system__DOT__card__DOT__bits)) {
            vlSelfRef.tb_system__DOT__card__DOT__bits = 0U;
            if (((0U != vlSelfRef.tb_system__DOT__card__DOT__cmdbytes) 
                 | (1U == (3U & ((IData)(vlSelfRef.tb_system__DOT__card__DOT__complete_byte) 
                                 >> 6U))))) {
                vlSelfRef.tb_system__DOT__card__DOT____Vlvbound_ha33a169e__0 
                    = vlSelfRef.tb_system__DOT__card__DOT__complete_byte;
                if ((5U >= (7U & vlSelfRef.tb_system__DOT__card__DOT__cmdbytes))) {
                    vlSelfRef.tb_system__DOT__card__DOT__command[(7U 
                                                                  & vlSelfRef.tb_system__DOT__card__DOT__cmdbytes)] 
                        = vlSelfRef.tb_system__DOT__card__DOT____Vlvbound_ha33a169e__0;
                }
                if ((5U == vlSelfRef.tb_system__DOT__card__DOT__cmdbytes)) {
                    vlSelfRef.tb_system__DOT__card__DOT__argument 
                        = (((vlSelfRef.tb_system__DOT__card__DOT__command
                             [1U] << 0x18U) | (vlSelfRef.tb_system__DOT__card__DOT__command
                                               [2U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_system__DOT__card__DOT__command
                               [3U] << 8U) | vlSelfRef.tb_system__DOT__card__DOT__command
                              [4U]));
                    if ((0U == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                [0U]))) {
                        __Vtemp_1[0U] = 0x6f6e7365U;
                        __Vtemp_1[1U] = 0x72657370U;
                        __Vtemp_1[2U] = 0x6e6fU;
                        if ((! VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_1)))) {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 1U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        }
                    } else if ((8U == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                       [0U]))) {
                        if (VL_TESTPLUSARGS_I(std::string{"v1"})) {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 5U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        } else {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 1U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 1U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0xaaU;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        }
                    } else if ((0x37U == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                          [0U]))) {
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 1U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                    } else if ((0x29U == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                          [0U]))) {
                        if (VL_UNLIKELY(((vlSelfRef.tb_system__DOT__card__DOT__argument 
                                          != (VL_TESTPLUSARGS_I(
                                                                std::string{"v1"})
                                               ? 0U
                                               : 0x40000000U))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: system_sd_model.sv:27: Assertion failed in %Ntb_system.card: ACMD41 HCS\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/system\\system_sd_model.sv", 27, "", false);
                        }
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                    } else if ((0x3aU == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                          [0U]))) {
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        __Vtask_tb_system__DOT__card__DOT__put__86__b 
                            = ((VL_TESTPLUSARGS_I(std::string{"sdsc"}) 
                                || VL_TESTPLUSARGS_I(
                                                     std::string{"v1"}))
                                ? 0x80U : 0xc0U);
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] 
                            = __Vtask_tb_system__DOT__card__DOT__put__86__b;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0xffU;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0x80U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                    } else if ((0x10U == (0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                          [0U]))) {
                        if (VL_UNLIKELY(((0x200U != vlSelfRef.tb_system__DOT__card__DOT__argument)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: system_sd_model.sv:29: Assertion failed in %Ntb_system.card: SDSC block length\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/system\\system_sd_model.sv", 29, "", false);
                        }
                        vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                       & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                        vlSelfRef.tb_system__DOT__card__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                    } else if (VL_LIKELY(((0x11U == 
                                           (0x3fU & 
                                            vlSelfRef.tb_system__DOT__card__DOT__command
                                            [0U]))))) {
                        __Vtemp_17[0U] = 0x72726f72U;
                        __Vtemp_17[1U] = 0x65616465U;
                        __Vtemp_17[2U] = 0x72U;
                        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_17))) {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 4U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        } else if (VL_TESTPLUSARGS_I(
                                                     std::string{"badtoken"})) {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0xbU;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        } else {
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0U;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0xffU;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] = 0xfeU;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            vlSelfRef.tb_system__DOT__card__DOT__crc = 0U;
                            vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x200U, vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i)) {
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__i 
                                    = vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                    = vlSelfRef.tb_system__DOT__card__DOT__argument;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__c = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__entry = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__pix = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__x = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__y = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__channel = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__value = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__f16 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"fat16"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__mbr 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"mbr"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__rgba 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"rgba"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__top 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"top"}));
                                if (__Vfunc_tb_system__DOT__card__DOT__disk__98__f16) {
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__root_lba = 5U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba = 0xeU;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__fat_end = 4U;
                                } else {
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__root_lba = 0x11U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba = 0x19U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__fat_end = 0x10U;
                                }
                                __Vfunc_tb_system__DOT__card__DOT__disk__98__file_bytes 
                                    = ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__rgba)
                                        ? 0x12c036U
                                        : 0xe1036U);
                                if (((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__mbr) 
                                     & (0U == __Vfunc_tb_system__DOT__card__DOT__disk__98__l))) {
                                    if ((0x1c2U == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xcU;
                                    } else if ((0x1c7U 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 8U;
                                    } else if ((0x1feU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x55U;
                                    } else if ((0x1ffU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xaaU;
                                    }
                                } else {
                                    if (__Vfunc_tb_system__DOT__card__DOT__disk__98__mbr) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                            = (__Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                               - (IData)(0x800U));
                                    }
                                    if ((0U == __Vfunc_tb_system__DOT__card__DOT__disk__98__l)) {
                                        if ((((((((
                                                   (0U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i) 
                                                   | (0xbU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                                  | (0xcU 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                                 | (0xdU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                                | (0xeU 
                                                   == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                               | (0x10U 
                                                  == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                              | (0x24U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                             | (0x2cU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                = (
                                                   (0U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                    ? 0xebU
                                                    : 
                                                   ((0xbU 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                      ? 2U
                                                      : 
                                                     ((0xdU 
                                                       == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                       ? 8U
                                                       : 
                                                      ((0xeU 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                        ? 1U
                                                        : 
                                                       ((0x10U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                         ? 1U
                                                         : 
                                                        ((0x24U 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)
                                                          ? 0x10U
                                                          : 2U)))))));
                                        } else if (
                                                   (0x1feU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x55U;
                                        } else if (
                                                   (0x1ffU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xaaU;
                                        }
                                        if (__Vfunc_tb_system__DOT__card__DOT__disk__98__f16) {
                                            if ((0x11U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x10U;
                                            } else if (
                                                       (0x16U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 4U;
                                            } else if (
                                                       (0x24U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                            } else if (
                                                       (0x2cU 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                            }
                                        }
                                        if ((VL_TESTPLUSARGS_I(
                                                               std::string{"bpb"}) 
                                             && (0xdU 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 3U;
                                        }
                                        __Vtemp_25[0U] = 0x74757265U;
                                        __Vtemp_25[1U] = 0x69676e61U;
                                        __Vtemp_25[2U] = 0x73U;
                                        if ((VL_TESTPLUSARGS_I(
                                                               VL_CVT_PACK_STR_NW(3, __Vtemp_25)) 
                                             && (0x1ffU 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                        }
                                    } else if ((VL_LTES_III(32, 1U, __Vfunc_tb_system__DOT__card__DOT__disk__98__l) 
                                                & VL_LTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__l, __Vfunc_tb_system__DOT__card__DOT__disk__98__fat_end))) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__entry 
                                            = (VL_MULS_III(32, 
                                                           (__Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                                            - (IData)(1U)), 
                                                           ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__f16)
                                                             ? 0x100U
                                                             : 0x80U)) 
                                               + VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__i, 
                                                             ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__f16)
                                                               ? 2U
                                                               : 4U)));
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__value 
                                            = ((2U 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__entry)
                                                ? 0xfffffffU
                                                : (
                                                   (VL_LTES_III(32, 3U, __Vfunc_tb_system__DOT__card__DOT__disk__98__entry) 
                                                    & __Vfunc_tb_system__DOT__card__DOT__disk__98__entry)
                                                    ? 
                                                   (VL_GTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__entry, 
                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__rgba)
                                                                  ? 0x25bU
                                                                  : 0x1c5U))
                                                     ? 
                                                    ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__f16)
                                                      ? 0xffffU
                                                      : 0xfffffffU)
                                                     : 
                                                    ((IData)(2U) 
                                                     + __Vfunc_tb_system__DOT__card__DOT__disk__98__entry))
                                                    : 0U));
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                            = (0xffU 
                                               & (__Vfunc_tb_system__DOT__card__DOT__disk__98__value 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), 
                                                                 VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__i, 
                                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__f16)
                                                                                 ? 2U
                                                                                 : 4U))))));
                                    } else if ((__Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__root_lba)) {
                                        if ((0U == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x41U;
                                        }
                                        if ((0xbU == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xfU;
                                        }
                                        if ((VL_LTES_III(32, 0x20U, __Vfunc_tb_system__DOT__card__DOT__disk__98__i) 
                                             & VL_GTES_III(32, 0x27U, __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                = (0xffU 
                                                   & (IData)(
                                                             VL_SHIFTR_QQI(64,64,32, 0x50494344454d4f20ULL, 
                                                                           VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__98__i 
                                                                                - (IData)(0x20U))))));
                                        }
                                        if ((VL_LTES_III(32, 0x3cU, __Vfunc_tb_system__DOT__card__DOT__disk__98__i) 
                                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                = (0xffU 
                                                   & VL_SHIFTR_III(8,32,32, __Vfunc_tb_system__DOT__card__DOT__disk__98__file_bytes, 
                                                                   VL_MULS_III(32, (IData)(8U), 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__98__i 
                                                                                - (IData)(0x3cU)))));
                                        }
                                        if ((0x28U 
                                             == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x42U;
                                        } else if (
                                                   (0x29U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x4dU;
                                        } else if (
                                                   (0x2aU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x50U;
                                        } else if (
                                                   (0x2bU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x20U;
                                        } else if (
                                                   (0x3aU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 3U;
                                        }
                                        if ((VL_TESTPLUSARGS_I(
                                                               std::string{"nobmp"}) 
                                             && (0x28U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x4aU;
                                        }
                                        __Vtemp_26[0U] = 0x66696c65U;
                                        __Vtemp_26[1U] = 0x686f7274U;
                                        __Vtemp_26[2U] = 0x73U;
                                        if (((VL_TESTPLUSARGS_I(
                                                                VL_CVT_PACK_STR_NW(3, __Vtemp_26)) 
                                              && VL_LTES_III(32, 0x3cU, __Vfunc_tb_system__DOT__card__DOT__disk__98__i)) 
                                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_system__DOT__card__DOT__disk__98__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                = (0xffU 
                                                   & VL_SHIFTR_III(8,32,32, 0x64U, 
                                                                   VL_MULS_III(32, (IData)(8U), 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__98__i 
                                                                                - (IData)(0x3cU)))));
                                        }
                                    } else if (VL_GTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__l, __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__98__c 
                                            = VL_DIVS_III(32, 
                                                          (__Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                                           - __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba), (IData)(8U));
                                        if ((0U == 
                                             VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__c, (IData)(2U)))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                = (
                                                   (VL_MULS_III(32, (IData)(0x1000U), 
                                                                VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__c, (IData)(2U))) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x200U), 
                                                                VL_MODDIVS_III(32, 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__98__l 
                                                                                - __Vfunc_tb_system__DOT__card__DOT__disk__98__file_lba), (IData)(8U)))) 
                                                   + __Vfunc_tb_system__DOT__card__DOT__disk__98__i);
                                            if (VL_GTS_III(32, 0x36U, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                if (
                                                    ((((((((0U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs) 
                                                           | (1U 
                                                              == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                          | (2U 
                                                             == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                         | (3U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                        | (4U 
                                                           == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                       | (0xaU 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                      | (0xeU 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                     | (0x12U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        ((0U 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                          ? 0x42U
                                                          : 
                                                         ((1U 
                                                           == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                           ? 0x4dU
                                                           : 
                                                          ((2U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                            ? 0x36U
                                                            : 
                                                           ((3U 
                                                             == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                             ? 0x10U
                                                             : 
                                                            ((4U 
                                                              == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                              ? 0xeU
                                                              : 
                                                             ((0xaU 
                                                               == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                               ? 0x36U
                                                               : 
                                                              ((0xeU 
                                                                == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)
                                                                ? 0x28U
                                                                : 0x80U)))))));
                                                } else if (
                                                           (0x13U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 2U;
                                                } else if (
                                                           (0x16U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xe0U;
                                                } else if (
                                                           (0x17U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 1U;
                                                } else if (
                                                           (0x1aU 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 1U;
                                                } else if (
                                                           (0x1cU 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x18U;
                                                }
                                                if (
                                                    (VL_LTES_III(32, 2U, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs) 
                                                     & VL_GTES_III(32, 5U, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, __Vfunc_tb_system__DOT__card__DOT__disk__98__file_bytes, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                                                - (IData)(2U)))));
                                                }
                                                if (
                                                    ((0x1cU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs) 
                                                     & (IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__rgba))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0x20U;
                                                }
                                                if (
                                                    (((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__top) 
                                                      & VL_LTES_III(32, 0x16U, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                     & VL_GTES_III(32, 0x19U, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, 0xfffffe20U, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                                                - (IData)(0x16U)))));
                                                }
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       std::string{"bad"}) 
                                                     && (0x1eU 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 1U;
                                                }
                                                __Vtemp_27[0U] = 0x696f6e73U;
                                                __Vtemp_27[1U] = 0x6d656e73U;
                                                __Vtemp_27[2U] = 0x6469U;
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       VL_CVT_PACK_STR_NW(3, __Vtemp_27)) 
                                                     && (0x12U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                                }
                                                if (
                                                    ((VL_TESTPLUSARGS_I(
                                                                        std::string{"offset"}) 
                                                      && VL_LTES_III(32, 0xaU, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs)) 
                                                     & VL_GTES_III(32, 0xdU, __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, 0xffffffffU, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                                                - (IData)(0xaU)))));
                                                }
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       std::string{"bmpmagic"}) 
                                                     && (0U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__98__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0U;
                                                }
                                            } else {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__pix 
                                                    = 
                                                    VL_DIVS_III(32, 
                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                                 - (IData)(0x36U)), 
                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__rgba)
                                                                  ? 4U
                                                                  : 3U));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__x 
                                                    = 
                                                    VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__pix, (IData)(0x280U));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__y 
                                                    = 
                                                    ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__top)
                                                      ? 
                                                     VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__pix, (IData)(0x280U))
                                                      : 
                                                     ((IData)(0x1dfU) 
                                                      - 
                                                      VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__98__pix, (IData)(0x280U))));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__98__channel 
                                                    = 
                                                    VL_MODDIVS_III(32, 
                                                                   (__Vfunc_tb_system__DOT__card__DOT__disk__98__ofs 
                                                                    - (IData)(0x36U)), 
                                                                   ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__98__rgba)
                                                                     ? 4U
                                                                     : 3U));
                                                if (
                                                    (0U 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__98__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & __Vfunc_tb_system__DOT__card__DOT__disk__98__x);
                                                } else if (
                                                           (1U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & __Vfunc_tb_system__DOT__card__DOT__disk__98__y);
                                                } else if (
                                                           (2U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (__Vfunc_tb_system__DOT__card__DOT__disk__98__x 
                                                            ^ __Vfunc_tb_system__DOT__card__DOT__disk__98__y));
                                                } else if (
                                                           (3U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__98__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout = 0xffU;
                                                }
                                            }
                                        }
                                    }
                                }
                                __Vtask_tb_system__DOT__card__DOT__put__97__b 
                                    = __Vfunc_tb_system__DOT__card__DOT__disk__98__Vfuncout;
                                vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                               & vlSelfRef.tb_system__DOT__card__DOT__tail)] 
                                    = __Vtask_tb_system__DOT__card__DOT__put__97__b;
                                vlSelfRef.tb_system__DOT__card__DOT__tail 
                                    = ((IData)(1U) 
                                       + vlSelfRef.tb_system__DOT__card__DOT__tail);
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__i 
                                    = vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                    = vlSelfRef.tb_system__DOT__card__DOT__argument;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__c = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__entry = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__pix = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__x = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__y = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__channel = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__value = 0;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__f16 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"fat16"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__mbr 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"mbr"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__rgba 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"rgba"}));
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__top 
                                    = (1U & VL_TESTPLUSARGS_I(
                                                              std::string{"top"}));
                                if (__Vfunc_tb_system__DOT__card__DOT__disk__100__f16) {
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__root_lba = 5U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba = 0xeU;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__fat_end = 4U;
                                } else {
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__root_lba = 0x11U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba = 0x19U;
                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__fat_end = 0x10U;
                                }
                                __Vfunc_tb_system__DOT__card__DOT__disk__100__file_bytes 
                                    = ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__rgba)
                                        ? 0x12c036U
                                        : 0xe1036U);
                                if (((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__mbr) 
                                     & (0U == __Vfunc_tb_system__DOT__card__DOT__disk__100__l))) {
                                    if ((0x1c2U == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xcU;
                                    } else if ((0x1c7U 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 8U;
                                    } else if ((0x1feU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x55U;
                                    } else if ((0x1ffU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xaaU;
                                    }
                                } else {
                                    if (__Vfunc_tb_system__DOT__card__DOT__disk__100__mbr) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                            = (__Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                               - (IData)(0x800U));
                                    }
                                    if ((0U == __Vfunc_tb_system__DOT__card__DOT__disk__100__l)) {
                                        if ((((((((
                                                   (0U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i) 
                                                   | (0xbU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                                  | (0xcU 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                                 | (0xdU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                                | (0xeU 
                                                   == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                               | (0x10U 
                                                  == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                              | (0x24U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                             | (0x2cU 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                = (
                                                   (0U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                    ? 0xebU
                                                    : 
                                                   ((0xbU 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                      ? 2U
                                                      : 
                                                     ((0xdU 
                                                       == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                       ? 8U
                                                       : 
                                                      ((0xeU 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                        ? 1U
                                                        : 
                                                       ((0x10U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                         ? 1U
                                                         : 
                                                        ((0x24U 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)
                                                          ? 0x10U
                                                          : 2U)))))));
                                        } else if (
                                                   (0x1feU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x55U;
                                        } else if (
                                                   (0x1ffU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xaaU;
                                        }
                                        if (__Vfunc_tb_system__DOT__card__DOT__disk__100__f16) {
                                            if ((0x11U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x10U;
                                            } else if (
                                                       (0x16U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 4U;
                                            } else if (
                                                       (0x24U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                            } else if (
                                                       (0x2cU 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                            }
                                        }
                                        if ((VL_TESTPLUSARGS_I(
                                                               std::string{"bpb"}) 
                                             && (0xdU 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 3U;
                                        }
                                        __Vtemp_30[0U] = 0x74757265U;
                                        __Vtemp_30[1U] = 0x69676e61U;
                                        __Vtemp_30[2U] = 0x73U;
                                        if ((VL_TESTPLUSARGS_I(
                                                               VL_CVT_PACK_STR_NW(3, __Vtemp_30)) 
                                             && (0x1ffU 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                        }
                                    } else if ((VL_LTES_III(32, 1U, __Vfunc_tb_system__DOT__card__DOT__disk__100__l) 
                                                & VL_LTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__l, __Vfunc_tb_system__DOT__card__DOT__disk__100__fat_end))) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__entry 
                                            = (VL_MULS_III(32, 
                                                           (__Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                                            - (IData)(1U)), 
                                                           ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__f16)
                                                             ? 0x100U
                                                             : 0x80U)) 
                                               + VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__i, 
                                                             ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__f16)
                                                               ? 2U
                                                               : 4U)));
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__value 
                                            = ((2U 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__entry)
                                                ? 0xfffffffU
                                                : (
                                                   (VL_LTES_III(32, 3U, __Vfunc_tb_system__DOT__card__DOT__disk__100__entry) 
                                                    & __Vfunc_tb_system__DOT__card__DOT__disk__100__entry)
                                                    ? 
                                                   (VL_GTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__entry, 
                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__rgba)
                                                                  ? 0x25bU
                                                                  : 0x1c5U))
                                                     ? 
                                                    ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__f16)
                                                      ? 0xffffU
                                                      : 0xfffffffU)
                                                     : 
                                                    ((IData)(2U) 
                                                     + __Vfunc_tb_system__DOT__card__DOT__disk__100__entry))
                                                    : 0U));
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                            = (0xffU 
                                               & (__Vfunc_tb_system__DOT__card__DOT__disk__100__value 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), 
                                                                 VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__i, 
                                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__f16)
                                                                                 ? 2U
                                                                                 : 4U))))));
                                    } else if ((__Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__root_lba)) {
                                        if ((0U == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x41U;
                                        }
                                        if ((0xbU == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xfU;
                                        }
                                        if ((VL_LTES_III(32, 0x20U, __Vfunc_tb_system__DOT__card__DOT__disk__100__i) 
                                             & VL_GTES_III(32, 0x27U, __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                = (0xffU 
                                                   & (IData)(
                                                             VL_SHIFTR_QQI(64,64,32, 0x50494344454d4f20ULL, 
                                                                           VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__100__i 
                                                                                - (IData)(0x20U))))));
                                        }
                                        if ((VL_LTES_III(32, 0x3cU, __Vfunc_tb_system__DOT__card__DOT__disk__100__i) 
                                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                = (0xffU 
                                                   & VL_SHIFTR_III(8,32,32, __Vfunc_tb_system__DOT__card__DOT__disk__100__file_bytes, 
                                                                   VL_MULS_III(32, (IData)(8U), 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__100__i 
                                                                                - (IData)(0x3cU)))));
                                        }
                                        if ((0x28U 
                                             == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x42U;
                                        } else if (
                                                   (0x29U 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x4dU;
                                        } else if (
                                                   (0x2aU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x50U;
                                        } else if (
                                                   (0x2bU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x20U;
                                        } else if (
                                                   (0x3aU 
                                                    == __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 3U;
                                        }
                                        if ((VL_TESTPLUSARGS_I(
                                                               std::string{"nobmp"}) 
                                             && (0x28U 
                                                 == __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x4aU;
                                        }
                                        __Vtemp_31[0U] = 0x66696c65U;
                                        __Vtemp_31[1U] = 0x686f7274U;
                                        __Vtemp_31[2U] = 0x73U;
                                        if (((VL_TESTPLUSARGS_I(
                                                                VL_CVT_PACK_STR_NW(3, __Vtemp_31)) 
                                              && VL_LTES_III(32, 0x3cU, __Vfunc_tb_system__DOT__card__DOT__disk__100__i)) 
                                             & VL_GTES_III(32, 0x3fU, __Vfunc_tb_system__DOT__card__DOT__disk__100__i))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                = (0xffU 
                                                   & VL_SHIFTR_III(8,32,32, 0x64U, 
                                                                   VL_MULS_III(32, (IData)(8U), 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__100__i 
                                                                                - (IData)(0x3cU)))));
                                        }
                                    } else if (VL_GTES_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__l, __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba)) {
                                        __Vfunc_tb_system__DOT__card__DOT__disk__100__c 
                                            = VL_DIVS_III(32, 
                                                          (__Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                                           - __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba), (IData)(8U));
                                        if ((0U == 
                                             VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__c, (IData)(2U)))) {
                                            __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                = (
                                                   (VL_MULS_III(32, (IData)(0x1000U), 
                                                                VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__c, (IData)(2U))) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(0x200U), 
                                                                VL_MODDIVS_III(32, 
                                                                               (__Vfunc_tb_system__DOT__card__DOT__disk__100__l 
                                                                                - __Vfunc_tb_system__DOT__card__DOT__disk__100__file_lba), (IData)(8U)))) 
                                                   + __Vfunc_tb_system__DOT__card__DOT__disk__100__i);
                                            if (VL_GTS_III(32, 0x36U, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                if (
                                                    ((((((((0U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs) 
                                                           | (1U 
                                                              == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                          | (2U 
                                                             == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                         | (3U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                        | (4U 
                                                           == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                       | (0xaU 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                      | (0xeU 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                     | (0x12U 
                                                        == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        ((0U 
                                                          == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                          ? 0x42U
                                                          : 
                                                         ((1U 
                                                           == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                           ? 0x4dU
                                                           : 
                                                          ((2U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                            ? 0x36U
                                                            : 
                                                           ((3U 
                                                             == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                             ? 0x10U
                                                             : 
                                                            ((4U 
                                                              == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                              ? 0xeU
                                                              : 
                                                             ((0xaU 
                                                               == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                               ? 0x36U
                                                               : 
                                                              ((0xeU 
                                                                == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)
                                                                ? 0x28U
                                                                : 0x80U)))))));
                                                } else if (
                                                           (0x13U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 2U;
                                                } else if (
                                                           (0x16U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xe0U;
                                                } else if (
                                                           (0x17U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 1U;
                                                } else if (
                                                           (0x1aU 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 1U;
                                                } else if (
                                                           (0x1cU 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x18U;
                                                }
                                                if (
                                                    (VL_LTES_III(32, 2U, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs) 
                                                     & VL_GTES_III(32, 5U, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, __Vfunc_tb_system__DOT__card__DOT__disk__100__file_bytes, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                                                - (IData)(2U)))));
                                                }
                                                if (
                                                    ((0x1cU 
                                                      == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs) 
                                                     & (IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__rgba))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0x20U;
                                                }
                                                if (
                                                    (((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__top) 
                                                      & VL_LTES_III(32, 0x16U, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                     & VL_GTES_III(32, 0x19U, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, 0xfffffe20U, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                                                - (IData)(0x16U)))));
                                                }
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       std::string{"bad"}) 
                                                     && (0x1eU 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 1U;
                                                }
                                                __Vtemp_32[0U] = 0x696f6e73U;
                                                __Vtemp_32[1U] = 0x6d656e73U;
                                                __Vtemp_32[2U] = 0x6469U;
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       VL_CVT_PACK_STR_NW(3, __Vtemp_32)) 
                                                     && (0x12U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                                }
                                                if (
                                                    ((VL_TESTPLUSARGS_I(
                                                                        std::string{"offset"}) 
                                                      && VL_LTES_III(32, 0xaU, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs)) 
                                                     & VL_GTES_III(32, 0xdU, __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & VL_SHIFTR_III(8,32,32, 0xffffffffU, 
                                                                         VL_MULS_III(32, (IData)(8U), 
                                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                                                - (IData)(0xaU)))));
                                                }
                                                if (
                                                    (VL_TESTPLUSARGS_I(
                                                                       std::string{"bmpmagic"}) 
                                                     && (0U 
                                                         == __Vfunc_tb_system__DOT__card__DOT__disk__100__ofs))) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0U;
                                                }
                                            } else {
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__pix 
                                                    = 
                                                    VL_DIVS_III(32, 
                                                                (__Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                                 - (IData)(0x36U)), 
                                                                ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__rgba)
                                                                  ? 4U
                                                                  : 3U));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__x 
                                                    = 
                                                    VL_MODDIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__pix, (IData)(0x280U));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__y 
                                                    = 
                                                    ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__top)
                                                      ? 
                                                     VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__pix, (IData)(0x280U))
                                                      : 
                                                     ((IData)(0x1dfU) 
                                                      - 
                                                      VL_DIVS_III(32, __Vfunc_tb_system__DOT__card__DOT__disk__100__pix, (IData)(0x280U))));
                                                __Vfunc_tb_system__DOT__card__DOT__disk__100__channel 
                                                    = 
                                                    VL_MODDIVS_III(32, 
                                                                   (__Vfunc_tb_system__DOT__card__DOT__disk__100__ofs 
                                                                    - (IData)(0x36U)), 
                                                                   ((IData)(__Vfunc_tb_system__DOT__card__DOT__disk__100__rgba)
                                                                     ? 4U
                                                                     : 3U));
                                                if (
                                                    (0U 
                                                     == __Vfunc_tb_system__DOT__card__DOT__disk__100__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & __Vfunc_tb_system__DOT__card__DOT__disk__100__x);
                                                } else if (
                                                           (1U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & __Vfunc_tb_system__DOT__card__DOT__disk__100__y);
                                                } else if (
                                                           (2U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout 
                                                        = 
                                                        (0xffU 
                                                         & (__Vfunc_tb_system__DOT__card__DOT__disk__100__x 
                                                            ^ __Vfunc_tb_system__DOT__card__DOT__disk__100__y));
                                                } else if (
                                                           (3U 
                                                            == __Vfunc_tb_system__DOT__card__DOT__disk__100__channel)) {
                                                    __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout = 0xffU;
                                                }
                                            }
                                        }
                                    }
                                }
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b 
                                    = __Vfunc_tb_system__DOT__card__DOT__disk__100__Vfuncout;
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__old 
                                    = vlSelfRef.tb_system__DOT__card__DOT__crc;
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__old;
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((IData)(
                                                           (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                             >> 0xfU) 
                                                            ^ 
                                                            ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                             >> 7U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 6U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 5U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 4U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 3U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 2U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b) 
                                                        >> 1U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c) 
                                                        >> 0xfU) 
                                                       ^ (IData)(__Vfunc_tb_system__DOT__card__DOT__crc_byte__99__b)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__Vfuncout 
                                    = __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__c;
                                vlSelfRef.tb_system__DOT__card__DOT__crc 
                                    = __Vfunc_tb_system__DOT__card__DOT__crc_byte__99__Vfuncout;
                                vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelfRef.tb_system__DOT__card__DOT__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_system__DOT__card__DOT__put__101__b 
                                = (0xffU & ((IData)(vlSelfRef.tb_system__DOT__card__DOT__crc) 
                                            >> 8U));
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] 
                                = __Vtask_tb_system__DOT__card__DOT__put__101__b;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                            __Vtask_tb_system__DOT__card__DOT__put__102__b 
                                = (0xffU & ((IData)(vlSelfRef.tb_system__DOT__card__DOT__crc) 
                                            ^ (VL_TESTPLUSARGS_I(
                                                                 std::string{"badcrc"})
                                                ? 1U
                                                : 0U)));
                            vlSelfRef.tb_system__DOT__card__DOT__response[(0x3ffU 
                                                                           & vlSelfRef.tb_system__DOT__card__DOT__tail)] 
                                = __Vtask_tb_system__DOT__card__DOT__put__102__b;
                            vlSelfRef.tb_system__DOT__card__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__tail);
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Fatal: system_sd_model.sv:40: Assertion failed in %Ntb_system.card: unknown command %0#\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     6,(0x3fU & vlSelfRef.tb_system__DOT__card__DOT__command
                                        [0U]));
                        VL_STOP_MT("sim/system\\system_sd_model.sv", 40, "", false);
                    }
                    vlSelfRef.tb_system__DOT__card__DOT__cmdbytes = 0U;
                } else {
                    vlSelfRef.tb_system__DOT__card__DOT__cmdbytes 
                        = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__cmdbytes);
                }
            }
        } else {
            vlSelfRef.tb_system__DOT__card__DOT__bits 
                = ((IData)(1U) + vlSelfRef.tb_system__DOT__card__DOT__bits);
        }
    }
}
