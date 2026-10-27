// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sd.h for the primary calling header

#ifndef VERILATED_VTB_SD___024ROOT_H_
#define VERILATED_VTB_SD___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_sd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_sd__DOT__clk;
        CData/*0:0*/ tb_sd__DOT__cs;
        CData/*0:0*/ tb_sd__DOT__sck;
        CData/*0:0*/ tb_sd__DOT__reset;
        CData/*0:0*/ tb_sd__DOT__start;
        CData/*0:0*/ tb_sd__DOT__miso;
        CData/*0:0*/ tb_sd__DOT__mosi;
        CData/*0:0*/ tb_sd__DOT__initialized;
        CData/*0:0*/ tb_sd__DOT__done;
        CData/*0:0*/ tb_sd__DOT__bv;
        CData/*7:0*/ tb_sd__DOT__bd;
        CData/*7:0*/ tb_sd__DOT__error;
        CData/*7:0*/ tb_sd__DOT__receive_byte;
        CData/*7:0*/ tb_sd__DOT__complete_byte;
        CData/*7:0*/ tb_sd__DOT____Vlvbound_ha33a169e__0;
        CData/*5:0*/ tb_sd__DOT__dut__DOT__state;
        CData/*5:0*/ tb_sd__DOT__dut__DOT__continuation;
        CData/*3:0*/ tb_sd__DOT__dut__DOT__bytes_left;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__response;
        CData/*2:0*/ tb_sd__DOT__dut__DOT__extra_count;
        CData/*0:0*/ tb_sd__DOT__dut__DOT__high_capacity;
        CData/*0:0*/ tb_sd__DOT__dut__DOT__v2;
        CData/*0:0*/ tb_sd__DOT__dut__DOT__reading;
        CData/*1:0*/ tb_sd__DOT__dut__DOT__crc_left;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__received_crc_high;
        CData/*0:0*/ tb_sd__DOT__dut__DOT__busy;
        CData/*0:0*/ tb_sd__DOT__dut__DOT__spi_done;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__rx;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__send_byte;
        CData/*0:0*/ tb_sd__DOT__dut__DOT____Vcellinp__spi__start;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__spi__DOT__count;
        CData/*7:0*/ tb_sd__DOT__dut__DOT__spi__DOT__shift;
        CData/*2:0*/ tb_sd__DOT__dut__DOT__spi__DOT__bitno;
        CData/*5:0*/ __Vdly__tb_sd__DOT__dut__DOT__state;
        CData/*5:0*/ __Vdly__tb_sd__DOT__dut__DOT__continuation;
        CData/*3:0*/ __Vdly__tb_sd__DOT__dut__DOT__bytes_left;
        CData/*7:0*/ __Vdly__tb_sd__DOT__dut__DOT__response;
        CData/*2:0*/ __Vdly__tb_sd__DOT__dut__DOT__extra_count;
        CData/*0:0*/ __Vdly__tb_sd__DOT__dut__DOT__high_capacity;
        CData/*0:0*/ __Vdly__tb_sd__DOT__dut__DOT__v2;
        CData/*0:0*/ __Vdly__tb_sd__DOT__dut__DOT__reading;
        CData/*1:0*/ __Vdly__tb_sd__DOT__dut__DOT__crc_left;
        CData/*7:0*/ __Vdly__tb_sd__DOT__dut__DOT__received_crc_high;
        CData/*0:0*/ __Vdly__tb_sd__DOT__sck;
        CData/*0:0*/ __Vdly__tb_sd__DOT__dut__DOT__busy;
        CData/*0:0*/ __Vdly__tb_sd__DOT__dut__DOT__spi_done;
        CData/*7:0*/ __Vdly__tb_sd__DOT__dut__DOT__rx;
        CData/*7:0*/ __Vdly__tb_sd__DOT__dut__DOT__spi__DOT__count;
        CData/*7:0*/ __Vdly__tb_sd__DOT__dut__DOT__spi__DOT__shift;
        CData/*2:0*/ __Vdly__tb_sd__DOT__dut__DOT__spi__DOT__bitno;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd__DOT__sck__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd__DOT__cs__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_sd__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h2f3589c9__1;
        CData/*0:0*/ __Vtrigprevexpr_hd106087b__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tb_sd__DOT__bi;
        SData/*15:0*/ tb_sd__DOT__crc;
        SData/*15:0*/ tb_sd__DOT__dut__DOT__init_attempts;
        SData/*8:0*/ tb_sd__DOT__dut__DOT__data_index;
        SData/*15:0*/ tb_sd__DOT__dut__DOT__data_crc;
        SData/*15:0*/ __Vdly__tb_sd__DOT__dut__DOT__init_attempts;
    };
    struct {
        SData/*15:0*/ __Vdly__tb_sd__DOT__dut__DOT__data_crc;
        SData/*8:0*/ __Vdly__tb_sd__DOT__dut__DOT__data_index;
        IData/*31:0*/ tb_sd__DOT__sectors;
        IData/*31:0*/ tb_sd__DOT__bits;
        IData/*31:0*/ tb_sd__DOT__cmdbytes;
        IData/*31:0*/ tb_sd__DOT__head;
        IData/*31:0*/ tb_sd__DOT__tail;
        IData/*31:0*/ tb_sd__DOT__outbit;
        IData/*31:0*/ tb_sd__DOT__received;
        IData/*31:0*/ tb_sd__DOT__argument;
        IData/*31:0*/ tb_sd__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ tb_sd__DOT__dut__DOT__power_count;
        IData/*31:0*/ tb_sd__DOT__dut__DOT__response_extra;
        IData/*19:0*/ tb_sd__DOT__dut__DOT__timeout_count;
        IData/*31:0*/ __Vdly__tb_sd__DOT__dut__DOT__power_count;
        IData/*31:0*/ __Vdly__tb_sd__DOT__dut__DOT__response_extra;
        IData/*19:0*/ __Vdly__tb_sd__DOT__dut__DOT__timeout_count;
        IData/*31:0*/ __Vdly__tb_sd__DOT__sectors;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ tb_sd__DOT__dut__DOT__frame;
        QData/*47:0*/ __Vdly__tb_sd__DOT__dut__DOT__frame;
        VlUnpacked<CData/*7:0*/, 1024> tb_sd__DOT__response;
        VlUnpacked<CData/*7:0*/, 6> tb_sd__DOT__command;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb702cdeb__0;
    VlTriggerScheduler __VtrigSched_h6b5d801d__0;
    VlTriggerScheduler __VtrigSched_h54b24ea5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_sd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_sd___024root(Vtb_sd__Syms* symsp, const char* v__name);
    ~Vtb_sd___024root();
    VL_UNCOPYABLE(Vtb_sd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
