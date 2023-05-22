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
        tracep->declBit(c+41,"CLK", false,-1);
        tracep->declBit(c+42,"RST_N", false,-1);
        tracep->declBit(c+41,"top CLK", false,-1);
        tracep->declBit(c+42,"top RST_N", false,-1);
        tracep->declBus(c+1,"top counter$count", false,-1, 31,0);
        tracep->declBit(c+2,"top counter$overflow", false,-1);
        tracep->declBit(c+41,"top counter CLK", false,-1);
        tracep->declBit(c+42,"top counter RST_N", false,-1);
        tracep->declBus(c+1,"top counter count", false,-1, 31,0);
        tracep->declBit(c+43,"top counter RDY_count", false,-1);
        tracep->declBit(c+2,"top counter overflow", false,-1);
        tracep->declBit(c+43,"top counter RDY_overflow", false,-1);
        tracep->declBus(c+1,"top counter cnt", false,-1, 31,0);
        tracep->declBus(c+3,"top counter cnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+43,"top counter cnt$EN", false,-1);
        tracep->declBus(c+4,"top counter forcnt", false,-1, 31,0);
        tracep->declBus(c+44,"top counter forcnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+45,"top counter forcnt$EN", false,-1);
        tracep->declBus(c+5,"top counter spi_writer$write_data", false,-1, 7,0);
        tracep->declBus(c+6,"top counter spi_writer$spi", false,-1, 2,0);
        tracep->declBit(c+7,"top counter spi_writer$EN_write", false,-1);
        tracep->declBit(c+7,"top counter spi_writer$RDY_write", false,-1);
        tracep->declBit(c+41,"top counter spi_writer CLK", false,-1);
        tracep->declBit(c+42,"top counter spi_writer RST_N", false,-1);
        tracep->declBus(c+5,"top counter spi_writer write_data", false,-1, 7,0);
        tracep->declBit(c+7,"top counter spi_writer EN_write", false,-1);
        tracep->declBit(c+7,"top counter spi_writer RDY_write", false,-1);
        tracep->declBus(c+6,"top counter spi_writer spi", false,-1, 2,0);
        tracep->declBit(c+43,"top counter spi_writer RDY_spi", false,-1);
        tracep->declBit(c+8,"top counter spi_writer spiFsm_start_wire$whas", false,-1);
        tracep->declBit(c+9,"top counter spi_writer spiFsm_state_set_pw$whas", false,-1);
        tracep->declBus(c+10,"top counter spi_writer cnt", false,-1, 31,0);
        tracep->declBus(c+11,"top counter spi_writer cnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+12,"top counter spi_writer cnt$EN", false,-1);
        tracep->declBit(c+13,"top counter spi_writer mosi", false,-1);
        tracep->declBit(c+14,"top counter spi_writer mosi$D_IN", false,-1);
        tracep->declBit(c+15,"top counter spi_writer mosi$EN", false,-1);
        tracep->declBit(c+16,"top counter spi_writer sck", false,-1);
        tracep->declBit(c+17,"top counter spi_writer sck$D_IN", false,-1);
        tracep->declBit(c+18,"top counter spi_writer sck$EN", false,-1);
        tracep->declBit(c+19,"top counter spi_writer spiFsm_start_reg", false,-1);
        tracep->declBit(c+20,"top counter spi_writer spiFsm_start_reg$D_IN", false,-1);
        tracep->declBit(c+21,"top counter spi_writer spiFsm_start_reg$EN", false,-1);
        tracep->declBit(c+22,"top counter spi_writer spiFsm_start_reg_1", false,-1);
        tracep->declBit(c+8,"top counter spi_writer spiFsm_start_reg_1$D_IN", false,-1);
        tracep->declBit(c+43,"top counter spi_writer spiFsm_start_reg_1$EN", false,-1);
        tracep->declBit(c+23,"top counter spi_writer spiFsm_state_can_overlap", false,-1);
        tracep->declBit(c+24,"top counter spi_writer spiFsm_state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+43,"top counter spi_writer spiFsm_state_can_overlap$EN", false,-1);
        tracep->declBit(c+25,"top counter spi_writer spiFsm_state_fired", false,-1);
        tracep->declBit(c+9,"top counter spi_writer spiFsm_state_fired$D_IN", false,-1);
        tracep->declBit(c+43,"top counter spi_writer spiFsm_state_fired$EN", false,-1);
        tracep->declBus(c+26,"top counter spi_writer spiFsm_state_mkFSMstate", false,-1, 3,0);
        tracep->declBus(c+27,"top counter spi_writer spiFsm_state_mkFSMstate$D_IN", false,-1, 3,0);
        tracep->declBit(c+28,"top counter spi_writer spiFsm_state_mkFSMstate$EN", false,-1);
        tracep->declBit(c+29,"top counter spi_writer ss", false,-1);
        tracep->declBit(c+30,"top counter spi_writer ss$D_IN", false,-1);
        tracep->declBit(c+31,"top counter spi_writer ss$EN", false,-1);
        tracep->declBus(c+32,"top counter spi_writer wdata", false,-1, 7,0);
        tracep->declBus(c+5,"top counter spi_writer wdata$D_IN", false,-1, 7,0);
        tracep->declBit(c+7,"top counter spi_writer wdata$EN", false,-1);
        tracep->declBit(c+33,"top counter spi_writer WILL_FIRE_RL_spiFsm_action_l24c13", false,-1);
        tracep->declBit(c+34,"top counter spi_writer WILL_FIRE_RL_spiFsm_action_l26c13", false,-1);
        tracep->declBit(c+35,"top counter spi_writer WILL_FIRE_RL_spiFsm_action_l35c15", false,-1);
        tracep->declBit(c+36,"top counter spi_writer WILL_FIRE_RL_spiFsm_fsm_start", false,-1);
        tracep->declBit(c+37,"top counter spi_writer WILL_FIRE_RL_spiFsm_idle_l23c7", false,-1);
        tracep->declBus(c+38,"top counter spi_writer MUX_cnt$write_1__VAL_1", false,-1, 31,0);
        tracep->declBit(c+39,"top counter spi_writer MUX_mosi$write_1__VAL_1", false,-1);
        tracep->declBit(c+40,"top counter spi_writer spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60", false,-1);
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
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__counter__DOT__cnt),32);
        tracep->fullBit(oldp+2,((0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt)));
        tracep->fullIData(oldp+3,(((0xffffffffU == vlSelf->top__DOT__counter__DOT__cnt)
                                    ? 0U : ((IData)(1U) 
                                            + vlSelf->top__DOT__counter__DOT__cnt))),32);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__counter__DOT__forcnt),32);
        tracep->fullCData(oldp+5,((0xffU & vlSelf->top__DOT__counter__DOT__cnt)),8);
        tracep->fullCData(oldp+6,((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss) 
                                    << 2U) | (((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck) 
                                               << 1U) 
                                              | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi)))),3);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_wire__024whas));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas));
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt),32);
        tracep->fullIData(oldp+11,(((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))
                                     ? (vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
                                        - (IData)(1U))
                                     : 7U)),32);
        tracep->fullBit(oldp+12,(((2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)) 
                                  | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__mosi));
        tracep->fullBit(oldp+14,((1U & ((~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                        | ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata) 
                                           >> (7U & vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt))))));
        tracep->fullBit(oldp+15,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                  | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15))));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__sck));
        tracep->fullBit(oldp+17,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)))));
        tracep->fullBit(oldp+18,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13) 
                                  | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg));
        tracep->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
        tracep->fullBit(oldp+21,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                  | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__024RDY_write))));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_start_reg_1));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap));
        tracep->fullBit(oldp+24,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_set_pw__024whas) 
                                  | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_can_overlap))));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_fired));
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate),4);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate__024D_IN),4);
        tracep->fullBit(oldp+28,((((((((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7) 
                                       | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)) 
                                      | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13)) 
                                     | (2U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                    | (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15)) 
                                   | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate))) 
                                  | (5U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__ss));
        tracep->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13)))));
        tracep->fullBit(oldp+31,(((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13) 
                                  | (4U == (IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata),8);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l24c13));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l26c13));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_action_l35c15));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__WILL_FIRE_RL_spiFsm_idle_l23c7));
        tracep->fullIData(oldp+38,((vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt 
                                    - (IData)(1U))),32);
        tracep->fullBit(oldp+39,((1U & ((IData)(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__wdata) 
                                        >> (7U & vlSelf->top__DOT__counter__DOT__spi_writer__DOT__cnt)))));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__counter__DOT__spi_writer__DOT__spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___05F_d60));
        tracep->fullBit(oldp+41,(vlSelf->CLK));
        tracep->fullBit(oldp+42,(vlSelf->RST_N));
        tracep->fullBit(oldp+43,(1U));
        tracep->fullIData(oldp+44,(0U),32);
        tracep->fullBit(oldp+45,(0U));
    }
}
