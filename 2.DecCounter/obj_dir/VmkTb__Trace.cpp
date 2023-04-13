// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTb__Syms.h"


void VmkTb___024root__traceChgSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep);

void VmkTb___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VmkTb___024root* const __restrict vlSelf = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VmkTb___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VmkTb___024root__traceChgSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->mkTb__DOT__counter__DOT__cnt),4);
            tracep->chgBit(oldp+1,((9U <= (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))));
            tracep->chgCData(oldp+2,(((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
                                       ? (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
                                       : 0U)),4);
            tracep->chgCData(oldp+3,(vlSelf->mkTb__DOT__counter__DOT__mycnt),4);
            tracep->chgCData(oldp+4,(((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
                                       ? (0xfU & ((IData)(2U) 
                                                  + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
                                       : 0U)),4);
            tracep->chgBit(oldp+5,((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))));
        }
        tracep->chgBit(oldp+6,(vlSelf->CLK));
        tracep->chgBit(oldp+7,(vlSelf->RST_N));
    }
}

void VmkTb___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VmkTb___024root* const __restrict vlSelf = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
