// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VmkTb.h"
#include "VmkTb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VmkTb::VmkTb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VmkTb__Syms(_vcontextp__, _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RST_N{vlSymsp->TOP.RST_N}
    , rootp{&(vlSymsp->TOP)}
{
}

VmkTb::VmkTb(const char* _vcname__)
    : VmkTb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VmkTb::~VmkTb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VmkTb___024root___eval_initial(VmkTb___024root* vlSelf);
void VmkTb___024root___eval_settle(VmkTb___024root* vlSelf);
void VmkTb___024root___eval(VmkTb___024root* vlSelf);
QData VmkTb___024root___change_request(VmkTb___024root* vlSelf);
#ifdef VL_DEBUG
void VmkTb___024root___eval_debug_assertions(VmkTb___024root* vlSelf);
#endif  // VL_DEBUG
void VmkTb___024root___final(VmkTb___024root* vlSelf);

static void _eval_initial_loop(VmkTb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VmkTb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VmkTb___024root___eval_settle(&(vlSymsp->TOP));
        VmkTb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VmkTb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mkTb.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VmkTb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VmkTb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkTb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VmkTb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VmkTb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VmkTb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mkTb.v", 29, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VmkTb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VmkTb::final() {
    VmkTb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VmkTb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VmkTb::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VmkTb___024root__traceInitTop(VmkTb___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VmkTb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VmkTb___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VmkTb___024root__traceRegister(VmkTb___024root* vlSelf, VerilatedVcd* tracep);

void VmkTb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VmkTb___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
