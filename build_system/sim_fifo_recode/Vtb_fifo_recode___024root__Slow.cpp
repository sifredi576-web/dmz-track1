// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_recode.h for the primary calling header

#include "Vtb_fifo_recode__pch.h"
#include "Vtb_fifo_recode__Syms.h"
#include "Vtb_fifo_recode___024root.h"

void Vtb_fifo_recode___024root___ctor_var_reset(Vtb_fifo_recode___024root* vlSelf);

Vtb_fifo_recode___024root::Vtb_fifo_recode___024root(Vtb_fifo_recode__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fifo_recode___024root___ctor_var_reset(this);
}

void Vtb_fifo_recode___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fifo_recode___024root::~Vtb_fifo_recode___024root() {
}
