// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VmkSPIController.h"
#include "VmkSPIController__Syms.h"

//============================================================
// Constructors

VmkSPIController::VmkSPIController(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VmkSPIController__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , rootp{&(vlSymsp->TOP)}
{
}

VmkSPIController::VmkSPIController(const char* _vcname__)
    : VmkSPIController(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VmkSPIController::~VmkSPIController() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VmkSPIController___024root___eval_initial(VmkSPIController___024root* vlSelf);
void VmkSPIController___024root___eval_settle(VmkSPIController___024root* vlSelf);
void VmkSPIController___024root___eval(VmkSPIController___024root* vlSelf);
QData VmkSPIController___024root___change_request(VmkSPIController___024root* vlSelf);
#ifdef VL_DEBUG
void VmkSPIController___024root___eval_debug_assertions(VmkSPIController___024root* vlSelf);
#endif  // VL_DEBUG
void VmkSPIController___024root___final(VmkSPIController___024root* vlSelf);

static void _eval_initial_loop(VmkSPIController__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VmkSPIController___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VmkSPIController___024root___eval_settle(&(vlSymsp->TOP));
        VmkSPIController___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VmkSPIController___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mkTb.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VmkSPIController___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmkSPIController::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkSPIController::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VmkSPIController___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VmkSPIController___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VmkSPIController___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mkTb.v", 29, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VmkSPIController___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VmkSPIController::final() {
    VmkSPIController___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VmkSPIController::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VmkSPIController::name() const {
    return vlSymsp->name();
}
