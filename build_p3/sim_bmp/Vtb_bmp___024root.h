// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bmp.h for the primary calling header

#ifndef VERILATED_VTB_BMP___024ROOT_H_
#define VERILATED_VTB_BMP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_bmp__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bmp___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_bmp__DOT__clk;
        CData/*0:0*/ tb_bmp__DOT__reset;
        CData/*0:0*/ tb_bmp__DOT__start;
        CData/*0:0*/ tb_bmp__DOT__last;
        CData/*0:0*/ tb_bmp__DOT__done;
        CData/*7:0*/ tb_bmp__DOT__error;
        CData/*0:0*/ tb_bmp__DOT__sd_ready;
        CData/*0:0*/ tb_bmp__DOT__sd_done;
        CData/*0:0*/ tb_bmp__DOT__bvalid;
        CData/*7:0*/ tb_bmp__DOT__bdata;
        CData/*0:0*/ tb_bmp__DOT__load_ready;
        CData/*0:0*/ tb_bmp__DOT__ack;
        CData/*0:0*/ tb_bmp__DOT__reading;
        CData/*5:0*/ tb_bmp__DOT__dut__DOT__state;
        CData/*5:0*/ tb_bmp__DOT__dut__DOT__after_read;
        CData/*4:0*/ tb_bmp__DOT__dut__DOT__entry_index;
        CData/*7:0*/ tb_bmp__DOT__dut__DOT__cache_byte;
        CData/*7:0*/ tb_bmp__DOT__dut__DOT__spc;
        CData/*7:0*/ tb_bmp__DOT__dut__DOT__cluster_sector;
        CData/*0:0*/ tb_bmp__DOT__dut__DOT__fat16;
        CData/*0:0*/ tb_bmp__DOT__dut__DOT__dir_is_fixed;
        CData/*0:0*/ tb_bmp__DOT__dut__DOT__top_down;
        CData/*0:0*/ tb_bmp__DOT__dut__DOT__rgba;
        CData/*0:0*/ tb_bmp__DOT__dut__DOT__fat_for_file;
        CData/*1:0*/ tb_bmp__DOT__dut__DOT__channel;
        CData/*7:0*/ tb_bmp__DOT__dut__DOT__blue;
        CData/*7:0*/ tb_bmp__DOT__dut__DOT__green;
        CData/*3:0*/ tb_bmp__DOT__dut__DOT__burst_pixel;
        CData/*5:0*/ tb_bmp__DOT__dut__DOT__burst_x;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bmp__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h7019e768__1;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ tb_bmp__DOT__bindex;
        SData/*15:0*/ tb_bmp__DOT__dut__DOT__signature;
        SData/*8:0*/ tb_bmp__DOT__dut__DOT__dir_pos;
        SData/*9:0*/ tb_bmp__DOT__dut__DOT__byte_pos;
        SData/*15:0*/ tb_bmp__DOT__dut__DOT__directory_sectors;
        SData/*15:0*/ tb_bmp__DOT__dut__DOT__low_pixel;
        SData/*8:0*/ tb_bmp__DOT__dut__DOT__source_y;
        SData/*15:0*/ tb_bmp__DOT__dut__DOT__color;
        SData/*8:0*/ tb_bmp__DOT__dut__DOT__fat_byte_offset;
        IData/*31:0*/ tb_bmp__DOT__lba;
        IData/*31:0*/ tb_bmp__DOT__pixels;
        VlWide<8>/*255:0*/ tb_bmp__DOT__data;
        IData/*31:0*/ tb_bmp__DOT__current_lba;
        IData/*31:0*/ tb_bmp__DOT__index;
        IData/*31:0*/ tb_bmp__DOT__ack_delay;
        IData/*31:0*/ tb_bmp__DOT__bursts;
        IData/*31:0*/ tb_bmp__DOT__sectors;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__partition_start;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__fat_cached;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__volume_base;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__fat_base;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__data_base;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__root_base;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__root_sectors;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__cluster;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__file_size;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__file_offset;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__bmp_offset;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__fixed_root_index;
        IData/*17:0*/ tb_bmp__DOT__dut__DOT__pending_addr;
    };
    struct {
        IData/*17:0*/ tb_bmp__DOT__dut__DOT__target_addr;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__required_file_end;
        IData/*31:0*/ tb_bmp__DOT__dut__DOT__fat_entry;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 512> tb_bmp__DOT__dut__DOT__cache;
        VlUnpacked<CData/*7:0*/, 64> tb_bmp__DOT__dut__DOT__header;
        VlUnpacked<CData/*7:0*/, 32> tb_bmp__DOT__dut__DOT__entry;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf82e2f98__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_bmp__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_bmp___024root(Vtb_bmp__Syms* symsp, const char* v__name);
    ~Vtb_bmp___024root();
    VL_UNCOPYABLE(Vtb_bmp___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
