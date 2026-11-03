// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_scene_visual.h for the primary calling header

#include "Vtb_scene_visual__pch.h"
#include "Vtb_scene_visual__Syms.h"
#include "Vtb_scene_visual___024root.h"

void Vtb_scene_visual___024root___ctor_var_reset(Vtb_scene_visual___024root* vlSelf);

Vtb_scene_visual___024root::Vtb_scene_visual___024root(Vtb_scene_visual__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_scene_visual___024root___ctor_var_reset(this);
}

void Vtb_scene_visual___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_scene_visual___024root::~Vtb_scene_visual___024root() {
}
