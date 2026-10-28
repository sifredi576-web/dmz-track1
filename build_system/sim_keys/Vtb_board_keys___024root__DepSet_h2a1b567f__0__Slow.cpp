// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_board_keys.h for the primary calling header

#include "Vtb_board_keys__pch.h"
#include "Vtb_board_keys___024root.h"

VL_ATTR_COLD void Vtb_board_keys___024root___eval_static__TOP(Vtb_board_keys___024root* vlSelf);

VL_ATTR_COLD void Vtb_board_keys___024root___eval_static(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_static\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_board_keys___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_board_keys__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_board_keys__DOT__kv__0 
        = vlSelfRef.tb_board_keys__DOT__kv;
}

VL_ATTR_COLD void Vtb_board_keys___024root___eval_static__TOP(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_static__TOP\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_board_keys__DOT__clk = 0U;
    vlSelfRef.tb_board_keys__DOT__reset = 1U;
    vlSelfRef.tb_board_keys__DOT__pressed = 0U;
    vlSelfRef.tb_board_keys__DOT__uv = 0U;
    vlSelfRef.tb_board_keys__DOT__ub = 0U;
    vlSelfRef.tb_board_keys__DOT__events = 0U;
    vlSelfRef.tb_board_keys__DOT__commands = 0U;
    vlSelfRef.tb_board_keys__DOT__last_key = 0xffffffffU;
}

VL_ATTR_COLD void Vtb_board_keys___024root___eval_final(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_final\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__stl(Vtb_board_keys___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_board_keys___024root___eval_phase__stl(Vtb_board_keys___024root* vlSelf);

VL_ATTR_COLD void Vtb_board_keys___024root___eval_settle(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_settle\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_board_keys___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_board_keys.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_board_keys___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__stl(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___dump_triggers__stl\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_board_keys___024root___stl_sequent__TOP__0(Vtb_board_keys___024root* vlSelf);

VL_ATTR_COLD void Vtb_board_keys___024root___eval_stl(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_stl\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_board_keys___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_board_keys__ConstPool__TABLE_h53490386_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtb_board_keys__ConstPool__TABLE_hec50a648_0;

VL_ATTR_COLD void Vtb_board_keys___024root___stl_sequent__TOP__0(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___stl_sequent__TOP__0\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ tb_board_keys__DOT__low_rows;
    tb_board_keys__DOT__low_rows = 0;
    CData/*3:0*/ tb_board_keys__DOT__low_cols;
    tb_board_keys__DOT__low_cols = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_board_keys__DOT__cv = ((IData)(vlSelfRef.tb_board_keys__DOT__merge__DOT__pending) 
                                        | (IData)(vlSelfRef.tb_board_keys__DOT__uv));
    vlSelfRef.tb_board_keys__DOT__dut__DOT__complete 
        = (0xffffU & (((~ ((IData)(0xfU) << ((IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__row) 
                                             << 2U))) 
                       & (IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__scan)) 
                      | ((0xfU & (~ (IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__col_sync))) 
                         << ((IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__row) 
                             << 2U))));
    vlSelfRef.tb_board_keys__DOT__cb = ((IData)(vlSelfRef.tb_board_keys__DOT__uv)
                                         ? (IData)(vlSelfRef.tb_board_keys__DOT__ub)
                                         : (IData)(vlSelfRef.tb_board_keys__DOT__merge__DOT__held));
    vlSelfRef.tb_board_keys__DOT__row_low = ((IData)(vlSelfRef.tb_board_keys__DOT__reset)
                                              ? 0U : 
                                             (0xfU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__row))));
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__restart) 
                      << 5U) | (((2U == (IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__mode)) 
                                 << 5U) | ((((~ (IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__beep_phase)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__mode))) 
                                            << 5U) 
                                           | (((0U 
                                                == (IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__mode)) 
                                               << 5U) 
                                              & ((0xffffffe0U 
                                                  & ((IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__ms) 
                                                     << 4U)) 
                                                 | (((~ 
                                                      ((IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__cs) 
                                                       >> 1U)) 
                                                     & (~ (IData)(vlSelfRef.tb_board_keys__DOT__controls__DOT__beep_phase))) 
                                                    << 5U)))))) 
                    | (((IData)(vlSelfRef.tb_board_keys__DOT__paused) 
                        << 4U) | (IData)(vlSelfRef.tb_board_keys__DOT__code)));
    vlSelfRef.tb_board_keys__DOT__merge__DOT__mapped 
        = Vtb_board_keys__ConstPool__TABLE_h53490386_0
        [__Vtableidx1];
    vlSelfRef.tb_board_keys__DOT__merge__DOT__decoded 
        = Vtb_board_keys__ConstPool__TABLE_hec50a648_0
        [__Vtableidx1];
    tb_board_keys__DOT__low_rows = vlSelfRef.tb_board_keys__DOT__row_low;
    tb_board_keys__DOT__low_cols = 0U;
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((1U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((2U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((4U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((8U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((1U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (1U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x10U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x20U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x40U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x80U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((2U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (2U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x100U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x200U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x400U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x800U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((4U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (4U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x1000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (1U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((1U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x2000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (2U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((2U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x4000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (4U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((4U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    if ((0x8000U & (IData)(vlSelfRef.tb_board_keys__DOT__pressed))) {
        if ((8U & (IData)(tb_board_keys__DOT__low_rows))) {
            tb_board_keys__DOT__low_cols = (8U | (IData)(tb_board_keys__DOT__low_cols));
        }
        if ((8U & (IData)(tb_board_keys__DOT__low_cols))) {
            tb_board_keys__DOT__low_rows = (8U | (IData)(tb_board_keys__DOT__low_rows));
        }
    }
    vlSelfRef.tb_board_keys__DOT__col_in = (0xfU & 
                                            (~ (IData)(tb_board_keys__DOT__low_cols)));
}

VL_ATTR_COLD void Vtb_board_keys___024root___eval_triggers__stl(Vtb_board_keys___024root* vlSelf);

VL_ATTR_COLD bool Vtb_board_keys___024root___eval_phase__stl(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_phase__stl\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_board_keys___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_board_keys___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__act(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___dump_triggers__act\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_board_keys.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_board_keys.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_board_keys.kv)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__nba(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___dump_triggers__nba\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_board_keys.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_board_keys.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_board_keys.kv)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_board_keys___024root___ctor_var_reset(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___ctor_var_reset\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_board_keys__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__pressed = VL_RAND_RESET_I(16);
    vlSelf->tb_board_keys__DOT__row_low = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__col_in = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__kv = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__code = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__uv = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__ub = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__cv = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__cb = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__paused = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__volume = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__events = VL_RAND_RESET_I(32);
    vlSelf->tb_board_keys__DOT__commands = VL_RAND_RESET_I(32);
    vlSelf->tb_board_keys__DOT__last_key = VL_RAND_RESET_I(32);
    vlSelf->tb_board_keys__DOT__previous_command = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__last_command = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__dut__DOT__ticks = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__dut__DOT__row = VL_RAND_RESET_I(2);
    vlSelf->tb_board_keys__DOT__dut__DOT__col_meta = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__dut__DOT__col_sync = VL_RAND_RESET_I(4);
    vlSelf->tb_board_keys__DOT__dut__DOT__scan = VL_RAND_RESET_I(16);
    vlSelf->tb_board_keys__DOT__dut__DOT__candidate = VL_RAND_RESET_I(16);
    vlSelf->tb_board_keys__DOT__dut__DOT__stable_count = VL_RAND_RESET_I(3);
    vlSelf->tb_board_keys__DOT__dut__DOT__release_count = VL_RAND_RESET_I(3);
    vlSelf->tb_board_keys__DOT__dut__DOT__armed = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__dut__DOT__complete = VL_RAND_RESET_I(16);
    vlSelf->tb_board_keys__DOT__merge__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__merge__DOT__held = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__merge__DOT__mapped = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__merge__DOT__decoded = VL_RAND_RESET_I(8);
    vlSelf->tb_board_keys__DOT__controls__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->tb_board_keys__DOT__controls__DOT__restart = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__controls__DOT__beep_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_board_keys__DOT__controls__DOT__ms = VL_RAND_RESET_I(2);
    vlSelf->tb_board_keys__DOT__controls__DOT__cs = VL_RAND_RESET_I(2);
    vlSelf->tb_board_keys__DOT__controls__DOT__second_count = VL_RAND_RESET_I(25);
    vlSelf->tb_board_keys__DOT__controls__DOT__restart_count = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__tb_board_keys__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_board_keys__DOT__kv__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
