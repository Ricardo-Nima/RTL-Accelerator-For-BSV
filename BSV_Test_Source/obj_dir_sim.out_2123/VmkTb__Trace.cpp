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
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__counter__DOT__cnt),32);
            tracep->chgBit(oldp+1,((0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt)));
            tracep->chgIData(oldp+2,(((0xffffffffU 
                                       == vlSelf->top__DOT__counter__DOT__cnt)
                                       ? 0U : ((IData)(1U) 
                                               + vlSelf->top__DOT__counter__DOT__cnt))),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__counter__DOT__forcnt),32);
            tracep->chgCData(oldp+4,((0xffU & vlSelf->top__DOT__counter__DOT__cnt)),8);
            tracep->chgCData(oldp+5,((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss) 
                                       << 2U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi)))),3);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt),32);
            tracep->chgIData(oldp+10,(((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
                                        ? (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
                                           - (IData)(1U))
                                        : 7U)),32);
            tracep->chgBit(oldp+11,(((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                                     | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi));
            tracep->chgBit(oldp+13,((1U & ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                           | ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata) 
                                              >> (7U 
                                                  & vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt))))));
            tracep->chgBit(oldp+14,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                     | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck));
            tracep->chgBit(oldp+16,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)))));
            tracep->chgBit(oldp+17,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                     | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg));
            tracep->chgBit(oldp+19,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
            tracep->chgBit(oldp+20,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                     | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write))));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
            tracep->chgBit(oldp+23,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
                                     | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap))));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired));
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate),4);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN),4);
            tracep->chgBit(oldp+27,((((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                                          | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
                                         | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                        | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                       | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                                      | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                     | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss));
            tracep->chgBit(oldp+29,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)))));
            tracep->chgBit(oldp+30,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                     | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata),8);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7));
            tracep->chgIData(oldp+37,((vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
                                       - (IData)(1U))),32);
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata) 
                                           >> (7U & vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt)))));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60));
        }
        tracep->chgBit(oldp+40,(vlSelf->CLK));
        tracep->chgBit(oldp+41,(vlSelf->RST_N));
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
