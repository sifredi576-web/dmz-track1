// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_media__pch.h"

//============================================================
// Constructors

Vtb_media::Vtb_media(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_media__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_media::Vtb_media(const char* _vcname__)
    : Vtb_media(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_media::~Vtb_media() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_media___024root___eval_debug_assertions(Vtb_media___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_media___024root___eval_static(Vtb_media___024root* vlSelf);
void Vtb_media___024root___eval_initial(Vtb_media___024root* vlSelf);
void Vtb_media___024root___eval_settle(Vtb_media___024root* vlSelf);
void Vtb_media___024root___eval(Vtb_media___024root* vlSelf);

void Vtb_media::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_media::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_media___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_media___024root___eval_static(&(vlSymsp->TOP));
        Vtb_media___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_media___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_media___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_media::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_media::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_media::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_media___024root___eval_final(Vtb_media___024root* vlSelf);

VL_ATTR_COLD void Vtb_media::final() {
    Vtb_media___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_media::hierName() const { return vlSymsp->name(); }
const char* Vtb_media::modelName() const { return "Vtb_media"; }
unsigned Vtb_media::threads() const { return 1; }
void Vtb_media::prepareClone() const { contextp()->prepareClone(); }
void Vtb_media::atClone() const {
    contextp()->threadPoolpOnClone();
}
