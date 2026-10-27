// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_p1__pch.h"
#include "Vtb_p1.h"
#include "Vtb_p1___024root.h"

// FUNCTIONS
Vtb_p1__Syms::~Vtb_p1__Syms()
{
}

Vtb_p1__Syms::Vtb_p1__Syms(VerilatedContext* contextp, const char* namep, Vtb_p1* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2302);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_p1.configure(this, name(), "tb_p1", "tb_p1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_p1__dut__tx.configure(this, name(), "tb_p1.dut.tx", "tx", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_p1__unnamedblk2.configure(this, name(), "tb_p1.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_p1__unnamedblk4.configure(this, name(), "tb_p1.unnamedblk4", "unnamedblk4", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_p1__unnamedblk5.configure(this, name(), "tb_p1.unnamedblk5", "unnamedblk5", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_p1__dut__tx.varInsert(__Vfinal,"tmds_internal", &(TOP.tb_p1__DOT__dut__DOT__tx__DOT__tmds_internal), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1,1 ,2,0 ,9,0);
    }
}
