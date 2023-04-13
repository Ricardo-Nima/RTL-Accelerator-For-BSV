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
    CData/*0:0*/ mkTb__DOT__start_wire__024whas;
    CData/*0:0*/ mkTb__DOT__state_set_pw__024whas;
    CData/*0:0*/ mkTb__DOT__running;
    CData/*0:0*/ mkTb__DOT__start_reg;
    CData/*0:0*/ mkTb__DOT__start_reg__024EN;
    CData/*0:0*/ mkTb__DOT__start_reg_1;
    CData/*0:0*/ mkTb__DOT__state_can_overlap;
    CData/*0:0*/ mkTb__DOT__state_can_overlap__024D_IN;
    CData/*0:0*/ mkTb__DOT__state_fired;
    CData/*2:0*/ mkTb__DOT__state_mkFSMstate;
    CData/*0:0*/ mkTb__DOT__spi_writer__024EN_write;
    CData/*0:0*/ mkTb__DOT__spi_writer__024RDY_write;
    CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l15c20;
    CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l16c20;
    CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_action_l17c20;
    CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_fsm_start;
    CData/*0:0*/ mkTb__DOT__WILL_FIRE_RL_idle_l14c7;
    CData/*0:0*/ mkTb__DOT__MUX_start_reg__024write_1___05FSEL_2;
    CData/*0:0*/ mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__mosi;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__sck;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_start_reg;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_fired;
    CData/*3:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate;
    CData/*3:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__ss;
    CData/*7:0*/ mkTb__DOT__spi_writer__DOT__wdata;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7;
    CData/*0:0*/ mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60;
    IData/*31:0*/ mkTb__DOT__spi_writer__DOT__cnt;
    IData/*31:0*/ mkTb__DOT__spi_writer__DOT__cnt__024D_IN;

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
