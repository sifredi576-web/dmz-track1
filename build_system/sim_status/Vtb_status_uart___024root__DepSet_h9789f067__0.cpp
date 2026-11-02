// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_status_uart.h for the primary calling header

#include "Vtb_status_uart__pch.h"
#include "Vtb_status_uart__Syms.h"
#include "Vtb_status_uart___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_status_uart__ConstPool__CONST_h90011f4d_0;
extern const VlWide<16>/*511:0*/ Vtb_status_uart__ConstPool__CONST_h057cb335_0;
extern const VlWide<8>/*255:0*/ Vtb_status_uart__ConstPool__CONST_h3f931316_0;
extern const VlWide<16>/*511:0*/ Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0;

VL_INLINE_OPT VlCoroutine Vtb_status_uart___024root___eval_initial__TOP__Vtiming__0(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_status_uart__DOT__unnamedblk3__DOT__i;
    tb_status_uart__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_status_uart__DOT__unnamedblk6__DOT__i;
    tb_status_uart__DOT__unnamedblk6__DOT__i = 0;
    // Body
    vlSelfRef.tb_status_uart__DOT__status32[0U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[0U];
    vlSelfRef.tb_status_uart__DOT__status32[1U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[1U];
    vlSelfRef.tb_status_uart__DOT__status32[2U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[2U];
    vlSelfRef.tb_status_uart__DOT__status32[3U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[3U];
    vlSelfRef.tb_status_uart__DOT__status32[4U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[4U];
    vlSelfRef.tb_status_uart__DOT__status32[5U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[5U];
    vlSelfRef.tb_status_uart__DOT__status32[6U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[6U];
    vlSelfRef.tb_status_uart__DOT__status32[7U] = Vtb_status_uart__ConstPool__CONST_h90011f4d_0[7U];
    vlSelfRef.tb_status_uart__DOT__status64[0U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[0U];
    vlSelfRef.tb_status_uart__DOT__status64[1U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[1U];
    vlSelfRef.tb_status_uart__DOT__status64[2U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[2U];
    vlSelfRef.tb_status_uart__DOT__status64[3U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[3U];
    vlSelfRef.tb_status_uart__DOT__status64[4U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[4U];
    vlSelfRef.tb_status_uart__DOT__status64[5U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[5U];
    vlSelfRef.tb_status_uart__DOT__status64[6U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[6U];
    vlSelfRef.tb_status_uart__DOT__status64[7U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[7U];
    vlSelfRef.tb_status_uart__DOT__status64[8U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[8U];
    vlSelfRef.tb_status_uart__DOT__status64[9U] = Vtb_status_uart__ConstPool__CONST_h057cb335_0[9U];
    vlSelfRef.tb_status_uart__DOT__status64[0xaU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xaU];
    vlSelfRef.tb_status_uart__DOT__status64[0xbU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xbU];
    vlSelfRef.tb_status_uart__DOT__status64[0xcU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xcU];
    vlSelfRef.tb_status_uart__DOT__status64[0xdU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xdU];
    vlSelfRef.tb_status_uart__DOT__status64[0xeU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xeU];
    vlSelfRef.tb_status_uart__DOT__status64[0xfU] = 
        Vtb_status_uart__ConstPool__CONST_h057cb335_0[0xfU];
    tb_status_uart__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x60U, tb_status_uart__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.tb_status_uart__DOT____Vlvbound_h55b53ae0__0 
            = (0xffU & (0xa5U ^ tb_status_uart__DOT__unnamedblk3__DOT__i));
        if (VL_LIKELY(((0x2ffU >= (0x3ffU & VL_MULS_III(32, (IData)(8U), tb_status_uart__DOT__unnamedblk3__DOT__i)))))) {
            VL_ASSIGNSEL_WI(768,8,(0x3ffU & VL_MULS_III(32, (IData)(8U), tb_status_uart__DOT__unnamedblk3__DOT__i)), vlSelfRef.tb_status_uart__DOT__status96, vlSelfRef.tb_status_uart__DOT____Vlvbound_h55b53ae0__0);
        }
        tb_status_uart__DOT__unnamedblk3__DOT__i = 
            ((IData)(1U) + tb_status_uart__DOT__unnamedblk3__DOT__i);
    }
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "sim/media\tb_status_uart.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h248a7e92__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_status_uart.clk)", 
                                                         "sim/media\tb_status_uart.sv", 
                                                         29);
    vlSelfRef.tb_status_uart__DOT__reset = 0U;
    tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x3e8U;
    while (VL_LTS_III(32, 0U, tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h248a7e92__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_status_uart.clk)", 
                                                             "sim/media\tb_status_uart.sv", 
                                                             30);
        tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_status_uart__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_status_uart__DOT__status32[0U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[0U];
    vlSelfRef.tb_status_uart__DOT__status32[1U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[1U];
    vlSelfRef.tb_status_uart__DOT__status32[2U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[2U];
    vlSelfRef.tb_status_uart__DOT__status32[3U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[3U];
    vlSelfRef.tb_status_uart__DOT__status32[4U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[4U];
    vlSelfRef.tb_status_uart__DOT__status32[5U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[5U];
    vlSelfRef.tb_status_uart__DOT__status32[6U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[6U];
    vlSelfRef.tb_status_uart__DOT__status32[7U] = Vtb_status_uart__ConstPool__CONST_h3f931316_0[7U];
    vlSelfRef.tb_status_uart__DOT__status64[0U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0U];
    vlSelfRef.tb_status_uart__DOT__status64[1U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[1U];
    vlSelfRef.tb_status_uart__DOT__status64[2U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[2U];
    vlSelfRef.tb_status_uart__DOT__status64[3U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[3U];
    vlSelfRef.tb_status_uart__DOT__status64[4U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[4U];
    vlSelfRef.tb_status_uart__DOT__status64[5U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[5U];
    vlSelfRef.tb_status_uart__DOT__status64[6U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[6U];
    vlSelfRef.tb_status_uart__DOT__status64[7U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[7U];
    vlSelfRef.tb_status_uart__DOT__status64[8U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[8U];
    vlSelfRef.tb_status_uart__DOT__status64[9U] = Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[9U];
    vlSelfRef.tb_status_uart__DOT__status64[0xaU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xaU];
    vlSelfRef.tb_status_uart__DOT__status64[0xbU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xbU];
    vlSelfRef.tb_status_uart__DOT__status64[0xcU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xcU];
    vlSelfRef.tb_status_uart__DOT__status64[0xdU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xdU];
    vlSelfRef.tb_status_uart__DOT__status64[0xeU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xeU];
    vlSelfRef.tb_status_uart__DOT__status64[0xfU] = 
        Vtb_status_uart__ConstPool__CONST_h8ef5ba6a_0[0xfU];
    tb_status_uart__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x60U, tb_status_uart__DOT__unnamedblk6__DOT__i)) {
        vlSelfRef.tb_status_uart__DOT____Vlvbound_h2ba612df__0 
            = (0xffU & (0x3cU ^ tb_status_uart__DOT__unnamedblk6__DOT__i));
        if (VL_LIKELY(((0x2ffU >= (0x3ffU & VL_MULS_III(32, (IData)(8U), tb_status_uart__DOT__unnamedblk6__DOT__i)))))) {
            VL_ASSIGNSEL_WI(768,8,(0x3ffU & VL_MULS_III(32, (IData)(8U), tb_status_uart__DOT__unnamedblk6__DOT__i)), vlSelfRef.tb_status_uart__DOT__status96, vlSelfRef.tb_status_uart__DOT____Vlvbound_h2ba612df__0);
        }
        tb_status_uart__DOT__unnamedblk6__DOT__i = 
            ((IData)(1U) + tb_status_uart__DOT__unnamedblk6__DOT__i);
    }
    while ((0xc0U != vlSelfRef.tb_status_uart__DOT__seen96)) {
        co_await vlSelfRef.__VtrigSched_h65b1b311__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (32'shc0 == tb_status_uart.seen96))", 
                                                             "sim/media\tb_status_uart.sv", 
                                                             34);
    }
    if (VL_UNLIKELY((((0x80U != vlSelfRef.tb_status_uart__DOT__seen64) 
                      | VL_GTS_III(32, 0x40U, vlSelfRef.tb_status_uart__DOT__seen32))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_status_uart.sv:34: Assertion failed in %Ntb_status_uart: UART frame lengths incorrect\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/media\\tb_status_uart.sv", 34, "", false);
    }
    VL_WRITEF_NX("PASS 32/64/96-byte diagnostic UART, exact bytes and coherent snapshots while live status changes\n",0);
    VL_FINISH_MT("sim/media\\tb_status_uart.sv", 35, "");
}

VL_INLINE_OPT VlCoroutine Vtb_status_uart___024root___eval_initial__TOP__Vtiming__1(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x165a0bc00ULL, 
                                         nullptr, "sim/media\tb_status_uart.sv", 
                                         37);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_status_uart.sv:37: Assertion failed in %Ntb_status_uart: UART snapshot timeout %0d/%0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 32,vlSelfRef.tb_status_uart__DOT__seen64,
                 32,vlSelfRef.tb_status_uart__DOT__seen96);
    VL_STOP_MT("sim/media\\tb_status_uart.sv", 37, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_status_uart___024root___dump_triggers__act(Vtb_status_uart___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_status_uart___024root___eval_triggers__act(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___eval_triggers__act\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h02066bdf__0;
    __Vtrigprevexpr_h02066bdf__0 = 0;
    // Body
    __Vtrigprevexpr_h02066bdf__0 = (0xc0U == vlSelfRef.tb_status_uart__DOT__seen96);
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_status_uart__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_status_uart__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(__Vtrigprevexpr_h02066bdf__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h02066bdf__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_status_uart__DOT__clk__0 
        = vlSelfRef.tb_status_uart__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h02066bdf__1 = __Vtrigprevexpr_h02066bdf__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_status_uart___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<8>/*255:0*/ Vtb_status_uart__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ Vtb_status_uart__ConstPool__CONST_h93e1b771_0;
extern const VlWide<24>/*767:0*/ Vtb_status_uart__ConstPool__CONST_hda9269f3_0;

VL_INLINE_OPT void Vtb_status_uart___024root___nba_sequent__TOP__0(Vtb_status_uart___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_status_uart___024root___nba_sequent__TOP__0\n"); );
    Vtb_status_uart__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__interval;
    __Vdly__tb_status_uart__DOT__t64__DOT__interval = 0;
    VlWide<16>/*511:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__snapshot;
    VL_ZERO_W(512, __Vdly__tb_status_uart__DOT__t64__DOT__snapshot);
    CData/*5:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__index;
    __Vdly__tb_status_uart__DOT__t64__DOT__index = 0;
    CData/*3:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t64__DOT__bitnum = 0;
    CData/*4:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__baud;
    __Vdly__tb_status_uart__DOT__t64__DOT__baud = 0;
    SData/*9:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__shift;
    __Vdly__tb_status_uart__DOT__t64__DOT__shift = 0;
    CData/*0:0*/ __Vdly__tb_status_uart__DOT__t64__DOT__busy;
    __Vdly__tb_status_uart__DOT__t64__DOT__busy = 0;
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__interval;
    __Vdly__tb_status_uart__DOT__t96__DOT__interval = 0;
    VlWide<24>/*767:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__snapshot;
    VL_ZERO_W(768, __Vdly__tb_status_uart__DOT__t96__DOT__snapshot);
    CData/*6:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__index;
    __Vdly__tb_status_uart__DOT__t96__DOT__index = 0;
    CData/*3:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t96__DOT__bitnum = 0;
    CData/*4:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__baud;
    __Vdly__tb_status_uart__DOT__t96__DOT__baud = 0;
    SData/*9:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__shift;
    __Vdly__tb_status_uart__DOT__t96__DOT__shift = 0;
    CData/*0:0*/ __Vdly__tb_status_uart__DOT__t96__DOT__busy;
    __Vdly__tb_status_uart__DOT__t96__DOT__busy = 0;
    CData/*1:0*/ __Vdly__tb_status_uart__DOT__r64__DOT__state;
    __Vdly__tb_status_uart__DOT__r64__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__r64__DOT__count;
    __Vdly__tb_status_uart__DOT__r64__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_status_uart__DOT__r64__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r64__DOT__bitno = 0;
    CData/*7:0*/ __Vdly__tb_status_uart__DOT__r64__DOT__shift;
    __Vdly__tb_status_uart__DOT__r64__DOT__shift = 0;
    CData/*1:0*/ __Vdly__tb_status_uart__DOT__r96__DOT__state;
    __Vdly__tb_status_uart__DOT__r96__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__r96__DOT__count;
    __Vdly__tb_status_uart__DOT__r96__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_status_uart__DOT__r96__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r96__DOT__bitno = 0;
    CData/*7:0*/ __Vdly__tb_status_uart__DOT__r96__DOT__shift;
    __Vdly__tb_status_uart__DOT__r96__DOT__shift = 0;
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__interval;
    __Vdly__tb_status_uart__DOT__t32__DOT__interval = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__snapshot;
    VL_ZERO_W(256, __Vdly__tb_status_uart__DOT__t32__DOT__snapshot);
    CData/*4:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__index;
    __Vdly__tb_status_uart__DOT__t32__DOT__index = 0;
    CData/*3:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t32__DOT__bitnum = 0;
    CData/*4:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__baud;
    __Vdly__tb_status_uart__DOT__t32__DOT__baud = 0;
    SData/*9:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__shift;
    __Vdly__tb_status_uart__DOT__t32__DOT__shift = 0;
    CData/*0:0*/ __Vdly__tb_status_uart__DOT__t32__DOT__busy;
    __Vdly__tb_status_uart__DOT__t32__DOT__busy = 0;
    CData/*1:0*/ __Vdly__tb_status_uart__DOT__r32__DOT__state;
    __Vdly__tb_status_uart__DOT__r32__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_status_uart__DOT__r32__DOT__count;
    __Vdly__tb_status_uart__DOT__r32__DOT__count = 0;
    CData/*2:0*/ __Vdly__tb_status_uart__DOT__r32__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r32__DOT__bitno = 0;
    CData/*7:0*/ __Vdly__tb_status_uart__DOT__r32__DOT__shift;
    __Vdly__tb_status_uart__DOT__r32__DOT__shift = 0;
    // Body
    __Vdly__tb_status_uart__DOT__t64__DOT__interval 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__interval;
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[1U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[1U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[2U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[2U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[3U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[3U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[4U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[4U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[5U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[5U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[6U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[6U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[7U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[7U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[8U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[8U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[9U] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[9U];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xaU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xaU];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xbU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xbU];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xcU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xcU];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xdU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xdU];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xeU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xeU];
    __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xfU] 
        = vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xfU];
    __Vdly__tb_status_uart__DOT__t64__DOT__index = vlSelfRef.tb_status_uart__DOT__t64__DOT__index;
    __Vdly__tb_status_uart__DOT__t64__DOT__bitnum = vlSelfRef.tb_status_uart__DOT__t64__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t64__DOT__baud = vlSelfRef.tb_status_uart__DOT__t64__DOT__baud;
    __Vdly__tb_status_uart__DOT__t64__DOT__shift = vlSelfRef.tb_status_uart__DOT__t64__DOT__shift;
    __Vdly__tb_status_uart__DOT__t64__DOT__busy = vlSelfRef.tb_status_uart__DOT__t64__DOT__busy;
    __Vdly__tb_status_uart__DOT__t96__DOT__interval 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__interval;
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[1U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[1U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[2U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[2U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[3U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[3U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[4U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[4U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[5U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[5U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[6U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[6U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[7U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[7U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[8U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[8U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[9U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[9U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xaU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xaU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xbU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xbU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xcU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xcU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xdU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xdU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xeU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xeU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xfU] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xfU];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x10U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x10U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x11U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x11U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x12U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x12U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x13U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x13U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x14U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x14U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x15U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x15U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x16U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x16U];
    __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x17U] 
        = vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x17U];
    __Vdly__tb_status_uart__DOT__t96__DOT__index = vlSelfRef.tb_status_uart__DOT__t96__DOT__index;
    __Vdly__tb_status_uart__DOT__t96__DOT__bitnum = vlSelfRef.tb_status_uart__DOT__t96__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t96__DOT__baud = vlSelfRef.tb_status_uart__DOT__t96__DOT__baud;
    __Vdly__tb_status_uart__DOT__t96__DOT__shift = vlSelfRef.tb_status_uart__DOT__t96__DOT__shift;
    __Vdly__tb_status_uart__DOT__t96__DOT__busy = vlSelfRef.tb_status_uart__DOT__t96__DOT__busy;
    __Vdly__tb_status_uart__DOT__t32__DOT__interval 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__interval;
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[0U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[0U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[1U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[1U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[2U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[2U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[3U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[3U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[4U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[4U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[5U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[5U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[6U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[6U];
    __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[7U] 
        = vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[7U];
    __Vdly__tb_status_uart__DOT__t32__DOT__index = vlSelfRef.tb_status_uart__DOT__t32__DOT__index;
    __Vdly__tb_status_uart__DOT__t32__DOT__bitnum = vlSelfRef.tb_status_uart__DOT__t32__DOT__bitnum;
    __Vdly__tb_status_uart__DOT__t32__DOT__baud = vlSelfRef.tb_status_uart__DOT__t32__DOT__baud;
    __Vdly__tb_status_uart__DOT__t32__DOT__shift = vlSelfRef.tb_status_uart__DOT__t32__DOT__shift;
    __Vdly__tb_status_uart__DOT__t32__DOT__busy = vlSelfRef.tb_status_uart__DOT__t32__DOT__busy;
    __Vdly__tb_status_uart__DOT__r64__DOT__state = vlSelfRef.tb_status_uart__DOT__r64__DOT__state;
    __Vdly__tb_status_uart__DOT__r64__DOT__count = vlSelfRef.tb_status_uart__DOT__r64__DOT__count;
    __Vdly__tb_status_uart__DOT__r64__DOT__bitno = vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r64__DOT__shift = vlSelfRef.tb_status_uart__DOT__r64__DOT__shift;
    __Vdly__tb_status_uart__DOT__r96__DOT__state = vlSelfRef.tb_status_uart__DOT__r96__DOT__state;
    __Vdly__tb_status_uart__DOT__r96__DOT__count = vlSelfRef.tb_status_uart__DOT__r96__DOT__count;
    __Vdly__tb_status_uart__DOT__r96__DOT__bitno = vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r96__DOT__shift = vlSelfRef.tb_status_uart__DOT__r96__DOT__shift;
    __Vdly__tb_status_uart__DOT__r32__DOT__state = vlSelfRef.tb_status_uart__DOT__r32__DOT__state;
    __Vdly__tb_status_uart__DOT__r32__DOT__count = vlSelfRef.tb_status_uart__DOT__r32__DOT__count;
    __Vdly__tb_status_uart__DOT__r32__DOT__bitno = vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno;
    __Vdly__tb_status_uart__DOT__r32__DOT__shift = vlSelfRef.tb_status_uart__DOT__r32__DOT__shift;
    if ((1U & (~ (IData)(vlSelfRef.tb_status_uart__DOT__reset)))) {
        if (vlSelfRef.tb_status_uart__DOT__v32) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_uart__DOT__b32) 
                              != (0xffU & ((0x1fU & vlSelfRef.tb_status_uart__DOT__seen32) 
                                           ^ (VL_GTS_III(32, 0x20U, vlSelfRef.tb_status_uart__DOT__seen32)
                                               ? 0xa5U
                                               : 0x3cU))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_uart.sv:14: Assertion failed in %Ntb_status_uart: 32-byte UART snapshot\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("sim/media\\tb_status_uart.sv", 14, "", false);
            }
            vlSelfRef.tb_status_uart__DOT__seen32 = 
                ((IData)(1U) + vlSelfRef.tb_status_uart__DOT__seen32);
        }
        if (vlSelfRef.tb_status_uart__DOT__v64) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_uart__DOT__b64) 
                              != (0xffU & ((0x3fU & vlSelfRef.tb_status_uart__DOT__seen64) 
                                           ^ (VL_GTS_III(32, 0x40U, vlSelfRef.tb_status_uart__DOT__seen64)
                                               ? 0xa5U
                                               : 0x3cU))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_uart.sv:17: Assertion failed in %Ntb_status_uart: 64-byte UART snapshot mismatch byte=%0d got=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_uart__DOT__seen64,
                             8,(IData)(vlSelfRef.tb_status_uart__DOT__b64));
                VL_STOP_MT("sim/media\\tb_status_uart.sv", 17, "", false);
            }
            vlSelfRef.tb_status_uart__DOT__seen64 = 
                ((IData)(1U) + vlSelfRef.tb_status_uart__DOT__seen64);
        }
        if (vlSelfRef.tb_status_uart__DOT__v96) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_status_uart__DOT__b96) 
                              != (0xffU & (VL_MODDIV_III(32, vlSelfRef.tb_status_uart__DOT__seen96, (IData)(0x60U)) 
                                           ^ (VL_GTS_III(32, 0x60U, vlSelfRef.tb_status_uart__DOT__seen96)
                                               ? 0xa5U
                                               : 0x3cU))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_status_uart.sv:21: Assertion failed in %Ntb_status_uart: 96-byte UART snapshot mismatch byte=%0d got=%x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             vlSelfRef.tb_status_uart__DOT__seen96,
                             8,(IData)(vlSelfRef.tb_status_uart__DOT__b96));
                VL_STOP_MT("sim/media\\tb_status_uart.sv", 21, "", false);
            }
            vlSelfRef.tb_status_uart__DOT__seen96 = 
                ((IData)(1U) + vlSelfRef.tb_status_uart__DOT__seen96);
        }
    }
    if (vlSelfRef.tb_status_uart__DOT__reset) {
        __Vdly__tb_status_uart__DOT__r32__DOT__state = 0U;
        __Vdly__tb_status_uart__DOT__r32__DOT__count = 0U;
        __Vdly__tb_status_uart__DOT__r32__DOT__bitno = 0U;
        __Vdly__tb_status_uart__DOT__r32__DOT__shift = 0U;
        vlSelfRef.tb_status_uart__DOT__b32 = 0U;
        vlSelfRef.tb_status_uart__DOT__v32 = 0U;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__state 
            = __Vdly__tb_status_uart__DOT__r32__DOT__state;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__count 
            = __Vdly__tb_status_uart__DOT__r32__DOT__count;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno 
            = __Vdly__tb_status_uart__DOT__r32__DOT__bitno;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__shift 
            = __Vdly__tb_status_uart__DOT__r32__DOT__shift;
        __Vdly__tb_status_uart__DOT__r64__DOT__state = 0U;
        __Vdly__tb_status_uart__DOT__r64__DOT__count = 0U;
        __Vdly__tb_status_uart__DOT__r64__DOT__bitno = 0U;
        __Vdly__tb_status_uart__DOT__r64__DOT__shift = 0U;
        vlSelfRef.tb_status_uart__DOT__b64 = 0U;
        vlSelfRef.tb_status_uart__DOT__v64 = 0U;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__state 
            = __Vdly__tb_status_uart__DOT__r64__DOT__state;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__count 
            = __Vdly__tb_status_uart__DOT__r64__DOT__count;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno 
            = __Vdly__tb_status_uart__DOT__r64__DOT__bitno;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__shift 
            = __Vdly__tb_status_uart__DOT__r64__DOT__shift;
        __Vdly__tb_status_uart__DOT__r96__DOT__state = 0U;
        __Vdly__tb_status_uart__DOT__r96__DOT__count = 0U;
        __Vdly__tb_status_uart__DOT__r96__DOT__bitno = 0U;
        __Vdly__tb_status_uart__DOT__r96__DOT__shift = 0U;
        vlSelfRef.tb_status_uart__DOT__b96 = 0U;
        vlSelfRef.tb_status_uart__DOT__v96 = 0U;
    } else {
        vlSelfRef.tb_status_uart__DOT__v32 = 0U;
        if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__r2)))) {
                __Vdly__tb_status_uart__DOT__r32__DOT__count = 0xfU;
                __Vdly__tb_status_uart__DOT__r32__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r32__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count) 
                                  - (IData)(1U)));
            } else if (vlSelfRef.tb_status_uart__DOT__r32__DOT__r2) {
                __Vdly__tb_status_uart__DOT__r32__DOT__state = 0U;
            } else {
                __Vdly__tb_status_uart__DOT__r32__DOT__state = 2U;
                __Vdly__tb_status_uart__DOT__r32__DOT__count = 0x1fU;
                __Vdly__tb_status_uart__DOT__r32__DOT__bitno = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r32__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count) 
                                  - (IData)(1U)));
            } else {
                __Vdly__tb_status_uart__DOT__r32__DOT__shift 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno))) 
                        & (IData)(__Vdly__tb_status_uart__DOT__r32__DOT__shift)) 
                       | (0xffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__r2) 
                                   << (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno))));
                __Vdly__tb_status_uart__DOT__r32__DOT__count = 0x1fU;
                if ((7U == (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno))) {
                    __Vdly__tb_status_uart__DOT__r32__DOT__state = 3U;
                } else {
                    __Vdly__tb_status_uart__DOT__r32__DOT__bitno 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r32__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__count) 
                                  - (IData)(1U)));
            } else {
                if (vlSelfRef.tb_status_uart__DOT__r32__DOT__r2) {
                    vlSelfRef.tb_status_uart__DOT__b32 
                        = vlSelfRef.tb_status_uart__DOT__r32__DOT__shift;
                    vlSelfRef.tb_status_uart__DOT__v32 = 1U;
                }
                __Vdly__tb_status_uart__DOT__r32__DOT__state = 0U;
            }
        }
        vlSelfRef.tb_status_uart__DOT__r32__DOT__state 
            = __Vdly__tb_status_uart__DOT__r32__DOT__state;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__count 
            = __Vdly__tb_status_uart__DOT__r32__DOT__count;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__bitno 
            = __Vdly__tb_status_uart__DOT__r32__DOT__bitno;
        vlSelfRef.tb_status_uart__DOT__r32__DOT__shift 
            = __Vdly__tb_status_uart__DOT__r32__DOT__shift;
        vlSelfRef.tb_status_uart__DOT__v64 = 0U;
        if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__r2)))) {
                __Vdly__tb_status_uart__DOT__r64__DOT__count = 0xfU;
                __Vdly__tb_status_uart__DOT__r64__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r64__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count) 
                                  - (IData)(1U)));
            } else if (vlSelfRef.tb_status_uart__DOT__r64__DOT__r2) {
                __Vdly__tb_status_uart__DOT__r64__DOT__state = 0U;
            } else {
                __Vdly__tb_status_uart__DOT__r64__DOT__state = 2U;
                __Vdly__tb_status_uart__DOT__r64__DOT__count = 0x1fU;
                __Vdly__tb_status_uart__DOT__r64__DOT__bitno = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r64__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count) 
                                  - (IData)(1U)));
            } else {
                __Vdly__tb_status_uart__DOT__r64__DOT__shift 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno))) 
                        & (IData)(__Vdly__tb_status_uart__DOT__r64__DOT__shift)) 
                       | (0xffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__r2) 
                                   << (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno))));
                __Vdly__tb_status_uart__DOT__r64__DOT__count = 0x1fU;
                if ((7U == (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno))) {
                    __Vdly__tb_status_uart__DOT__r64__DOT__state = 3U;
                } else {
                    __Vdly__tb_status_uart__DOT__r64__DOT__bitno 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r64__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__count) 
                                  - (IData)(1U)));
            } else {
                if (vlSelfRef.tb_status_uart__DOT__r64__DOT__r2) {
                    vlSelfRef.tb_status_uart__DOT__b64 
                        = vlSelfRef.tb_status_uart__DOT__r64__DOT__shift;
                    vlSelfRef.tb_status_uart__DOT__v64 = 1U;
                }
                __Vdly__tb_status_uart__DOT__r64__DOT__state = 0U;
            }
        }
        vlSelfRef.tb_status_uart__DOT__r64__DOT__state 
            = __Vdly__tb_status_uart__DOT__r64__DOT__state;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__count 
            = __Vdly__tb_status_uart__DOT__r64__DOT__count;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__bitno 
            = __Vdly__tb_status_uart__DOT__r64__DOT__bitno;
        vlSelfRef.tb_status_uart__DOT__r64__DOT__shift 
            = __Vdly__tb_status_uart__DOT__r64__DOT__shift;
        vlSelfRef.tb_status_uart__DOT__v96 = 0U;
        if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__r2)))) {
                __Vdly__tb_status_uart__DOT__r96__DOT__count = 0xfU;
                __Vdly__tb_status_uart__DOT__r96__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r96__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count) 
                                  - (IData)(1U)));
            } else if (vlSelfRef.tb_status_uart__DOT__r96__DOT__r2) {
                __Vdly__tb_status_uart__DOT__r96__DOT__state = 0U;
            } else {
                __Vdly__tb_status_uart__DOT__r96__DOT__state = 2U;
                __Vdly__tb_status_uart__DOT__r96__DOT__count = 0x1fU;
                __Vdly__tb_status_uart__DOT__r96__DOT__bitno = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r96__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count) 
                                  - (IData)(1U)));
            } else {
                __Vdly__tb_status_uart__DOT__r96__DOT__shift 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno))) 
                        & (IData)(__Vdly__tb_status_uart__DOT__r96__DOT__shift)) 
                       | (0xffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__r2) 
                                   << (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno))));
                __Vdly__tb_status_uart__DOT__r96__DOT__count = 0x1fU;
                if ((7U == (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno))) {
                    __Vdly__tb_status_uart__DOT__r96__DOT__state = 3U;
                } else {
                    __Vdly__tb_status_uart__DOT__r96__DOT__bitno 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__state))) {
            if ((0U != (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count))) {
                __Vdly__tb_status_uart__DOT__r96__DOT__count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__count) 
                                  - (IData)(1U)));
            } else {
                if (vlSelfRef.tb_status_uart__DOT__r96__DOT__r2) {
                    vlSelfRef.tb_status_uart__DOT__b96 
                        = vlSelfRef.tb_status_uart__DOT__r96__DOT__shift;
                    vlSelfRef.tb_status_uart__DOT__v96 = 1U;
                }
                __Vdly__tb_status_uart__DOT__r96__DOT__state = 0U;
            }
        }
    }
    vlSelfRef.tb_status_uart__DOT__r96__DOT__state 
        = __Vdly__tb_status_uart__DOT__r96__DOT__state;
    vlSelfRef.tb_status_uart__DOT__r96__DOT__count 
        = __Vdly__tb_status_uart__DOT__r96__DOT__count;
    vlSelfRef.tb_status_uart__DOT__r96__DOT__bitno 
        = __Vdly__tb_status_uart__DOT__r96__DOT__bitno;
    vlSelfRef.tb_status_uart__DOT__r96__DOT__shift 
        = __Vdly__tb_status_uart__DOT__r96__DOT__shift;
    vlSelfRef.tb_status_uart__DOT__r32__DOT__r2 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__r32__DOT__r1));
    vlSelfRef.tb_status_uart__DOT__r64__DOT__r2 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__r64__DOT__r1));
    vlSelfRef.tb_status_uart__DOT__r96__DOT__r2 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__r96__DOT__r1));
    vlSelfRef.tb_status_uart__DOT__r32__DOT__r1 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__tx32));
    vlSelfRef.tb_status_uart__DOT__r64__DOT__r1 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__tx64));
    vlSelfRef.tb_status_uart__DOT__r96__DOT__r1 = ((IData)(vlSelfRef.tb_status_uart__DOT__reset) 
                                                   || (IData)(vlSelfRef.tb_status_uart__DOT__tx96));
    if (vlSelfRef.tb_status_uart__DOT__reset) {
        __Vdly__tb_status_uart__DOT__t32__DOT__interval = 0U;
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[0U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[1U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[2U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[3U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[4U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[5U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[6U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[7U] 
            = Vtb_status_uart__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_status_uart__DOT__t32__DOT__index = 0U;
        __Vdly__tb_status_uart__DOT__t32__DOT__bitnum = 0U;
        __Vdly__tb_status_uart__DOT__t32__DOT__baud = 0U;
        __Vdly__tb_status_uart__DOT__t32__DOT__shift = 0x3ffU;
        __Vdly__tb_status_uart__DOT__t32__DOT__busy = 0U;
        vlSelfRef.tb_status_uart__DOT__tx32 = 1U;
        __Vdly__tb_status_uart__DOT__t64__DOT__interval = 0U;
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[1U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[1U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[2U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[2U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[3U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[3U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[4U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[4U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[5U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[5U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[6U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[6U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[7U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[7U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[8U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[8U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[9U] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[9U];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xaU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xbU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xcU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xdU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xeU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xfU] 
            = Vtb_status_uart__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vdly__tb_status_uart__DOT__t64__DOT__index = 0U;
        __Vdly__tb_status_uart__DOT__t64__DOT__bitnum = 0U;
        __Vdly__tb_status_uart__DOT__t64__DOT__baud = 0U;
        __Vdly__tb_status_uart__DOT__t64__DOT__shift = 0x3ffU;
        __Vdly__tb_status_uart__DOT__t64__DOT__busy = 0U;
        vlSelfRef.tb_status_uart__DOT__tx64 = 1U;
        __Vdly__tb_status_uart__DOT__t96__DOT__interval = 0U;
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[1U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[1U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[2U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[2U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[3U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[3U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[4U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[4U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[5U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[5U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[6U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[6U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[7U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[7U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[8U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[8U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[9U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[9U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xaU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xaU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xbU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xbU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xcU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xcU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xdU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xdU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xeU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xeU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xfU] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0xfU];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x10U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x10U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x11U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x11U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x12U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x12U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x13U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x13U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x14U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x14U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x15U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x15U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x16U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x16U];
        __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x17U] 
            = Vtb_status_uart__ConstPool__CONST_hda9269f3_0[0x17U];
        __Vdly__tb_status_uart__DOT__t96__DOT__index = 0U;
        __Vdly__tb_status_uart__DOT__t96__DOT__bitnum = 0U;
        __Vdly__tb_status_uart__DOT__t96__DOT__baud = 0U;
        __Vdly__tb_status_uart__DOT__t96__DOT__shift = 0x3ffU;
        __Vdly__tb_status_uart__DOT__t96__DOT__busy = 0U;
        vlSelfRef.tb_status_uart__DOT__tx96 = 1U;
    } else {
        if (vlSelfRef.tb_status_uart__DOT__t32__DOT__busy) {
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__baud))) {
                __Vdly__tb_status_uart__DOT__t32__DOT__baud = 0x1fU;
                vlSelfRef.tb_status_uart__DOT__tx32 
                    = (1U & (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__shift));
                __Vdly__tb_status_uart__DOT__t32__DOT__shift 
                    = (0x200U | (0x1ffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__shift) 
                                           >> 1U)));
                if ((9U == (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__bitnum))) {
                    __Vdly__tb_status_uart__DOT__t32__DOT__bitnum = 0U;
                    if ((0x1fU == (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index))) {
                        __Vdly__tb_status_uart__DOT__t32__DOT__busy = 0U;
                    } else {
                        __Vdly__tb_status_uart__DOT__t32__DOT__index 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)));
                        __Vdly__tb_status_uart__DOT__t32__DOT__shift 
                            = (0x200U | (0x1feU & (
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,32,32, 
                                                                       ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)), 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0xffU 
                                                         & VL_SHIFTL_III(8,32,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)), 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(8,32,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)), 3U))))) 
                                                    | (vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[
                                                       (7U 
                                                        & (VL_SHIFTL_III(8,32,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)), 3U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(8,32,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__index)), 3U)))) 
                                                   << 1U)));
                    }
                } else {
                    __Vdly__tb_status_uart__DOT__t32__DOT__bitnum 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__bitnum)));
                }
            } else {
                __Vdly__tb_status_uart__DOT__t32__DOT__baud 
                    = (0x1fU & ((IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__baud) 
                                - (IData)(1U)));
            }
        } else {
            vlSelfRef.tb_status_uart__DOT__tx32 = 1U;
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__interval))) {
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[0U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[0U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[1U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[1U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[2U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[2U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[3U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[3U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[4U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[4U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[5U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[5U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[6U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[6U];
                __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[7U] 
                    = vlSelfRef.tb_status_uart__DOT__status32[7U];
                __Vdly__tb_status_uart__DOT__t32__DOT__index = 0U;
                __Vdly__tb_status_uart__DOT__t32__DOT__bitnum = 0U;
                __Vdly__tb_status_uart__DOT__t32__DOT__shift 
                    = (0x200U | (0x1feU & (vlSelfRef.tb_status_uart__DOT__status32[0U] 
                                           << 1U)));
                __Vdly__tb_status_uart__DOT__t32__DOT__busy = 1U;
                __Vdly__tb_status_uart__DOT__t32__DOT__baud = 0U;
                __Vdly__tb_status_uart__DOT__t32__DOT__interval = 0x9c3fU;
            } else {
                __Vdly__tb_status_uart__DOT__t32__DOT__interval 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t32__DOT__interval) 
                                  - (IData)(1U)));
            }
        }
        if (vlSelfRef.tb_status_uart__DOT__t64__DOT__busy) {
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__baud))) {
                __Vdly__tb_status_uart__DOT__t64__DOT__baud = 0x1fU;
                vlSelfRef.tb_status_uart__DOT__tx64 
                    = (1U & (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__shift));
                __Vdly__tb_status_uart__DOT__t64__DOT__shift 
                    = (0x200U | (0x1ffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__shift) 
                                           >> 1U)));
                if ((9U == (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__bitnum))) {
                    __Vdly__tb_status_uart__DOT__t64__DOT__bitnum = 0U;
                    if ((0x3fU == (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index))) {
                        __Vdly__tb_status_uart__DOT__t64__DOT__busy = 0U;
                    } else {
                        __Vdly__tb_status_uart__DOT__t64__DOT__index 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)));
                        __Vdly__tb_status_uart__DOT__t64__DOT__shift 
                            = (0x200U | (0x1feU & (
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(9,32,32, 
                                                                       ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)), 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x1ffU 
                                                         & VL_SHIFTL_III(9,32,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)), 3U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(9,32,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)), 3U))))) 
                                                    | (vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[
                                                       (0xfU 
                                                        & (VL_SHIFTL_III(9,32,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)), 3U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(9,32,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__index)), 3U)))) 
                                                   << 1U)));
                    }
                } else {
                    __Vdly__tb_status_uart__DOT__t64__DOT__bitnum 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__bitnum)));
                }
            } else {
                __Vdly__tb_status_uart__DOT__t64__DOT__baud 
                    = (0x1fU & ((IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__baud) 
                                - (IData)(1U)));
            }
        } else {
            vlSelfRef.tb_status_uart__DOT__tx64 = 1U;
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__interval))) {
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[1U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[1U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[2U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[2U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[3U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[3U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[4U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[4U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[5U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[5U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[6U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[6U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[7U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[7U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[8U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[8U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[9U] 
                    = vlSelfRef.tb_status_uart__DOT__status64[9U];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xaU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xaU];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xbU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xbU];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xcU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xcU];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xdU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xdU];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xeU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xeU];
                __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xfU] 
                    = vlSelfRef.tb_status_uart__DOT__status64[0xfU];
                __Vdly__tb_status_uart__DOT__t64__DOT__index = 0U;
                __Vdly__tb_status_uart__DOT__t64__DOT__bitnum = 0U;
                __Vdly__tb_status_uart__DOT__t64__DOT__shift 
                    = (0x200U | (0x1feU & (vlSelfRef.tb_status_uart__DOT__status64[0U] 
                                           << 1U)));
                __Vdly__tb_status_uart__DOT__t64__DOT__busy = 1U;
                __Vdly__tb_status_uart__DOT__t64__DOT__baud = 0U;
                __Vdly__tb_status_uart__DOT__t64__DOT__interval = 0x9c3fU;
            } else {
                __Vdly__tb_status_uart__DOT__t64__DOT__interval 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t64__DOT__interval) 
                                  - (IData)(1U)));
            }
        }
        if (vlSelfRef.tb_status_uart__DOT__t96__DOT__busy) {
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__baud))) {
                __Vdly__tb_status_uart__DOT__t96__DOT__baud = 0x1fU;
                vlSelfRef.tb_status_uart__DOT__tx96 
                    = (1U & (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__shift));
                __Vdly__tb_status_uart__DOT__t96__DOT__shift 
                    = (0x200U | (0x1ffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__shift) 
                                           >> 1U)));
                if ((9U == (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__bitnum))) {
                    __Vdly__tb_status_uart__DOT__t96__DOT__bitnum = 0U;
                    if ((0x5fU == (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index))) {
                        __Vdly__tb_status_uart__DOT__t96__DOT__busy = 0U;
                    } else {
                        __Vdly__tb_status_uart__DOT__t96__DOT__index 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)));
                        __Vdly__tb_status_uart__DOT__t96__DOT__shift 
                            = (0x200U | (((0x2ffU >= 
                                           (0x3ffU 
                                            & VL_SHIFTL_III(10,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U)))
                                           ? (0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,32,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x3ffU 
                                                      & VL_SHIFTL_III(10,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U))))) 
                                                 | (vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[
                                                    (0x1fU 
                                                     & (VL_SHIFTL_III(10,32,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(10,32,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__index)), 3U)))))
                                           : 0U) << 1U));
                    }
                } else {
                    __Vdly__tb_status_uart__DOT__t96__DOT__bitnum 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__bitnum)));
                }
            } else {
                __Vdly__tb_status_uart__DOT__t96__DOT__baud 
                    = (0x1fU & ((IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__baud) 
                                - (IData)(1U)));
            }
        } else {
            vlSelfRef.tb_status_uart__DOT__tx96 = 1U;
            if ((0U == (IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__interval))) {
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[1U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[1U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[2U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[2U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[3U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[3U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[4U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[4U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[5U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[5U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[6U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[6U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[7U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[7U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[8U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[8U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[9U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[9U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xaU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xaU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xbU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xbU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xcU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xcU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xdU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xdU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xeU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xeU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xfU] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0xfU];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x10U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x10U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x11U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x11U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x12U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x12U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x13U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x13U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x14U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x14U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x15U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x15U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x16U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x16U];
                __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x17U] 
                    = vlSelfRef.tb_status_uart__DOT__status96[0x17U];
                __Vdly__tb_status_uart__DOT__t96__DOT__index = 0U;
                __Vdly__tb_status_uart__DOT__t96__DOT__bitnum = 0U;
                __Vdly__tb_status_uart__DOT__t96__DOT__shift 
                    = (0x200U | (0x1feU & (vlSelfRef.tb_status_uart__DOT__status96[0U] 
                                           << 1U)));
                __Vdly__tb_status_uart__DOT__t96__DOT__busy = 1U;
                __Vdly__tb_status_uart__DOT__t96__DOT__baud = 0U;
                __Vdly__tb_status_uart__DOT__t96__DOT__interval = 0x9c3fU;
            } else {
                __Vdly__tb_status_uart__DOT__t96__DOT__interval 
                    = (0xffffU & ((IData)(vlSelfRef.tb_status_uart__DOT__t96__DOT__interval) 
                                  - (IData)(1U)));
            }
        }
    }
    vlSelfRef.tb_status_uart__DOT__t32__DOT__interval 
        = __Vdly__tb_status_uart__DOT__t32__DOT__interval;
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[0U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[0U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[1U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[1U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[2U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[2U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[3U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[3U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[4U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[4U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[5U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[5U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[6U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[6U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__snapshot[7U] 
        = __Vdly__tb_status_uart__DOT__t32__DOT__snapshot[7U];
    vlSelfRef.tb_status_uart__DOT__t32__DOT__index 
        = __Vdly__tb_status_uart__DOT__t32__DOT__index;
    vlSelfRef.tb_status_uart__DOT__t32__DOT__bitnum 
        = __Vdly__tb_status_uart__DOT__t32__DOT__bitnum;
    vlSelfRef.tb_status_uart__DOT__t32__DOT__baud = __Vdly__tb_status_uart__DOT__t32__DOT__baud;
    vlSelfRef.tb_status_uart__DOT__t32__DOT__shift 
        = __Vdly__tb_status_uart__DOT__t32__DOT__shift;
    vlSelfRef.tb_status_uart__DOT__t32__DOT__busy = __Vdly__tb_status_uart__DOT__t32__DOT__busy;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__interval 
        = __Vdly__tb_status_uart__DOT__t64__DOT__interval;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[1U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[1U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[2U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[2U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[3U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[3U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[4U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[4U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[5U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[5U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[6U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[6U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[7U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[7U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[8U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[8U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[9U] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[9U];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xaU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xaU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xbU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xbU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xcU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xcU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xdU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xdU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xeU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xeU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__snapshot[0xfU] 
        = __Vdly__tb_status_uart__DOT__t64__DOT__snapshot[0xfU];
    vlSelfRef.tb_status_uart__DOT__t64__DOT__index 
        = __Vdly__tb_status_uart__DOT__t64__DOT__index;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__bitnum 
        = __Vdly__tb_status_uart__DOT__t64__DOT__bitnum;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__baud = __Vdly__tb_status_uart__DOT__t64__DOT__baud;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__shift 
        = __Vdly__tb_status_uart__DOT__t64__DOT__shift;
    vlSelfRef.tb_status_uart__DOT__t64__DOT__busy = __Vdly__tb_status_uart__DOT__t64__DOT__busy;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__interval 
        = __Vdly__tb_status_uart__DOT__t96__DOT__interval;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[1U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[1U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[2U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[2U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[3U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[3U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[4U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[4U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[5U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[5U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[6U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[6U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[7U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[7U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[8U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[8U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[9U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[9U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xaU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xaU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xbU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xbU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xcU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xcU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xdU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xdU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xeU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xeU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0xfU] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0xfU];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x10U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x10U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x11U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x11U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x12U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x12U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x13U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x13U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x14U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x14U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x15U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x15U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x16U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x16U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__snapshot[0x17U] 
        = __Vdly__tb_status_uart__DOT__t96__DOT__snapshot[0x17U];
    vlSelfRef.tb_status_uart__DOT__t96__DOT__index 
        = __Vdly__tb_status_uart__DOT__t96__DOT__index;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__bitnum 
        = __Vdly__tb_status_uart__DOT__t96__DOT__bitnum;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__baud = __Vdly__tb_status_uart__DOT__t96__DOT__baud;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__shift 
        = __Vdly__tb_status_uart__DOT__t96__DOT__shift;
    vlSelfRef.tb_status_uart__DOT__t96__DOT__busy = __Vdly__tb_status_uart__DOT__t96__DOT__busy;
}
