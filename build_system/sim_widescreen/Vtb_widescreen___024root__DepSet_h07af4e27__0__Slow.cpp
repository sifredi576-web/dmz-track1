// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_widescreen.h for the primary calling header

#include "Vtb_widescreen__pch.h"
#include "Vtb_widescreen___024root.h"

VL_ATTR_COLD void Vtb_widescreen___024root___eval_static__TOP(Vtb_widescreen___024root* vlSelf);

VL_ATTR_COLD void Vtb_widescreen___024root___eval_static(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_static\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_widescreen___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__pclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_widescreen__DOT__freset__0 
        = vlSelfRef.tb_widescreen__DOT__freset;
}

VL_ATTR_COLD void Vtb_widescreen___024root___eval_static__TOP(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_static__TOP\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__mclk = 0U;
    vlSelfRef.tb_widescreen__DOT__pclk = 0U;
    vlSelfRef.tb_widescreen__DOT__reset = 1U;
    vlSelfRef.tb_widescreen__DOT__x = 0U;
    vlSelfRef.tb_widescreen__DOT__y = 0U;
    vlSelfRef.tb_widescreen__DOT__ft = 0U;
    vlSelfRef.tb_widescreen__DOT__load = 1U;
    vlSelfRef.tb_widescreen__DOT__load_addr = 0U;
    vlSelfRef.tb_widescreen__DOT__fr = 7U;
    vlSelfRef.tb_widescreen__DOT__dv = 0U;
    vlSelfRef.tb_widescreen__DOT__pixels = 0U;
    vlSelfRef.tb_widescreen__DOT__frames = 0U;
    vlSelfRef.tb_widescreen__DOT__pops = 0U;
    vlSelfRef.tb_widescreen__DOT__cycles = 0U;
    vlSelfRef.tb_widescreen__DOT__samples = 0U;
    vlSelfRef.tb_widescreen__DOT__last_sample = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__cycle = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_refresh = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_mrs = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__ref_count = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__delay_read = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_left = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_left = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__rd_address = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__wr_address = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__bank_active = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__mode_set = 0U;
}

VL_ATTR_COLD void Vtb_widescreen___024root___eval_initial__TOP(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__mem__DOT__inject 
        = (1U & VL_TESTPLUSARGS_I(std::string{"fault"}));
    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[0U] = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active[0U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[0U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[1U] = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active[1U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[1U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[2U] = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active[2U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[2U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__open_bank[3U] = 0U;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__last_active[3U] = 0xffffff9cU;
    vlSelfRef.tb_widescreen__DOT__mem__DOT__closed_at[3U] = 0xffffff9cU;
}

VL_ATTR_COLD void Vtb_widescreen___024root___eval_final(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_final\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__stl(Vtb_widescreen___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_widescreen___024root___eval_phase__stl(Vtb_widescreen___024root* vlSelf);

VL_ATTR_COLD void Vtb_widescreen___024root___eval_settle(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_settle\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_widescreen___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_widescreen.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_widescreen___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__stl(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___dump_triggers__stl\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_widescreen___024root___stl_sequent__TOP__0(Vtb_widescreen___024root* vlSelf);

VL_ATTR_COLD void Vtb_widescreen___024root___eval_stl(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_stl\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_widescreen___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_widescreen___024root___stl_sequent__TOP__0(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___stl_sequent__TOP__0\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ tb_widescreen__DOT__used;
    tb_widescreen__DOT__used = 0;
    SData/*15:0*/ __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout;
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__0__row;
    __Vfunc_tb_widescreen__DOT__pixel__0__row = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__0__col;
    __Vfunc_tb_widescreen__DOT__pixel__0__col = 0;
    SData/*15:0*/ __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout;
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__1__row;
    __Vfunc_tb_widescreen__DOT__pixel__1__row = 0;
    IData/*31:0*/ __Vfunc_tb_widescreen__DOT__pixel__1__col;
    __Vfunc_tb_widescreen__DOT__pixel__1__col = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g = 0;
    // Body
    vlSelfRef.tb_widescreen__DOT__ras = 1U;
    vlSelfRef.tb_widescreen__DOT__cas = 1U;
    vlSelfRef.tb_widescreen__DOT__we = 1U;
    vlSelfRef.tb_widescreen__DOT__last = (0x257f8U 
                                          == vlSelfRef.tb_widescreen__DOT__load_addr);
    vlSelfRef.tb_widescreen__DOT__oe = ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                        | (0xeU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)));
    vlSelfRef.tb_widescreen__DOT__sa = 0U;
    if ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
        vlSelfRef.tb_widescreen__DOT__ras = 0U;
        vlSelfRef.tb_widescreen__DOT__we = 0U;
        vlSelfRef.tb_widescreen__DOT__sa = (0x400U 
                                            | (IData)(vlSelfRef.tb_widescreen__DOT__sa));
    } else {
        if (((3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_widescreen__DOT__ras = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_widescreen__DOT__ras = 0U;
        } else if ((8U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_widescreen__DOT__ras = 0U;
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_widescreen__DOT__we = 0U;
                vlSelfRef.tb_widescreen__DOT__sa = 0x33U;
            } else {
                if ((8U != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                    if ((0xaU != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                        if ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                            vlSelfRef.tb_widescreen__DOT__we = 0U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_widescreen__DOT__sa 
                        = (0x7ffU & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                     >> 8U));
                } else if ((0xaU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_widescreen__DOT__sa 
                        = (0x400U | (0xffU & vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr));
                } else if ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_widescreen__DOT__sa 
                        = (0x400U | (0xffU & vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr));
                }
            }
        }
    }
    vlSelfRef.tb_widescreen__DOT__bank = (3U & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                                >> 0x13U));
    if ((1U != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
        if (((3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
             || (0x10U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
            vlSelfRef.tb_widescreen__DOT__cas = 0U;
        } else if ((5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            vlSelfRef.tb_widescreen__DOT__cas = 0U;
        } else if ((8U != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            if ((0xaU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_widescreen__DOT__cas = 0U;
            } else if ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_widescreen__DOT__cas = 0U;
            }
        }
        if ((1U & (~ ((3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                      || (0x10U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))))) {
            if ((5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                vlSelfRef.tb_widescreen__DOT__bank = 0U;
            }
        }
    }
    vlSelfRef.tb_widescreen__DOT__ready = ((7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                           & (0x186U 
                                              > (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age)));
    vlSelfRef.tb_widescreen__DOT__actual = (0xffffU 
                                            & ((1U 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__sx))
                                                ? (vlSelfRef.tb_widescreen__DOT__fo 
                                                   >> 0x10U)
                                                : vlSelfRef.tb_widescreen__DOT__fo));
    vlSelfRef.tb_widescreen__DOT__freset = (1U & ((~ 
                                                   ((IData)(vlSelfRef.tb_widescreen__DOT__display_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)))) 
                                                  | (IData)(vlSelfRef.tb_widescreen__DOT__reset)));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address 
        = (0x7ffU & (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g 
        = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address), 1U) 
                     ^ (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address)));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g 
        = ((0x3ffU & (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g)) 
           | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g)) 
                        ^ ((IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g) 
                           << 0xaU))));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout 
        = __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g;
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__write_addr 
        = __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout;
    vlSelfRef.tb_widescreen__DOT__full = ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wgray) 
                                          == ((0xc00U 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2) 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2))));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[0U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[0U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[0U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[0U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(1U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[1U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[1U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(1U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[1U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[1U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(2U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[2U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[2U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(2U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[2U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[2U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(3U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(3U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[3U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[3U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(3U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(3U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[3U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[3U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(4U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(4U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[4U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[4U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(4U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(4U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[4U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[4U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(5U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(5U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[5U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[5U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(5U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(5U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[5U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[5U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(6U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(6U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[6U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[6U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(6U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(6U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[6U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[6U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, 
                                                                           ((IData)(7U) 
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(7U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[7U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[7U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, 
                                                                            ((IData)(7U) 
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(7U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x140U));
    __Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__1__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__1__col));
    vlSelfRef.tb_widescreen__DOT__payload[7U] = ((0xffffU 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[7U]) 
                                                 | ((IData)(__Vfunc_tb_widescreen__DOT__pixel__1__Vfuncout) 
                                                    << 0x10U));
    vlSelfRef.tb_widescreen__DOT__fb__DOT__enabled 
        = ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fault)) 
           & (IData)(vlSelfRef.tb_widescreen__DOT__init));
    vlSelfRef.tb_widescreen__DOT__empty = ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rgray) 
                                           == (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wg2));
    vlSelfRef.tb_widescreen__DOT__area = ((0xa0U <= (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
                                          & ((0x460U 
                                              > (IData)(vlSelfRef.tb_widescreen__DOT__x)) 
                                             & (0x2d0U 
                                                > (IData)(vlSelfRef.tb_widescreen__DOT__y))));
    tb_widescreen__DOT__used = (0xfffU & ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp) 
                                          - ([&]() {
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g 
                        = vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2;
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0x7ffU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (0x800U & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xbU) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                              >> 0xaU)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xbffU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 0xaU));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 0xaU) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                              >> 9U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xdffU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 9U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 9U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 8U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xeffU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 8U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 8U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 7U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xf7fU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 7U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 7U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 6U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfbfU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 6U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 6U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 5U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfdfU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 5U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 5U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 4U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xfefU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 4U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 4U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 3U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xff7U & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 3U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 3U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 2U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffbU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 2U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 2U) ^ ((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g) 
                                            >> 1U)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffdU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0) 
                              << 1U));
                    vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 
                        = (1U & (((IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout) 
                                  >> 1U) ^ (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g)));
                    vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout 
                        = ((0xffeU & (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout)) 
                           | (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0));
                }(), (IData)(vlSelfRef.__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout))));
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__push = 
        (((~ (IData)(vlSelfRef.tb_widescreen__DOT__full)) 
          & (2U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) 
         & (0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)));
    vlSelfRef.tb_widescreen__DOT__pop = ((IData)(vlSelfRef.tb_widescreen__DOT__area) 
                                         & (2U == (IData)(vlSelfRef.tb_widescreen__DOT__mapper__DOT__hx)));
    vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req 
        = ((IData)(vlSelfRef.tb_widescreen__DOT__display_valid) 
           & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__read_finished)) 
              & (0x7f0U >= (IData)(tb_widescreen__DOT__used))));
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__wn = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp) 
                                                      + (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__push)));
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rp) 
                                                      + 
                                                      ((~ (IData)(vlSelfRef.tb_widescreen__DOT__empty)) 
                                                       & ((IData)(vlSelfRef.tb_widescreen__DOT__pop) 
                                                          & ((~ 
                                                              ((IData)(vlSelfRef.tb_widescreen__DOT__fr) 
                                                               >> 2U)) 
                                                             & ((IData)(vlSelfRef.tb_widescreen__DOT__dv) 
                                                                >> 1U))))));
    vlSelfRef.tb_widescreen__DOT__rw = ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req)) 
                                        & (0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)));
    vlSelfRef.tb_widescreen__DOT__req = ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__enabled) 
                                         & ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)) 
                                            & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__frame_pending)) 
                                               & (((0U 
                                                    == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)) 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req) 
                                                      | ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__back_ready)) 
                                                         & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__ack)) 
                                                            & (IData)(vlSelfRef.tb_widescreen__DOT__load))))) 
                                                  | ((2U 
                                                      == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)) 
                                                     & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__prefetched)) 
                                                        & (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req)))))));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address 
        = (0x7ffU & (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g 
        = (0x7ffU & (VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address), 1U) 
                     ^ (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address)));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g 
        = ((0x3ffU & (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g)) 
           | (0x400U & ((0xfffffc00U & (IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g)) 
                        ^ ((IData)(__Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g) 
                           << 0xaU))));
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout 
        = __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g;
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__read_addr 
        = __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout;
}

VL_ATTR_COLD void Vtb_widescreen___024root___eval_triggers__stl(Vtb_widescreen___024root* vlSelf);

VL_ATTR_COLD bool Vtb_widescreen___024root___eval_phase__stl(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_phase__stl\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_widescreen___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_widescreen___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__act(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___dump_triggers__act\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_widescreen.pclk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_widescreen.mclk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_widescreen.freset)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_widescreen.mclk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__nba(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___dump_triggers__nba\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_widescreen.pclk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_widescreen.mclk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_widescreen.freset)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_widescreen.mclk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_widescreen___024root___ctor_var_reset(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___ctor_var_reset\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_widescreen__DOT__mclk = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__pclk = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__x = VL_RAND_RESET_I(11);
    vlSelf->tb_widescreen__DOT__y = VL_RAND_RESET_I(10);
    vlSelf->tb_widescreen__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__sx = VL_RAND_RESET_I(10);
    vlSelf->tb_widescreen__DOT__sy = VL_RAND_RESET_I(10);
    vlSelf->tb_widescreen__DOT__area = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__rw = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__rsp = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__init = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_widescreen__DOT__rdata);
    vlSelf->tb_widescreen__DOT__ras = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__cas = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__sa = VL_RAND_RESET_I(11);
    vlSelf->tb_widescreen__DOT__bank = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__refreshes = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__oe = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__load_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_widescreen__DOT__ack = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__last = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_widescreen__DOT__payload);
    vlSelf->tb_widescreen__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__freset = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__display_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__front = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fault = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fo = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__swaps = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__written = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__reads = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__fr = VL_RAND_RESET_I(3);
    vlSelf->tb_widescreen__DOT__dv = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__actual = VL_RAND_RESET_I(16);
    vlSelf->tb_widescreen__DOT__sample_ce = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__pixels = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__frames = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__pops = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__samples = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__last_sample = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mapper__DOT__hx = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__mapper__DOT__vy = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__dq_capture = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__wait_count = VL_RAND_RESET_I(16);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__refresh_age = VL_RAND_RESET_I(16);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__init_refresh = VL_RAND_RESET_I(4);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__beat = VL_RAND_RESET_I(3);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__transaction_addr = VL_RAND_RESET_I(21);
    vlSelf->tb_widescreen__DOT__ctrl__DOT__transaction_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_widescreen__DOT__ctrl__DOT__write_data);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__mem__DOT__rows[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__mem__DOT__open_bank[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_widescreen__DOT__mem__DOT__cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__mem__DOT__last_active[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__mem__DOT__closed_at[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_widescreen__DOT__mem__DOT__last_refresh = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__last_mrs = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__ref_count = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__delay_read = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__rd_left = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__wr_left = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__rd_address = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__wr_address = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__bank_active = VL_RAND_RESET_I(32);
    vlSelf->tb_widescreen__DOT__mem__DOT__mode_set = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__mem__DOT__inject = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__fb__DOT__ft1 = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__ft2 = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__last_frame = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__frame_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__flush = VL_RAND_RESET_I(6);
    vlSelf->tb_widescreen__DOT__fb__DOT__rd_addr = VL_RAND_RESET_I(18);
    vlSelf->tb_widescreen__DOT__fb__DOT__row_base = VL_RAND_RESET_I(18);
    vlSelf->tb_widescreen__DOT__fb__DOT__out_row = VL_RAND_RESET_I(10);
    vlSelf->tb_widescreen__DOT__fb__DOT__row_phase = VL_RAND_RESET_I(2);
    vlSelf->tb_widescreen__DOT__fb__DOT__read_finished = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__back_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__transition_active = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__wipe_words = VL_RAND_RESET_I(9);
    vlSelf->tb_widescreen__DOT__fb__DOT__rd_x = VL_RAND_RESET_I(9);
    vlSelf->tb_widescreen__DOT__fb__DOT__beat = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->tb_widescreen__DOT__fb__DOT__read_buffer);
    vlSelf->tb_widescreen__DOT__fb__DOT__video_req = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__transaction_last = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__prefetched = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fb__DOT__enabled = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_widescreen__DOT__fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_widescreen__DOT__fifo__DOT__wp = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__rp = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__wgray = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__rgray = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__rg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__rg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__wg1 = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__wg2 = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__fifo__DOT__rn = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__wn = VL_RAND_RESET_I(12);
    vlSelf->tb_widescreen__DOT__fifo__DOT__write_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_widescreen__DOT__fifo__DOT__read_addr = VL_RAND_RESET_I(11);
    vlSelf->tb_widescreen__DOT__fifo__DOT____Vlvbound_hd6d3ee30__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_widescreen__DOT__audio__DOT__accumulator = VL_RAND_RESET_I(26);
    vlSelf->tb_widescreen__DOT__audio__DOT__phase = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__Vfuncout = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_tb_widescreen__DOT__fifo__DOT__binary__6__g = VL_RAND_RESET_I(12);
    vlSelf->__Vintraval_he798b52a__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tb_widescreen__DOT__ft = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tb_widescreen__DOT__fr = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__tb_widescreen__DOT__din__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tb_widescreen__DOT__din__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_widescreen__DOT__pclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_widescreen__DOT__mclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_widescreen__DOT__freset__0 = VL_RAND_RESET_I(1);
}
