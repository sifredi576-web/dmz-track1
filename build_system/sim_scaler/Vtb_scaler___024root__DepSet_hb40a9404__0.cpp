// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaler.h for the primary calling header

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler__Syms.h"
#include "Vtb_scaler___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__0(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_VALUEPLUSARGS_INI(32, std::string{"w=%d"}, 
                             vlSelfRef.tb_scaler__DOT__w)) {
    }
    if (VL_VALUEPLUSARGS_INI(32, std::string{"h=%d"}, 
                             vlSelfRef.tb_scaler__DOT__h)) {
    }
    if (VL_TESTPLUSARGS_I(std::string{"rgba"})) {
        vlSelfRef.tb_scaler__DOT__bpp = 0x20U;
    }
    if (VL_TESTPLUSARGS_I(std::string{"top"})) {
        vlSelfRef.tb_scaler__DOT__top = 1U;
    }
    vlSelfRef.tb_scaler__DOT__stride = (0xfffffffcU 
                                        & ((IData)(3U) 
                                           + VL_MULS_III(32, vlSelfRef.tb_scaler__DOT__w, 
                                                         VL_DIVS_III(32, vlSelfRef.tb_scaler__DOT__bpp, (IData)(8U)))));
    vlSelfRef.tb_scaler__DOT__bytes = ((IData)(0x46U) 
                                       + VL_MULS_III(32, vlSelfRef.tb_scaler__DOT__stride, vlSelfRef.tb_scaler__DOT__h));
    vlSelfRef.tb_scaler__DOT__filebytes = (vlSelfRef.tb_scaler__DOT__bytes 
                                           - (IData)(
                                                     (VL_TESTPLUSARGS_I(
                                                                        std::string{"short"})
                                                       ? 7U
                                                       : 0U)));
    if (VL_GTES_III(32, VL_MULS_III(32, (IData)(0x1e0U), vlSelfRef.tb_scaler__DOT__w), 
                    VL_MULS_III(32, (IData)(0x280U), vlSelfRef.tb_scaler__DOT__h))) {
        vlSelfRef.tb_scaler__DOT__dw = 0x280U;
        vlSelfRef.tb_scaler__DOT__dh = VL_DIVS_III(32, 
                                                   VL_MULS_III(32, (IData)(0x280U), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__w);
        if ((0U == vlSelfRef.tb_scaler__DOT__dh)) {
            vlSelfRef.tb_scaler__DOT__dh = 1U;
        }
    } else {
        vlSelfRef.tb_scaler__DOT__dh = 0x1e0U;
        vlSelfRef.tb_scaler__DOT__dw = VL_DIVS_III(32, 
                                                   VL_MULS_III(32, (IData)(0x1e0U), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__h);
        if ((0U == vlSelfRef.tb_scaler__DOT__dw)) {
            vlSelfRef.tb_scaler__DOT__dw = 1U;
        }
    }
    vlSelfRef.tb_scaler__DOT__lx = VL_DIVS_III(32, 
                                               ((IData)(0x280U) 
                                                - vlSelfRef.tb_scaler__DOT__dw), (IData)(2U));
    vlSelfRef.tb_scaler__DOT__py0 = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                      ? VL_DIVS_III(32, 
                                                    ((IData)(0x1e0U) 
                                                     - vlSelfRef.tb_scaler__DOT__dh), (IData)(2U))
                                      : (((IData)(0x1e0U) 
                                          - vlSelfRef.tb_scaler__DOT__dh) 
                                         - VL_DIVS_III(32, 
                                                       ((IData)(0x1e0U) 
                                                        - vlSelfRef.tb_scaler__DOT__dh), (IData)(2U))));
    co_await vlSelfRef.__VtrigSched_h91202e27__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scaler.clk)", 
                                                         "sim/media\tb_scaler.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_h91202e27__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scaler.clk)", 
                                                         "sim/media\tb_scaler.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_h91202e27__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scaler.clk)", 
                                                         "sim/media\tb_scaler.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_h91202e27__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scaler.clk)", 
                                                         "sim/media\tb_scaler.sv", 
                                                         45);
    vlSelfRef.tb_scaler__DOT__reset = 0U;
    vlSelfRef.tb_scaler__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h91202e27__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_scaler.clk)", 
                                                         "sim/media\tb_scaler.sv", 
                                                         45);
    vlSelfRef.tb_scaler__DOT__start = 0U;
    if (VL_TESTPLUSARGS_I(std::string{"short"})) {
        while ((0U == (IData)(vlSelfRef.tb_scaler__DOT__error))) {
            co_await vlSelfRef.__VtrigSched_hb1e29f47__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (8'h0 != tb_scaler.error))", 
                                                                 "sim/media\tb_scaler.sv", 
                                                                 46);
        }
        if (VL_UNLIKELY((((0xaU != (IData)(vlSelfRef.tb_scaler__DOT__error)) 
                          | (0U != vlSelfRef.tb_scaler__DOT__bursts))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:46: Assertion failed in %Ntb_scaler: Short file accepted\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("sim/media\\tb_scaler.sv", 46, "", false);
        }
    } else {
        while ((1U & (~ (IData)(vlSelfRef.tb_scaler__DOT__done)))) {
            co_await vlSelfRef.__VtrigSched_h15c5c79e__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb_scaler.done)", 
                                                                 "sim/media\tb_scaler.sv", 
                                                                 47);
        }
        if (VL_UNLIKELY(((((0x4b000U != vlSelfRef.tb_scaler__DOT__pixels) 
                           | (0x4b00U != vlSelfRef.tb_scaler__DOT__bursts)) 
                          | (vlSelfRef.tb_scaler__DOT__pos 
                             != vlSelfRef.tb_scaler__DOT__bytes))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:47: Assertion failed in %Ntb_scaler: Output/source incomplete pixels=%0# bursts=%0d pos=%0d/%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_scaler__DOT__pixels,
                         32,vlSelfRef.tb_scaler__DOT__bursts,
                         32,vlSelfRef.tb_scaler__DOT__pos,
                         32,vlSelfRef.tb_scaler__DOT__bytes);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 47, "", false);
        }
    }
    VL_WRITEF_NX("PASS aspect-fit BMP %0dx%0d/%0d top=%0d padding, offset, black bars, 307200 exact pixels, backpressure\n",0,
                 32,vlSelfRef.tb_scaler__DOT__w,32,
                 vlSelfRef.tb_scaler__DOT__h,32,vlSelfRef.tb_scaler__DOT__bpp,
                 32,vlSelfRef.tb_scaler__DOT__top);
    VL_FINISH_MT("sim/media\\tb_scaler.sv", 48, "");
}

VL_INLINE_OPT VlCoroutine Vtb_scaler___024root___eval_initial__TOP__Vtiming__1(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x45d964b800ULL, 
                                         nullptr, "sim/media\tb_scaler.sv", 
                                         50);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:50: Assertion failed in %Ntb_scaler: Scaler timeout state=%0# source=%0# dest=%0#\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                 5,(IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state),
                 11,vlSelfRef.tb_scaler__DOT__dut__DOT__source_y,
                 10,(IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row));
    VL_STOP_MT("sim/media\\tb_scaler.sv", 50, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_scaler___024root___dump_triggers__act(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_scaler___024root___eval_triggers__act(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___eval_triggers__act\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h35d5581d__0;
    __Vtrigprevexpr_h35d5581d__0 = 0;
    // Body
    __Vtrigprevexpr_h35d5581d__0 = (0U != (IData)(vlSelfRef.tb_scaler__DOT__error));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_scaler__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_scaler__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(__Vtrigprevexpr_h35d5581d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h35d5581d__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_scaler__DOT__done) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__done__0)));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__clk__0 
        = vlSelfRef.tb_scaler__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h35d5581d__1 = __Vtrigprevexpr_h35d5581d__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_scaler__DOT__done__0 
        = vlSelfRef.tb_scaler__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_scaler___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<8>/*255:0*/ Vtb_scaler__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_scaler___024root___nba_sequent__TOP__0(Vtb_scaler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_scaler___024root___nba_sequent__TOP__0\n"); );
    Vtb_scaler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__expected__1__Vfuncout;
    __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__wordaddr;
    __Vfunc_tb_scaler__DOT__expected__1__wordaddr = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__x;
    __Vfunc_tb_scaler__DOT__expected__1__x = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__y;
    __Vfunc_tb_scaler__DOT__expected__1__y = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__ord;
    __Vfunc_tb_scaler__DOT__expected__1__ord = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__fx;
    __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__1__fy;
    __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__1__r;
    __Vfunc_tb_scaler__DOT__expected__1__r = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__1__g;
    __Vfunc_tb_scaler__DOT__expected__1__g = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__1__b;
    __Vfunc_tb_scaler__DOT__expected__1__b = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__expected__2__Vfuncout;
    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__wordaddr;
    __Vfunc_tb_scaler__DOT__expected__2__wordaddr = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__x;
    __Vfunc_tb_scaler__DOT__expected__2__x = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__y;
    __Vfunc_tb_scaler__DOT__expected__2__y = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__ord;
    __Vfunc_tb_scaler__DOT__expected__2__ord = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__fx;
    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__expected__2__fy;
    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__2__r;
    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__2__g;
    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
    CData/*7:0*/ __Vfunc_tb_scaler__DOT__expected__2__b;
    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__7__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__7__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__a;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__a = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__a;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__a = 0;
    SData/*10:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g;
    __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__10__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__11__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__12__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__13__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__14__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__15__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__16__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__17__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__18__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__19__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__20__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__21__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__22__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h32__23__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h32__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_scaler__DOT__dut__DOT__h16__24__Vfuncout;
    __Vfunc_tb_scaler__DOT__dut__DOT__h16__24__Vfuncout = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__ack;
    __Vdly__tb_scaler__DOT__ack = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__lr;
    __Vdly__tb_scaler__DOT__lr = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__delay_ack;
    __Vdly__tb_scaler__DOT__delay_ack = 0;
    CData/*4:0*/ __Vdly__tb_scaler__DOT__dut__DOT__state;
    __Vdly__tb_scaler__DOT__dut__DOT__state = 0;
    CData/*4:0*/ __Vdly__tb_scaler__DOT__dut__DOT__after_ack;
    __Vdly__tb_scaler__DOT__dut__DOT__after_ack = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__dut__DOT__position;
    __Vdly__tb_scaler__DOT__dut__DOT__position = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__dut__DOT__length;
    __Vdly__tb_scaler__DOT__dut__DOT__length = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__dut__DOT__offset;
    __Vdly__tb_scaler__DOT__dut__DOT__offset = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__width;
    __Vdly__tb_scaler__DOT__dut__DOT__width = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__height;
    __Vdly__tb_scaler__DOT__dut__DOT__height = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__source_x;
    __Vdly__tb_scaler__DOT__dut__DOT__source_x = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__source_y;
    __Vdly__tb_scaler__DOT__dut__DOT__source_y = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__wanted_y;
    __Vdly__tb_scaler__DOT__dut__DOT__wanted_y = 0;
    SData/*10:0*/ __Vdly__tb_scaler__DOT__dut__DOT__sample_x;
    __Vdly__tb_scaler__DOT__dut__DOT__sample_x = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__draw_w;
    __Vdly__tb_scaler__DOT__dut__DOT__draw_w = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__draw_h;
    __Vdly__tb_scaler__DOT__dut__DOT__draw_h = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__first_pad;
    __Vdly__tb_scaler__DOT__dut__DOT__first_pad = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__out_x;
    __Vdly__tb_scaler__DOT__dut__DOT__out_x = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__dest_row;
    __Vdly__tb_scaler__DOT__dut__DOT__dest_row = 0;
    SData/*9:0*/ __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows;
    __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows = 0;
    SData/*11:0*/ __Vdly__tb_scaler__DOT__dut__DOT__x_error;
    __Vdly__tb_scaler__DOT__dut__DOT__x_error = 0;
    SData/*11:0*/ __Vdly__tb_scaler__DOT__dut__DOT__y_error;
    __Vdly__tb_scaler__DOT__dut__DOT__y_error = 0;
    CData/*1:0*/ __Vdly__tb_scaler__DOT__dut__DOT__channel;
    __Vdly__tb_scaler__DOT__dut__DOT__channel = 0;
    CData/*1:0*/ __Vdly__tb_scaler__DOT__dut__DOT__padding;
    __Vdly__tb_scaler__DOT__dut__DOT__padding = 0;
    CData/*1:0*/ __Vdly__tb_scaler__DOT__dut__DOT__pad_left;
    __Vdly__tb_scaler__DOT__dut__DOT__pad_left = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__rgba;
    __Vdly__tb_scaler__DOT__dut__DOT__rgba = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__top_down;
    __Vdly__tb_scaler__DOT__dut__DOT__top_down = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__width_limited;
    __Vdly__tb_scaler__DOT__dut__DOT__width_limited = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__blank_row;
    __Vdly__tb_scaler__DOT__dut__DOT__blank_row = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__input_finished;
    __Vdly__tb_scaler__DOT__dut__DOT__input_finished = 0;
    CData/*3:0*/ __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel;
    __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel = 0;
    SData/*15:0*/ __Vdly__tb_scaler__DOT__dut__DOT__low_pixel;
    __Vdly__tb_scaler__DOT__dut__DOT__low_pixel = 0;
    IData/*17:0*/ __Vdly__tb_scaler__DOT__addr;
    __Vdly__tb_scaler__DOT__addr = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__last;
    __Vdly__tb_scaler__DOT__last = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__pixels;
    __Vdly__tb_scaler__DOT__pixels = 0;
    CData/*0:0*/ __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy;
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy = 0;
    IData/*31:0*/ __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor;
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor = 0;
    CData/*5:0*/ __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count;
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count = 0;
    SData/*15:0*/ __VdlyVal__tb_scaler__DOT__dut__DOT__row_cache__v0;
    __VdlyVal__tb_scaler__DOT__dut__DOT__row_cache__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb_scaler__DOT__dut__DOT__row_cache__v0;
    __VdlyDim0__tb_scaler__DOT__dut__DOT__row_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scaler__DOT__dut__DOT__row_cache__v0;
    __VdlySet__tb_scaler__DOT__dut__DOT__row_cache__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_scaler__DOT__dut__DOT__header__v0;
    __VdlyVal__tb_scaler__DOT__dut__DOT__header__v0 = 0;
    CData/*5:0*/ __VdlyDim0__tb_scaler__DOT__dut__DOT__header__v0;
    __VdlyDim0__tb_scaler__DOT__dut__DOT__header__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_scaler__DOT__dut__DOT__header__v0;
    __VdlySet__tb_scaler__DOT__dut__DOT__header__v0 = 0;
    // Body
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy 
        = vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__busy;
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count 
        = vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__count;
    __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor 
        = vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__divisor;
    __Vdly__tb_scaler__DOT__dut__DOT__state = vlSelfRef.tb_scaler__DOT__dut__DOT__state;
    __Vdly__tb_scaler__DOT__dut__DOT__after_ack = vlSelfRef.tb_scaler__DOT__dut__DOT__after_ack;
    __Vdly__tb_scaler__DOT__dut__DOT__position = vlSelfRef.tb_scaler__DOT__dut__DOT__position;
    __Vdly__tb_scaler__DOT__dut__DOT__length = vlSelfRef.tb_scaler__DOT__dut__DOT__length;
    __Vdly__tb_scaler__DOT__dut__DOT__offset = vlSelfRef.tb_scaler__DOT__dut__DOT__offset;
    __Vdly__tb_scaler__DOT__dut__DOT__width = vlSelfRef.tb_scaler__DOT__dut__DOT__width;
    __Vdly__tb_scaler__DOT__dut__DOT__height = vlSelfRef.tb_scaler__DOT__dut__DOT__height;
    __Vdly__tb_scaler__DOT__dut__DOT__source_x = vlSelfRef.tb_scaler__DOT__dut__DOT__source_x;
    __Vdly__tb_scaler__DOT__dut__DOT__source_y = vlSelfRef.tb_scaler__DOT__dut__DOT__source_y;
    __Vdly__tb_scaler__DOT__dut__DOT__wanted_y = vlSelfRef.tb_scaler__DOT__dut__DOT__wanted_y;
    __Vdly__tb_scaler__DOT__dut__DOT__sample_x = vlSelfRef.tb_scaler__DOT__dut__DOT__sample_x;
    __Vdly__tb_scaler__DOT__dut__DOT__draw_h = vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h;
    __Vdly__tb_scaler__DOT__dut__DOT__first_pad = vlSelfRef.tb_scaler__DOT__dut__DOT__first_pad;
    __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows = vlSelfRef.tb_scaler__DOT__dut__DOT__drawn_rows;
    __Vdly__tb_scaler__DOT__dut__DOT__x_error = vlSelfRef.tb_scaler__DOT__dut__DOT__x_error;
    __Vdly__tb_scaler__DOT__dut__DOT__y_error = vlSelfRef.tb_scaler__DOT__dut__DOT__y_error;
    __Vdly__tb_scaler__DOT__dut__DOT__channel = vlSelfRef.tb_scaler__DOT__dut__DOT__channel;
    __Vdly__tb_scaler__DOT__dut__DOT__padding = vlSelfRef.tb_scaler__DOT__dut__DOT__padding;
    __Vdly__tb_scaler__DOT__dut__DOT__pad_left = vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left;
    __Vdly__tb_scaler__DOT__dut__DOT__rgba = vlSelfRef.tb_scaler__DOT__dut__DOT__rgba;
    __Vdly__tb_scaler__DOT__dut__DOT__width_limited 
        = vlSelfRef.tb_scaler__DOT__dut__DOT__width_limited;
    __Vdly__tb_scaler__DOT__dut__DOT__input_finished 
        = vlSelfRef.tb_scaler__DOT__dut__DOT__input_finished;
    __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel = vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel;
    __Vdly__tb_scaler__DOT__dut__DOT__low_pixel = vlSelfRef.tb_scaler__DOT__dut__DOT__low_pixel;
    __Vdly__tb_scaler__DOT__addr = vlSelfRef.tb_scaler__DOT__addr;
    __Vdly__tb_scaler__DOT__last = vlSelfRef.tb_scaler__DOT__last;
    __Vdly__tb_scaler__DOT__pixels = vlSelfRef.tb_scaler__DOT__pixels;
    __Vdly__tb_scaler__DOT__dut__DOT__dest_row = vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row;
    __Vdly__tb_scaler__DOT__dut__DOT__top_down = vlSelfRef.tb_scaler__DOT__dut__DOT__top_down;
    __Vdly__tb_scaler__DOT__dut__DOT__draw_w = vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w;
    __Vdly__tb_scaler__DOT__dut__DOT__out_x = vlSelfRef.tb_scaler__DOT__dut__DOT__out_x;
    __Vdly__tb_scaler__DOT__dut__DOT__blank_row = vlSelfRef.tb_scaler__DOT__dut__DOT__blank_row;
    __VdlySet__tb_scaler__DOT__dut__DOT__header__v0 = 0U;
    __VdlySet__tb_scaler__DOT__dut__DOT__row_cache__v0 = 0U;
    __Vdly__tb_scaler__DOT__ack = vlSelfRef.tb_scaler__DOT__ack;
    __Vdly__tb_scaler__DOT__lr = vlSelfRef.tb_scaler__DOT__lr;
    __Vdly__tb_scaler__DOT__delay_ack = vlSelfRef.tb_scaler__DOT__delay_ack;
    vlSelfRef.tb_scaler__DOT__cycle = ((IData)(1U) 
                                       + vlSelfRef.tb_scaler__DOT__cycle);
    if ((((~ (IData)(vlSelfRef.tb_scaler__DOT__reset)) 
          & ((~ (IData)(vlSelfRef.tb_scaler__DOT__start)) 
             & ((1U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
                | (6U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))))) 
         & (IData)(vlSelfRef.tb_scaler__DOT__valid))) {
        vlSelfRef.tb_scaler__DOT__pos = ((IData)(1U) 
                                         + vlSelfRef.tb_scaler__DOT__pos);
    }
    __Vdly__tb_scaler__DOT__ack = 0U;
    if (((0xfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
         & (IData)(vlSelfRef.tb_scaler__DOT__lr))) {
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[0U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = vlSelfRef.tb_scaler__DOT__addr;
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = vlSelfRef.tb_scaler__DOT__addr;
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_scaler__DOT__addr,
                         32,vlSelfRef.tb_scaler__DOT__data[0U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        vlSelfRef.tb_scaler__DOT__bursts = ((IData)(1U) 
                                            + vlSelfRef.tb_scaler__DOT__bursts);
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[1U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(1U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(1U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(1U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[1U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        __Vdly__tb_scaler__DOT__lr = 0U;
        __Vdly__tb_scaler__DOT__delay_ack = 3U;
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[2U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(2U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(2U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(2U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[2U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[3U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(3U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(3U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(3U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[3U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[4U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(4U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(4U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(4U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[4U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[5U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(5U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(5U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(5U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[5U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[6U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(6U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(6U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(6U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[6U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_scaler__DOT__data[7U] 
                          != ((([&]() {
                                        __Vfunc_tb_scaler__DOT__expected__1__wordaddr 
                                            = ((IData)(7U) 
                                               + vlSelfRef.tb_scaler__DOT__addr);
                                        __Vfunc_tb_scaler__DOT__expected__1__fx = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__fy = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__r = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__g = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__b = 0;
                                        __Vfunc_tb_scaler__DOT__expected__1__x 
                                            = ((IData)(1U) 
                                               + VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U))));
                                        __Vfunc_tb_scaler__DOT__expected__1__y 
                                            = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__1__wordaddr, (IData)(0x140U));
                                        __Vfunc_tb_scaler__DOT__expected__1__ord 
                                            = ((0U 
                                                != vlSelfRef.tb_scaler__DOT__top)
                                                ? __Vfunc_tb_scaler__DOT__expected__1__y
                                                : ((IData)(0x1dfU) 
                                                   - __Vfunc_tb_scaler__DOT__expected__1__y));
                                        __Vfunc_tb_scaler__DOT__expected__1__Vfuncout = 0U;
                                        if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, vlSelfRef.tb_scaler__DOT__lx) 
                                               & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__x, 
                                                            (vlSelfRef.tb_scaler__DOT__lx 
                                                             + vlSelfRef.tb_scaler__DOT__dw))) 
                                              & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                             & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__1__ord, 
                                                          (vlSelfRef.tb_scaler__DOT__py0 
                                                           + vlSelfRef.tb_scaler__DOT__dh)))) {
                                            __Vfunc_tb_scaler__DOT__expected__1__fx 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__x 
                                                                           - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                            __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                = VL_DIVS_III(32, 
                                                              VL_MULS_III(32, 
                                                                          (__Vfunc_tb_scaler__DOT__expected__1__ord 
                                                                           - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                            if ((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.tb_scaler__DOT__top))))) {
                                                __Vfunc_tb_scaler__DOT__expected__1__fy 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__h 
                                                      - (IData)(1U)) 
                                                     - __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            }
                                            __Vfunc_tb_scaler__DOT__expected__1__b 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fx);
                                            __Vfunc_tb_scaler__DOT__expected__1__g 
                                                = (0xffU 
                                                   & __Vfunc_tb_scaler__DOT__expected__1__fy);
                                            __Vfunc_tb_scaler__DOT__expected__1__r 
                                                = (0xffU 
                                                   & (__Vfunc_tb_scaler__DOT__expected__1__fx 
                                                      ^ __Vfunc_tb_scaler__DOT__expected__1__fy));
                                            __Vfunc_tb_scaler__DOT__expected__1__Vfuncout 
                                                = (
                                                   (0xf800U 
                                                    & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__r) 
                                                       << 8U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__g) 
                                                          << 3U)) 
                                                      | (0x1fU 
                                                         & ((IData)(__Vfunc_tb_scaler__DOT__expected__1__b) 
                                                            >> 3U))));
                                        }
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__expected__1__Vfuncout)) 
                               << 0x10U) | ([&]() {
                                    __Vfunc_tb_scaler__DOT__expected__2__wordaddr 
                                        = ((IData)(7U) 
                                           + vlSelfRef.tb_scaler__DOT__addr);
                                    __Vfunc_tb_scaler__DOT__expected__2__fx = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__fy = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__r = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__g = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__b = 0;
                                    __Vfunc_tb_scaler__DOT__expected__2__x 
                                        = VL_MULS_III(32, (IData)(2U), 
                                                      VL_MODDIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U)));
                                    __Vfunc_tb_scaler__DOT__expected__2__y 
                                        = VL_DIVS_III(32, __Vfunc_tb_scaler__DOT__expected__2__wordaddr, (IData)(0x140U));
                                    __Vfunc_tb_scaler__DOT__expected__2__ord 
                                        = ((0U != vlSelfRef.tb_scaler__DOT__top)
                                            ? __Vfunc_tb_scaler__DOT__expected__2__y
                                            : ((IData)(0x1dfU) 
                                               - __Vfunc_tb_scaler__DOT__expected__2__y));
                                    __Vfunc_tb_scaler__DOT__expected__2__Vfuncout = 0U;
                                    if ((((VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, vlSelfRef.tb_scaler__DOT__lx) 
                                           & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__x, 
                                                        (vlSelfRef.tb_scaler__DOT__lx 
                                                         + vlSelfRef.tb_scaler__DOT__dw))) 
                                          & VL_GTES_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, vlSelfRef.tb_scaler__DOT__py0)) 
                                         & VL_LTS_III(32, __Vfunc_tb_scaler__DOT__expected__2__ord, 
                                                      (vlSelfRef.tb_scaler__DOT__py0 
                                                       + vlSelfRef.tb_scaler__DOT__dh)))) {
                                        __Vfunc_tb_scaler__DOT__expected__2__fx 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__x 
                                                                       - vlSelfRef.tb_scaler__DOT__lx), vlSelfRef.tb_scaler__DOT__w), vlSelfRef.tb_scaler__DOT__dw);
                                        __Vfunc_tb_scaler__DOT__expected__2__fy 
                                            = VL_DIVS_III(32, 
                                                          VL_MULS_III(32, 
                                                                      (__Vfunc_tb_scaler__DOT__expected__2__ord 
                                                                       - vlSelfRef.tb_scaler__DOT__py0), vlSelfRef.tb_scaler__DOT__h), vlSelfRef.tb_scaler__DOT__dh);
                                        if ((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelfRef.tb_scaler__DOT__top))))) {
                                            __Vfunc_tb_scaler__DOT__expected__2__fy 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__h 
                                                    - (IData)(1U)) 
                                                   - __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        }
                                        __Vfunc_tb_scaler__DOT__expected__2__b 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fx);
                                        __Vfunc_tb_scaler__DOT__expected__2__g 
                                            = (0xffU 
                                               & __Vfunc_tb_scaler__DOT__expected__2__fy);
                                        __Vfunc_tb_scaler__DOT__expected__2__r 
                                            = (0xffU 
                                               & (__Vfunc_tb_scaler__DOT__expected__2__fx 
                                                  ^ __Vfunc_tb_scaler__DOT__expected__2__fy));
                                        __Vfunc_tb_scaler__DOT__expected__2__Vfuncout 
                                            = ((0xf800U 
                                                & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__r) 
                                                   << 8U)) 
                                               | ((0x7e0U 
                                                   & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__g) 
                                                      << 3U)) 
                                                  | (0x1fU 
                                                     & ((IData)(__Vfunc_tb_scaler__DOT__expected__2__b) 
                                                        >> 3U))));
                                    }
                                }(), (IData)(__Vfunc_tb_scaler__DOT__expected__2__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:32: Assertion failed in %Ntb_scaler.unnamedblk1: Scaled pixel mismatch %0# got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,((IData)(7U) 
                                                + vlSelfRef.tb_scaler__DOT__addr),
                         32,vlSelfRef.tb_scaler__DOT__data[7U]);
            VL_STOP_MT("sim/media\\tb_scaler.sv", 32, "", false);
        }
    }
    if (VL_LTS_III(32, 0U, vlSelfRef.tb_scaler__DOT__delay_ack)) {
        __Vdly__tb_scaler__DOT__delay_ack = (vlSelfRef.tb_scaler__DOT__delay_ack 
                                             - (IData)(1U));
        if ((1U == vlSelfRef.tb_scaler__DOT__delay_ack)) {
            __Vdly__tb_scaler__DOT__ack = 1U;
            __Vdly__tb_scaler__DOT__lr = 1U;
        }
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelfRef.tb_scaler__DOT__error)) 
                      & (! VL_TESTPLUSARGS_I(std::string{"short"})))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_scaler.sv:36: Assertion failed in %Ntb_scaler: Decoder error %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelfRef.tb_scaler__DOT__error));
        VL_STOP_MT("sim/media\\tb_scaler.sv", 36, "", false);
    }
    vlSelfRef.tb_scaler__DOT__dut__DOT__row_q = vlSelfRef.tb_scaler__DOT__dut__DOT__row_cache
        [([&]() {
            __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__a 
                = vlSelfRef.tb_scaler__DOT__dut__DOT__sample_x;
            __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g 
                = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__a), 1U) 
                             ^ (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__a)));
            __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g 
                = ((0x3ffU & (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g)) 
                   | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g)) 
                                ^ ((IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g) 
                                   << 0xaU))));
            __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__Vfuncout 
                = __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__g;
        }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__8__Vfuncout))];
    if ((((((((~ (IData)(vlSelfRef.tb_scaler__DOT__reset)) 
              & (~ (IData)(vlSelfRef.tb_scaler__DOT__start))) 
             & (6U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
            & (IData)(vlSelfRef.tb_scaler__DOT__valid)) 
           & (vlSelfRef.tb_scaler__DOT__dut__DOT__position 
              >= vlSelfRef.tb_scaler__DOT__dut__DOT__offset)) 
          & (0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left))) 
         & (2U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__channel)))) {
        __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__a 
            = vlSelfRef.tb_scaler__DOT__dut__DOT__source_x;
        __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g 
            = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__a), 1U) 
                         ^ (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__a)));
        __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g 
            = ((0x3ffU & (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g)) 
               | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g)) 
                            ^ ((IData)(__Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g) 
                               << 0xaU))));
        __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__Vfuncout 
            = __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__g;
        __VdlyVal__tb_scaler__DOT__dut__DOT__row_cache__v0 
            = ((0xf800U & ((IData)(vlSelfRef.tb_scaler__DOT__bd) 
                           << 8U)) | ((0x7e0U & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__green) 
                                                 << 3U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__blue) 
                                                  >> 3U))));
        __VdlyDim0__tb_scaler__DOT__dut__DOT__row_cache__v0 
            = __Vfunc_tb_scaler__DOT__dut__DOT__row_addr__9__Vfuncout;
        __VdlySet__tb_scaler__DOT__dut__DOT__row_cache__v0 = 1U;
    }
    vlSelfRef.tb_scaler__DOT__delay_ack = __Vdly__tb_scaler__DOT__delay_ack;
    if (__VdlySet__tb_scaler__DOT__dut__DOT__row_cache__v0) {
        vlSelfRef.tb_scaler__DOT__dut__DOT__row_cache[__VdlyDim0__tb_scaler__DOT__dut__DOT__row_cache__v0] 
            = __VdlyVal__tb_scaler__DOT__dut__DOT__row_cache__v0;
    }
    if (((IData)(vlSelfRef.tb_scaler__DOT__reset) | (IData)(vlSelfRef.tb_scaler__DOT__start))) {
        __Vdly__tb_scaler__DOT__dut__DOT__state = ((IData)(vlSelfRef.tb_scaler__DOT__start)
                                                    ? 1U
                                                    : 0U);
        __Vdly__tb_scaler__DOT__dut__DOT__after_ack = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__position = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__length = vlSelfRef.tb_scaler__DOT__filebytes;
        __Vdly__tb_scaler__DOT__dut__DOT__offset = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__width = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__height = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__source_x = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__source_y = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__wanted_y = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__sample_x = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__draw_w = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__draw_h = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__first_pad = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__out_x = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__dest_row = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__x_error = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__y_error = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__channel = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__padding = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__pad_left = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__blue = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__green = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__rgba = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__top_down = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__width_limited = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__blank_row = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__input_finished = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__low_pixel = 0U;
        __Vdly__tb_scaler__DOT__addr = 0U;
        vlSelfRef.tb_scaler__DOT__data[0U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_scaler__DOT__data[1U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_scaler__DOT__data[2U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_scaler__DOT__data[3U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_scaler__DOT__data[4U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_scaler__DOT__data[5U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_scaler__DOT__data[6U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_scaler__DOT__data[7U] = Vtb_scaler__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__tb_scaler__DOT__last = 0U;
        vlSelfRef.tb_scaler__DOT__done = 0U;
        __Vdly__tb_scaler__DOT__pixels = 0U;
        vlSelfRef.tb_scaler__DOT__error = 0U;
        if (((IData)(vlSelfRef.tb_scaler__DOT__start) 
             & (0x36U > vlSelfRef.tb_scaler__DOT__filebytes))) {
            vlSelfRef.tb_scaler__DOT__error = 0xaU;
            __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
        }
    } else if (((((((((((0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
                        || (0x11U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                       || (0x1fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                      | (1U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                     | (2U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                    | (3U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                   | (4U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                  | (5U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                 | (6U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                | (7U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)))) {
        if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
                       || (0x11U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                      || (0x1fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)))))) {
            if ((1U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_scaler__DOT__valid) {
                    vlSelfRef.tb_scaler__DOT__dut__DOT____Vlvbound_h2fb5cc83__0 
                        = vlSelfRef.tb_scaler__DOT__bd;
                    if (VL_LIKELY(((0x35U >= (0x3fU 
                                              & vlSelfRef.tb_scaler__DOT__dut__DOT__position))))) {
                        __VdlyVal__tb_scaler__DOT__dut__DOT__header__v0 
                            = vlSelfRef.tb_scaler__DOT__dut__DOT____Vlvbound_h2fb5cc83__0;
                        __VdlyDim0__tb_scaler__DOT__dut__DOT__header__v0 
                            = (0x3fU & vlSelfRef.tb_scaler__DOT__dut__DOT__position);
                        __VdlySet__tb_scaler__DOT__dut__DOT__header__v0 = 1U;
                    }
                    __Vdly__tb_scaler__DOT__dut__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_scaler__DOT__dut__DOT__position);
                    if ((0x35U == vlSelfRef.tb_scaler__DOT__dut__DOT__position)) {
                        __Vdly__tb_scaler__DOT__dut__DOT__state = 2U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                if (((((0x4d42U != ([&]() {
                                            __Vfunc_tb_scaler__DOT__dut__DOT__h16__10__Vfuncout 
                                                = (
                                                   (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0U]);
                                        }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__10__Vfuncout))) 
                       | (0x28U > ([&]() {
                                            __Vfunc_tb_scaler__DOT__dut__DOT__h32__11__Vfuncout 
                                                = (
                                                   ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                     [0x11U] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                       [0x10U] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                       [0xfU] 
                                                       << 8U) 
                                                      | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                      [0xeU]));
                                        }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__11__Vfuncout))) 
                      | (1U != ([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h16__12__Vfuncout 
                                            = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                [0x1bU] 
                                                << 8U) 
                                               | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                               [0x1aU]);
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__12__Vfuncout)))) 
                     | (0U != ([&]() {
                                    __Vfunc_tb_scaler__DOT__dut__DOT__h32__13__Vfuncout 
                                        = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                             [0x21U] 
                                             << 0x18U) 
                                            | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                               [0x20U] 
                                               << 0x10U)) 
                                           | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                               [0x1fU] 
                                               << 8U) 
                                              | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                              [0x1eU]));
                                }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__13__Vfuncout)))) {
                    vlSelfRef.tb_scaler__DOT__error = 8U;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
                } else if ((((((1U > ([&]() {
                                                __Vfunc_tb_scaler__DOT__dut__DOT__h32__14__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__14__Vfuncout)) 
                               | (0x780U < ([&]() {
                                                __Vfunc_tb_scaler__DOT__dut__DOT__h32__15__Vfuncout 
                                                    = 
                                                    (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                       [0x15U] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                         [0x14U] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                         [0x13U] 
                                                         << 8U) 
                                                        | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                        [0x12U]));
                                            }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__15__Vfuncout))) 
                              | (1U > vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height)) 
                             | (0x438U < vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height)) 
                            | ((0x18U != ([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h16__16__Vfuncout 
                                            = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__16__Vfuncout))) 
                               & (0x20U != ([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h16__17__Vfuncout 
                                            = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                [0x1dU] 
                                                << 8U) 
                                               | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                               [0x1cU]);
                                    }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__17__Vfuncout)))))) {
                    vlSelfRef.tb_scaler__DOT__error = 9U;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
                } else if ((((0x36U > ([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h32__18__Vfuncout 
                                            = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__18__Vfuncout)) 
                             | (0x100000U < ([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h32__19__Vfuncout 
                                            = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                 [0xdU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0xcU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0xbU] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                  [0xaU]));
                                    }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__19__Vfuncout))) 
                            | ((QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__length)) 
                               < vlSelfRef.tb_scaler__DOT__dut__DOT__required_end))) {
                    vlSelfRef.tb_scaler__DOT__error = 0xaU;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
                } else {
                    __Vfunc_tb_scaler__DOT__dut__DOT__h32__20__Vfuncout 
                        = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                             [0xdU] << 0x18U) | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                 [0xcU] 
                                                 << 0x10U)) 
                           | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                               [0xbU] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                              [0xaU]));
                    __Vdly__tb_scaler__DOT__dut__DOT__offset 
                        = __Vfunc_tb_scaler__DOT__dut__DOT__h32__20__Vfuncout;
                    __Vdly__tb_scaler__DOT__dut__DOT__height 
                        = (0x7ffU & vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height);
                    __Vdly__tb_scaler__DOT__dut__DOT__width_limited 
                        = (((IData)(0x1e0U) * (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width)) 
                           >= ((IData)(0x280U) * (0x7ffU 
                                                  & vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height)));
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 3U;
                    __Vdly__tb_scaler__DOT__dut__DOT__width 
                        = (0x7ffU & ([&]() {
                                __Vfunc_tb_scaler__DOT__dut__DOT__h32__21__Vfuncout 
                                    = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                         [0x15U] << 0x18U) 
                                        | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                           [0x14U] 
                                           << 0x10U)) 
                                       | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                           [0x13U] 
                                           << 8U) | 
                                          vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                          [0x12U]));
                            }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__21__Vfuncout));
                    __Vdly__tb_scaler__DOT__dut__DOT__rgba 
                        = (0x20U == ([&]() {
                                __Vfunc_tb_scaler__DOT__dut__DOT__h16__22__Vfuncout 
                                    = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                        [0x1dU] << 8U) 
                                       | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                       [0x1cU]);
                            }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__22__Vfuncout)));
                    __Vdly__tb_scaler__DOT__dut__DOT__top_down 
                        = (1U & (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                 [0x19U] >> 7U));
                    __Vdly__tb_scaler__DOT__dut__DOT__padding 
                        = (3U & ((0x1ffcU & ((IData)(3U) 
                                             + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__row_bytes))) 
                                 - (([&]() {
                                        __Vfunc_tb_scaler__DOT__dut__DOT__h32__23__Vfuncout 
                                            = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                 [0x15U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0x14U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                   [0x13U] 
                                                   << 8U) 
                                                  | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                  [0x12U]));
                                    }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__23__Vfuncout) 
                                    * ((0x20U == ([&]() {
                                                __Vfunc_tb_scaler__DOT__dut__DOT__h16__24__Vfuncout 
                                                    = 
                                                    ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                      [0x1dU] 
                                                      << 8U) 
                                                     | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                                     [0x1cU]);
                                            }(), (IData)(__Vfunc_tb_scaler__DOT__dut__DOT__h16__24__Vfuncout)))
                                        ? 4U : 3U))));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                __Vdly__tb_scaler__DOT__dut__DOT__state = 4U;
            } else if ((4U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_scaler__DOT__dut__DOT__divider_done) {
                    if (vlSelfRef.tb_scaler__DOT__dut__DOT__width_limited) {
                        __Vdly__tb_scaler__DOT__dut__DOT__draw_w = 0x280U;
                        __Vdly__tb_scaler__DOT__dut__DOT__draw_h 
                            = ((0U == vlSelfRef.tb_scaler__DOT__dut__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_scaler__DOT__dut__DOT__scaled));
                    } else {
                        __Vdly__tb_scaler__DOT__dut__DOT__draw_w 
                            = ((0U == vlSelfRef.tb_scaler__DOT__dut__DOT__scaled)
                                ? 1U : (0x3ffU & vlSelfRef.tb_scaler__DOT__dut__DOT__scaled));
                        __Vdly__tb_scaler__DOT__dut__DOT__draw_h = 0x1e0U;
                    }
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad 
                    = (0x3ffU & (((IData)(0x280U) - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w)) 
                                 >> 1U));
                __Vdly__tb_scaler__DOT__dut__DOT__first_pad 
                    = (0x3ffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__top_down)
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  ((IData)(0x1e0U) 
                                                   - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)), 1U)
                                  : (((IData)(0x1e0U) 
                                      - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)) 
                                     - VL_SHIFTR_III(32,32,32, 
                                                     ((IData)(0x1e0U) 
                                                      - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)), 1U))));
                if ((0U != ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__top_down)
                             ? VL_SHIFTR_III(32,32,32, 
                                             ((IData)(0x1e0U) 
                                              - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)), 1U)
                             : (((IData)(0x1e0U) - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)) 
                                - VL_SHIFTR_III(32,32,32, 
                                                ((IData)(0x1e0U) 
                                                 - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)), 1U))))) {
                    __Vdly__tb_scaler__DOT__dut__DOT__blank_row = 1U;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 8U;
                } else {
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_scaler__DOT__valid) {
                    __Vdly__tb_scaler__DOT__dut__DOT__position 
                        = ((IData)(1U) + vlSelfRef.tb_scaler__DOT__dut__DOT__position);
                    if ((vlSelfRef.tb_scaler__DOT__dut__DOT__position 
                         >= vlSelfRef.tb_scaler__DOT__dut__DOT__length)) {
                        vlSelfRef.tb_scaler__DOT__error = 7U;
                        __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
                    } else if ((vlSelfRef.tb_scaler__DOT__dut__DOT__position 
                                >= vlSelfRef.tb_scaler__DOT__dut__DOT__offset)) {
                        if ((0U != (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left))) {
                            __Vdly__tb_scaler__DOT__dut__DOT__pad_left 
                                = (3U & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left) 
                                         - (IData)(1U)));
                            if ((1U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left))) {
                                __Vdly__tb_scaler__DOT__dut__DOT__state = 7U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__channel))) {
                            vlSelfRef.tb_scaler__DOT__dut__DOT__blue 
                                = vlSelfRef.tb_scaler__DOT__bd;
                            __Vdly__tb_scaler__DOT__dut__DOT__channel = 1U;
                        } else if ((1U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__channel))) {
                            vlSelfRef.tb_scaler__DOT__dut__DOT__green 
                                = vlSelfRef.tb_scaler__DOT__bd;
                            __Vdly__tb_scaler__DOT__dut__DOT__channel = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__channel))) {
                            __Vdly__tb_scaler__DOT__dut__DOT__channel 
                                = ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__rgba)
                                    ? 3U : 0U);
                            if ((1U & (~ (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__rgba)))) {
                                if ((((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_x)) 
                                     == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__width))) {
                                    __Vdly__tb_scaler__DOT__dut__DOT__source_x = 0U;
                                    __Vdly__tb_scaler__DOT__dut__DOT__pad_left 
                                        = vlSelfRef.tb_scaler__DOT__dut__DOT__padding;
                                    if ((0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__padding))) {
                                        __Vdly__tb_scaler__DOT__dut__DOT__state = 7U;
                                    }
                                } else {
                                    __Vdly__tb_scaler__DOT__dut__DOT__source_x 
                                        = (0x7ffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_x)));
                                }
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__channel))) {
                            __Vdly__tb_scaler__DOT__dut__DOT__channel = 0U;
                            if ((((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_x)) 
                                 == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__width))) {
                                __Vdly__tb_scaler__DOT__dut__DOT__source_x = 0U;
                                __Vdly__tb_scaler__DOT__dut__DOT__pad_left 
                                    = vlSelfRef.tb_scaler__DOT__dut__DOT__padding;
                                if ((0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__padding))) {
                                    __Vdly__tb_scaler__DOT__dut__DOT__state = 7U;
                                }
                            } else {
                                __Vdly__tb_scaler__DOT__dut__DOT__source_x 
                                    = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_x)));
                            }
                        }
                    }
                }
            } else if ((((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__drawn_rows) 
                         < (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)) 
                        & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_y) 
                           == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__wanted_y)))) {
                __Vdly__tb_scaler__DOT__dut__DOT__blank_row = 0U;
                __Vdly__tb_scaler__DOT__dut__DOT__state = 8U;
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__state = 0xeU;
            }
        }
    } else if (((((((((8U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
                      | (9U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                     | (0xaU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                    | (0xbU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                   | (0xfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                  | (0x10U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                 | (0xcU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) 
                | (0xdU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)))) {
        if ((8U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            __Vdly__tb_scaler__DOT__dut__DOT__out_x = 0U;
            __Vdly__tb_scaler__DOT__dut__DOT__sample_x = 0U;
            __Vdly__tb_scaler__DOT__dut__DOT__x_error = 0U;
            __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel = 0U;
            __Vdly__tb_scaler__DOT__addr = (0x3ffffU 
                                            & (VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__actual_y), 8U) 
                                               + VL_SHIFTL_III(18,32,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__actual_y), 6U)));
            __Vdly__tb_scaler__DOT__dut__DOT__state = 9U;
        } else if ((9U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            __Vdly__tb_scaler__DOT__dut__DOT__state = 0xaU;
        } else if ((0xaU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            __Vdly__tb_scaler__DOT__pixels = ((IData)(1U) 
                                              + vlSelfRef.tb_scaler__DOT__pixels);
            if (vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x) {
                __Vdly__tb_scaler__DOT__dut__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__x_error) 
                                 + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__width)));
            }
            if ((1U & (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel))) {
                VL_ASSIGNSEL_WI(256,32,(0xe0U & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel) 
                                                 << 4U)), vlSelfRef.tb_scaler__DOT__data, 
                                (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__sample565) 
                                  << 0x10U) | (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__low_pixel)));
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__low_pixel 
                    = vlSelfRef.tb_scaler__DOT__dut__DOT__sample565;
            }
            __Vdly__tb_scaler__DOT__dut__DOT__out_x 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x)));
            __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel)));
            if ((0xfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel))) {
                __Vdly__tb_scaler__DOT__dut__DOT__after_ack 
                    = ((0x27fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x))
                        ? 0xcU : ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x)
                                   ? 0xbU : 9U));
                if ((((0x1dfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)) 
                      & (0x27fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x))) 
                     & (~ (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__input_finished)))) {
                    __Vdly__tb_scaler__DOT__dut__DOT__dest_row = 0x1e0U;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0xeU;
                } else {
                    __Vdly__tb_scaler__DOT__last = 
                        ((0x1dfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)) 
                         & (0x27fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x)));
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0xfU;
                }
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__state 
                    = ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x)
                        ? 0xbU : 9U);
            }
        } else if ((0xbU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            if (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__x_error) 
                 >= (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w))) {
                __Vdly__tb_scaler__DOT__dut__DOT__x_error 
                    = (0xfffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__x_error) 
                                 - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w)));
                __Vdly__tb_scaler__DOT__dut__DOT__sample_x 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__sample_x)));
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__state = 9U;
            }
        } else if ((0xfU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_scaler__DOT__lr) {
                __Vdly__tb_scaler__DOT__dut__DOT__state = 0x10U;
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_scaler__DOT__ack) {
                if (vlSelfRef.tb_scaler__DOT__last) {
                    vlSelfRef.tb_scaler__DOT__done = 1U;
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0x11U;
                } else {
                    __Vdly__tb_scaler__DOT__addr = 
                        (0x3ffffU & ((IData)(8U) + vlSelfRef.tb_scaler__DOT__addr));
                    __Vdly__tb_scaler__DOT__dut__DOT__state 
                        = vlSelfRef.tb_scaler__DOT__dut__DOT__after_ack;
                }
            }
        } else if ((0xcU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
            __Vdly__tb_scaler__DOT__dut__DOT__dest_row 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)));
            if (vlSelfRef.tb_scaler__DOT__dut__DOT__blank_row) {
                __Vdly__tb_scaler__DOT__dut__DOT__state 
                    = ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__input_finished)
                        ? 8U : ((((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)) 
                                 < (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__first_pad))
                                 ? 8U : 6U));
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__drawn_rows)));
                if ((((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__drawn_rows)) 
                     >= (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h))) {
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0xeU;
                } else {
                    __Vdly__tb_scaler__DOT__dut__DOT__y_error 
                        = (0xfffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__y_error) 
                                     + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__height)));
                    __Vdly__tb_scaler__DOT__dut__DOT__state = 0xdU;
                }
            }
        } else if (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__y_error) 
                    >= (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h))) {
            __Vdly__tb_scaler__DOT__dut__DOT__y_error 
                = (0xfffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__y_error) 
                             - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h)));
            __Vdly__tb_scaler__DOT__dut__DOT__wanted_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__wanted_y)));
        } else {
            __Vdly__tb_scaler__DOT__dut__DOT__state 
                = (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__wanted_y) 
                    == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_y))
                    ? 8U : 0xeU);
        }
    } else if ((0xeU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state))) {
        if ((((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_y)) 
             < (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__height))) {
            __Vdly__tb_scaler__DOT__dut__DOT__source_y 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__source_y)));
            __Vdly__tb_scaler__DOT__dut__DOT__state = 6U;
        } else {
            __Vdly__tb_scaler__DOT__dut__DOT__input_finished = 1U;
            if ((0x1e0U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row))) {
                __Vdly__tb_scaler__DOT__last = 1U;
                __Vdly__tb_scaler__DOT__dut__DOT__state = 0xfU;
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__blank_row = 1U;
                __Vdly__tb_scaler__DOT__dut__DOT__state = 8U;
            }
        }
    } else {
        vlSelfRef.tb_scaler__DOT__error = 0xffU;
        __Vdly__tb_scaler__DOT__dut__DOT__state = 0x1fU;
    }
    vlSelfRef.tb_scaler__DOT__ack = __Vdly__tb_scaler__DOT__ack;
    vlSelfRef.tb_scaler__DOT__dut__DOT__after_ack = __Vdly__tb_scaler__DOT__dut__DOT__after_ack;
    vlSelfRef.tb_scaler__DOT__dut__DOT__length = __Vdly__tb_scaler__DOT__dut__DOT__length;
    vlSelfRef.tb_scaler__DOT__dut__DOT__source_y = __Vdly__tb_scaler__DOT__dut__DOT__source_y;
    vlSelfRef.tb_scaler__DOT__dut__DOT__wanted_y = __Vdly__tb_scaler__DOT__dut__DOT__wanted_y;
    vlSelfRef.tb_scaler__DOT__dut__DOT__draw_h = __Vdly__tb_scaler__DOT__dut__DOT__draw_h;
    vlSelfRef.tb_scaler__DOT__dut__DOT__first_pad = __Vdly__tb_scaler__DOT__dut__DOT__first_pad;
    vlSelfRef.tb_scaler__DOT__dut__DOT__drawn_rows 
        = __Vdly__tb_scaler__DOT__dut__DOT__drawn_rows;
    vlSelfRef.tb_scaler__DOT__dut__DOT__x_error = __Vdly__tb_scaler__DOT__dut__DOT__x_error;
    vlSelfRef.tb_scaler__DOT__dut__DOT__y_error = __Vdly__tb_scaler__DOT__dut__DOT__y_error;
    vlSelfRef.tb_scaler__DOT__dut__DOT__padding = __Vdly__tb_scaler__DOT__dut__DOT__padding;
    vlSelfRef.tb_scaler__DOT__dut__DOT__rgba = __Vdly__tb_scaler__DOT__dut__DOT__rgba;
    vlSelfRef.tb_scaler__DOT__dut__DOT__input_finished 
        = __Vdly__tb_scaler__DOT__dut__DOT__input_finished;
    vlSelfRef.tb_scaler__DOT__dut__DOT__burst_pixel 
        = __Vdly__tb_scaler__DOT__dut__DOT__burst_pixel;
    vlSelfRef.tb_scaler__DOT__dut__DOT__low_pixel = __Vdly__tb_scaler__DOT__dut__DOT__low_pixel;
    vlSelfRef.tb_scaler__DOT__last = __Vdly__tb_scaler__DOT__last;
    vlSelfRef.tb_scaler__DOT__pixels = __Vdly__tb_scaler__DOT__pixels;
    vlSelfRef.tb_scaler__DOT__dut__DOT__position = __Vdly__tb_scaler__DOT__dut__DOT__position;
    vlSelfRef.tb_scaler__DOT__dut__DOT__offset = __Vdly__tb_scaler__DOT__dut__DOT__offset;
    vlSelfRef.tb_scaler__DOT__dut__DOT__pad_left = __Vdly__tb_scaler__DOT__dut__DOT__pad_left;
    vlSelfRef.tb_scaler__DOT__dut__DOT__channel = __Vdly__tb_scaler__DOT__dut__DOT__channel;
    vlSelfRef.tb_scaler__DOT__dut__DOT__source_x = __Vdly__tb_scaler__DOT__dut__DOT__source_x;
    vlSelfRef.tb_scaler__DOT__dut__DOT__sample_x = __Vdly__tb_scaler__DOT__dut__DOT__sample_x;
    vlSelfRef.tb_scaler__DOT__lr = __Vdly__tb_scaler__DOT__lr;
    vlSelfRef.tb_scaler__DOT__addr = __Vdly__tb_scaler__DOT__addr;
    vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row = __Vdly__tb_scaler__DOT__dut__DOT__dest_row;
    vlSelfRef.tb_scaler__DOT__dut__DOT__top_down = __Vdly__tb_scaler__DOT__dut__DOT__top_down;
    vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w = __Vdly__tb_scaler__DOT__dut__DOT__draw_w;
    vlSelfRef.tb_scaler__DOT__dut__DOT__out_x = __Vdly__tb_scaler__DOT__dut__DOT__out_x;
    vlSelfRef.tb_scaler__DOT__dut__DOT__blank_row = __Vdly__tb_scaler__DOT__dut__DOT__blank_row;
    vlSelfRef.tb_scaler__DOT__dut__DOT__actual_y = 
        (0x3ffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__top_down)
                    ? (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row)
                    : ((IData)(0x1dfU) - (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__dest_row))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x = 
        ((~ (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__blank_row)) 
         & (((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x) 
             >= (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad)) 
            & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__out_x) 
               < (0x3ffU & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__draw_w) 
                            + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__left_pad))))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__required_end 
        = ((IData)(vlSelfRef.tb_scaler__DOT__reset)
            ? 0ULL : (0x1ffffffffULL & (VL_EXTEND_QI(33,32, 
                                                     ([&]() {
                            __Vfunc_tb_scaler__DOT__dut__DOT__h32__7__Vfuncout 
                                = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                     [0xdU] << 0x18U) 
                                    | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                       [0xcU] << 0x10U)) 
                                   | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                       [0xbU] << 8U) 
                                      | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                      [0xaU]));
                        }(), __Vfunc_tb_scaler__DOT__dut__DOT__h32__7__Vfuncout)) 
                                        + ((QData)((IData)(
                                                           (0x1ffcU 
                                                            & ((IData)(3U) 
                                                               + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__row_bytes))))) 
                                           * (QData)((IData)(
                                                             (0x7ffU 
                                                              & vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height)))))));
    if (vlSelfRef.tb_scaler__DOT__reset) {
        __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__divider_done = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__scaled = 0U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift = 0U;
        __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor = 1U;
        vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__rem = 0ULL;
        __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count = 0U;
    } else {
        vlSelfRef.tb_scaler__DOT__dut__DOT__divider_done = 0U;
        if (((3U == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__state)) 
             & (~ (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__busy)))) {
            __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy = 1U;
            if (vlSelfRef.tb_scaler__DOT__dut__DOT__width_limited) {
                vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
                    = ((IData)(0x280U) * (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__height));
                __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_scaler__DOT__dut__DOT__width;
            } else {
                vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
                    = ((IData)(0x1e0U) * (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__width));
                __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor 
                    = vlSelfRef.tb_scaler__DOT__dut__DOT__height;
            }
            vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__rem = 0ULL;
            __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count = 0U;
        } else if (vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__busy) {
            vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
                = vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__next_shift;
            vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__rem 
                = (0x1ffffffffULL & ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__take)
                                      ? (vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial 
                                         - (QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__divisor)))
                                      : vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial));
            if ((0x1fU == (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__count))) {
                vlSelfRef.tb_scaler__DOT__dut__DOT__scaled 
                    = vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__next_shift;
                __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy = 0U;
                vlSelfRef.tb_scaler__DOT__dut__DOT__divider_done = 1U;
            } else {
                __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__count)));
            }
        }
    }
    vlSelfRef.tb_scaler__DOT__dut__DOT__sample565 = 
        ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__inside_x)
          ? (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__row_q)
          : 0U);
    if (__VdlySet__tb_scaler__DOT__dut__DOT__header__v0) {
        vlSelfRef.tb_scaler__DOT__dut__DOT__header[__VdlyDim0__tb_scaler__DOT__dut__DOT__header__v0] 
            = __VdlyVal__tb_scaler__DOT__dut__DOT__header__v0;
    }
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__busy 
        = __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__busy;
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__count 
        = __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__count;
    vlSelfRef.tb_scaler__DOT__dut__DOT__width_limited 
        = __Vdly__tb_scaler__DOT__dut__DOT__width_limited;
    vlSelfRef.tb_scaler__DOT__dut__DOT__height = __Vdly__tb_scaler__DOT__dut__DOT__height;
    vlSelfRef.tb_scaler__DOT__dut__DOT__width = __Vdly__tb_scaler__DOT__dut__DOT__width;
    vlSelfRef.tb_scaler__DOT__dut__DOT__state = __Vdly__tb_scaler__DOT__dut__DOT__state;
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__divisor 
        = __Vdly__tb_scaler__DOT__dut__DOT__divider__DOT__divisor;
    vlSelfRef.tb_scaler__DOT__dut__DOT__abs_height 
        = ((0x80U & vlSelfRef.tb_scaler__DOT__dut__DOT__header
            [0x19U]) ? ((IData)(1U) + (~ ([&]() {
                        vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout 
                            = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                 [0x19U] << 0x18U) 
                                | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                   [0x18U] << 0x10U)) 
                               | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                   [0x17U] << 8U) | 
                                  vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                  [0x16U]));
                    }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__3__Vfuncout)))
            : ([&]() {
                vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout 
                    = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                         [0x19U] << 0x18U) | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                              [0x18U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                           [0x17U] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                          [0x16U]));
            }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__4__Vfuncout));
    vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width = 
        (0x7ffU & ([&]() {
                vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout 
                    = (((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                         [0x15U] << 0x18U) | (vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                              [0x14U] 
                                              << 0x10U)) 
                       | ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                           [0x13U] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                          [0x12U]));
            }(), vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h32__5__Vfuncout));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial 
        = (((QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__rem)) 
            << 1U) | (QData)((IData)((vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
                                      >> 0x1fU))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__row_bytes = 
        (0x1fffU & ((0x20U == ([&]() {
                        vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout 
                            = ((vlSelfRef.tb_scaler__DOT__dut__DOT__header
                                [0x1dU] << 8U) | vlSelfRef.tb_scaler__DOT__dut__DOT__header
                               [0x1cU]);
                    }(), (IData)(vlSelfRef.__Vfunc_tb_scaler__DOT__dut__DOT__h16__6__Vfuncout)))
                     ? VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width), 2U)
                     : ((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width) 
                        + VL_SHIFTL_III(13,13,32, (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__raw_width), 1U))));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__take 
        = (vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__trial 
           >= (QData)((IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__divisor)));
    vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__next_shift 
        = ((vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__shift 
            << 1U) | (IData)(vlSelfRef.tb_scaler__DOT__dut__DOT__divider__DOT__take));
}
