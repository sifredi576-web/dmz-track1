// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_SYSTEM__SYMS_H_
#define VERILATED_VTB_SYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_system.h"

// INCLUDE MODULE CLASSES
#include "Vtb_system___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_system__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_system* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_system___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_system;
    VerilatedScope __Vscope_tb_system__card;
    VerilatedScope __Vscope_tb_system__dut__tx;
    VerilatedScope __Vscope_tb_system__memory_model;
    VerilatedScope __Vscope_tb_system__memory_model__unnamedblk4;

    // CONSTRUCTORS
    Vtb_system__Syms(VerilatedContext* contextp, const char* namep, Vtb_system* modelp);
    ~Vtb_system__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
