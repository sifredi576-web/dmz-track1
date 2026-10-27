// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sd.h for the primary calling header

#include "Vtb_sd__pch.h"
#include "Vtb_sd___024root.h"

VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__0(Vtb_sd___024root* vlSelf);
VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__1(Vtb_sd___024root* vlSelf);
VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__2(Vtb_sd___024root* vlSelf);

void Vtb_sd___024root___eval_initial(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_initial\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sd___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_sd___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_sd___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_sd___024root___eval_initial__TOP__Vtiming__2(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "dmz_track1/sim/p3\tb_sd.sv", 
                                             3);
        vlSelfRef.tb_sd__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_sd__DOT__clk)));
    }
}

void Vtb_sd___024root___eval_act(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_act\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_sd___024root___nba_sequent__TOP__0(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___nba_sequent__TOP__1(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___nba_sequent__TOP__2(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___nba_sequent__TOP__3(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___nba_sequent__TOP__4(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___nba_sequent__TOP__5(Vtb_sd___024root* vlSelf);

void Vtb_sd___024root___eval_nba(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_nba\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_sd___024root___nba_sequent__TOP__5(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__1(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__1\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sd__DOT__cs) {
        vlSelfRef.tb_sd__DOT__cmdbytes = 0U;
        vlSelfRef.tb_sd__DOT__bits = 0U;
    }
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__3(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__3\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sd__DOT__reset) {
        vlSelfRef.__Vdly__tb_sd__DOT__sck = 0U;
        vlSelfRef.tb_sd__DOT__mosi = 1U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__busy = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi_done = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__rx = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno = 0U;
    } else {
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi_done = 0U;
        if (vlSelfRef.tb_sd__DOT__dut__DOT__busy) {
            if ((0U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__count))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count 
                    = (0xffU & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__count) 
                                - (IData)(1U)));
            } else {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count 
                    = (0xffU & (((IData)(vlSelfRef.tb_sd__DOT__initialized)
                                  ? 2U : 0x7dU) - (IData)(1U)));
                if (vlSelfRef.tb_sd__DOT__sck) {
                    vlSelfRef.__Vdly__tb_sd__DOT__sck = 0U;
                    if ((0U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__bitno))) {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__busy = 0U;
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi_done = 1U;
                        vlSelfRef.tb_sd__DOT__mosi = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno 
                            = (7U & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__bitno) 
                                     - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift 
                            = (1U | (0xfeU & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__shift) 
                                              << 1U)));
                        vlSelfRef.tb_sd__DOT__mosi 
                            = (1U & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__shift) 
                                     >> 6U));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__rx 
                        = ((0xfeU & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx) 
                                     << 1U)) | (IData)(vlSelfRef.tb_sd__DOT__miso));
                    vlSelfRef.__Vdly__tb_sd__DOT__sck = 1U;
                }
            }
        } else {
            vlSelfRef.__Vdly__tb_sd__DOT__sck = 0U;
            if (vlSelfRef.tb_sd__DOT__dut__DOT____Vcellinp__spi__start) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__busy = 1U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift 
                    = vlSelfRef.tb_sd__DOT__dut__DOT__send_byte;
                vlSelfRef.tb_sd__DOT__mosi = (1U & 
                                              ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__send_byte) 
                                               >> 7U));
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count 
                    = (0xffU & (((IData)(vlSelfRef.tb_sd__DOT__initialized)
                                  ? 2U : 0x7dU) - (IData)(1U)));
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno = 7U;
            }
        }
    }
    vlSelfRef.tb_sd__DOT__sck = vlSelfRef.__Vdly__tb_sd__DOT__sck;
    vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__count 
        = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count;
    vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__shift 
        = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift;
    vlSelfRef.tb_sd__DOT__dut__DOT__spi__DOT__bitno 
        = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno;
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__4(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__4\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_sd__DOT__cs) {
        vlSelfRef.tb_sd__DOT__head = 0U;
        vlSelfRef.tb_sd__DOT__tail = 0U;
        vlSelfRef.tb_sd__DOT__outbit = 7U;
        vlSelfRef.tb_sd__DOT__miso = 1U;
    } else if (VL_LTS_III(32, vlSelfRef.tb_sd__DOT__head, vlSelfRef.tb_sd__DOT__tail)) {
        vlSelfRef.tb_sd__DOT__miso = (1U & (vlSelfRef.tb_sd__DOT__response
                                            [(0x3ffU 
                                              & vlSelfRef.tb_sd__DOT__head)] 
                                            >> (7U 
                                                & vlSelfRef.tb_sd__DOT__outbit)));
        if ((0U == vlSelfRef.tb_sd__DOT__outbit)) {
            vlSelfRef.tb_sd__DOT__head = ((IData)(1U) 
                                          + vlSelfRef.tb_sd__DOT__head);
            vlSelfRef.tb_sd__DOT__outbit = 7U;
        } else {
            vlSelfRef.tb_sd__DOT__outbit = (vlSelfRef.tb_sd__DOT__outbit 
                                            - (IData)(1U));
        }
    } else {
        vlSelfRef.tb_sd__DOT__miso = 1U;
    }
}

VL_INLINE_OPT void Vtb_sd___024root___nba_sequent__TOP__5(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___nba_sequent__TOP__5\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_sd__DOT__dut__DOT__command__22__argument;
    __Vtask_tb_sd__DOT__dut__DOT__command__22__argument = 0;
    IData/*31:0*/ __Vtask_tb_sd__DOT__dut__DOT__command__25__argument;
    __Vtask_tb_sd__DOT__dut__DOT__command__25__argument = 0;
    // Body
    if (vlSelfRef.tb_sd__DOT__reset) {
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0ULL;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__power_count = 0xc350U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__init_attempts = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response = 0xffU;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__high_capacity = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__v2 = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__reading = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__crc_left = 0U;
        vlSelfRef.tb_sd__DOT__initialized = 0U;
        vlSelfRef.tb_sd__DOT__done = 0U;
        vlSelfRef.tb_sd__DOT__bv = 0U;
        vlSelfRef.tb_sd__DOT__bi = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_index = 0U;
        vlSelfRef.tb_sd__DOT__bd = 0U;
        vlSelfRef.tb_sd__DOT__error = 0U;
        vlSelfRef.__Vdly__tb_sd__DOT__sectors = 0U;
        vlSelfRef.tb_sd__DOT__cs = 1U;
    } else {
        vlSelfRef.tb_sd__DOT__done = 0U;
        vlSelfRef.tb_sd__DOT__bv = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((0U == vlSelfRef.tb_sd__DOT__dut__DOT__power_count)) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 0xaU;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__power_count 
                        = (vlSelfRef.tb_sd__DOT__dut__DOT__power_count 
                           - (IData)(1U));
                }
            } else if ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                    if ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left))) {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 3U;
                    } else {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left 
                            = (0xfU & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left) 
                                       - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0x400000000095ULL;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 4U;
                vlSelfRef.tb_sd__DOT__cs = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
            } else if ((4U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response))) {
                    vlSelfRef.tb_sd__DOT__error = 1U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0x48000001aa87ULL;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 4U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 5U;
                    vlSelfRef.tb_sd__DOT__cs = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response)) 
                     & (0x1aaU == (0xfffU & vlSelfRef.tb_sd__DOT__dut__DOT__response_extra)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__v2 = 1U;
                } else if ((5U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__v2 = 0U;
                } else {
                    vlSelfRef.tb_sd__DOT__error = 2U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                }
                if (((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response)) 
                     | (5U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 6U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0x770000000001ULL;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 7U;
                vlSelfRef.tb_sd__DOT__cs = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
            } else if ((1U < (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response))) {
                vlSelfRef.tb_sd__DOT__error = 3U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
            } else {
                __Vtask_tb_sd__DOT__dut__DOT__command__22__argument 
                    = ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__v2)
                        ? 0x40000000U : 0U);
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame 
                    = (0x690000000001ULL | ((QData)((IData)(__Vtask_tb_sd__DOT__dut__DOT__command__22__argument)) 
                                            << 8U));
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 8U;
                vlSelfRef.tb_sd__DOT__cs = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                          | (9U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                         | (0xaU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                        | (0xbU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                       | (0xcU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                      | (0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                     | (0x14U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                    | (0x15U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)))) {
            if ((8U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 9U;
                } else if (((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response)) 
                            & (0x7d0U > (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__init_attempts)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__init_attempts 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__init_attempts)));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 6U;
                } else {
                    vlSelfRef.tb_sd__DOT__error = 4U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                }
            } else if ((9U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0x7a0000000001ULL;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 4U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 0xaU;
                vlSelfRef.tb_sd__DOT__cs = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
            } else if ((0xaU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & ((0U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response)) 
                           | (~ (vlSelfRef.tb_sd__DOT__dut__DOT__response_extra 
                                 >> 0x1fU))))) {
                    vlSelfRef.tb_sd__DOT__error = 5U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__high_capacity 
                        = (1U & (vlSelfRef.tb_sd__DOT__dut__DOT__response_extra 
                                 >> 0x1eU));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state 
                        = ((0x40000000U & vlSelfRef.tb_sd__DOT__dut__DOT__response_extra)
                            ? 0xcU : 0xbU);
                }
            } else if ((0xbU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame = 0x500000020001ULL;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 0xcU;
                vlSelfRef.tb_sd__DOT__cs = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
            } else if ((0xcU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((0U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__response))) {
                    vlSelfRef.tb_sd__DOT__error = 6U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                } else {
                    vlSelfRef.tb_sd__DOT__initialized = 1U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0xdU;
                }
            } else if ((0xdU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sd__DOT__start) {
                    __Vtask_tb_sd__DOT__dut__DOT__command__25__argument 
                        = ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__high_capacity)
                            ? 3U : 0x600U);
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__reading = 1U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame 
                        = (0x510000000001ULL | ((QData)((IData)(__Vtask_tb_sd__DOT__dut__DOT__command__25__argument)) 
                                                << 8U));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left = 6U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation = 0xdU;
                    vlSelfRef.tb_sd__DOT__cs = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
                }
            } else if ((0x14U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x15U;
                }
            } else if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame 
                    = (0xffULL | (0xffffffffff00ULL 
                                  & (vlSelfRef.tb_sd__DOT__dut__DOT__frame 
                                     << 8U)));
                if ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x16U;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left 
                        = (0xfU & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left) 
                                   - (IData)(1U)));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x14U;
                }
            }
        } else if (((((((((0x16U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                          | (0x17U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                         | (0x18U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                        | (0x19U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                       | (0x1aU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                      | (0x1bU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                     | (0x1cU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) 
                    | (0x1dU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)))) {
            if ((0x16U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x17U;
                }
            } else if ((0x17U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                    if ((0x80U & (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx))) {
                        if ((0x7fU == vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count)) {
                            vlSelfRef.tb_sd__DOT__error = 7U;
                            vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                        } else {
                            vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count 
                                = (0xfffffU & ((IData)(1U) 
                                               + vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count));
                            vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x16U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response 
                            = vlSelfRef.tb_sd__DOT__dut__DOT__rx;
                        if (vlSelfRef.tb_sd__DOT__dut__DOT__reading) {
                            if ((0U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx))) {
                                vlSelfRef.tb_sd__DOT__error = 8U;
                                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                            } else {
                                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count = 0U;
                                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1cU;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state 
                                = (((0U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__extra_count)) 
                                    & (5U != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx)))
                                    ? 0x18U : 0x1aU);
                        }
                    }
                }
            } else if ((0x18U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x19U;
                }
            } else if ((0x19U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra 
                        = ((vlSelfRef.tb_sd__DOT__dut__DOT__response_extra 
                            << 8U) | (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx));
                    if ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__extra_count))) {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1aU;
                    } else {
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count 
                            = (7U & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__extra_count) 
                                     - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x18U;
                    }
                }
            } else if ((0x1aU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                vlSelfRef.tb_sd__DOT__cs = 1U;
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1bU;
                }
            } else if ((0x1bU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state 
                        = vlSelfRef.tb_sd__DOT__dut__DOT__continuation;
                    if (vlSelfRef.tb_sd__DOT__dut__DOT__reading) {
                        vlSelfRef.__Vdly__tb_sd__DOT__sectors 
                            = ((IData)(1U) + vlSelfRef.tb_sd__DOT__sectors);
                        vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__reading = 0U;
                        vlSelfRef.tb_sd__DOT__done = 1U;
                    }
                }
            } else if ((0x1cU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1dU;
                }
            } else if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                if ((0xfeU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_index = 0U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1eU;
                } else if (((0xffU != (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__rx)) 
                            | (0x7ffffU == vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count))) {
                    vlSelfRef.tb_sd__DOT__error = 9U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1cU;
                }
            }
        } else if ((0x1eU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1fU;
            }
        } else if ((0x1fU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                vlSelfRef.tb_sd__DOT__bd = vlSelfRef.tb_sd__DOT__dut__DOT__rx;
                vlSelfRef.tb_sd__DOT__bi = vlSelfRef.tb_sd__DOT__dut__DOT__data_index;
                vlSelfRef.tb_sd__DOT__bv = 1U;
                if ((0x1ffU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__data_index))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__crc_left = 2U;
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x20U;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_index 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__data_index)));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1eU;
                }
            }
        } else if ((0x20U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)))) {
                vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x21U;
            }
        } else if ((0x21U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_sd__DOT__dut__DOT__spi_done) {
                if ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__crc_left))) {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x1aU;
                } else {
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__crc_left 
                        = (3U & ((IData)(vlSelfRef.tb_sd__DOT__dut__DOT__crc_left) 
                                 - (IData)(1U)));
                    vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x20U;
                }
            }
        } else if ((0x3fU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))) {
            vlSelfRef.tb_sd__DOT__cs = 1U;
        } else {
            vlSelfRef.tb_sd__DOT__error = 0xffU;
            vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state = 0x3fU;
        }
    }
    vlSelfRef.tb_sd__DOT__dut__DOT__spi_done = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__spi_done;
    vlSelfRef.tb_sd__DOT__dut__DOT__continuation = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__continuation;
    vlSelfRef.tb_sd__DOT__dut__DOT__bytes_left = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__bytes_left;
    vlSelfRef.tb_sd__DOT__dut__DOT__power_count = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__power_count;
    vlSelfRef.tb_sd__DOT__dut__DOT__response_extra 
        = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response_extra;
    vlSelfRef.tb_sd__DOT__dut__DOT__timeout_count = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__timeout_count;
    vlSelfRef.tb_sd__DOT__dut__DOT__init_attempts = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__init_attempts;
    vlSelfRef.tb_sd__DOT__dut__DOT__response = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__response;
    vlSelfRef.tb_sd__DOT__dut__DOT__extra_count = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__extra_count;
    vlSelfRef.tb_sd__DOT__dut__DOT__high_capacity = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__high_capacity;
    vlSelfRef.tb_sd__DOT__dut__DOT__v2 = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__v2;
    vlSelfRef.tb_sd__DOT__dut__DOT__reading = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__reading;
    vlSelfRef.tb_sd__DOT__dut__DOT__crc_left = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__crc_left;
    vlSelfRef.tb_sd__DOT__dut__DOT__data_index = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__data_index;
    vlSelfRef.tb_sd__DOT__sectors = vlSelfRef.__Vdly__tb_sd__DOT__sectors;
    vlSelfRef.tb_sd__DOT__dut__DOT__rx = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__rx;
    vlSelfRef.tb_sd__DOT__dut__DOT__frame = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__frame;
    vlSelfRef.tb_sd__DOT__dut__DOT__busy = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__busy;
    vlSelfRef.tb_sd__DOT__dut__DOT__state = vlSelfRef.__Vdly__tb_sd__DOT__dut__DOT__state;
    vlSelfRef.tb_sd__DOT__dut__DOT__send_byte = ((0x14U 
                                                  == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))
                                                  ? 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_sd__DOT__dut__DOT__frame 
                                                             >> 0x28U)))
                                                  : 0xffU);
    vlSelfRef.tb_sd__DOT__dut__DOT____Vcellinp__spi__start 
        = ((~ (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__busy)) 
           & ((1U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
              | ((0x14U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                 | ((0x16U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                    | ((0x18U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                       | ((0x1aU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                          | ((0x1cU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                             | ((0x1eU == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state)) 
                                | (0x20U == (IData)(vlSelfRef.tb_sd__DOT__dut__DOT__state))))))))));
}

void Vtb_sd___024root___timing_resume(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___timing_resume\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h01437713__0.resume(
                                                   "@( ((6'hd == tb_sd.dut.state) & tb_sd.initialized))");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6b5d801d__0.resume(
                                                   "@(negedge tb_sd.clk)");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h54b24ea5__0.resume(
                                                   "@( (tb_sd.done | (8'h0 != tb_sd.error)))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sd___024root___timing_commit(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___timing_commit\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h01437713__0.commit(
                                                   "@( ((6'hd == tb_sd.dut.state) & tb_sd.initialized))");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6b5d801d__0.commit(
                                                   "@(negedge tb_sd.clk)");
    }
    if ((! (0x80ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h54b24ea5__0.commit(
                                                   "@( (tb_sd.done | (8'h0 != tb_sd.error)))");
    }
}

void Vtb_sd___024root___eval_triggers__act(Vtb_sd___024root* vlSelf);

bool Vtb_sd___024root___eval_phase__act(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_phase__act\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sd___024root___eval_triggers__act(vlSelf);
    Vtb_sd___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_sd___024root___timing_resume(vlSelf);
        Vtb_sd___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sd___024root___eval_phase__nba(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_phase__nba\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_sd___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__nba(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sd___024root___dump_triggers__act(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_sd___024root___eval(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_sd___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dmz_track1/sim/p3\\tb_sd.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_sd___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dmz_track1/sim/p3\\tb_sd.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_sd___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_sd___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_sd___024root___eval_debug_assertions(Vtb_sd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sd___024root___eval_debug_assertions\n"); );
    Vtb_sd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
