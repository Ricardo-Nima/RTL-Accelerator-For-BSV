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
            tracep->chgBit(oldp+0,(vlSelf->mkTb__DOT__start_wire__024whas));
            tracep->chgBit(oldp+1,(vlSelf->mkTb__DOT__state_set_pw__024whas));
            tracep->chgBit(oldp+2,(vlSelf->mkTb__DOT__running));
            tracep->chgBit(oldp+3,((((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                     & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                    & (~ (IData)(vlSelf->mkTb__DOT__running)))));
            tracep->chgBit(oldp+4,(vlSelf->mkTb__DOT__start_reg));
            tracep->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)))));
            tracep->chgBit(oldp+6,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                    | (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                        & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                       & (~ (IData)(vlSelf->mkTb__DOT__running))))));
            tracep->chgBit(oldp+7,(vlSelf->mkTb__DOT__start_reg_1));
            tracep->chgBit(oldp+8,(vlSelf->mkTb__DOT__state_can_overlap));
            tracep->chgBit(oldp+9,(((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                    | (IData)(vlSelf->mkTb__DOT__state_can_overlap))));
            tracep->chgBit(oldp+10,(vlSelf->mkTb__DOT__state_fired));
            tracep->chgCData(oldp+11,(vlSelf->mkTb__DOT__state_mkFSMstate),3);
            tracep->chgCData(oldp+12,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7)
                                        ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                                                   ? 3U
                                                   : 2U))))),3);
            tracep->chgBit(oldp+13,(((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7) 
                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20))));
            tracep->chgCData(oldp+14,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                                        ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                                                 ? 0x14U
                                                 : 
                                                ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                                  ? 0x65U
                                                  : 0xaaU)))),8);
            tracep->chgCData(oldp+15,((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__ss) 
                                        << 2U) | (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__sck) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__mosi)))),3);
            tracep->chgBit(oldp+16,(vlSelf->mkTb__DOT__spi_writer__024EN_write));
            tracep->chgBit(oldp+17,(vlSelf->mkTb__DOT__spi_writer__024RDY_write));
            tracep->chgBit(oldp+18,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20));
            tracep->chgBit(oldp+19,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20));
            tracep->chgBit(oldp+20,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20));
            tracep->chgBit(oldp+21,(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start));
            tracep->chgBit(oldp+22,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7));
            tracep->chgBit(oldp+23,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49));
            tracep->chgBit(oldp+24,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
            tracep->chgBit(oldp+25,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
            tracep->chgIData(oldp+26,(vlSelf->mkTb__DOT__spi_writer__DOT__cnt),32);
            tracep->chgIData(oldp+27,(((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
                                        ? (vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
                                           - (IData)(1U))
                                        : 7U)),32);
            tracep->chgBit(oldp+28,(((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                                     | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+29,(vlSelf->mkTb__DOT__spi_writer__DOT__mosi));
            tracep->chgBit(oldp+30,((1U & ((~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                           | ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__wdata) 
                                              >> (7U 
                                                  & vlSelf->mkTb__DOT__spi_writer__DOT__cnt))))));
            tracep->chgBit(oldp+31,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                     | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))));
            tracep->chgBit(oldp+32,(vlSelf->mkTb__DOT__spi_writer__DOT__sck));
            tracep->chgBit(oldp+33,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)))));
            tracep->chgBit(oldp+34,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                     | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+35,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg));
            tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
            tracep->chgBit(oldp+37,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                     | (IData)(vlSelf->mkTb__DOT__spi_writer__024EN_write))));
            tracep->chgBit(oldp+38,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1));
            tracep->chgBit(oldp+39,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
            tracep->chgBit(oldp+40,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
                                     | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap))));
            tracep->chgBit(oldp+41,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_fired));
            tracep->chgCData(oldp+42,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate),4);
            tracep->chgCData(oldp+43,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN),4);
            tracep->chgBit(oldp+44,((((((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                                          | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
                                         | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                        | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                       | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                                      | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                     | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgBit(oldp+45,(vlSelf->mkTb__DOT__spi_writer__DOT__ss));
            tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)))));
            tracep->chgBit(oldp+47,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                     | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
            tracep->chgCData(oldp+48,(vlSelf->mkTb__DOT__spi_writer__DOT__wdata),8);
            tracep->chgBit(oldp+49,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
            tracep->chgBit(oldp+50,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13));
            tracep->chgBit(oldp+51,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15));
            tracep->chgBit(oldp+52,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
            tracep->chgBit(oldp+53,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7));
            tracep->chgIData(oldp+54,((vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
                                       - (IData)(1U))),32);
            tracep->chgBit(oldp+55,((1U & ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__wdata) 
                                           >> (7U & vlSelf->mkTb__DOT__spi_writer__DOT__cnt)))));
            tracep->chgBit(oldp+56,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60));
        }
        tracep->chgBit(oldp+57,(vlSelf->CLK));
        tracep->chgBit(oldp+58,(vlSelf->RST_N));
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
