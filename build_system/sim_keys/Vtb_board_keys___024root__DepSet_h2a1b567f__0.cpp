// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_board_keys.h for the primary calling header

#include "Vtb_board_keys__pch.h"
#include "Vtb_board_keys___024root.h"

VlCoroutine Vtb_board_keys___024root___eval_initial__TOP__Vtiming__0(Vtb_board_keys___024root* vlSelf);
VlCoroutine Vtb_board_keys___024root___eval_initial__TOP__Vtiming__1(Vtb_board_keys___024root* vlSelf);
VlCoroutine Vtb_board_keys___024root___eval_initial__TOP__Vtiming__2(Vtb_board_keys___024root* vlSelf);

void Vtb_board_keys___024root___eval_initial(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_initial\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_board_keys___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_board_keys___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_board_keys___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_board_keys___024root___eval_initial__TOP__Vtiming__2(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/system\tb_board_keys.sv", 
                                             3);
        vlSelfRef.tb_board_keys__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_board_keys__DOT__clk)));
    }
}

void Vtb_board_keys___024root___act_comb__TOP__0(Vtb_board_keys___024root* vlSelf);

void Vtb_board_keys___024root___eval_act(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_act\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_board_keys___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_board_keys___024root___act_comb__TOP__0(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___act_comb__TOP__0\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ tb_board_keys__DOT__low_rows;
    tb_board_keys__DOT__low_rows = 0;
    CData/*3:0*/ tb_board_keys__DOT__low_cols;
    tb_board_keys__DOT__low_cols = 0;
    // Body
    vlSelfRef.tb_board_keys__DOT__cv = ((IData)(vlSelfRef.tb_board_keys__DOT__merge__DOT__pending) 
                                        | (IData)(vlSelfRef.tb_board_keys__DOT__uv));
    vlSelfRef.tb_board_keys__DOT__cb = ((IData)(vlSelfRef.tb_board_keys__DOT__uv)
                                         ? (IData)(vlSelfRef.tb_board_keys__DOT__ub)
                                         : (IData)(vlSelfRef.tb_board_keys__DOT__merge__DOT__held));
    vlSelfRef.tb_board_keys__DOT__row_low = ((IData)(vlSelfRef.tb_board_keys__DOT__reset)
                                              ? 0U : 
                                             (0xfU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.tb_board_keys__DOT__dut__DOT__row))));
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

void Vtb_board_keys___024root___nba_sequent__TOP__0(Vtb_board_keys___024root* vlSelf);

void Vtb_board_keys___024root___eval_nba(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_nba\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_board_keys___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_board_keys___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_board_keys___024root___timing_resume(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___timing_resume\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h13cda066__0.resume(
                                                   "@(negedge tb_board_keys.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h76dba12b__0.resume(
                                                   "@( tb_board_keys.kv)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_board_keys___024root___timing_commit(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___timing_commit\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h13cda066__0.commit(
                                                   "@(negedge tb_board_keys.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h76dba12b__0.commit(
                                                   "@( tb_board_keys.kv)");
    }
}

void Vtb_board_keys___024root___eval_triggers__act(Vtb_board_keys___024root* vlSelf);

bool Vtb_board_keys___024root___eval_phase__act(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_phase__act\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_board_keys___024root___eval_triggers__act(vlSelf);
    Vtb_board_keys___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_board_keys___024root___timing_resume(vlSelf);
        Vtb_board_keys___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_board_keys___024root___eval_phase__nba(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_phase__nba\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_board_keys___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__nba(Vtb_board_keys___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_board_keys___024root___dump_triggers__act(Vtb_board_keys___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_board_keys___024root___eval(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_board_keys___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_board_keys.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_board_keys___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_board_keys.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_board_keys___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_board_keys___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_board_keys___024root___eval_debug_assertions(Vtb_board_keys___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_board_keys___024root___eval_debug_assertions\n"); );
    Vtb_board_keys__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
