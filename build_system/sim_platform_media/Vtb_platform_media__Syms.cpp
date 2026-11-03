// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_platform_media__pch.h"
#include "Vtb_platform_media.h"
#include "Vtb_platform_media___024root.h"

// FUNCTIONS
Vtb_platform_media__Syms::~Vtb_platform_media__Syms()
{
}

Vtb_platform_media__Syms::Vtb_platform_media__Syms(VerilatedContext* contextp, const char* namep, Vtb_platform_media* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2692);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_platform_media.configure(this, name(), "tb_platform_media", "tb_platform_media", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_platform_media__idle_page.configure(this, name(), "tb_platform_media.idle_page", "idle_page", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_platform_media__unnamedblk1.configure(this, name(), "tb_platform_media.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
