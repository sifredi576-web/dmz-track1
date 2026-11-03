// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scaling_course.h for the primary calling header

#include "Vtb_scaling_course__pch.h"
#include "Vtb_scaling_course__Syms.h"
#include "Vtb_scaling_course___024root.h"

void Vtb_scaling_course___024root___ctor_var_reset(Vtb_scaling_course___024root* vlSelf);

Vtb_scaling_course___024root::Vtb_scaling_course___024root(Vtb_scaling_course__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_scaling_course___024root___ctor_var_reset(this);
}

void Vtb_scaling_course___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_scaling_course___024root::~Vtb_scaling_course___024root() {
}
