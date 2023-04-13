// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb.h for the primary calling header

#include "VmkTb___024root.h"
#include "VmkTb__Syms.h"

//==========

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__1(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->RST_N) {
        vlSelf->mkTb__DOT__counter__DOT__mycnt = ((9U 
                                                   > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
                                                   ? 
                                                  (0xfU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
                                                   : 0U);
        vlSelf->mkTb__DOT__counter__DOT__cnt = vlSelf->mkTb__DOT__counter__DOT__cnt__024D_IN;
    } else {
        vlSelf->mkTb__DOT__counter__DOT__mycnt = 0U;
        vlSelf->mkTb__DOT__counter__DOT__cnt = 0U;
    }
    vlSelf->mkTb__DOT__counter__DOT__cnt__024D_IN = 
        ((9U > (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt))
          ? (0xfU & ((IData)(1U) + (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))
          : 0U);
}

VL_INLINE_OPT void VmkTb___024root___sequent__TOP__2(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->RST_N)) {
        VL_WRITEF("count=%2#, oflow=%1#\n",4,vlSelf->mkTb__DOT__counter__DOT__cnt,
                  1,(9U <= (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)));
    }
    if (vlSelf->RST_N) {
        if (VL_UNLIKELY((9U <= (IData)(vlSelf->mkTb__DOT__counter__DOT__cnt)))) {
            VL_FINISH_MT("mkTb.v", 56, "");
        }
    }
}

void VmkTb___024root___eval(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        VmkTb___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->CLK)) & (IData)(vlSelf->__Vclklast__TOP__CLK))) {
        VmkTb___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

QData VmkTb___024root___change_request_1(VmkTb___024root* vlSelf);

VL_INLINE_OPT QData VmkTb___024root___change_request(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___change_request\n"); );
    // Body
    return (VmkTb___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VmkTb___024root___change_request_1(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkTb___024root___eval_debug_assertions(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
