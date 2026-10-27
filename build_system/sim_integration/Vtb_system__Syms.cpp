// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_system__pch.h"
#include "Vtb_system.h"
#include "Vtb_system___024root.h"

// FUNCTIONS
Vtb_system__Syms::~Vtb_system__Syms()
{
}

Vtb_system__Syms::Vtb_system__Syms(VerilatedContext* contextp, const char* namep, Vtb_system* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(3726);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_system.configure(this, name(), "tb_system", "tb_system", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_system__card.configure(this, name(), "tb_system.card", "card", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_system__dut__tx.configure(this, name(), "tb_system.dut.tx", "tx", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_system__memory_model.configure(this, name(), "tb_system.memory_model", "memory_model", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_system__memory_model__unnamedblk4.configure(this, name(), "tb_system.memory_model.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_system__dut__tx.varInsert(__Vfinal,"tmds_internal", &(TOP.tb_system__DOT__dut__DOT__tx__DOT__tmds_internal), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1,1 ,2,0 ,9,0);
    }
}
