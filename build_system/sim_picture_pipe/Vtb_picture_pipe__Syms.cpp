// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_picture_pipe__pch.h"
#include "Vtb_picture_pipe.h"
#include "Vtb_picture_pipe___024root.h"

// FUNCTIONS
Vtb_picture_pipe__Syms::~Vtb_picture_pipe__Syms()
{
}

Vtb_picture_pipe__Syms::Vtb_picture_pipe__Syms(VerilatedContext* contextp, const char* namep, Vtb_picture_pipe* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(22);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
