// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_audio_completion.h for the primary calling header

#include "Vtb_audio_completion__pch.h"
#include "Vtb_audio_completion__Syms.h"
#include "Vtb_audio_completion___024root.h"

void Vtb_audio_completion___024root___ctor_var_reset(Vtb_audio_completion___024root* vlSelf);

Vtb_audio_completion___024root::Vtb_audio_completion___024root(Vtb_audio_completion__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_audio_completion___024root___ctor_var_reset(this);
}

void Vtb_audio_completion___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_audio_completion___024root::~Vtb_audio_completion___024root() {
}
