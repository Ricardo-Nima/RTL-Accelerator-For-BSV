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
    vlSelf->top__DOT__counter__DOT__cnt = 0xaaaaaaaaU;
    vlSelf->top__DOT__counter__DOT__forcnt = 0xaaaaaaaaU;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt = 0xaaaaaaaaU;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1 = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate = 0xaU;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss = 0U;
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata = 0xaaU;
}

extern const VlUnpacked<CData/*3:0*/, 256> VmkTb__ConstPool__TABLE_d3652afe_0;

void VmkTb___024root___settle__TOP__4(VmkTb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VmkTb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb___024root___settle__TOP__4\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__counter__DOT__cnt__024D_IN = 
        ((0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt)
          ? 0U : ((IData)(1U) + vlSelf->top__DOT__counter__DOT__cnt));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt__024D_IN 
        = ((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
            ? (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
               - (IData)(1U)) : 7U);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13 
        = ((~ (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
               >> 0x1fU)) & ((1U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                             | (3U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15 
        = ((vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
            >> 0x1fU) & ((1U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                         | (3U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60 
        = (((0U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
            | (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           & ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1)) 
              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired)));
    vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
           & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg)));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60) 
           & (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
           | ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1) 
              & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas) 
           & ((0U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
              | (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7 
        = ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas)) 
           & (6U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN 
        = (((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
               | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
              | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
             | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
            | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
           | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15) 
                     << 7U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate) 
                                << 3U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                            << 1U) 
                                           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7)))));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN 
        = VmkTb__ConstPool__TABLE_d3652afe_0[__Vtableidx1];
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas 
        = (((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
               | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
             | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
            | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN 
        = ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
           | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->top__DOT__counter__DOT__cnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter__DOT__cnt__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter__DOT__forcnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt__024D_IN = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap__024D_IN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024EN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
