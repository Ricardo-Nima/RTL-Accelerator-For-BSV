// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkTb.h for the primary calling header

#ifndef VERILATED_VMKTB___024ROOT_H_
#define VERILATED_VMKTB___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VmkTb__Syms;
class VmkTb_VerilatedVcd;


//----------

VL_MODULE(VmkTb___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ mkTb__DOT__counter__DOT__cnt;
    CData/*3:0*/ mkTb__DOT__counter__DOT__cnt__024D_IN;
    CData/*3:0*/ mkTb__DOT__counter__DOT__mycnt;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VmkTb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmkTb___024root);  ///< Copying not allowed
  public:
    VmkTb___024root(const char* name);
    ~VmkTb___024root();

    // INTERNAL METHODS
    void __Vconfigure(VmkTb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
