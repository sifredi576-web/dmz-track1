// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_STATUS_PANEL__SYMS_H_
#define VERILATED_VTB_STATUS_PANEL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_status_panel.h"

// INCLUDE MODULE CLASSES
#include "Vtb_status_panel___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_status_panel__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_status_panel* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_status_panel___024root     TOP;

    // CONSTRUCTORS
    Vtb_status_panel__Syms(VerilatedContext* contextp, const char* namep, Vtb_status_panel* modelp);
    ~Vtb_status_panel__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
