// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_overlay.h for the primary calling header

#include "Vtb_overlay__pch.h"
#include "Vtb_overlay__Syms.h"
#include "Vtb_overlay___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_overlay___024root___eval_initial__TOP__Vtiming__0(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_overlay__DOT__s[0U] = (1U | vlSelfRef.tb_overlay__DOT__s[0U]);
    vlSelfRef.tb_overlay__DOT__s[0U] = (0x30U | vlSelfRef.tb_overlay__DOT__s[0U]);
    vlSelfRef.tb_overlay__DOT__s[0U] = (0x80000000U 
                                        | (0x3fffffffU 
                                           & vlSelfRef.tb_overlay__DOT__s[0U]));
    vlSelfRef.tb_overlay__DOT__s[1U] = 0xa0c81402U;
    vlSelfRef.tb_overlay__DOT__s[2U] = 0x640a014U;
    vlSelfRef.tb_overlay__DOT__s[3U] = (5U | (0xfffffff0U 
                                              & vlSelfRef.tb_overlay__DOT__s[3U]));
    vlSelfRef.tb_overlay__DOT__x = 0xaU;
    vlSelfRef.tb_overlay__DOT__y = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         9);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0xffe56dU != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:9: Assertion failed in %Ntb_overlay: focus edge\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 9, "", false);
    }
    vlSelfRef.tb_overlay__DOT__x = 0xeU;
    vlSelfRef.tb_overlay__DOT__y = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         10);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0x40e8ffU != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:10: Assertion failed in %Ntb_overlay: selected inset under focus\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 10, "", false);
    }
    vlSelfRef.tb_overlay__DOT__s[0U] = (0x3fffffffU 
                                        & vlSelfRef.tb_overlay__DOT__s[0U]);
    vlSelfRef.tb_overlay__DOT__s[1U] = (0x32U | (0xffffff00U 
                                                 & vlSelfRef.tb_overlay__DOT__s[1U]));
    vlSelfRef.tb_overlay__DOT__x = 0xaU;
    vlSelfRef.tb_overlay__DOT__y = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         11);
    if (VL_UNLIKELY((vlSelfRef.tb_overlay__DOT__ink))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:11: Assertion failed in %Ntb_overlay: selected outer edge\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 11, "", false);
    }
    vlSelfRef.tb_overlay__DOT__x = 0xeU;
    vlSelfRef.tb_overlay__DOT__y = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         12);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0x40e8ffU != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:12: Assertion failed in %Ntb_overlay: selected persists\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 12, "", false);
    }
    vlSelfRef.tb_overlay__DOT__x = 0xc8U;
    vlSelfRef.tb_overlay__DOT__y = 0x1eU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         13);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0xffe56dU != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:13: Assertion failed in %Ntb_overlay: new focus\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 13, "", false);
    }
    vlSelfRef.tb_overlay__DOT__s[0U] = (0xc0U | vlSelfRef.tb_overlay__DOT__s[0U]);
    vlSelfRef.tb_overlay__DOT__x = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         14);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0x40ff80U != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:14: Assertion failed in %Ntb_overlay: correct answer\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 14, "", false);
    }
    vlSelfRef.tb_overlay__DOT__s[0U] = (0xffffff7fU 
                                        & vlSelfRef.tb_overlay__DOT__s[0U]);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "sim/system\tb_overlay.sv", 
                                         15);
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSelfRef.tb_overlay__DOT__ink)) 
                            | (0xff6060U != vlSelfRef.tb_overlay__DOT__color)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_overlay.sv:15: Assertion failed in %Ntb_overlay: incorrect answer\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/system\\tb_overlay.sv", 15, "", false);
    }
    VL_WRITEF_NX("PASS distinct focus and selected borders; selection persists on navigation; answer feedback\n",0);
    VL_FINISH_MT("sim/system\\tb_overlay.sv", 16, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_overlay___024root___dump_triggers__act(Vtb_overlay___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_overlay___024root___eval_triggers__act(Vtb_overlay___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_overlay___024root___eval_triggers__act\n"); );
    Vtb_overlay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_overlay___024root___dump_triggers__act(vlSelf);
    }
#endif
}
