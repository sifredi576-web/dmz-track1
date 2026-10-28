// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_wipe__pch.h"

//============================================================
// Constructors

Vtb_wipe::Vtb_wipe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_wipe__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_wipe::Vtb_wipe(const char* _vcname__)
    : Vtb_wipe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_wipe::~Vtb_wipe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_wipe___024root___eval_debug_assertions(Vtb_wipe___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_wipe___024root___eval_static(Vtb_wipe___024root* vlSelf);
void Vtb_wipe___024root___eval_initial(Vtb_wipe___024root* vlSelf);
void Vtb_wipe___024root___eval_settle(Vtb_wipe___024root* vlSelf);
void Vtb_wipe___024root___eval(Vtb_wipe___024root* vlSelf);

void Vtb_wipe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_wipe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_wipe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_wipe___024root___eval_static(&(vlSymsp->TOP));
        Vtb_wipe___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_wipe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_wipe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_wipe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_wipe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_wipe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_wipe___024root___eval_final(Vtb_wipe___024root* vlSelf);

VL_ATTR_COLD void Vtb_wipe::final() {
    Vtb_wipe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_wipe::hierName() const { return vlSymsp->name(); }
const char* Vtb_wipe::modelName() const { return "Vtb_wipe"; }
unsigned Vtb_wipe::threads() const { return 1; }
void Vtb_wipe::prepareClone() const { contextp()->prepareClone(); }
void Vtb_wipe::atClone() const {
    contextp()->threadPoolpOnClone();
}
