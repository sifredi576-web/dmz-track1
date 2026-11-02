// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_PLATFORM_MEDIA__SYMS_H_
#define VERILATED_VTB_PLATFORM_MEDIA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_platform_media.h"

// INCLUDE MODULE CLASSES
#include "Vtb_platform_media___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_platform_media__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_platform_media* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_platform_media___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_platform_media;
    VerilatedScope __Vscope_tb_platform_media__idle_page;
    VerilatedScope __Vscope_tb_platform_media__unnamedblk1;

    // CONSTRUCTORS
    Vtb_platform_media__Syms(VerilatedContext* contextp, const char* namep, Vtb_platform_media* modelp);
    ~Vtb_platform_media__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
