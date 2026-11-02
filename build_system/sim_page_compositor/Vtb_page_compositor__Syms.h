// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_PAGE_COMPOSITOR__SYMS_H_
#define VERILATED_VTB_PAGE_COMPOSITOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_page_compositor.h"

// INCLUDE MODULE CLASSES
#include "Vtb_page_compositor___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_page_compositor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_page_compositor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_page_compositor___024root  TOP;

    // CONSTRUCTORS
    Vtb_page_compositor__Syms(VerilatedContext* contextp, const char* namep, Vtb_page_compositor* modelp);
    ~Vtb_page_compositor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
