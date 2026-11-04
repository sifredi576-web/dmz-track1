// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_widescreen.h for the primary calling header

#include "Vtb_widescreen__pch.h"
#include "Vtb_widescreen___024root.h"

VL_ATTR_COLD void Vtb_widescreen___024root___eval_initial__TOP(Vtb_widescreen___024root* vlSelf);
VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__0(Vtb_widescreen___024root* vlSelf);
VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__1(Vtb_widescreen___024root* vlSelf);
VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__2(Vtb_widescreen___024root* vlSelf);
VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3(Vtb_widescreen___024root* vlSelf);

void Vtb_widescreen___024root___eval_initial(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_widescreen___024root___eval_initial__TOP(vlSelf);
    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__1(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1a0bULL, 
                                             nullptr, 
                                             "sim/system\tb_widescreen.sv", 
                                             5);
        vlSelfRef.tb_widescreen__DOT__pclk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_widescreen__DOT__pclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__2(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/system\tb_widescreen.sv", 
                                             4);
        vlSelfRef.tb_widescreen__DOT__mclk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_widescreen__DOT__mclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_initial__TOP__Vtiming__3____Vfork_1__1\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1770ULL, 
                                         nullptr, "sim/p2\sdram_model.sv", 
                                         28);
    vlSelfRef.__VdlyVal__tb_widescreen__DOT__din__v0 
        = vlSelfRef.__Vintraval_he798b52a__0;
    vlSelfRef.__VdlySet__tb_widescreen__DOT__din__v0 = 1U;
}

void Vtb_widescreen___024root___act_sequent__TOP__0(Vtb_widescreen___024root* vlSelf);

void Vtb_widescreen___024root___eval_act(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_act\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_widescreen___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_widescreen___024root___act_sequent__TOP__0(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___act_sequent__TOP__0\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__freset = (1U & ((~ 
                                                   ((IData)(vlSelfRef.tb_widescreen__DOT__display_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)))) 
                                                  | (IData)(vlSelfRef.tb_widescreen__DOT__reset)));
}

void Vtb_widescreen___024root___nba_sequent__TOP__0(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__1(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__2(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__3(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__4(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_comb__TOP__0(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__5(Vtb_widescreen___024root* vlSelf);
void Vtb_widescreen___024root___nba_sequent__TOP__6(Vtb_widescreen___024root* vlSelf);

void Vtb_widescreen___024root___eval_nba(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_nba\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_widescreen___024root___nba_sequent__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__0(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__0\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__address = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__4__g = 0;
    VlWide<8>/*255:0*/ __Vdly__tb_widescreen__DOT__rdata;
    VL_ZERO_W(256, __Vdly__tb_widescreen__DOT__rdata);
    VlWide<8>/*255:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data;
    VL_ZERO_W(256, __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data);
    CData/*4:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__state;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0;
    SData/*15:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 0;
    SData/*15:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age = 0;
    CData/*3:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh = 0;
    CData/*0:0*/ __Vdly__tb_widescreen__DOT__init;
    __Vdly__tb_widescreen__DOT__init = 0;
    CData/*2:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__beat;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = 0;
    IData/*20:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr = 0;
    CData/*0:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write = 0;
    CData/*3:0*/ __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open = 0;
    CData/*0:0*/ __Vdly__tb_widescreen__DOT__mux__DOT__busy;
    __Vdly__tb_widescreen__DOT__mux__DOT__busy = 0;
    CData/*0:0*/ __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v0;
    __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v0 = 0;
    SData/*10:0*/ __VdlyVal__tb_widescreen__DOT__ctrl__DOT__open_row__v4;
    __VdlyVal__tb_widescreen__DOT__ctrl__DOT__open_row__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_widescreen__DOT__ctrl__DOT__open_row__v4;
    __VdlyDim0__tb_widescreen__DOT__ctrl__DOT__open_row__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v4;
    __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v4 = 0;
    // Body
    vlSelfRef.__Vdly__tb_widescreen__DOT__aux_count 
        = vlSelfRef.tb_widescreen__DOT__aux_count;
    __Vdly__tb_widescreen__DOT__rdata[0U] = vlSelfRef.tb_widescreen__DOT__rdata[0U];
    __Vdly__tb_widescreen__DOT__rdata[1U] = vlSelfRef.tb_widescreen__DOT__rdata[1U];
    __Vdly__tb_widescreen__DOT__rdata[2U] = vlSelfRef.tb_widescreen__DOT__rdata[2U];
    __Vdly__tb_widescreen__DOT__rdata[3U] = vlSelfRef.tb_widescreen__DOT__rdata[3U];
    __Vdly__tb_widescreen__DOT__rdata[4U] = vlSelfRef.tb_widescreen__DOT__rdata[4U];
    __Vdly__tb_widescreen__DOT__rdata[5U] = vlSelfRef.tb_widescreen__DOT__rdata[5U];
    __Vdly__tb_widescreen__DOT__rdata[6U] = vlSelfRef.tb_widescreen__DOT__rdata[6U];
    __Vdly__tb_widescreen__DOT__rdata[7U] = vlSelfRef.tb_widescreen__DOT__rdata[7U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[0U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[0U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[1U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[1U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[2U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[2U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[3U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[3U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[4U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[4U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[5U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[5U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[6U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[6U];
    __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[7U] 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[7U];
    vlSelfRef.__VdlySet__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0 = 0U;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__init_refresh;
    vlSelfRef.__Vdly__tb_widescreen__DOT__refreshes 
        = vlSelfRef.tb_widescreen__DOT__refreshes;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_write;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__row_open;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr;
    __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v0 = 0U;
    __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v4 = 0U;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age 
        = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age;
    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state;
    __Vdly__tb_widescreen__DOT__init = vlSelfRef.tb_widescreen__DOT__init;
    __Vdly__tb_widescreen__DOT__mux__DOT__busy = vlSelfRef.tb_widescreen__DOT__mux__DOT__busy;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__row_base 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__row_base;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__out_row 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__out_row;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__last_frame 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__last_frame;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__beat 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__beat;
    vlSelfRef.__Vdly__tb_widescreen__DOT__swaps = vlSelfRef.tb_widescreen__DOT__swaps;
    vlSelfRef.__Vdly__tb_widescreen__DOT__written = vlSelfRef.tb_widescreen__DOT__written;
    vlSelfRef.__Vdly__tb_widescreen__DOT__reads = vlSelfRef.tb_widescreen__DOT__reads;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transaction_last 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__transaction_last;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transition_active 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__transition_active;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__wipe_words;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_x;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_addr;
    vlSelfRef.__Vdly__tb_widescreen__DOT__front = vlSelfRef.tb_widescreen__DOT__front;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__frame_pending 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__frame_pending;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__back_ready 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__back_ready;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__prefetched;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__flush 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__flush;
    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state 
        = vlSelfRef.tb_widescreen__DOT__fb__DOT__state;
    vlSelfRef.__Vdly__tb_widescreen__DOT__display_valid 
        = vlSelfRef.tb_widescreen__DOT__display_valid;
    vlSelfRef.__Vdly__tb_widescreen__DOT__load_addr 
        = vlSelfRef.tb_widescreen__DOT__load_addr;
    if ((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__reset)))) {
        if ((2U & (IData)(vlSelfRef.tb_widescreen__DOT__mux_response))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__aux_count 
                = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__aux_count);
        }
        if ((0xcU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            __Vdly__tb_widescreen__DOT__rdata[0U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[1U];
            __Vdly__tb_widescreen__DOT__rdata[1U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[2U];
            __Vdly__tb_widescreen__DOT__rdata[2U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[3U];
            __Vdly__tb_widescreen__DOT__rdata[3U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[4U];
            __Vdly__tb_widescreen__DOT__rdata[4U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[5U];
            __Vdly__tb_widescreen__DOT__rdata[5U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[6U];
            __Vdly__tb_widescreen__DOT__rdata[6U] = 
                vlSelfRef.tb_widescreen__DOT__rdata[7U];
            __Vdly__tb_widescreen__DOT__rdata[7U] = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__dq_capture;
        }
        if ((((7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
              & (IData)(vlSelfRef.tb_widescreen__DOT__ready)) 
             & (IData)(vlSelfRef.tb_widescreen__DOT__req))) {
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[0U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[0U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[1U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[1U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[2U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[2U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[3U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[3U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[4U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[4U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[5U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[5U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[6U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[6U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[7U] 
                = vlSelfRef.tb_widescreen__DOT__wdata[7U];
        } else if (((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                    | (0xeU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[0U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[1U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[1U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[2U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[2U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[3U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[3U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[4U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[4U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[5U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[5U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[6U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[6U] 
                = vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[7U];
            __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[7U] = 0U;
        }
    }
    if (vlSelfRef.tb_widescreen__DOT__reset) {
        vlSelfRef.tb_widescreen__DOT__aux_timer = 0U;
        __Vdly__tb_widescreen__DOT__mux__DOT__busy = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__load_addr = 0U;
        vlSelfRef.tb_widescreen__DOT__mux__DOT__owner = 0U;
        vlSelfRef.tb_widescreen__DOT__load = 1U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 0x13U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh = 0U;
        __Vdly__tb_widescreen__DOT__init = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__refreshes = 0U;
        vlSelfRef.tb_widescreen__DOT__rsp = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write = 0U;
        __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open = 0U;
        __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v0 = 1U;
    } else {
        vlSelfRef.tb_widescreen__DOT__aux_timer = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tb_widescreen__DOT__aux_timer)));
        if (((IData)(vlSelfRef.tb_widescreen__DOT__req) 
             & (IData)(vlSelfRef.tb_widescreen__DOT__ready))) {
            __Vdly__tb_widescreen__DOT__mux__DOT__busy = 1U;
            vlSelfRef.tb_widescreen__DOT__mux__DOT__owner 
                = vlSelfRef.tb_widescreen__DOT__mux__DOT__selected;
        }
        if (((IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__busy) 
             & (IData)(vlSelfRef.tb_widescreen__DOT__rsp))) {
            __Vdly__tb_widescreen__DOT__mux__DOT__busy = 0U;
        }
        if (vlSelfRef.tb_widescreen__DOT__ack) {
            if ((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__last)))) {
                vlSelfRef.__Vdly__tb_widescreen__DOT__load_addr 
                    = (0x7ffffU & ((IData)(8U) + vlSelfRef.tb_widescreen__DOT__load_addr));
            }
            if ((0x545f8U == vlSelfRef.tb_widescreen__DOT__load_addr)) {
                vlSelfRef.tb_widescreen__DOT__load = 0U;
            }
        }
        vlSelfRef.tb_widescreen__DOT__rsp = 0U;
        if (((IData)(vlSelfRef.tb_widescreen__DOT__init) 
             & (0xffffU != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age)))) {
            __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age)));
        }
        if (((((((((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 1U;
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 2U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 3U;
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__init_refresh)));
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 4U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 3U;
            } else if ((4U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state 
                        = ((8U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__init_refresh))
                            ? 5U : 3U);
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((5U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 6U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((6U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 7U;
                    __Vdly__tb_widescreen__DOT__init = 1U;
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age = 0U;
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0x186U <= (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0x14U;
            } else if (vlSelfRef.tb_widescreen__DOT__req) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                    = vlSelfRef.tb_widescreen__DOT__addr;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write 
                    = vlSelfRef.tb_widescreen__DOT__rw;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = 0U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state 
                    = (0x1fU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__hit)
                                 ? ((IData)(vlSelfRef.tb_widescreen__DOT__rw)
                                     ? 0xdU : 0xaU)
                                 : ((1U & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__row_open) 
                                           >> (3U & 
                                               (vlSelfRef.tb_widescreen__DOT__addr 
                                                >> 0x13U))))
                                     ? 0x12U : 8U)));
            }
        } else if (((((((((8U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                          | (0x12U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                         | (0x13U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                        | (0x14U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                       | (0x15U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                      | (9U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                     | (0xaU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                    | (0xbU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
            if ((8U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 9U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 1U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open 
                    = ((IData)(__Vdly__tb_widescreen__DOT__ctrl__DOT__row_open) 
                       | (0xfU & ((IData)(1U) << (3U 
                                                  & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                                     >> 0x13U)))));
                __VdlyVal__tb_widescreen__DOT__ctrl__DOT__open_row__v4 
                    = (0x7ffU & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                 >> 8U));
                __VdlyDim0__tb_widescreen__DOT__ctrl__DOT__open_row__v4 
                    = (3U & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                             >> 0x13U));
                __VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v4 = 1U;
            } else if ((0x12U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open 
                    = ((~ ((IData)(1U) << (3U & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                                 >> 0x13U)))) 
                       & (IData)(__Vdly__tb_widescreen__DOT__ctrl__DOT__row_open));
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0x13U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((0x13U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 8U;
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0x14U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open = 0U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0x15U;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 1U;
            } else if ((0x15U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0x10U;
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((9U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = 0U;
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__state 
                        = ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_write)
                            ? 0xdU : 0xaU);
                } else {
                    __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                        = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                      - (IData)(1U)));
                }
            } else if ((0xaU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0xbU;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 2U;
            } else if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0xcU;
            } else {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else if ((0xcU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            if ((7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0xfU;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 0U;
            } else {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat)));
            }
        } else if ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0xeU;
            __Vdly__tb_widescreen__DOT__ctrl__DOT__beat = 1U;
        } else if ((0xeU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            if ((7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0xfU;
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 3U;
            } else {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__beat 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat)));
            }
        } else if ((0xfU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 7U;
                vlSelfRef.tb_widescreen__DOT__rsp = 1U;
            } else {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else if ((0x10U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__refreshes 
                = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__refreshes);
            __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0x11U;
            __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count = 3U;
            __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age = 0U;
        } else if ((0x11U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 7U;
            } else {
                __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count 
                    = (0xffffU & ((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count) 
                                  - (IData)(1U)));
            }
        } else {
            __Vdly__tb_widescreen__DOT__ctrl__DOT__state = 0U;
        }
    }
    if (((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__push) 
         & (~ (IData)(vlSelfRef.tb_widescreen__DOT__freset)))) {
        vlSelfRef.__VdlyVal__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat), 5U)))
                 ? 0U : (vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[
                         (((IData)(0x1fU) + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat), 5U))))) 
               | (vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[
                  (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat), 5U))));
        vlSelfRef.__VdlyDim0__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0 
            = vlSelfRef.tb_widescreen__DOT__fifo__DOT__write_addr;
        vlSelfRef.__VdlySet__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0 = 1U;
    }
    vlSelfRef.tb_widescreen__DOT__oe = ((~ (IData)(vlSelfRef.tb_widescreen__DOT__reset)) 
                                        & ((((((((7U 
                                                  == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                                 & (IData)(vlSelfRef.tb_widescreen__DOT__ready)) 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__req)) 
                                               & (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__hit)) 
                                              & (IData)(vlSelfRef.tb_widescreen__DOT__rw)) 
                                             | (((9U 
                                                  == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count))) 
                                                & (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_write))) 
                                            | (0xdU 
                                               == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) 
                                           | ((0xeU 
                                               == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                              & (7U 
                                                 != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat)))));
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[0U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[0U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[1U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[1U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[2U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[2U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[3U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[3U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[4U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[4U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[5U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[5U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[6U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[6U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__write_data[7U] 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__write_data[7U];
    vlSelfRef.tb_widescreen__DOT__mux__DOT__busy = __Vdly__tb_widescreen__DOT__mux__DOT__busy;
    if ((((~ (IData)(vlSelfRef.tb_widescreen__DOT__reset)) 
          & (1U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) 
         & (IData)(vlSelfRef.tb_widescreen__DOT__mux_response))) {
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[0U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[0U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[1U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[1U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[2U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[2U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[3U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[3U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[4U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[4U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[5U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[5U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[6U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[6U];
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_buffer[7U] 
            = vlSelfRef.tb_widescreen__DOT__rdata[7U];
    }
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp = ((IData)(vlSelfRef.tb_widescreen__DOT__freset)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wn));
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
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2 = 
        ((IData)(vlSelfRef.tb_widescreen__DOT__freset)
          ? 0U : (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg1));
    vlSelfRef.tb_widescreen__DOT__used = (0xfffU & 
                                          ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp) 
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
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg1 = 
        ((IData)(vlSelfRef.tb_widescreen__DOT__freset)
          ? 0U : (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rgray));
    vlSelfRef.tb_widescreen__DOT__rdata[0U] = __Vdly__tb_widescreen__DOT__rdata[0U];
    vlSelfRef.tb_widescreen__DOT__rdata[1U] = __Vdly__tb_widescreen__DOT__rdata[1U];
    vlSelfRef.tb_widescreen__DOT__rdata[2U] = __Vdly__tb_widescreen__DOT__rdata[2U];
    vlSelfRef.tb_widescreen__DOT__rdata[3U] = __Vdly__tb_widescreen__DOT__rdata[3U];
    vlSelfRef.tb_widescreen__DOT__rdata[4U] = __Vdly__tb_widescreen__DOT__rdata[4U];
    vlSelfRef.tb_widescreen__DOT__rdata[5U] = __Vdly__tb_widescreen__DOT__rdata[5U];
    vlSelfRef.tb_widescreen__DOT__rdata[6U] = __Vdly__tb_widescreen__DOT__rdata[6U];
    vlSelfRef.tb_widescreen__DOT__rdata[7U] = __Vdly__tb_widescreen__DOT__rdata[7U];
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__init_refresh 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__init_refresh;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__wait_count 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__wait_count;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_write 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_write;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__beat = __Vdly__tb_widescreen__DOT__ctrl__DOT__beat;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__row_open 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__row_open;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__transaction_addr;
    if (__VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v0) {
        vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row[0U] = 0U;
        vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row[1U] = 0U;
        vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row[2U] = 0U;
        vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row[3U] = 0U;
    }
    if (__VdlySet__tb_widescreen__DOT__ctrl__DOT__open_row__v4) {
        vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row[__VdlyDim0__tb_widescreen__DOT__ctrl__DOT__open_row__v4] 
            = __VdlyVal__tb_widescreen__DOT__ctrl__DOT__open_row__v4;
    }
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__refresh_age;
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state 
        = __Vdly__tb_widescreen__DOT__ctrl__DOT__state;
    vlSelfRef.tb_widescreen__DOT__init = __Vdly__tb_widescreen__DOT__init;
    vlSelfRef.tb_widescreen__DOT__ras = 1U;
    vlSelfRef.tb_widescreen__DOT__cas = 1U;
    vlSelfRef.tb_widescreen__DOT__we = 1U;
    vlSelfRef.tb_widescreen__DOT__sa = 0U;
    if (((1U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
         || (0x14U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))) {
        vlSelfRef.tb_widescreen__DOT__ras = 0U;
        vlSelfRef.tb_widescreen__DOT__we = 0U;
        vlSelfRef.tb_widescreen__DOT__sa = (0x400U 
                                            | (IData)(vlSelfRef.tb_widescreen__DOT__sa));
    } else if ((0x12U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
        vlSelfRef.tb_widescreen__DOT__ras = 0U;
        vlSelfRef.tb_widescreen__DOT__we = 0U;
        vlSelfRef.tb_widescreen__DOT__sa = (0x3ffU 
                                            & (IData)(vlSelfRef.tb_widescreen__DOT__sa));
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
                        = (0xffU & vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr);
                } else if ((0xdU == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
                    vlSelfRef.tb_widescreen__DOT__sa 
                        = (0xffU & vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr);
                }
            }
        }
    }
    vlSelfRef.tb_widescreen__DOT__bank = (3U & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__transaction_addr 
                                                >> 0x13U));
    if ((1U & (~ ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                  || (0x14U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)))))) {
        if ((0x12U != (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state))) {
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
    }
    vlSelfRef.tb_widescreen__DOT__ready = ((7U == (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__state)) 
                                           & (0x186U 
                                              > (IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__refresh_age)));
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__2(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__2\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__fr = ((IData)(vlSelfRef.tb_widescreen__DOT__freset)
                                         ? 7U : (6U 
                                                 & ((IData)(vlSelfRef.tb_widescreen__DOT__fr) 
                                                    << 1U)));
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__3(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__3\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__dq_capture 
        = vlSelfRef.tb_widescreen__DOT__din;
}

extern const VlWide<8>/*255:0*/ Vtb_widescreen__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vtb_widescreen__ConstPool__CONST_h14b26c6b_0;

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__4(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__4\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ tb_widescreen__DOT____Vcellinp__mux__valid;
    tb_widescreen__DOT____Vcellinp__mux__valid = 0;
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
    // Body
    vlSelfRef.tb_widescreen__DOT__aux_count = vlSelfRef.__Vdly__tb_widescreen__DOT__aux_count;
    vlSelfRef.tb_widescreen__DOT__refreshes = vlSelfRef.__Vdly__tb_widescreen__DOT__refreshes;
    if (vlSelfRef.__VdlySet__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0) {
        vlSelfRef.tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem[vlSelfRef.__VdlyDim0__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__tb_widescreen__DOT__fifo__DOT__ram32__DOT__mem__v0;
    }
    if (vlSelfRef.tb_widescreen__DOT__reset) {
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__row_base = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__out_row = 0U;
        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_finished = 1U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transition_active = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__last_frame = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__frame_pending = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__flush = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr = 0x54600U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__back_ready = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__beat = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__display_valid = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__front = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__swaps = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__written = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__reads = 0U;
        vlSelfRef.tb_widescreen__DOT__fault = 0U;
        vlSelfRef.tb_widescreen__DOT__ack = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transaction_last = 0U;
        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched = 0U;
    } else {
        vlSelfRef.tb_widescreen__DOT__ack = 0U;
        if ((((2U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)) 
              & (IData)(vlSelfRef.tb_widescreen__DOT__fb_req)) 
             & (IData)(vlSelfRef.tb_widescreen__DOT__mux_ready))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched = 1U;
        }
        if (((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__ft2) 
             != (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__last_frame))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__last_frame 
                = vlSelfRef.tb_widescreen__DOT__fb__DOT__ft2;
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__frame_pending = 1U;
        }
        if ((0U != (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__flush 
                = (0x3fU & ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush) 
                            - (IData)(1U)));
        }
        if (((0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)) 
             & (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__frame_pending))) {
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__frame_pending = 0U;
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched = 0U;
            if (vlSelfRef.tb_widescreen__DOT__fb__DOT__enabled) {
                if (vlSelfRef.tb_widescreen__DOT__fb__DOT__back_ready) {
                    if ((1U & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__display_valid)) 
                               | ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__transition_active) 
                                  & (0x1e0U <= (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__wipe_words)))))) {
                        vlSelfRef.__Vdly__tb_widescreen__DOT__front 
                            = (1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__front)));
                        vlSelfRef.__Vdly__tb_widescreen__DOT__swaps 
                            = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__swaps);
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transition_active = 0U;
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words = 0U;
                        vlSelfRef.__Vdly__tb_widescreen__DOT__display_valid = 1U;
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__back_ready = 0U;
                    } else if (vlSelfRef.tb_widescreen__DOT__fb__DOT__transition_active) {
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words 
                            = (0x1ffU & ((IData)(0x30U) 
                                         + (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__wipe_words)));
                    } else {
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transition_active = 1U;
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words = 0x30U;
                    }
                }
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__flush = 0x1fU;
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr = 0U;
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x = 0U;
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__row_base = 0U;
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__out_row = 0U;
                vlSelfRef.tb_widescreen__DOT__fb__DOT__read_finished = 0U;
            }
        } else if ((0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) {
            if (((IData)(vlSelfRef.tb_widescreen__DOT__fb_req) 
                 & (IData)(vlSelfRef.tb_widescreen__DOT__mux_ready))) {
                if (vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req) {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 1U;
                } else {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 3U;
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transaction_last 
                        = (0x545f8U == vlSelfRef.tb_widescreen__DOT__load_addr);
                }
            }
        } else if ((1U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_widescreen__DOT__mux_response))) {
                if ((0x1d8U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_x))) {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x = 0U;
                    if ((0x2cfU == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__out_row))) {
                        vlSelfRef.tb_widescreen__DOT__fb__DOT__read_finished = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__out_row 
                            = (0x3ffU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__out_row)));
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__row_base 
                            = (0x7ffffU & ((IData)(0x1e0U) 
                                           + vlSelfRef.tb_widescreen__DOT__fb__DOT__row_base));
                        vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr 
                            = (0x7ffffU & ((IData)(0x1e0U) 
                                           + vlSelfRef.tb_widescreen__DOT__fb__DOT__row_base));
                    }
                } else {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x 
                        = (0x1ffU & ((IData)(8U) + (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_x)));
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr 
                        = (0x7ffffU & ((IData)(8U) 
                                       + vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_addr));
                }
                vlSelfRef.__Vdly__tb_widescreen__DOT__reads 
                    = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__reads);
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__beat = 0U;
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_widescreen__DOT__full)))) {
                if ((7U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat))) {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state 
                        = (((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__prefetched) 
                            | ((IData)(vlSelfRef.tb_widescreen__DOT__fb_req) 
                               & (IData)(vlSelfRef.tb_widescreen__DOT__mux_ready)))
                            ? 1U : 0U);
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched = 0U;
                } else {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__beat 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__beat)));
                }
            }
        } else if ((3U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_widescreen__DOT__mux_response))) {
                vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 0U;
                vlSelfRef.tb_widescreen__DOT__ack = 1U;
                if (vlSelfRef.tb_widescreen__DOT__fb__DOT__transaction_last) {
                    vlSelfRef.__Vdly__tb_widescreen__DOT__written 
                        = ((IData)(1U) + vlSelfRef.tb_widescreen__DOT__written);
                    vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__back_ready = 1U;
                }
            }
        } else {
            vlSelfRef.tb_widescreen__DOT__fault = 1U;
            vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__wgray 
        = ((IData)(vlSelfRef.tb_widescreen__DOT__freset)
            ? 0U : (0xfffU & (VL_SHIFTR_III(12,12,32, (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wn), 1U) 
                              ^ (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wn))));
    vlSelfRef.tb_widescreen__DOT__fb__DOT__row_base 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__row_base;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__out_row 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__out_row;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__last_frame 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__last_frame;
    vlSelfRef.tb_widescreen__DOT__swaps = vlSelfRef.__Vdly__tb_widescreen__DOT__swaps;
    vlSelfRef.tb_widescreen__DOT__written = vlSelfRef.__Vdly__tb_widescreen__DOT__written;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__transaction_last 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transaction_last;
    vlSelfRef.tb_widescreen__DOT__reads = vlSelfRef.__Vdly__tb_widescreen__DOT__reads;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__beat = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__beat;
    vlSelfRef.tb_widescreen__DOT__mux_response = 0U;
    if ((((IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__busy) 
          & (IData)(vlSelfRef.tb_widescreen__DOT__rsp)) 
         & (IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__owner))) {
        vlSelfRef.tb_widescreen__DOT__mux_response 
            = (2U | (IData)(vlSelfRef.tb_widescreen__DOT__mux_response));
    }
    if ((((IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__busy) 
          & (IData)(vlSelfRef.tb_widescreen__DOT__rsp)) 
         & (~ (IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__owner)))) {
        vlSelfRef.tb_widescreen__DOT__mux_response 
            = (1U | (IData)(vlSelfRef.tb_widescreen__DOT__mux_response));
    }
    vlSelfRef.tb_widescreen__DOT__fb__DOT__transition_active 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__transition_active;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__wipe_words 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__wipe_words;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_x = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_x;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_addr 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__rd_addr;
    vlSelfRef.tb_widescreen__DOT__front = vlSelfRef.__Vdly__tb_widescreen__DOT__front;
    vlSelfRef.tb_widescreen__DOT__load_addr = vlSelfRef.__Vdly__tb_widescreen__DOT__load_addr;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__frame_pending 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__frame_pending;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__back_ready 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__back_ready;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__prefetched 
        = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__prefetched;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__flush = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__flush;
    vlSelfRef.tb_widescreen__DOT__fb__DOT__state = vlSelfRef.__Vdly__tb_widescreen__DOT__fb__DOT__state;
    vlSelfRef.tb_widescreen__DOT__display_valid = vlSelfRef.__Vdly__tb_widescreen__DOT__display_valid;
    vlSelfRef.tb_widescreen__DOT__last = (0x545f8U 
                                          == vlSelfRef.tb_widescreen__DOT__load_addr);
    __Vfunc_tb_widescreen__DOT__pixel__0__col = VL_MULS_III(32, (IData)(2U), 
                                                            VL_MODDIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x1e0U));
    __Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x43U), __Vfunc_tb_widescreen__DOT__pixel__0__row) 
                      + __Vfunc_tb_widescreen__DOT__pixel__0__col));
    vlSelfRef.tb_widescreen__DOT__payload[0U] = ((0xffff0000U 
                                                  & vlSelfRef.tb_widescreen__DOT__payload[0U]) 
                                                 | (IData)(__Vfunc_tb_widescreen__DOT__pixel__0__Vfuncout));
    __Vfunc_tb_widescreen__DOT__pixel__1__col = ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(2U), 
                                                             VL_MODDIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, vlSelfRef.tb_widescreen__DOT__load_addr, (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(1U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(2U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(3U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(3U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(4U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(4U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(5U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(5U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(6U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(6U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                            + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U)));
    __Vfunc_tb_widescreen__DOT__pixel__0__row = VL_DIVS_III(32, 
                                                            ((IData)(7U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
                                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U))));
    __Vfunc_tb_widescreen__DOT__pixel__1__row = VL_DIVS_III(32, 
                                                            ((IData)(7U) 
                                                             + vlSelfRef.tb_widescreen__DOT__load_addr), (IData)(0x1e0U));
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
    vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req 
        = ((IData)(vlSelfRef.tb_widescreen__DOT__display_valid) 
           & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__read_finished)) 
              & (0x7f0U >= (IData)(vlSelfRef.tb_widescreen__DOT__used))));
    vlSelfRef.tb_widescreen__DOT__fb__DOT__ft2 = ((1U 
                                                   & (~ (IData)(vlSelfRef.tb_widescreen__DOT__reset))) 
                                                  && (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__ft1));
    vlSelfRef.tb_widescreen__DOT__full = ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wgray) 
                                          == ((0xc00U 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2) 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | (0x3ffU 
                                                 & (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rg2))));
    vlSelfRef.tb_widescreen__DOT__fb_req = ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__enabled) 
                                            & ((0U 
                                                == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)) 
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
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__push = 
        (((~ (IData)(vlSelfRef.tb_widescreen__DOT__full)) 
          & (2U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state))) 
         & (0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__flush)));
    tb_widescreen__DOT____Vcellinp__mux__valid = ((2U 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__aux_timer) 
                                                      >> 6U)) 
                                                  | (IData)(vlSelfRef.tb_widescreen__DOT__fb_req));
    vlSelfRef.tb_widescreen__DOT__fb__DOT__ft1 = ((1U 
                                                   & (~ (IData)(vlSelfRef.tb_widescreen__DOT__reset))) 
                                                  && (IData)(vlSelfRef.tb_widescreen__DOT__ft));
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__wn = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__wp) 
                                                      + (IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__push)));
    vlSelfRef.tb_widescreen__DOT__mux__DOT__selected = 0U;
    vlSelfRef.tb_widescreen__DOT__req = 0U;
    vlSelfRef.tb_widescreen__DOT__mux_ready = 0U;
    vlSelfRef.tb_widescreen__DOT__wdata[0U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.tb_widescreen__DOT__wdata[1U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.tb_widescreen__DOT__wdata[2U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.tb_widescreen__DOT__wdata[3U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.tb_widescreen__DOT__wdata[4U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.tb_widescreen__DOT__wdata[5U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.tb_widescreen__DOT__wdata[6U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.tb_widescreen__DOT__wdata[7U] = Vtb_widescreen__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.tb_widescreen__DOT__rw = 0U;
    if (((~ (IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__busy)) 
         & ((IData)(tb_widescreen__DOT____Vcellinp__mux__valid) 
            >> 1U))) {
        vlSelfRef.tb_widescreen__DOT__mux__DOT__selected = 1U;
        vlSelfRef.tb_widescreen__DOT__req = 1U;
        vlSelfRef.tb_widescreen__DOT__mux_ready = 0U;
        vlSelfRef.tb_widescreen__DOT__mux_ready = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_widescreen__DOT__mux_ready)) 
                                                   | ((IData)(vlSelfRef.tb_widescreen__DOT__ready) 
                                                      << 1U));
        vlSelfRef.tb_widescreen__DOT__wdata[0U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[0U];
        vlSelfRef.tb_widescreen__DOT__wdata[1U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[1U];
        vlSelfRef.tb_widescreen__DOT__wdata[2U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[2U];
        vlSelfRef.tb_widescreen__DOT__wdata[3U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[3U];
        vlSelfRef.tb_widescreen__DOT__wdata[4U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[4U];
        vlSelfRef.tb_widescreen__DOT__wdata[5U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[5U];
        vlSelfRef.tb_widescreen__DOT__wdata[6U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[6U];
        vlSelfRef.tb_widescreen__DOT__wdata[7U] = Vtb_widescreen__ConstPool__CONST_h14b26c6b_0[7U];
        vlSelfRef.tb_widescreen__DOT__rw = 1U;
        vlSelfRef.tb_widescreen__DOT__addr = 0U;
        vlSelfRef.tb_widescreen__DOT__addr = 0x100000U;
    } else {
        vlSelfRef.tb_widescreen__DOT__addr = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__mux__DOT__busy)) 
               & (IData)(tb_widescreen__DOT____Vcellinp__mux__valid)))) {
        vlSelfRef.tb_widescreen__DOT__mux__DOT__selected = 0U;
        vlSelfRef.tb_widescreen__DOT__req = 1U;
        vlSelfRef.tb_widescreen__DOT__mux_ready = 0U;
        vlSelfRef.tb_widescreen__DOT__mux_ready = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_widescreen__DOT__mux_ready)) 
                                                   | (IData)(vlSelfRef.tb_widescreen__DOT__ready));
        vlSelfRef.tb_widescreen__DOT__wdata[0U] = vlSelfRef.tb_widescreen__DOT__payload[0U];
        vlSelfRef.tb_widescreen__DOT__wdata[1U] = vlSelfRef.tb_widescreen__DOT__payload[1U];
        vlSelfRef.tb_widescreen__DOT__wdata[2U] = vlSelfRef.tb_widescreen__DOT__payload[2U];
        vlSelfRef.tb_widescreen__DOT__wdata[3U] = vlSelfRef.tb_widescreen__DOT__payload[3U];
        vlSelfRef.tb_widescreen__DOT__wdata[4U] = vlSelfRef.tb_widescreen__DOT__payload[4U];
        vlSelfRef.tb_widescreen__DOT__wdata[5U] = vlSelfRef.tb_widescreen__DOT__payload[5U];
        vlSelfRef.tb_widescreen__DOT__wdata[6U] = vlSelfRef.tb_widescreen__DOT__payload[6U];
        vlSelfRef.tb_widescreen__DOT__wdata[7U] = vlSelfRef.tb_widescreen__DOT__payload[7U];
        vlSelfRef.tb_widescreen__DOT__rw = ((~ (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req)) 
                                            & (0U == (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__state)));
        vlSelfRef.tb_widescreen__DOT__addr = ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__video_req)
                                               ? ((0x80000U 
                                                   & ((((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__transition_active) 
                                                        & ((IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_x) 
                                                           < (IData)(vlSelfRef.tb_widescreen__DOT__fb__DOT__wipe_words)))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.tb_widescreen__DOT__front))
                                                        : (IData)(vlSelfRef.tb_widescreen__DOT__front)) 
                                                      << 0x13U)) 
                                                  | vlSelfRef.tb_widescreen__DOT__fb__DOT__rd_addr)
                                               : ((0x80000U 
                                                   & ((~ (IData)(vlSelfRef.tb_widescreen__DOT__front)) 
                                                      << 0x13U)) 
                                                  | vlSelfRef.tb_widescreen__DOT__load_addr));
    }
    vlSelfRef.tb_widescreen__DOT__ctrl__DOT__hit = 
        (((IData)(vlSelfRef.tb_widescreen__DOT__ctrl__DOT__row_open) 
          >> (3U & (vlSelfRef.tb_widescreen__DOT__addr 
                    >> 0x13U))) & (vlSelfRef.tb_widescreen__DOT__ctrl__DOT__open_row
                                   [(3U & (vlSelfRef.tb_widescreen__DOT__addr 
                                           >> 0x13U))] 
                                   == (0x7ffU & (vlSelfRef.tb_widescreen__DOT__addr 
                                                 >> 8U))));
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_comb__TOP__0(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_comb__TOP__0\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__address = 0;
    SData/*10:0*/ __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g;
    __Vfunc_tb_widescreen__DOT__fifo__DOT__physical_addr__5__g = 0;
    // Body
    vlSelfRef.tb_widescreen__DOT__fifo__DOT__rn = (0xfffU 
                                                   & ((IData)(vlSelfRef.tb_widescreen__DOT__fifo__DOT__rp) 
                                                      + 
                                                      ((~ (IData)(vlSelfRef.tb_widescreen__DOT__empty)) 
                                                       & ((IData)(vlSelfRef.tb_widescreen__DOT__area) 
                                                          & ((IData)(vlSelfRef.tb_widescreen__DOT__x) 
                                                             & ((~ 
                                                                 ((IData)(vlSelfRef.tb_widescreen__DOT__fr) 
                                                                  >> 2U)) 
                                                                & ((IData)(vlSelfRef.tb_widescreen__DOT__dv) 
                                                                   >> 1U)))))));
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

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__5(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__5\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_widescreen__DOT__din__v0) {
        vlSelfRef.__VdlySet__tb_widescreen__DOT__din__v0 = 0U;
        vlSelfRef.tb_widescreen__DOT__din = vlSelfRef.__VdlyVal__tb_widescreen__DOT__din__v0;
    }
}

VL_INLINE_OPT void Vtb_widescreen___024root___nba_sequent__TOP__6(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___nba_sequent__TOP__6\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_widescreen__DOT__ft = vlSelfRef.__Vdly__tb_widescreen__DOT__ft;
}

void Vtb_widescreen___024root___timing_resume(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___timing_resume\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd6bf6cc8__0.resume(
                                                   "@(negedge tb_widescreen.mclk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_widescreen___024root___timing_commit(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___timing_commit\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd6bf6cc8__0.commit(
                                                   "@(negedge tb_widescreen.mclk)");
    }
}

void Vtb_widescreen___024root___eval_triggers__act(Vtb_widescreen___024root* vlSelf);

bool Vtb_widescreen___024root___eval_phase__act(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_phase__act\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_widescreen___024root___eval_triggers__act(vlSelf);
    Vtb_widescreen___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_widescreen___024root___timing_resume(vlSelf);
        Vtb_widescreen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_widescreen___024root___eval_phase__nba(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_phase__nba\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_widescreen___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__nba(Vtb_widescreen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_widescreen___024root___dump_triggers__act(Vtb_widescreen___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_widescreen___024root___eval(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_widescreen___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/system\\tb_widescreen.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_widescreen___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/system\\tb_widescreen.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_widescreen___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_widescreen___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_widescreen___024root___eval_debug_assertions(Vtb_widescreen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_widescreen___024root___eval_debug_assertions\n"); );
    Vtb_widescreen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
