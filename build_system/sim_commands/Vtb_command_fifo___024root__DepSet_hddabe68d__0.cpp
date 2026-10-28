// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_command_fifo.h for the primary calling header

#include "Vtb_command_fifo__pch.h"
#include "Vtb_command_fifo__Syms.h"
#include "Vtb_command_fifo___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         15);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         15);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         15);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         15);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         15);
    vlSelfRef.tb_command_fifo__DOT__reset = 0U;
    tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x64U;
    while (VL_LTS_III(32, 0U, tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             17);
        vlSelfRef.tb_command_fifo__DOT__data = vlSelfRef.tb_command_fifo__DOT__sent;
        vlSelfRef.tb_command_fifo__DOT__push = 1U;
        vlSelfRef.tb_command_fifo__DOT__sent = ((IData)(1U) 
                                                + vlSelfRef.tb_command_fifo__DOT__sent);
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray) 
                          == ((6U & ((~ ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2) 
                                         >> 1U)) << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:17: Assertion failed in %Ntb_command_fifo.unnamedblk1_2.unnamedblk1_3: Unexpected full\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_command_fifo.sv", 17, "", false);
        }
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             17);
        vlSelfRef.tb_command_fifo__DOT__data = vlSelfRef.tb_command_fifo__DOT__sent;
        vlSelfRef.tb_command_fifo__DOT__push = 1U;
        vlSelfRef.tb_command_fifo__DOT__sent = ((IData)(1U) 
                                                + vlSelfRef.tb_command_fifo__DOT__sent);
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray) 
                          == ((6U & ((~ ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2) 
                                         >> 1U)) << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:17: Assertion failed in %Ntb_command_fifo.unnamedblk1_2.unnamedblk1_3: Unexpected full\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_command_fifo.sv", 17, "", false);
        }
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             17);
        vlSelfRef.tb_command_fifo__DOT__data = vlSelfRef.tb_command_fifo__DOT__sent;
        vlSelfRef.tb_command_fifo__DOT__push = 1U;
        vlSelfRef.tb_command_fifo__DOT__sent = ((IData)(1U) 
                                                + vlSelfRef.tb_command_fifo__DOT__sent);
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray) 
                          == ((6U & ((~ ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2) 
                                         >> 1U)) << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rg2))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:17: Assertion failed in %Ntb_command_fifo.unnamedblk1_2.unnamedblk1_3: Unexpected full\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/system\\tb_command_fifo.sv", 17, "", false);
        }
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        vlSelfRef.tb_command_fifo__DOT__push = 0U;
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_command_fifo.src)", 
                                                             "sim/system\tb_command_fifo.sv", 
                                                             18);
        tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_command_fifo__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h2a0bf16b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_command_fifo.src)", 
                                                         "sim/system\tb_command_fifo.sv", 
                                                         20);
    if (VL_UNLIKELY(((1U & ((0x12cU != vlSelfRef.tb_command_fifo__DOT__received) 
                            | (~ (IData)(vlSelfRef.tb_command_fifo__DOT__empty))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:21: Assertion failed in %Ntb_command_fifo: Queue not drained\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_command_fifo.sv", 21, "", false);
    }
    VL_WRITEF_NX("PASS command FIFO: 300 commands in consecutive bursts, shifted clocks, exact order and data\n",0);
    VL_FINISH_MT("sim/system\\tb_command_fifo.sv", 22, "");
}

VL_INLINE_OPT VlCoroutine Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__2(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x77359400ULL, 
                                         nullptr, "sim/system\tb_command_fifo.sv", 
                                         24);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:24: Assertion failed in %Ntb_command_fifo: Command queue timeout\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("sim/system\\tb_command_fifo.sv", 24, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_command_fifo___024root___dump_triggers__act(Vtb_command_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_command_fifo___024root___eval_triggers__act(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___eval_triggers__act\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_command_fifo__DOT__dst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__dst__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_command_fifo__DOT__src) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.tb_command_fifo__DOT__src)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__dst__0 
        = vlSelfRef.tb_command_fifo__DOT__dst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_command_fifo__DOT__src__0 
        = vlSelfRef.tb_command_fifo__DOT__src;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_command_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_command_fifo___024root___nba_sequent__TOP__1(Vtb_command_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_command_fifo___024root___nba_sequent__TOP__1\n"); );
    Vtb_command_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.tb_command_fifo__DOT__reset)) 
               & (~ (IData)(vlSelfRef.tb_command_fifo__DOT__empty))))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_command_fifo__DOT__result 
                          != vlSelfRef.tb_command_fifo__DOT__received)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_command_fifo.sv:11: Assertion failed in %Ntb_command_fifo: Command order/data lost: want %0d got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_command_fifo__DOT__received,
                         32,vlSelfRef.tb_command_fifo__DOT__result);
            VL_STOP_MT("sim/system\\tb_command_fifo.sv", 11, "", false);
        }
        vlSelfRef.tb_command_fifo__DOT__received = 
            ((IData)(1U) + vlSelfRef.tb_command_fifo__DOT__received);
    }
    if (vlSelfRef.tb_command_fifo__DOT__reset) {
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rp = 0U;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg2 = 0U;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rgray = 0U;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg1 = 0U;
    } else {
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rp 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg2 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg1;
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__rgray 
            = (7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn), 1U) 
                     ^ (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn)));
        vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg1 
            = vlSelfRef.tb_command_fifo__DOT__dut__DOT__wgray;
    }
    vlSelfRef.tb_command_fifo__DOT__result = vlSelfRef.tb_command_fifo__DOT__dut__DOT__mem
        [(3U & (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn))];
    vlSelfRef.tb_command_fifo__DOT__empty = ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rgray) 
                                             == (IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__wg2));
    vlSelfRef.tb_command_fifo__DOT__dut__DOT__rn = 
        (7U & ((IData)(vlSelfRef.tb_command_fifo__DOT__dut__DOT__rp) 
               + (1U & (~ (IData)(vlSelfRef.tb_command_fifo__DOT__empty)))));
}
