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
        tracep->declBit(c+58,"CLK", false,-1);
        tracep->declBit(c+59,"RST_N", false,-1);
        tracep->declBit(c+58,"mkTb CLK", false,-1);
        tracep->declBit(c+59,"mkTb RST_N", false,-1);
        tracep->declBit(c+1,"mkTb start_wire$whas", false,-1);
        tracep->declBit(c+2,"mkTb state_set_pw$whas", false,-1);
        tracep->declBit(c+3,"mkTb running", false,-1);
        tracep->declBit(c+60,"mkTb running$D_IN", false,-1);
        tracep->declBit(c+4,"mkTb running$EN", false,-1);
        tracep->declBit(c+5,"mkTb start_reg", false,-1);
        tracep->declBit(c+6,"mkTb start_reg$D_IN", false,-1);
        tracep->declBit(c+7,"mkTb start_reg$EN", false,-1);
        tracep->declBit(c+8,"mkTb start_reg_1", false,-1);
        tracep->declBit(c+1,"mkTb start_reg_1$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb start_reg_1$EN", false,-1);
        tracep->declBit(c+9,"mkTb state_can_overlap", false,-1);
        tracep->declBit(c+10,"mkTb state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb state_can_overlap$EN", false,-1);
        tracep->declBit(c+11,"mkTb state_fired", false,-1);
        tracep->declBit(c+2,"mkTb state_fired$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb state_fired$EN", false,-1);
        tracep->declBus(c+12,"mkTb state_mkFSMstate", false,-1, 2,0);
        tracep->declBus(c+13,"mkTb state_mkFSMstate$D_IN", false,-1, 2,0);
        tracep->declBit(c+14,"mkTb state_mkFSMstate$EN", false,-1);
        tracep->declBus(c+15,"mkTb spi_writer$write_data", false,-1, 7,0);
        tracep->declBus(c+16,"mkTb spi_writer$spi", false,-1, 2,0);
        tracep->declBit(c+17,"mkTb spi_writer$EN_write", false,-1);
        tracep->declBit(c+18,"mkTb spi_writer$RDY_write", false,-1);
        tracep->declBit(c+19,"mkTb WILL_FIRE_RL_action_l15c20", false,-1);
        tracep->declBit(c+20,"mkTb WILL_FIRE_RL_action_l16c20", false,-1);
        tracep->declBit(c+21,"mkTb WILL_FIRE_RL_action_l17c20", false,-1);
        tracep->declBit(c+22,"mkTb WILL_FIRE_RL_fsm_start", false,-1);
        tracep->declBit(c+23,"mkTb WILL_FIRE_RL_idle_l14c7", false,-1);
        tracep->declBit(c+4,"mkTb MUX_start_reg$write_1__SEL_2", false,-1);
        tracep->declBit(c+24,"mkTb abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d49", false,-1);
        tracep->declBit(c+58,"mkTb spi_writer CLK", false,-1);
        tracep->declBit(c+59,"mkTb spi_writer RST_N", false,-1);
        tracep->declBus(c+15,"mkTb spi_writer write_data", false,-1, 7,0);
        tracep->declBit(c+17,"mkTb spi_writer EN_write", false,-1);
        tracep->declBit(c+18,"mkTb spi_writer RDY_write", false,-1);
        tracep->declBus(c+16,"mkTb spi_writer spi", false,-1, 2,0);
        tracep->declBit(c+25,"mkTb spi_writer spiFsm_start_wire$whas", false,-1);
        tracep->declBit(c+26,"mkTb spi_writer spiFsm_state_set_pw$whas", false,-1);
        tracep->declBus(c+27,"mkTb spi_writer cnt", false,-1, 31,0);
        tracep->declBus(c+28,"mkTb spi_writer cnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+29,"mkTb spi_writer cnt$EN", false,-1);
        tracep->declBit(c+30,"mkTb spi_writer mosi", false,-1);
        tracep->declBit(c+31,"mkTb spi_writer mosi$D_IN", false,-1);
        tracep->declBit(c+32,"mkTb spi_writer mosi$EN", false,-1);
        tracep->declBit(c+33,"mkTb spi_writer sck", false,-1);
        tracep->declBit(c+34,"mkTb spi_writer sck$D_IN", false,-1);
        tracep->declBit(c+35,"mkTb spi_writer sck$EN", false,-1);
        tracep->declBit(c+36,"mkTb spi_writer spiFsm_start_reg", false,-1);
        tracep->declBit(c+37,"mkTb spi_writer spiFsm_start_reg$D_IN", false,-1);
        tracep->declBit(c+38,"mkTb spi_writer spiFsm_start_reg$EN", false,-1);
        tracep->declBit(c+39,"mkTb spi_writer spiFsm_start_reg_1", false,-1);
        tracep->declBit(c+25,"mkTb spi_writer spiFsm_start_reg_1$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb spi_writer spiFsm_start_reg_1$EN", false,-1);
        tracep->declBit(c+40,"mkTb spi_writer spiFsm_state_can_overlap", false,-1);
        tracep->declBit(c+41,"mkTb spi_writer spiFsm_state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb spi_writer spiFsm_state_can_overlap$EN", false,-1);
        tracep->declBit(c+42,"mkTb spi_writer spiFsm_state_fired", false,-1);
        tracep->declBit(c+26,"mkTb spi_writer spiFsm_state_fired$D_IN", false,-1);
        tracep->declBit(c+60,"mkTb spi_writer spiFsm_state_fired$EN", false,-1);
        tracep->declBus(c+43,"mkTb spi_writer spiFsm_state_mkFSMstate", false,-1, 3,0);
        tracep->declBus(c+44,"mkTb spi_writer spiFsm_state_mkFSMstate$D_IN", false,-1, 3,0);
        tracep->declBit(c+45,"mkTb spi_writer spiFsm_state_mkFSMstate$EN", false,-1);
        tracep->declBit(c+46,"mkTb spi_writer ss", false,-1);
        tracep->declBit(c+47,"mkTb spi_writer ss$D_IN", false,-1);
        tracep->declBit(c+48,"mkTb spi_writer ss$EN", false,-1);
        tracep->declBus(c+49,"mkTb spi_writer wdata", false,-1, 7,0);
        tracep->declBus(c+15,"mkTb spi_writer wdata$D_IN", false,-1, 7,0);
        tracep->declBit(c+17,"mkTb spi_writer wdata$EN", false,-1);
        tracep->declBit(c+50,"mkTb spi_writer WILL_FIRE_RL_spiFsm_action_l24c13", false,-1);
        tracep->declBit(c+51,"mkTb spi_writer WILL_FIRE_RL_spiFsm_action_l26c13", false,-1);
        tracep->declBit(c+52,"mkTb spi_writer WILL_FIRE_RL_spiFsm_action_l35c15", false,-1);
        tracep->declBit(c+53,"mkTb spi_writer WILL_FIRE_RL_spiFsm_fsm_start", false,-1);
        tracep->declBit(c+54,"mkTb spi_writer WILL_FIRE_RL_spiFsm_idle_l23c7", false,-1);
        tracep->declBus(c+55,"mkTb spi_writer MUX_cnt$write_1__VAL_1", false,-1, 31,0);
        tracep->declBit(c+56,"mkTb spi_writer MUX_mosi$write_1__VAL_1", false,-1);
        tracep->declBit(c+57,"mkTb spi_writer spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60", false,-1);
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
        tracep->fullBit(oldp+1,(vlSelf->mkTb__DOT__start_wire__024whas));
        tracep->fullBit(oldp+2,(vlSelf->mkTb__DOT__state_set_pw__024whas));
        tracep->fullBit(oldp+3,(vlSelf->mkTb__DOT__running));
        tracep->fullBit(oldp+4,((((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                  & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                 & (~ (IData)(vlSelf->mkTb__DOT__running)))));
        tracep->fullBit(oldp+5,(vlSelf->mkTb__DOT__start_reg));
        tracep->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)))));
        tracep->fullBit(oldp+7,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                 | (((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49) 
                                     & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                    & (~ (IData)(vlSelf->mkTb__DOT__running))))));
        tracep->fullBit(oldp+8,(vlSelf->mkTb__DOT__start_reg_1));
        tracep->fullBit(oldp+9,(vlSelf->mkTb__DOT__state_can_overlap));
        tracep->fullBit(oldp+10,(((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                  | (IData)(vlSelf->mkTb__DOT__state_can_overlap))));
        tracep->fullBit(oldp+11,(vlSelf->mkTb__DOT__state_fired));
        tracep->fullCData(oldp+12,(vlSelf->mkTb__DOT__state_mkFSMstate),3);
        tracep->fullCData(oldp+13,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7)
                                     ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                              ? 1U : 
                                             ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                                               ? 2U
                                               : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                                                   ? 3U
                                                   : 2U))))),3);
        tracep->fullBit(oldp+14,(((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)) 
                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20))));
        tracep->fullCData(oldp+15,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20)
                                     ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20)
                                              ? 0x14U
                                              : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20)
                                                  ? 0x65U
                                                  : 0xaaU)))),8);
        tracep->fullCData(oldp+16,((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__ss) 
                                     << 2U) | (((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__sck) 
                                                << 1U) 
                                               | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__mosi)))),3);
        tracep->fullBit(oldp+17,(vlSelf->mkTb__DOT__spi_writer__024EN_write));
        tracep->fullBit(oldp+18,(vlSelf->mkTb__DOT__spi_writer__024RDY_write));
        tracep->fullBit(oldp+19,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l15c20));
        tracep->fullBit(oldp+20,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l16c20));
        tracep->fullBit(oldp+21,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l17c20));
        tracep->fullBit(oldp+22,(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start));
        tracep->fullBit(oldp+23,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l14c7));
        tracep->fullBit(oldp+24,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d49));
        tracep->fullBit(oldp+25,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
        tracep->fullBit(oldp+26,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
        tracep->fullIData(oldp+27,(vlSelf->mkTb__DOT__spi_writer__DOT__cnt),32);
        tracep->fullIData(oldp+28,(((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
                                     ? (vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
                                        - (IData)(1U))
                                     : 7U)),32);
        tracep->fullBit(oldp+29,(((2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                                  | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+30,(vlSelf->mkTb__DOT__spi_writer__DOT__mosi));
        tracep->fullBit(oldp+31,((1U & ((~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                        | ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__wdata) 
                                           >> (7U & vlSelf->mkTb__DOT__spi_writer__DOT__cnt))))));
        tracep->fullBit(oldp+32,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                  | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))));
        tracep->fullBit(oldp+33,(vlSelf->mkTb__DOT__spi_writer__DOT__sck));
        tracep->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)))));
        tracep->fullBit(oldp+35,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                  | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+36,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg));
        tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
        tracep->fullBit(oldp+38,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                  | (IData)(vlSelf->mkTb__DOT__spi_writer__024EN_write))));
        tracep->fullBit(oldp+39,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_start_reg_1));
        tracep->fullBit(oldp+40,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
        tracep->fullBit(oldp+41,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
                                  | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_can_overlap))));
        tracep->fullBit(oldp+42,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_fired));
        tracep->fullCData(oldp+43,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate),4);
        tracep->fullCData(oldp+44,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN),4);
        tracep->fullBit(oldp+45,((((((((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                                       | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
                                      | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                     | (2U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                    | (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                                   | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                  | (5U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+46,(vlSelf->mkTb__DOT__spi_writer__DOT__ss));
        tracep->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)))));
        tracep->fullBit(oldp+48,(((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                  | (4U == (IData)(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullCData(oldp+49,(vlSelf->mkTb__DOT__spi_writer__DOT__wdata),8);
        tracep->fullBit(oldp+50,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
        tracep->fullBit(oldp+51,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13));
        tracep->fullBit(oldp+52,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15));
        tracep->fullBit(oldp+53,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
        tracep->fullBit(oldp+54,(vlSelf->mkTb__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7));
        tracep->fullIData(oldp+55,((vlSelf->mkTb__DOT__spi_writer__DOT__cnt 
                                    - (IData)(1U))),32);
        tracep->fullBit(oldp+56,((1U & ((IData)(vlSelf->mkTb__DOT__spi_writer__DOT__wdata) 
                                        >> (7U & vlSelf->mkTb__DOT__spi_writer__DOT__cnt)))));
        tracep->fullBit(oldp+57,(vlSelf->mkTb__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60));
        tracep->fullBit(oldp+58,(vlSelf->CLK));
        tracep->fullBit(oldp+59,(vlSelf->RST_N));
        tracep->fullBit(oldp+60,(1U));
    }
}
