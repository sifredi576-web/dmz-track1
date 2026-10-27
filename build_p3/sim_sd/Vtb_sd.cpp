// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_sd__pch.h"

//============================================================
// Constructors

Vtb_sd::Vtb_sd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_sd__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_sd::Vtb_sd(const char* _vcname__)
    : Vtb_sd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_sd::~Vtb_sd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_sd___024root___eval_debug_assertions(Vtb_sd___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_sd___024root___eval_static(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___eval_initial(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___eval_settle(Vtb_sd___024root* vlSelf);
void Vtb_sd___024root___eval(Vtb_sd___024root* vlSelf);

void Vtb_sd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_sd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_sd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_sd___024root___eval_static(&(vlSymsp->TOP));
        Vtb_sd___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_sd___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_sd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_sd::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_sd::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_sd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_sd___024root___eval_final(Vtb_sd___024root* vlSelf);

VL_ATTR_COLD void Vtb_sd::final() {
    Vtb_sd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_sd::hierName() const { return vlSymsp->name(); }
const char* Vtb_sd::modelName() const { return "Vtb_sd"; }
unsigned Vtb_sd::threads() const { return 1; }
void Vtb_sd::prepareClone() const { contextp()->prepareClone(); }
void Vtb_sd::atClone() const {
    contextp()->threadPoolpOnClone();
}
