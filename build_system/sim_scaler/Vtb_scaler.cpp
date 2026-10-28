// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_scaler__pch.h"

//============================================================
// Constructors

Vtb_scaler::Vtb_scaler(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_scaler__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_scaler::Vtb_scaler(const char* _vcname__)
    : Vtb_scaler(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_scaler::~Vtb_scaler() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_scaler___024root___eval_debug_assertions(Vtb_scaler___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_scaler___024root___eval_static(Vtb_scaler___024root* vlSelf);
void Vtb_scaler___024root___eval_initial(Vtb_scaler___024root* vlSelf);
void Vtb_scaler___024root___eval_settle(Vtb_scaler___024root* vlSelf);
void Vtb_scaler___024root___eval(Vtb_scaler___024root* vlSelf);

void Vtb_scaler::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_scaler::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_scaler___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_scaler___024root___eval_static(&(vlSymsp->TOP));
        Vtb_scaler___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_scaler___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_scaler___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_scaler::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_scaler::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_scaler::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_scaler___024root___eval_final(Vtb_scaler___024root* vlSelf);

VL_ATTR_COLD void Vtb_scaler::final() {
    Vtb_scaler___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_scaler::hierName() const { return vlSymsp->name(); }
const char* Vtb_scaler::modelName() const { return "Vtb_scaler"; }
unsigned Vtb_scaler::threads() const { return 1; }
void Vtb_scaler::prepareClone() const { contextp()->prepareClone(); }
void Vtb_scaler::atClone() const {
    contextp()->threadPoolpOnClone();
}
