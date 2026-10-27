// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd.h for the primary calling header

#include "Vtb_sd__pch.h"
#include "Vtb_sd__Syms.h"
#include "Vtb_sd___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__0(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/p3\tb_sd.sv", 
                                         48);
    vlSelfRef.tb_sd__DOT__reset = 0U;
    while ((1U & (~ ((0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                     & (IData)(vlSelfRef.tb_sd__DOT__initialized))))) {
        co_await vlSelfRef.__VtrigSched_h01437713__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( ((6'hd == tb_sd.dut.state) & tb_sd.initialized))", 
                                                             "sim/p3\tb_sd.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VtrigSched_h6b5d801d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd.clk)", 
                                                         "sim/p3\tb_sd.sv", 
                                                         48);
    vlSelfRef.tb_sd__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h6b5d801d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_sd.clk)", 
                                                         "sim/p3\tb_sd.sv", 
                                                         48);
    vlSelfRef.tb_sd__DOT__start = 0U;
    while ((1U & (~ ((IData)(vlSelfRef.tb_sd__DOT__done) 
                     | (0U != (IData)(vlSelfRef.tb_sd__DOT__error)))))) {
        co_await vlSelfRef.__VtrigSched_h54b24ea5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (tb_sd.done | (8'h0 != tb_sd.error)))", 
                                                             "sim/p3\tb_sd.sv", 
                                                             48);
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                      | (0x200U != vlSelfRef.tb_sd__DOT__received))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:48: Assertion failed in %Ntb_sd: SD failure code=%0# bytes=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_sd__DOT__error),
                     32,vlSelfRef.tb_sd__DOT__received);
        VL_STOP_MT("sim/p3\\tb_sd.sv", 48, "", false);
    }
    VL_WRITEF_NX("PASS SD SPI initialization CMD0/8/55/41/58, SDHC addressing, CMD17 512 indexed bytes\n",0);
    VL_FINISH_MT("sim/p3\\tb_sd.sv", 48, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__1(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x6fc23ac00ULL, 
                                         nullptr, "sim/p3\tb_sd.sv", 
                                         49);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:49: Assertion failed in %Ntb_sd: SD timeout state=%0# error=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,(IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state),
                 8,vlSelfRef.tb_sd__DOT__error);
    VL_STOP_MT("sim/p3\\tb_sd.sv", 49, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__act(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd___024root___eval_triggers__act(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_triggers__act\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_ha5752fe1__0;
    __Vtrigprevexpr_ha5752fe1__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hd106087b__0;
    __Vtrigprevexpr_hd106087b__0 = 0;
    // Body
    __Vtrigprevexpr_ha5752fe1__0 = ((0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                                    & (IData)(vlSelfRef.tb_sd__DOT__initialized));
    __Vtrigprevexpr_hd106087b__0 = ((IData)(vlSelfRef.tb_sd__DOT__done) 
                                    | (0U != (IData)(vlSelfRef.tb_sd__DOT__error)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_sd__DOT__sck) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__sck__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_sd__DOT__cs) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__cs__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_sd__DOT__sck)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__sck__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_sd__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_ha5752fe1__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_ha5752fe1__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((~ (IData)(vlSelfRef.tb_sd__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(__Vtrigprevexpr_hd106087b__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hd106087b__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__sck__0 
        = vlSelfRef.tb_sd__DOT__sck;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__cs__0 
        = vlSelfRef.tb_sd__DOT__cs;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_sd__DOT__clk__0 
        = vlSelfRef.tb_sd__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_ha5752fe1__1 = __Vtrigprevexpr_ha5752fe1__0;
    vlSelfRef.__Vtrigprevexpr_hd106087b__1 = __Vtrigprevexpr_hd106087b__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sd___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__0(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__0\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation 
        = vlSelfRef.tb_sd__DOT__dut__DOT__continuation;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left 
        = vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__power_count 
        = vlSelfRef.tb_sd__DOT__dut__DOT__power_count;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra 
        = vlSelfRef.tb_sd__DOT__dut__DOT__response_extra;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count 
        = vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__init_attempts 
        = vlSelfRef.tb_sd__DOT__dut__DOT__init_attempts;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response 
        = vlSelfRef.tb_sd__DOT__dut__DOT__response;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count 
        = vlSelfRef.tb_sd__DOT__dut__DOT__extra_count;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__high_capacity 
        = vlSelfRef.tb_sd__DOT__dut__DOT__high_capacity;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__v2 = vlSelfRef.tb_sd__DOT__dut__DOT__v2;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__reading 
        = vlSelfRef.tb_sd__DOT__dut__DOT__reading;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__crc_left 
        = vlSelfRef.tb_sd__DOT__dut__DOT__crc_left;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_index 
        = vlSelfRef.tb_sd__DOT__dut__DOT__data_index;
    vlSelfRef.__Vdly__tb_sd__DOT__sectors = vlSelfRef.tb_sd__DOT__sectors;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = vlSelfRef.tb_sd__DOT__dut__DOT__frame;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = vlSelfRef.tb_sd__DOT__dut__DOT__state;
    vlSelfRef.__Vdly__tb_sd__DOT__sck = vlSelfRef.tb_sd__DOT__sck;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi_done 
        = vlSelfRef.tb_sd__DOT__dut__DOT__spi_done;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__rx = vlSelfRef.tb_sd__DOT__dut__DOT__rx;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count 
        = vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__count;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift 
        = vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__shift;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno 
        = vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__bitno;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__busy = vlSelfRef.tb_sd__DOT__dut__DOT__busy;
    if (vlSelfRef.tb_sd__DOT__bv) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_sd__DOT__bi) 
                           != vlSelfRef.tb_sd__DOT__received) 
                          | ((IData)(vlSelfRef.tb_sd__DOT__bd) 
                             != (0xffU & (0xa5U ^ vlSelfRef.tb_sd__DOT__received))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:45: Assertion failed in %Ntb_sd: sector byte idx=%0# expectedidx=%0d data=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),9,(IData)(vlSelfRef.tb_sd__DOT__bi),
                         32,vlSelfRef.tb_sd__DOT__received,
                         8,(IData)(vlSelfRef.tb_sd__DOT__bd));
            VL_STOP_MT("sim/p3\\tb_sd.sv", 45, "", false);
        }
        vlSelfRef.tb_sd__DOT__received = ((IData)(1U) 
                                          + vlSelfRef.tb_sd__DOT__received);
    }
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__2(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__2\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_sd__DOT__put__16__b;
    __Vtask_tb_sd__DOT__put__16__b = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__cs)))) {
        vlSelfRef.tb_sd__DOT__complete_byte = ((0xfeU 
                                                & ((IData)(vlSelfRef.tb_sd__DOT__receive_byte) 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.tb_sd__DOT__mosi));
        vlSelfRef.tb_sd__DOT__receive_byte = vlSelfRef.tb_sd__DOT__complete_byte;
        if ((7U == vlSelfRef.tb_sd__DOT__bits)) {
            vlSelfRef.tb_sd__DOT__bits = 0U;
            if (((0U != vlSelfRef.tb_sd__DOT__cmdbytes) 
                 | (1U == (3U & ((IData)(vlSelfRef.tb_sd__DOT__complete_byte) 
                                 >> 6U))))) {
                vlSelfRef.tb_sd__DOT____Vlvbound_ha33a169e__0 
                    = vlSelfRef.tb_sd__DOT__complete_byte;
                if ((5U >= (7U & vlSelfRef.tb_sd__DOT__cmdbytes))) {
                    vlSelfRef.tb_sd__DOT__command[(7U 
                                                   & vlSelfRef.tb_sd__DOT__cmdbytes)] 
                        = vlSelfRef.tb_sd__DOT____Vlvbound_ha33a169e__0;
                }
                if ((5U == vlSelfRef.tb_sd__DOT__cmdbytes)) {
                    vlSelfRef.tb_sd__DOT__argument 
                        = (((vlSelfRef.tb_sd__DOT__command
                             [1U] << 0x18U) | (vlSelfRef.tb_sd__DOT__command
                                               [2U] 
                                               << 0x10U)) 
                           | ((vlSelfRef.tb_sd__DOT__command
                               [3U] << 8U) | vlSelfRef.tb_sd__DOT__command
                              [4U]));
                    if ((0U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                [0U]))) {
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if ((8U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                       [0U]))) {
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xaaU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if ((0x37U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if ((0x29U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        if (VL_UNLIKELY(((0x40000000U 
                                          != vlSelfRef.tb_sd__DOT__argument)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:24: Assertion failed in %Ntb_sd: ACMD41 HCS\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p3\\tb_sd.sv", 24, "", false);
                        }
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if ((0x3aU == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xc0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xffU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0x80U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if (VL_LIKELY(((0x11U == 
                                           (0x3fU & 
                                            vlSelfRef.tb_sd__DOT__command
                                            [0U]))))) {
                        if (VL_UNLIKELY(((3U != vlSelfRef.tb_sd__DOT__argument)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:27: Assertion failed in %Ntb_sd: SDHC LBA\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p3\\tb_sd.sv", 27, "", false);
                        }
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xffU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xfeU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__unnamedblk1__DOT__i = 0U;
                        while (VL_GTS_III(32, 0x200U, vlSelfRef.tb_sd__DOT__unnamedblk1__DOT__i)) {
                            __Vtask_tb_sd__DOT__put__16__b 
                                = (0xffU & (0xa5U ^ vlSelfRef.tb_sd__DOT__unnamedblk1__DOT__i));
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] 
                                = __Vtask_tb_sd__DOT__put__16__b;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                            vlSelfRef.tb_sd__DOT__unnamedblk1__DOT__i 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__unnamedblk1__DOT__i);
                        }
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xffU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0xffU;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:31: Assertion failed in %Ntb_sd: unknown command %0#\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     6,(0x3fU & vlSelfRef.tb_sd__DOT__command
                                        [0U]));
                        VL_STOP_MT("sim/p3\\tb_sd.sv", 31, "", false);
                    }
                    vlSelfRef.tb_sd__DOT__cmdbytes = 0U;
                } else {
                    vlSelfRef.tb_sd__DOT__cmdbytes 
                        = ((IData)(1U) + vlSelfRef.tb_sd__DOT__cmdbytes);
                }
            }
        } else {
            vlSelfRef.tb_sd__DOT__bits = ((IData)(1U) 
                                          + vlSelfRef.tb_sd__DOT__bits);
        }
    }
}
