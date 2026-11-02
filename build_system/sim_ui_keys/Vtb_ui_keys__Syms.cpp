// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ui_keys__pch.h"
#include "Vtb_ui_keys.h"
#include "Vtb_ui_keys___024root.h"

// FUNCTIONS
Vtb_ui_keys__Syms::~Vtb_ui_keys__Syms()
{
}

Vtb_ui_keys__Syms::Vtb_ui_keys__Syms(VerilatedContext* contextp, const char* namep, Vtb_ui_keys* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(604);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
