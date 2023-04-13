// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTb__Syms.h"


void VmkTb___024root__traceInitSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VmkTb___024root__traceInitTop(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VmkTb___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VmkTb___024root__traceInitSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"CLK", false,-1);
        tracep->declBit(c+8,"RST_N", false,-1);
        tracep->declBit(c+7,"mkTb CLK", false,-1);
        tracep->declBit(c+8,"mkTb RST_N", false,-1);
        tracep->declBus(c+1,"mkTb counter$count", false,-1, 3,0);
        tracep->declBit(c+2,"mkTb counter$overflow", false,-1);
        tracep->declBit(c+7,"mkTb counter CLK", false,-1);
        tracep->declBit(c+8,"mkTb counter RST_N", false,-1);
        tracep->declBus(c+1,"mkTb counter count", false,-1, 3,0);
        tracep->declBit(c+9,"mkTb counter RDY_count", false,-1);
        tracep->declBit(c+2,"mkTb counter overflow", false,-1);
        tracep->declBit(c+9,"mkTb counter RDY_overflow", false,-1);
        tracep->declBus(c+1,"mkTb counter cnt", false,-1, 3,0);
        tracep->declBus(c+3,"mkTb counter cnt$D_IN", false,-1, 3,0);
        tracep->declBit(c+9,"mkTb counter cnt$EN", false,-1);
        tracep->declBus(c+4,"mkTb counter mycnt", false,-1, 3,0);
        tracep->declBus(c+5,"mkTb counter mycnt$D_IN", false,-1, 3,0);
        tracep->declBit(c+9,"mkTb counter mycnt$EN", false,-1);
        tracep->declBit(c+6,"mkTb counter cnt_ULT_9___d2", false,-1);
    }
}

void VmkTb___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VmkTb___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VmkTb___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VmkTb___024root__traceRegister(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VmkTb___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VmkTb___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VmkTb___024root__traceCleanup, vlSelf);
    }
}

void VmkTb___024root__traceFullSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VmkTb___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VmkTb___024root* const __restrict vlSelf = static_cast<VmkTb___024root*>(voidSelf);
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VmkTb___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VmkTb___024root__traceFullSub0(VmkTb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->mkTb__DOT__counter__DOT__cnt),4);
        tracep->fullBit(oldp+2,((9U <= (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))));
        tracep->fullCData(oldp+3,(((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
                                    ? (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
                                    : 0U)),4);
        tracep->fullCData(oldp+4,(vlSelf->mkTb__DOT__counter__DOT__mycnt),4);
        tracep->fullCData(oldp+5,(((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
                                    ? (0xfU & ((IData)(2U) 
                                               + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
                                    : 0U)),4);
        tracep->fullBit(oldp+6,((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))));
        tracep->fullBit(oldp+7,(vlSelf->CLK));
        tracep->fullBit(oldp+8,(vlSelf->RST_N));
        tracep->fullBit(oldp+9,(1U));
    }
}
