// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_audio_completion__pch.h"

//============================================================
// Constructors

Vtb_audio_completion::Vtb_audio_completion(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_audio_completion__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_audio_completion::Vtb_audio_completion(const char* _vcname__)
    : Vtb_audio_completion(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_audio_completion::~Vtb_audio_completion() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_audio_completion___024root___eval_debug_assertions(Vtb_audio_completion___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_audio_completion___024root___eval_static(Vtb_audio_completion___024root* vlSelf);
void Vtb_audio_completion___024root___eval_initial(Vtb_audio_completion___024root* vlSelf);
void Vtb_audio_completion___024root___eval_settle(Vtb_audio_completion___024root* vlSelf);
void Vtb_audio_completion___024root___eval(Vtb_audio_completion___024root* vlSelf);

void Vtb_audio_completion::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_audio_completion::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_audio_completion___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_audio_completion___024root___eval_static(&(vlSymsp->TOP));
        Vtb_audio_completion___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_audio_completion___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_audio_completion___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_audio_completion::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_audio_completion::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_audio_completion::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_audio_completion___024root___eval_final(Vtb_audio_completion___024root* vlSelf);

VL_ATTR_COLD void Vtb_audio_completion::final() {
    Vtb_audio_completion___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_audio_completion::hierName() const { return vlSymsp->name(); }
const char* Vtb_audio_completion::modelName() const { return "Vtb_audio_completion"; }
unsigned Vtb_audio_completion::threads() const { return 1; }
void Vtb_audio_completion::prepareClone() const { contextp()->prepareClone(); }
void Vtb_audio_completion::atClone() const {
    contextp()->threadPoolpOnClone();
}
