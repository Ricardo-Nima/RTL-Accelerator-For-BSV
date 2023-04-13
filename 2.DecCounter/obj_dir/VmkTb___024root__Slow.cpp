// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb.h for the primary calling header

#include "VmkTb___024root.h"
#include "VmkTb__Syms.h"

//==========


void VmkTb___024root___ctor_var_reset(VmkTb___024root* vlSelf);

VmkTb___024root::VmkTb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VmkTb___024root___ctor_var_reset(this);
}

void VmkTb___024root::__Vconfigure(VmkTb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VmkTb___024root::~VmkTb___024root() {
}

void VmkTb___024root___initial__TOP__3(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___initial__TOP__3\n"); );
    // Body
    vlSelf->mkTb__DOT__counter__DOT__cnt = 0xaU;
    vlSelf->mkTb__DOT__counter__DOT__mycnt = 0xaU;
}

void VmkTb___024root___settle__TOP__4(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->mkTb__DOT__counter__DOT__cnt__024D_IN = 
        ((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
          ? (0xfU & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
          : 0U);
}

void VmkTb___024root___eval_initial(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    VmkTb___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VmkTb___024root___eval_settle(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_settle\n"); );
    // Body
    VmkTb___024root___settle__TOP__4(vlSelf);
}

void VmkTb___024root___final(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___final\n"); );
}

void VmkTb___024root___ctor_var_reset(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST_N = VL_RAND_RESET_I(1);
    vlSelf->mkTb__DOT__counter__DOT__cnt = VL_RAND_RESET_I(4);
    vlSelf->mkTb__DOT__counter__DOT__cnt__024D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkTb__DOT__counter__DOT__mycnt = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
