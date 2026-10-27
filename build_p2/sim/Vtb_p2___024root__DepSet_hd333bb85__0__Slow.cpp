// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2___024root.h"

VL_ATTR_COLD void Vtb_p2___024root___eval_static__TOP(Vtb_p2___024root* vlSelf);

VL_ATTR_COLD void Vtb_p2___024root___eval_static(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_static\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_p2___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__pclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__freset__0 
        = vlSelfRef.tb_p2__DOT__freset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h2b560172__1 = (5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state));
    vlSelfRef.__Vtrigprevexpr_h35df5846__1 = 0U;
}

VL_ATTR_COLD void Vtb_p2___024root___eval_static__TOP(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_static__TOP\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__clk = 0U;
    vlSelfRef.tb_p2__DOT__pclk = 0U;
    vlSelfRef.tb_p2__DOT__reset = 1U;
    vlSelfRef.tb_p2__DOT__x = 0U;
    vlSelfRef.tb_p2__DOT__y = 0U;
    vlSelfRef.tb_p2__DOT__ft = 0U;
    vlSelfRef.tb_p2__DOT__display_frames = 0U;
    vlSelfRef.tb_p2__DOT__checked_pixels = 0U;
    vlSelfRef.tb_p2__DOT__last_front = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__cycle = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_refresh = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_mrs = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__ref_count = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__delay_read = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__rd_left = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__wr_left = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__rd_address = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__wr_address = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__bank_active = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__mode_set = 0U;
}

VL_ATTR_COLD void Vtb_p2___024root___eval_initial__TOP(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__mem__DOT__inject = (1U & VL_TESTPLUSARGS_I(
                                                                     std::string{"fault"}));
    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[0U] = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_active[0U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[0U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[1U] = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_active[1U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[1U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[2U] = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_active[2U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[2U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__open_bank[3U] = 0U;
    vlSelfRef.tb_p2__DOT__mem__DOT__last_active[3U] = 0xffffff9cU;
    vlSelfRef.tb_p2__DOT__mem__DOT__closed_at[3U] = 0xffffff9cU;
}

VL_ATTR_COLD void Vtb_p2___024root___eval_final(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_final\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__stl(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_p2___024root___eval_phase__stl(Vtb_p2___024root* vlSelf);

VL_ATTR_COLD void Vtb_p2___024root___eval_settle(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_settle\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_p2___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("D:\\QQdownload\\HX4S20_Contest_202606.zip\\HX4S20_Contest_202606\\dmz_track1\\sim\\p2\\tb_p2.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_p2___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__stl(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__stl\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p2___024root___stl_sequent__TOP__0(Vtb_p2___024root* vlSelf);

VL_ATTR_COLD void Vtb_p2___024root___eval_stl(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_stl\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_p2___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_p2___024root___stl_sequent__TOP__0(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___stl_sequent__TOP__0\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ tb_p2__DOT__used;
    tb_p2__DOT__used = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a = 0;
    CData/*1:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a = 0;
    CData/*1:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p = 0;
    IData/*31:0*/ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed = 0;
    // Body
    vlSelfRef.tb_p2__DOT__ras = 1U;
    vlSelfRef.tb_p2__DOT__cas = 1U;
    vlSelfRef.tb_p2__DOT__we = 1U;
    vlSelfRef.tb_p2__DOT__oe = ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                                | (0xeU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)));
    vlSelfRef.tb_p2__DOT__sa = 0U;
    if ((1U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
        vlSelfRef.tb_p2__DOT__ras = 0U;
        vlSelfRef.tb_p2__DOT__we = 0U;
        vlSelfRef.tb_p2__DOT__sa = (0x400U | (IData)(vlSelfRef.tb_p2__DOT__sa));
    } else {
        if (((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        } else if ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__ras = 0U;
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__we = 0U;
                vlSelfRef.tb_p2__DOT__sa = 0x33U;
            } else {
                if ((8U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    if ((0xaU != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                        if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                            vlSelfRef.tb_p2__DOT__we = 0U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x7ffU 
                                                & (vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                                                   >> 8U));
                } else if ((0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x400U 
                                                | (0xffU 
                                                   & vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr));
                } else if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_p2__DOT__sa = (0x400U 
                                                | (0xffU 
                                                   & vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr));
                }
            }
        }
    }
    vlSelfRef.tb_p2__DOT__bank = (3U & (vlSelfRef.tb_p2__DOT__ctrl__DOT__transaction_addr 
                                        >> 0x13U));
    if ((1U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
        if (((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_p2__DOT__cas = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_p2__DOT__cas = 0U;
        } else if ((8U != (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
            if ((0xaU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__cas = 0U;
            } else if ((0xdU == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__cas = 0U;
            }
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_p2__DOT__bank = 0U;
            }
        }
    }
    vlSelfRef.tb_p2__DOT____Vcellinp__bist__rsp_valid 
        = ((5U != (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__rsp_valid));
    vlSelfRef.tb_p2__DOT____Vcellinp__fb__rsp_valid 
        = ((5U == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__rsp_valid));
    vlSelfRef.tb_p2__DOT__bist__DOT__actual = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.tb_p2__DOT__bist__DOT__read_data[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))))) 
                                               | (vlSelfRef.tb_p2__DOT__bist__DOT__read_data[
                                                  (7U 
                                                   & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat), 5U))));
    vlSelfRef.tb_p2__DOT__current_pixel = (0xffffU 
                                           & ((1U & (IData)(vlSelfRef.tb_p2__DOT__x))
                                               ? (vlSelfRef.tb_p2__DOT__fo 
                                                  >> 0x10U)
                                               : vlSelfRef.tb_p2__DOT__fo));
    vlSelfRef.tb_p2__DOT__freset = (1U & ((~ ((IData)(vlSelfRef.tb_p2__DOT__valid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)))) 
                                          | (IData)(vlSelfRef.tb_p2__DOT__reset)));
    vlSelfRef.tb_p2__DOT__req_ready = ((7U == (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__state)) 
                                       & (0x186U > (IData)(vlSelfRef.tb_p2__DOT__ctrl__DOT__refresh_age)));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = vlSelfRef.tb_p2__DOT__bist__DOT__address;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[0U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(1U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[1U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(2U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[2U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(3U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[3U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(4U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[4U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(5U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[5U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(6U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[6U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
        = (0x1fffffU & ((IData)(7U) + vlSelfRef.tb_p2__DOT__bist__DOT__address));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__mixed))));
    vlSelfRef.tb_p2__DOT__bd[7U] = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__2__Vfuncout;
    vlSelfRef.tb_p2__DOT__active = ((0x280U > (IData)(vlSelfRef.tb_p2__DOT__x)) 
                                    & (0x1e0U > (IData)(vlSelfRef.tb_p2__DOT__y)));
    vlSelfRef.tb_p2__DOT__empty = ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rgray) 
                                   == (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wg2));
    vlSelfRef.tb_p2__DOT__full = ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wgray) 
                                  == ((0xc00U & ((~ 
                                                  ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rg2) 
                                                   >> 0xaU)) 
                                                 << 0xaU)) 
                                      | (0x3ffU & (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_p2__DOT__fb__DOT__enabled = (IData)(
                                                     (((5U 
                                                        == (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
                                                       & (~ (IData)(vlSelfRef.tb_p2__DOT__fault))) 
                                                      & (0U 
                                                         == vlSelfRef.tb_p2__DOT__errors)));
    vlSelfRef.tb_p2__DOT__bist__DOT__check_addr = (0x1fffffU 
                                                   & (vlSelfRef.tb_p2__DOT__bist__DOT__address 
                                                      + (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__beat)));
    VL_ASSIGNSEL_WI(256,32,0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(1U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                           << 1U);
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x20U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(3U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(2U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x40U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(5U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(4U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x60U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(7U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(6U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0x80U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(9U) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(8U) + 
                                     ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                      << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xa0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xbU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xaU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xc0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xcU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    VL_ASSIGNSEL_WI(256,32,0xe0U, vlSelfRef.tb_p2__DOT__fd, 
                    ((([&]() {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f 
                            = vlSelfRef.tb_p2__DOT__written;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y 
                            = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x 
                            = (0x3ffU & ((IData)(0xfU) 
                                         + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                            << 1U)));
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                            = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                ? 0xffffU : ((0xa0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                              ? 0xffe0U
                                              : ((0xf0U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                  ? 0x7ffU
                                                  : 
                                                 ((0x140U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                   ? 0x7e0U
                                                   : 
                                                  ((0x190U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                    ? 0xf81fU
                                                    : 
                                                   ((0x1e0U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                     ? 0xf800U
                                                     : 
                                                    ((0x230U 
                                                      > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))
                                                      ? 0x1fU
                                                      : 0U)))))));
                        if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color)));
                        }
                        if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color 
                                = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                               << 6U)) 
                                   | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y) 
                                                 << 2U)) 
                                      | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                                  >> 4U))));
                        }
                        if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x)) 
                               | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x))) 
                              | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y)) 
                              & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y))) 
                             & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x) 
                                          >> 5U)) == 
                                (0x1fU & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f)))) {
                            vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = 0xffffU;
                        }
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout 
                            = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color;
                    }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout)) 
                      << 0x10U) | ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f 
                        = vlSelfRef.tb_p2__DOT__written;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y 
                        = vlSelfRef.tb_p2__DOT__fb__DOT__wr_y;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x 
                        = (0x3ffU & ((IData)(0xeU) 
                                     + ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__wr_x) 
                                        << 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                        = ((0x50U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                            ? 0xffffU : ((0xa0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                          ? 0xffe0U
                                          : ((0xf0U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                              ? 0x7ffU
                                              : ((0x140U 
                                                  > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                  ? 0x7e0U
                                                  : 
                                                 ((0x190U 
                                                   > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                   ? 0xf81fU
                                                   : 
                                                  ((0x1e0U 
                                                    > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                    ? 0xf800U
                                                    : 
                                                   ((0x230U 
                                                     > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))
                                                     ? 0x1fU
                                                     : 0U)))))));
                    if ((1U & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = (0xffffU & (~ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color)));
                    }
                    if ((0x190U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color 
                            = ((0xf800U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                           << 6U)) 
                               | ((0x7e0U & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y) 
                                             << 2U)) 
                                  | (0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                              >> 4U))));
                    }
                    if (((((4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x)) 
                           | (0x27cU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x))) 
                          | (4U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         | (0x1dcU <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    if ((((0xc8U <= (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y)) 
                          & (0xf0U > (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y))) 
                         & ((0x1fU & ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x) 
                                      >> 5U)) == (0x1fU 
                                                  & vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f)))) {
                        vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = 0xffffU;
                    }
                    vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout 
                        = vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color;
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout))));
    tb_p2__DOT__used = (0xfffU & ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wp) 
                                  - ([&]() {
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g 
                        = vlSelfRef.tb_p2__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout))));
    vlSelfRef.tb_p2__DOT____Vcellinp__bist__req_ready 
        = ((5U != (IData)(vlSelfRef.tb_p2__DOT__bist__DOT__state)) 
           & (IData)(vlSelfRef.tb_p2__DOT__req_ready));
    vlSelfRef.tb_p2__DOT__fifo__DOT__rn = (0xfffU & 
                                           ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__rp) 
                                            + ((~ (IData)(vlSelfRef.tb_p2__DOT__empty)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__active) 
                                                  & ((IData)(vlSelfRef.tb_p2__DOT__x) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_p2__DOT__fr) 
                                                          >> 2U)) 
                                                        & ((IData)(vlSelfRef.tb_p2__DOT__dv) 
                                                           >> 1U)))))));
    vlSelfRef.tb_p2__DOT__fifo__DOT__push = (((~ (IData)(vlSelfRef.tb_p2__DOT__full)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state))) 
                                             & (0U 
                                                == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p 
        = vlSelfRef.tb_p2__DOT__bist__DOT__pattern;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a 
        = vlSelfRef.tb_p2__DOT__bist__DOT__check_addr;
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed 
        = (0x9e3779b9U ^ ((__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a 
                           << 0x15U) | __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__a));
    __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
            ? 0U : ((1U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
                     ? 0xffffffffU : ((2U == (IData)(__Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__p))
                                       ? __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed
                                       : (~ __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__mixed))));
    vlSelfRef.tb_p2__DOT__bist__DOT__expected = __Vfunc_tb_p2__DOT__bist__DOT__pattern_word__3__Vfuncout;
    vlSelfRef.tb_p2__DOT__fb__DOT__video_req = ((IData)(vlSelfRef.tb_p2__DOT__valid) 
                                                & ((0x25800U 
                                                    > vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr) 
                                                   & (0x7f0U 
                                                      >= (IData)(tb_p2__DOT__used))));
    vlSelfRef.tb_p2__DOT__fifo__DOT__wn = (0xfffU & 
                                           ((IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__wp) 
                                            + (IData)(vlSelfRef.tb_p2__DOT__fifo__DOT__push)));
    vlSelfRef.tb_p2__DOT__fa_req = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req)
                                     ? (((IData)(vlSelfRef.tb_p2__DOT__front) 
                                         << 0x12U) 
                                        | vlSelfRef.tb_p2__DOT__fb__DOT__rd_addr)
                                     : ((0x40000U & 
                                         ((~ (IData)(vlSelfRef.tb_p2__DOT__front)) 
                                          << 0x12U)) 
                                        | vlSelfRef.tb_p2__DOT__fb__DOT__wr_addr));
    vlSelfRef.tb_p2__DOT__fv = ((IData)(vlSelfRef.tb_p2__DOT__fb__DOT__enabled) 
                                & ((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__state)) 
                                   & ((0U == (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__flush)) 
                                      & ((~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__frame_pending)) 
                                         & ((~ (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__back_ready)) 
                                            | (IData)(vlSelfRef.tb_p2__DOT__fb__DOT__video_req))))));
}

VL_ATTR_COLD void Vtb_p2___024root___eval_triggers__stl(Vtb_p2___024root* vlSelf);

VL_ATTR_COLD bool Vtb_p2___024root___eval_phase__stl(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_phase__stl\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_p2___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_p2___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__act\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_p2.pclk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_p2.freset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_p2.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_p2.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (3'h5 == tb_p2.bist.state))\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( (32'sh8 == tb_p2.display_frames))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__nba(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___dump_triggers__nba\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_p2.pclk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_p2.freset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_p2.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_p2.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (3'h5 == tb_p2.bist.state))\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( (32'sh8 == tb_p2.display_frames))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_p2___024root___ctor_var_reset(Vtb_p2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___ctor_var_reset\n"); );
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_p2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__pclk = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__req_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fv = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fa_req = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__bd);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__fd);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__rd);
    vlSelf->tb_p2__DOT__ras = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__cas = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__sa = VL_RAND_RESET_I(11);
    vlSelf->tb_p2__DOT__bank = VL_RAND_RESET_I(2);
    vlSelf->tb_p2__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__refreshes = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__checked = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__actual = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__bad = VL_RAND_RESET_I(21);
    vlSelf->tb_p2__DOT____Vcellinp__bist__rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT____Vcellinp__bist__req_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__x = VL_RAND_RESET_I(10);
    vlSelf->tb_p2__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_p2__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__freset = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__front = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fault = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fo = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__written = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__reads = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT____Vcellinp__fb__rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fr = VL_RAND_RESET_I(3);
    vlSelf->tb_p2__DOT__dv = VL_RAND_RESET_I(2);
    vlSelf->tb_p2__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__display_frames = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__checked_pixels = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__last_front = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__frame_id = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__current_pixel = VL_RAND_RESET_I(16);
    vlSelf->tb_p2__DOT__ctrl__DOT__dq_capture = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->tb_p2__DOT__ctrl__DOT__wait_count = VL_RAND_RESET_I(16);
    vlSelf->tb_p2__DOT__ctrl__DOT__refresh_age = VL_RAND_RESET_I(16);
    vlSelf->tb_p2__DOT__ctrl__DOT__init_refresh = VL_RAND_RESET_I(4);
    vlSelf->tb_p2__DOT__ctrl__DOT__beat = VL_RAND_RESET_I(3);
    vlSelf->tb_p2__DOT__ctrl__DOT__transaction_addr = VL_RAND_RESET_I(21);
    vlSelf->tb_p2__DOT__ctrl__DOT__transaction_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__ctrl__DOT__write_data);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->tb_p2__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_p2__DOT__mem__DOT__rows[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_p2__DOT__mem__DOT__open_bank[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_p2__DOT__mem__DOT__cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_p2__DOT__mem__DOT__last_active[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_p2__DOT__mem__DOT__closed_at[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_p2__DOT__mem__DOT__last_refresh = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__last_mrs = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__ref_count = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__delay_read = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__rd_left = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__wr_left = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__rd_address = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__wr_address = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__bank_active = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__mem__DOT__mode_set = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__mem__DOT__inject = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__bist__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_p2__DOT__bist__DOT__beat = VL_RAND_RESET_I(3);
    vlSelf->tb_p2__DOT__bist__DOT__pattern = VL_RAND_RESET_I(2);
    vlSelf->tb_p2__DOT__bist__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__bist__DOT__address = VL_RAND_RESET_I(21);
    vlSelf->tb_p2__DOT__bist__DOT__hold_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__bist__DOT__read_data);
    vlSelf->tb_p2__DOT__bist__DOT__check_addr = VL_RAND_RESET_I(21);
    vlSelf->tb_p2__DOT__bist__DOT__expected = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__bist__DOT__actual = VL_RAND_RESET_I(32);
    vlSelf->tb_p2__DOT__fb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_p2__DOT__fb__DOT__ft1 = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__ft2 = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__last_frame = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__frame_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__flush = VL_RAND_RESET_I(6);
    vlSelf->tb_p2__DOT__fb__DOT__rd_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_p2__DOT__fb__DOT__wr_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_p2__DOT__fb__DOT__wr_x = VL_RAND_RESET_I(9);
    vlSelf->tb_p2__DOT__fb__DOT__wr_y = VL_RAND_RESET_I(9);
    vlSelf->tb_p2__DOT__fb__DOT__back_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__swap_timer = VL_RAND_RESET_I(8);
    vlSelf->tb_p2__DOT__fb__DOT__beat = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->tb_p2__DOT__fb__DOT__read_buffer);
    vlSelf->tb_p2__DOT__fb__DOT__video_req = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fb__DOT__enabled = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_p2__DOT__fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_p2__DOT__fifo__DOT__wp = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__rp = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__wgray = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__rgray = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__rg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__rg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__wg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__wg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_p2__DOT__fifo__DOT__rn = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT__wn = VL_RAND_RESET_I(12);
    vlSelf->tb_p2__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__x = VL_RAND_RESET_I(10);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__y = VL_RAND_RESET_I(9);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__4__color = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__x = VL_RAND_RESET_I(10);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__y = VL_RAND_RESET_I(9);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__f = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_tb_p2__DOT__fb__DOT__pixel__5__color = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__Vfuncout = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_p2__DOT__fifo__DOT__binary__6__g = VL_RAND_RESET_I(12);
    vlSelf->__Vintraval_h0133eed1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_p2__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__tb_p2__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_p2__DOT__fr = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__tb_p2__DOT__din__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_p2__DOT__din__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__pclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__freset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_p2__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h2b560172__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h35df5846__1 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
