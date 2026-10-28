// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_scaler__pch.h"
#include "Vtb_scaler.h"
#include "Vtb_scaler___024root.h"

// FUNCTIONS
Vtb_scaler__Syms::~Vtb_scaler__Syms()
{
}

Vtb_scaler__Syms::Vtb_scaler__Syms(VerilatedContext* contextp, const char* namep, Vtb_scaler* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(458);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
