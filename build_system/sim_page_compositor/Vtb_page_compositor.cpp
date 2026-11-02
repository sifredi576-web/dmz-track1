// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_page_compositor__pch.h"

//============================================================
// Constructors

Vtb_page_compositor::Vtb_page_compositor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_page_compositor__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_page_compositor::Vtb_page_compositor(const char* _vcname__)
    : Vtb_page_compositor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_page_compositor::~Vtb_page_compositor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_page_compositor___024root___eval_debug_assertions(Vtb_page_compositor___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_page_compositor___024root___eval_static(Vtb_page_compositor___024root* vlSelf);
void Vtb_page_compositor___024root___eval_initial(Vtb_page_compositor___024root* vlSelf);
void Vtb_page_compositor___024root___eval_settle(Vtb_page_compositor___024root* vlSelf);
void Vtb_page_compositor___024root___eval(Vtb_page_compositor___024root* vlSelf);

void Vtb_page_compositor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_page_compositor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_page_compositor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_page_compositor___024root___eval_static(&(vlSymsp->TOP));
        Vtb_page_compositor___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_page_compositor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_page_compositor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_page_compositor::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_page_compositor::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_page_compositor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_page_compositor___024root___eval_final(Vtb_page_compositor___024root* vlSelf);

VL_ATTR_COLD void Vtb_page_compositor::final() {
    Vtb_page_compositor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_page_compositor::hierName() const { return vlSymsp->name(); }
const char* Vtb_page_compositor::modelName() const { return "Vtb_page_compositor"; }
unsigned Vtb_page_compositor::threads() const { return 1; }
void Vtb_page_compositor::prepareClone() const { contextp()->prepareClone(); }
void Vtb_page_compositor::atClone() const {
    contextp()->threadPoolpOnClone();
}
