// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_pair__pch.h"
#include "Vtb_pair.h"
#include "Vtb_pair___024root.h"

// FUNCTIONS
Vtb_pair__Syms::~Vtb_pair__Syms()
{
}

Vtb_pair__Syms::Vtb_pair__Syms(VerilatedContext* contextp, const char* namep, Vtb_pair* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(83);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
