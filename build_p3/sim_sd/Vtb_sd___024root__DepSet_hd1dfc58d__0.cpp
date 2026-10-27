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
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "sim/p3\tb_sd.sv", 
                                         60);
    vlSelfRef.tb_sd__DOT__reset = 0U;
    while ((1U & (~ (((0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                      & (IData)(vlSelfRef.tb_sd__DOT__initialized)) 
                     | (0U != (IData)(vlSelfRef.tb_sd__DOT__error)))))) {
        co_await vlSelfRef.__VtrigSched_hb702cdeb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (((6'hd == tb_sd.dut.state) & tb_sd.initialized) | (8'h0 != tb_sd.error)))", 
                                                             "sim/p3\tb_sd.sv", 
                                                             61);
    }
    if ((0U == (IData)(vlSelfRef.tb_sd__DOT__error))) {
        co_await vlSelfRef.__VtrigSched_h6b5d801d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd.clk)", 
                                                             "sim/p3\tb_sd.sv", 
                                                             62);
        vlSelfRef.tb_sd__DOT__start = 1U;
        co_await vlSelfRef.__VtrigSched_h6b5d801d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_sd.clk)", 
                                                             "sim/p3\tb_sd.sv", 
                                                             62);
        vlSelfRef.tb_sd__DOT__start = 0U;
        while ((1U & (~ ((IData)(vlSelfRef.tb_sd__DOT__done) 
                         | (0U != (IData)(vlSelfRef.tb_sd__DOT__error)))))) {
            co_await vlSelfRef.__VtrigSched_h54b24ea5__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (tb_sd.done | (8'h0 != tb_sd.error)))", 
                                                                 "sim/p3\tb_sd.sv", 
                                                                 62);
        }
    }
    __Vtemp_1[0U] = 0x6f6e7365U;
    __Vtemp_1[1U] = 0x72657370U;
    __Vtemp_1[2U] = 0x6e6fU;
    if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_1))) {
        if (VL_UNLIKELY(((((7U != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                           | (IData)(vlSelfRef.tb_sd__DOT__done)) 
                          | (0U != vlSelfRef.tb_sd__DOT__sectors))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:63: Assertion failed in %Ntb_sd: response timeout not detected\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/p3\\tb_sd.sv", 63, "", false);
        }
    } else {
        __Vtemp_2[0U] = 0x72726f72U;
        __Vtemp_2[1U] = 0x65616465U;
        __Vtemp_2[2U] = 0x72U;
        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_2))) {
            if (VL_UNLIKELY(((((8U != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                               | (IData)(vlSelfRef.tb_sd__DOT__done)) 
                              | (0U != vlSelfRef.tb_sd__DOT__sectors))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:64: Assertion failed in %Ntb_sd: R1 read error not detected\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/p3\\tb_sd.sv", 64, "", false);
            }
        } else if (VL_TESTPLUSARGS_I(std::string{"badtoken"})) {
            if (VL_UNLIKELY(((((9U != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                               | (IData)(vlSelfRef.tb_sd__DOT__done)) 
                              | (0U != vlSelfRef.tb_sd__DOT__sectors))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:65: Assertion failed in %Ntb_sd: bad data token not detected\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/p3\\tb_sd.sv", 65, "", false);
            }
        } else if (VL_TESTPLUSARGS_I(std::string{"badcrc"})) {
            if (VL_UNLIKELY((((((0xaU != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                                | (IData)(vlSelfRef.tb_sd__DOT__done)) 
                               | (0U != vlSelfRef.tb_sd__DOT__sectors)) 
                              | (0x200U != vlSelfRef.tb_sd__DOT__received))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:66: Assertion failed in %Ntb_sd: corrupt sector CRC not rejected\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/p3\\tb_sd.sv", 66, "", false);
            }
        } else if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.tb_sd__DOT__error)) 
                                  | (0x200U != vlSelfRef.tb_sd__DOT__received)) 
                                 | (1U != vlSelfRef.tb_sd__DOT__sectors))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:67: Assertion failed in %Ntb_sd: SD failure code=%0# bytes=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.tb_sd__DOT__error),
                         32,vlSelfRef.tb_sd__DOT__received);
            VL_STOP_MT("sim/p3\\tb_sd.sv", 67, "", false);
        }
    }
    VL_WRITEF_NX("PASS SD initialization, address mode, sector data/CRC or requested error case; code=%0# bytes=%0d\n",0,
                 8,vlSelfRef.tb_sd__DOT__error,32,vlSelfRef.tb_sd__DOT__received);
    VL_FINISH_MT("sim/p3\\tb_sd.sv", 68, "");
}

VL_INLINE_OPT VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__1(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x6fc23ac00ULL, 
                                         nullptr, "sim/p3\tb_sd.sv", 
                                         70);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:70: Assertion failed in %Ntb_sd: SD timeout state=%0# error=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 8,(IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state),
                 8,vlSelfRef.tb_sd__DOT__error);
    VL_STOP_MT("sim/p3\\tb_sd.sv", 70, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__act(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd___024root___eval_triggers__act(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_triggers__act\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h2f3589c9__0;
    __Vtrigprevexpr_h2f3589c9__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hd106087b__0;
    __Vtrigprevexpr_hd106087b__0 = 0;
    // Body
    __Vtrigprevexpr_h2f3589c9__0 = (((0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                                     & (IData)(vlSelfRef.tb_sd__DOT__initialized)) 
                                    | (0U != (IData)(vlSelfRef.tb_sd__DOT__error)));
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
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(__Vtrigprevexpr_h2f3589c9__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h2f3589c9__1)));
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
    vlSelfRef.__Vtrigprevexpr_h2f3589c9__1 = __Vtrigprevexpr_h2f3589c9__0;
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
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_crc 
        = vlSelfRef.tb_sd__DOT__dut__DOT__data_crc;
    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__received_crc_high 
        = vlSelfRef.tb_sd__DOT__dut__DOT__received_crc_high;
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
            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:56: Assertion failed in %Ntb_sd: sector byte idx=%0# expectedidx=%0d data=%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),9,(IData)(vlSelfRef.tb_sd__DOT__bi),
                         32,vlSelfRef.tb_sd__DOT__received,
                         8,(IData)(vlSelfRef.tb_sd__DOT__bd));
            VL_STOP_MT("sim/p3\\tb_sd.sv", 56, "", false);
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
    CData/*7:0*/ __Vtask_tb_sd__DOT__put__10__b;
    __Vtask_tb_sd__DOT__put__10__b = 0;
    CData/*7:0*/ __Vtask_tb_sd__DOT__put__21__b;
    __Vtask_tb_sd__DOT__put__21__b = 0;
    SData/*15:0*/ __Vfunc_tb_sd__DOT__crc_byte__22__Vfuncout;
    __Vfunc_tb_sd__DOT__crc_byte__22__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_sd__DOT__crc_byte__22__old;
    __Vfunc_tb_sd__DOT__crc_byte__22__old = 0;
    CData/*7:0*/ __Vfunc_tb_sd__DOT__crc_byte__22__b;
    __Vfunc_tb_sd__DOT__crc_byte__22__b = 0;
    SData/*15:0*/ __Vfunc_tb_sd__DOT__crc_byte__22__c;
    __Vfunc_tb_sd__DOT__crc_byte__22__c = 0;
    CData/*7:0*/ __Vtask_tb_sd__DOT__put__23__b;
    __Vtask_tb_sd__DOT__put__23__b = 0;
    CData/*7:0*/ __Vtask_tb_sd__DOT__put__24__b;
    __Vtask_tb_sd__DOT__put__24__b = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_17;
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
                        __Vtemp_1[0U] = 0x6f6e7365U;
                        __Vtemp_1[1U] = 0x72657370U;
                        __Vtemp_1[2U] = 0x6e6fU;
                        if ((! VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_1)))) {
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        }
                    } else if ((8U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                       [0U]))) {
                        if (VL_TESTPLUSARGS_I(std::string{"v1"})) {
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] = 5U;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        } else {
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
                        }
                    } else if ((0x37U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 1U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if ((0x29U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        if (VL_UNLIKELY(((vlSelfRef.tb_sd__DOT__argument 
                                          != (VL_TESTPLUSARGS_I(
                                                                std::string{"v1"})
                                               ? 0U
                                               : 0x40000000U))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:29: Assertion failed in %Ntb_sd: ACMD41 HCS\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p3\\tb_sd.sv", 29, "", false);
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
                        __Vtask_tb_sd__DOT__put__10__b 
                            = ((VL_TESTPLUSARGS_I(std::string{"sdsc"}) 
                                || VL_TESTPLUSARGS_I(
                                                     std::string{"v1"}))
                                ? 0x80U : 0xc0U);
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] 
                            = __Vtask_tb_sd__DOT__put__10__b;
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
                    } else if ((0x10U == (0x3fU & vlSelfRef.tb_sd__DOT__command
                                          [0U]))) {
                        if (VL_UNLIKELY(((0x200U != vlSelfRef.tb_sd__DOT__argument)))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:31: Assertion failed in %Ntb_sd: SDSC block length\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p3\\tb_sd.sv", 31, "", false);
                        }
                        vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                        & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                        vlSelfRef.tb_sd__DOT__tail 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                    } else if (VL_LIKELY(((0x11U == 
                                           (0x3fU & 
                                            vlSelfRef.tb_sd__DOT__command
                                            [0U]))))) {
                        if (VL_UNLIKELY(((vlSelfRef.tb_sd__DOT__argument 
                                          != ((VL_TESTPLUSARGS_I(
                                                                 std::string{"sdsc"}) 
                                               || VL_TESTPLUSARGS_I(
                                                                    std::string{"v1"}))
                                               ? 0x600U
                                               : 3U))))) {
                            VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:33: Assertion failed in %Ntb_sd: SD LBA/byte address\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,vlSymsp->name());
                            VL_STOP_MT("sim/p3\\tb_sd.sv", 33, "", false);
                        }
                        __Vtemp_17[0U] = 0x72726f72U;
                        __Vtemp_17[1U] = 0x65616465U;
                        __Vtemp_17[2U] = 0x72U;
                        if (VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_17))) {
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] = 4U;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        } else if (VL_TESTPLUSARGS_I(
                                                     std::string{"badtoken"})) {
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] = 0U;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] = 0xbU;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        } else {
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
                            vlSelfRef.tb_sd__DOT__crc = 0U;
                            vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i = 0U;
                            while (VL_GTS_III(32, 0x200U, vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i)) {
                                __Vtask_tb_sd__DOT__put__21__b 
                                    = (0xffU & (0xa5U 
                                                ^ vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i));
                                vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                                & vlSelfRef.tb_sd__DOT__tail)] 
                                    = __Vtask_tb_sd__DOT__put__21__b;
                                vlSelfRef.tb_sd__DOT__tail 
                                    = ((IData)(1U) 
                                       + vlSelfRef.tb_sd__DOT__tail);
                                __Vfunc_tb_sd__DOT__crc_byte__22__b 
                                    = (0xffU & (0xa5U 
                                                ^ vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i));
                                __Vfunc_tb_sd__DOT__crc_byte__22__old 
                                    = vlSelfRef.tb_sd__DOT__crc;
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = __Vfunc_tb_sd__DOT__crc_byte__22__old;
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((IData)(
                                                           (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                             >> 0xfU) 
                                                            ^ 
                                                            ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                             >> 7U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 6U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 5U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 4U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 3U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 2U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ 
                                                       ((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b) 
                                                        >> 1U)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__c 
                                    = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c), 1U) 
                                                  ^ 
                                                  ((1U 
                                                    & (((IData)(__Vfunc_tb_sd__DOT__crc_byte__22__c) 
                                                        >> 0xfU) 
                                                       ^ (IData)(__Vfunc_tb_sd__DOT__crc_byte__22__b)))
                                                    ? 0x1021U
                                                    : 0U)));
                                __Vfunc_tb_sd__DOT__crc_byte__22__Vfuncout 
                                    = __Vfunc_tb_sd__DOT__crc_byte__22__c;
                                vlSelfRef.tb_sd__DOT__crc 
                                    = __Vfunc_tb_sd__DOT__crc_byte__22__Vfuncout;
                                vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelfRef.tb_sd__DOT__unnamedblk2__DOT__i);
                            }
                            __Vtask_tb_sd__DOT__put__23__b 
                                = (0xffU & ((IData)(vlSelfRef.tb_sd__DOT__crc) 
                                            >> 8U));
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] 
                                = __Vtask_tb_sd__DOT__put__23__b;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                            __Vtask_tb_sd__DOT__put__24__b 
                                = (0xffU & ((IData)(vlSelfRef.tb_sd__DOT__crc) 
                                            ^ (VL_TESTPLUSARGS_I(
                                                                 std::string{"badcrc"})
                                                ? 1U
                                                : 0U)));
                            vlSelfRef.tb_sd__DOT__response[(0x3ffU 
                                                            & vlSelfRef.tb_sd__DOT__tail)] 
                                = __Vtask_tb_sd__DOT__put__24__b;
                            vlSelfRef.tb_sd__DOT__tail 
                                = ((IData)(1U) + vlSelfRef.tb_sd__DOT__tail);
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Fatal: tb_sd.sv:42: Assertion failed in %Ntb_sd: unknown command %0#\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     6,(0x3fU & vlSelfRef.tb_sd__DOT__command
                                        [0U]));
                        VL_STOP_MT("sim/p3\\tb_sd.sv", 42, "", false);
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
