// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_COMMAND_FIFO__SYMS_H_
#define VERILATED_VTB_COMMAND_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_command_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vtb_command_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_command_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_command_fifo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_command_fifo___024root     TOP;

    // CONSTRUCTORS
    Vtb_command_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_command_fifo* modelp);
    ~Vtb_command_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
