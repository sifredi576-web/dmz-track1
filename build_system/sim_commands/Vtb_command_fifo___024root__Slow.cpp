// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_command_fifo.h for the primary calling header

#include "Vtb_command_fifo__pch.h"
#include "Vtb_command_fifo__Syms.h"
#include "Vtb_command_fifo___024root.h"

void Vtb_command_fifo___024root___ctor_var_reset(Vtb_command_fifo___024root* vlSelf);

Vtb_command_fifo___024root::Vtb_command_fifo___024root(Vtb_command_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_command_fifo___024root___ctor_var_reset(this);
}

void Vtb_command_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_command_fifo___024root::~Vtb_command_fifo___024root() {
}
