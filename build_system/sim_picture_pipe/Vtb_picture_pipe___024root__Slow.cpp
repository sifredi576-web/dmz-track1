// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_picture_pipe.h for the primary calling header

#include "Vtb_picture_pipe__pch.h"
#include "Vtb_picture_pipe__Syms.h"
#include "Vtb_picture_pipe___024root.h"

void Vtb_picture_pipe___024root___ctor_var_reset(Vtb_picture_pipe___024root* vlSelf);

Vtb_picture_pipe___024root::Vtb_picture_pipe___024root(Vtb_picture_pipe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_picture_pipe___024root___ctor_var_reset(this);
}

void Vtb_picture_pipe___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_picture_pipe___024root::~Vtb_picture_pipe___024root() {
}
