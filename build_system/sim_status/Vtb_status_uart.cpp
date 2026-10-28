// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_status_uart__pch.h"

//============================================================
// Constructors

Vtb_status_uart::Vtb_status_uart(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_status_uart__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_status_uart::Vtb_status_uart(const char* _vcname__)
    : Vtb_status_uart(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_status_uart::~Vtb_status_uart() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_status_uart___024root___eval_debug_assertions(Vtb_status_uart___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_status_uart___024root___eval_static(Vtb_status_uart___024root* vlSelf);
void Vtb_status_uart___024root___eval_initial(Vtb_status_uart___024root* vlSelf);
void Vtb_status_uart___024root___eval_settle(Vtb_status_uart___024root* vlSelf);
void Vtb_status_uart___024root___eval(Vtb_status_uart___024root* vlSelf);

void Vtb_status_uart::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_status_uart::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_status_uart___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_status_uart___024root___eval_static(&(vlSymsp->TOP));
        Vtb_status_uart___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_status_uart___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_status_uart___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_status_uart::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_status_uart::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_status_uart::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_status_uart___024root___eval_final(Vtb_status_uart___024root* vlSelf);

VL_ATTR_COLD void Vtb_status_uart::final() {
    Vtb_status_uart___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_status_uart::hierName() const { return vlSymsp->name(); }
const char* Vtb_status_uart::modelName() const { return "Vtb_status_uart"; }
unsigned Vtb_status_uart::threads() const { return 1; }
void Vtb_status_uart::prepareClone() const { contextp()->prepareClone(); }
void Vtb_status_uart::atClone() const {
    contextp()->threadPoolpOnClone();
}
