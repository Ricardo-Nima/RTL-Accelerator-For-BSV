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
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<7>/*223:0*/ __Vtemp100;
    VlWide<7>/*223:0*/ __Vtemp110;
    VlWide<7>/*223:0*/ __Vtemp112;
    VlWide<7>/*223:0*/ __Vtemp115;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__initial_block__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__initial_block__DOT__i),32);
            tracep->chgIData(oldp+2,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__initial_block__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+3,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024wget),32);
            tracep->chgIData(oldp+4,(((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata)
                                       ? vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT
                                       : vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R)),32);
            tracep->chgCData(oldp+5,((2U | (IData)(
                                                   (2U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget)))))),2);
            tracep->chgCData(oldp+6,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget),2);
            tracep->chgBit(oldp+7,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas));
            tracep->chgBit(oldp+8,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas));
            tracep->chgBit(oldp+9,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_enqData__024whas));
            tracep->chgBit(oldp+10,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_outData__024whas));
            tracep->chgBit(oldp+11,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas));
            tracep->chgBit(oldp+12,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas));
            tracep->chgBit(oldp+13,(((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata) 
                                     | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outData_enqData__024whas))));
            tracep->chgBit(oldp+14,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas));
            tracep->chgBit(oldp+15,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas));
            tracep->chgBit(oldp+16,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas));
            tracep->chgBit(oldp+17,(vlSelf->mkTb__DOT__start_wire__024whas));
            tracep->chgBit(oldp+18,(vlSelf->mkTb__DOT__state_set_pw__024whas));
            tracep->chgIData(oldp+19,(vlSelf->mkTb__DOT__cnt),32);
            tracep->chgIData(oldp+20,((((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways))
                                        ? ((IData)(1U) 
                                           + vlSelf->mkTb__DOT__cnt)
                                        : 0U)),32);
            tracep->chgBit(oldp+21,((((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                     | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))));
            tracep->chgIData(oldp+22,(vlSelf->mkTb__DOT__cyc),32);
            tracep->chgIData(oldp+23,(((IData)(1U) 
                                       + vlSelf->mkTb__DOT__cyc)),32);
            tracep->chgCData(oldp+24,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt),3);
            tracep->chgCData(oldp+25,((7U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt) 
                                              + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas)
                                                  ? 1U
                                                  : 0U)) 
                                             + ((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas)
                                                 ? 7U
                                                 : 0U)))),3);
            tracep->chgBit(oldp+26,(((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_cnt_1__024whas) 
                                     | (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outData_deqCalled__024whas))));
            tracep->chgCData(oldp+27,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_s1),2);
            tracep->chgCData(oldp+28,(((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024whas)
                                        ? (2U | (IData)(
                                                        (2U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_writeWithResp__024wget)))))
                                        : 0U)),2);
            tracep->chgCData(oldp+29,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt),3);
            tracep->chgCData(oldp+30,((7U & (((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_cnt) 
                                              + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)
                                                  ? 1U
                                                  : 0U)) 
                                             + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)
                                                 ? 7U
                                                 : 0U)))),3);
            tracep->chgBit(oldp+31,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10))));
            tracep->chgCData(oldp+32,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_s1),2);
            tracep->chgCData(oldp+33,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)
                                        ? 3U : 0U)),2);
            tracep->chgCData(oldp+34,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt),3);
            tracep->chgCData(oldp+35,((7U & (((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_cnt) 
                                              + ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                                                  ? 1U
                                                  : 0U)) 
                                             + ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas)
                                                 ? 7U
                                                 : 0U)))),3);
            tracep->chgBit(oldp+36,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                                     | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_deqCalled__024whas))));
            tracep->chgCData(oldp+37,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_s1),2);
            tracep->chgCData(oldp+38,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                                        ? 3U : 0U)),2);
            tracep->chgSData(oldp+39,(vlSelf->mkTb__DOT__jj_delay_count),9);
            tracep->chgSData(oldp+40,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)
                                        ? (0x1feU & 
                                           ((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
                                            << 1U))
                                        : 1U)),9);
            tracep->chgBit(oldp+41,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np))));
            tracep->chgIData(oldp+42,(vlSelf->mkTb__DOT__lastpc),32);
            tracep->chgIData(oldp+43,(vlSelf->mkTb__DOT__cpu__024ibus_req),32);
            tracep->chgBit(oldp+44,(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways));
            tracep->chgBit(oldp+45,(vlSelf->mkTb__DOT__running));
            tracep->chgBit(oldp+46,((((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                      & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                     & (~ (IData)(vlSelf->mkTb__DOT__running)))));
            tracep->chgBit(oldp+47,(vlSelf->mkTb__DOT__start_reg));
            tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)))));
            tracep->chgBit(oldp+49,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                     | (((IData)(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271) 
                                         & (~ (IData)(vlSelf->mkTb__DOT__start_reg))) 
                                        & (~ (IData)(vlSelf->mkTb__DOT__running))))));
            tracep->chgBit(oldp+50,(vlSelf->mkTb__DOT__start_reg_1));
            tracep->chgBit(oldp+51,(vlSelf->mkTb__DOT__state_can_overlap));
            tracep->chgBit(oldp+52,(((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                     | (IData)(vlSelf->mkTb__DOT__state_can_overlap))));
            tracep->chgBit(oldp+53,(vlSelf->mkTb__DOT__state_fired));
            tracep->chgCData(oldp+54,(vlSelf->mkTb__DOT__state_mkFSMstate),4);
            tracep->chgCData(oldp+55,((((((((((IData)(vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                                         | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways))
                                        ? ((IData)(vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1)
                                            ? 0U : 
                                           ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)
                                             ? 1U : 
                                            ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)
                                              ? 2U : 
                                             ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)
                                               ? 3U
                                               : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))
                                                     ? 6U
                                                     : 7U)))))))
                                        : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)
                                            ? 8U : 
                                           ((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))
                                             ? 9U : 0xaU)))),4);
            tracep->chgBit(oldp+56,((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7)) 
                                        | (5U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate))) 
                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10)) 
                                     | (8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)))));
            tracep->chgIData(oldp+57,(vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U]),32);
            tracep->chgIData(oldp+58,(vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U]),32);
            tracep->chgCData(oldp+59,((0xfU & vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U])),4);
            tracep->chgBit(oldp+60,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10));
            tracep->chgBit(oldp+61,(((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                      >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287))));
            tracep->chgBit(oldp+62,(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp));
            tracep->chgBit(oldp+63,((((~ (IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv 
                                                  >> 0x20U))) 
                                      & ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata) 
                                         | (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_enqData__024whas))) 
                                     & (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outData_outData__024whas))));
            tracep->chgBit(oldp+64,((1U & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+65,(vlSelf->mkTb__DOT__cpu__024RDY_dbus_resp));
            tracep->chgBit(oldp+66,(vlSelf->mkTb__DOT__cpu__024RDY_ibus_req));
            tracep->chgBit(oldp+67,((((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg) 
                                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas)) 
                                     & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg))));
            tracep->chgBit(oldp+68,((1U & (~ (IData)(
                                                     (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv 
                                                      >> 0x20U))))));
            tracep->chgIData(oldp+69,((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U] 
                                       >> 2U)),32);
            tracep->chgIData(oldp+70,(vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R),32);
            tracep->chgIData(oldp+71,(vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R),32);
            tracep->chgBit(oldp+72,(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_stageReadResponseAlways));
            tracep->chgIData(oldp+73,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024D_OUT),32);
            tracep->chgBit(oldp+74,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024DEQ));
            tracep->chgBit(oldp+75,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__hasodata));
            tracep->chgBit(oldp+76,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__024ENQ));
            tracep->chgBit(oldp+77,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__not_ring_full));
            tracep->chgIData(oldp+78,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT),32);
            tracep->chgBit(oldp+79,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024DEQ));
            tracep->chgBit(oldp+80,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata));
            tracep->chgBit(oldp+81,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024ENQ));
            tracep->chgBit(oldp+82,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__not_ring_full));
            tracep->chgIData(oldp+83,((vlSelf->mkTb__DOT__cpu__024ibus_req 
                                       >> 2U)),32);
            tracep->chgIData(oldp+84,(vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R),32);
            tracep->chgIData(oldp+85,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT),32);
            tracep->chgBit(oldp+86,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024DEQ));
            tracep->chgBit(oldp+87,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata));
            tracep->chgBit(oldp+88,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024ENQ));
            tracep->chgBit(oldp+89,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__not_ring_full));
            tracep->chgBit(oldp+90,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_d_init_np));
            tracep->chgBit(oldp+91,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l51c7));
            tracep->chgBit(oldp+92,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l56c10));
            tracep->chgBit(oldp+93,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_np));
            tracep->chgBit(oldp+94,(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterA_outData_enqAndDeq));
            tracep->chgBit(oldp+95,(vlSelf->mkTb__DOT__WILL_FIRE_RL_data_ram_serverAdapterB_outData_enqAndDeq));
            tracep->chgBit(oldp+96,(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start));
            tracep->chgBit(oldp+97,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15));
            tracep->chgBit(oldp+98,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l34c15_1));
            tracep->chgBit(oldp+99,(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_outData_enqAndDeq));
            tracep->chgIData(oldp+100,(((IData)(1U) 
                                        + vlSelf->mkTb__DOT__cnt)),32);
            tracep->chgSData(oldp+101,((0x1feU & ((IData)(vlSelf->mkTb__DOT__jj_delay_count) 
                                                  << 1U))),9);
            tracep->chgBit(oldp+102,(((8U == (IData)(vlSelf->mkTb__DOT__state_mkFSMstate)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways))));
            tracep->chgBit(oldp+103,(vlSelf->mkTb__DOT__MUX_state_mkFSMstate__024write_1___05FSEL_1));
            tracep->chgIData(oldp+104,(((IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__hasodata)
                                         ? vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__024D_OUT
                                         : vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R)),32);
            tracep->chgBit(oldp+105,(vlSelf->mkTb__DOT__abort_whas___05F63_AND_abort_wget___05F64_65_OR_state___05FETC___05F_d271));
            tracep->chgBit(oldp+106,((0x28U > vlSelf->mkTb__DOT__cnt)));
            tracep->chgBit(oldp+107,(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287));
            tracep->chgBit(oldp+108,(vlSelf->mkTb__DOT__lastpc_13_EQ_cpu_ibus_req___05F14___05F_d215));
            tracep->chgBit(oldp+109,((1U & (vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                                            >> 4U))));
            __Vtemp89[0U] = (IData)((((QData)((IData)(
                                                      (0xfffffffcU 
                                                       & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((2U 
                                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                                    ? 
                                                                   (((0U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                          >> 2U))) 
                                                                     | (1U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                            >> 2U))))
                                                                     ? 
                                                                    (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                       << 0xeU) 
                                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                         >> 0x12U)) 
                                                                     << 
                                                                     (0x18U 
                                                                      & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                                         << 3U)))
                                                                     : 
                                                                    ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                      << 0xeU) 
                                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                        >> 0x12U)))
                                                                    : 
                                                                   ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                     << 0xeU) 
                                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                       >> 0x12U)))))));
            __Vtemp89[1U] = (IData)(((((QData)((IData)(
                                                       (0xfffffffcU 
                                                        & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((2U 
                                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                                     ? 
                                                                    (((0U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                           >> 2U))) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                             >> 2U))))
                                                                      ? 
                                                                     (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                        << 0xeU) 
                                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                          >> 0x12U)) 
                                                                      << 
                                                                      (0x18U 
                                                                       & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                                          << 3U)))
                                                                      : 
                                                                     ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                       << 0xeU) 
                                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                         >> 0x12U)))
                                                                     : 
                                                                    ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                      << 0xeU) 
                                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                        >> 0x12U)))))) 
                                     >> 0x20U));
            __Vtemp89[2U] = (0x20U | ((0x10U & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                << 3U)) 
                                      | ((2U & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                          ? (0xfU & 
                                             ((0U == 
                                               (3U 
                                                & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                   >> 2U)))
                                               ? ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                                   : 0xfU)))
                                          : 0U)));
            tracep->chgWData(oldp+110,(__Vtemp89),70);
            tracep->chgWData(oldp+113,(vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread),70);
            if (((vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U] 
                  >> 5U) & (IData)(vlSelf->mkTb__DOT__cpu_RDY_dbus_req_snd_snd_fst___05F81_AND_cpu_RDY_d_ETC___05F_d287))) {
                __Vtemp92[0U] = 0xaaaaaaaaU;
                __Vtemp92[1U] = 0xaaaaaaaaU;
                __Vtemp92[2U] = 0xaU;
            } else {
                __Vtemp92[0U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[0U];
                __Vtemp92[1U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[1U];
                __Vtemp92[2U] = vlSelf->mkTb__DOT__cpu__DOT__lsq_rv__024port1___05Fread[2U];
            }
            tracep->chgWData(oldp+116,(__Vtemp92),70);
            tracep->chgQData(oldp+119,((((QData)((IData)(
                                                         (0x3fU 
                                                          & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                             >> 0xcU)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                 >> 2U))) 
                                                            & (7U 
                                                               == 
                                                               (7U 
                                                                & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                    << 2U) 
                                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                      >> 0x1eU)))))
                                                            ? 
                                                           ((IData)(4U) 
                                                            + 
                                                            ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                              << 0x1bU) 
                                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                >> 5U)))
                                                            : 
                                                           ((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                  << 2U) 
                                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                    >> 0x1eU))))
                                                             ? 
                                                            (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                               << 0x1bU) 
                                                              | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                 >> 5U)) 
                                                             + 
                                                             vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                                             : 
                                                            ((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                   << 2U) 
                                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                     >> 0x1eU))))
                                                              ? 
                                                             vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                              : 
                                                             ((0x33U 
                                                               == 
                                                               ((0x1ff80U 
                                                                 & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                    << 5U)) 
                                                                | (0x7fU 
                                                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                       << 2U) 
                                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                         >> 0x1eU)))))
                                                               ? 
                                                              (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                 << 8U) 
                                                                | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                   >> 0x18U)) 
                                                               + 
                                                               ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                 << 0xeU) 
                                                                | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                   >> 0x12U)))
                                                               : 
                                                              ((0x13U 
                                                                == 
                                                                ((0x380U 
                                                                  & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                     << 5U)) 
                                                                 | (0x7fU 
                                                                    & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                        << 2U) 
                                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                          >> 0x1eU)))))
                                                                ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                                : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3))))))))),38);
            tracep->chgQData(oldp+121,((0x100000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__hasodata)
                                                            ? vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__024D_OUT
                                                            : vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R))))),33);
            tracep->chgQData(oldp+123,(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread),33);
            tracep->chgQData(oldp+125,((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96))
                                         ? 0xaaaaaaaaULL
                                         : vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)),33);
            tracep->chgBit(oldp+127,(vlSelf->mkTb__DOT__cpu__DOT__ex_dequeueing__024whas));
            tracep->chgBit(oldp+128,(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas));
            tracep->chgBit(oldp+129,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96))));
            tracep->chgBit(oldp+130,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_enqw__024whas));
            tracep->chgBit(oldp+131,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                          >> 1U) | 
                                         vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))));
            tracep->chgBit(oldp+132,((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                       & (~ (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                             >> 1U))) 
                                      & (~ vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))));
            tracep->chgQData(oldp+133,(vlSelf->mkTb__DOT__cpu__DOT__boot_pc),33);
            tracep->chgQData(oldp+135,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l35c10)
                                         ? 0x100000000ULL
                                         : 0xaaaaaaaaULL)),33);
            tracep->chgCData(oldp+137,(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r),2);
            tracep->chgCData(oldp+138,((3U & ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                               ? ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r) 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))))),2);
            tracep->chgBit(oldp+139,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr) 
                                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr))));
            tracep->chgWData(oldp+140,(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0),197);
            if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                 & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))) {
                __Vtemp100[0U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                __Vtemp100[1U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                __Vtemp100[2U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                __Vtemp100[3U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                __Vtemp100[4U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                __Vtemp100[5U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                __Vtemp100[6U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                __Vtemp100[0U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[1U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[2U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[3U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[4U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[5U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U]
                                       : 0xaaaaaaaaU));
                __Vtemp100[6U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))
                                   ? ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U]
                                       : vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U])
                                   : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                       ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U]
                                       : 0xaU));
            }
            tracep->chgWData(oldp+147,(__Vtemp100),197);
            tracep->chgBit(oldp+154,(((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                                        & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
                                       | ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))) 
                                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr))));
            tracep->chgWData(oldp+155,(vlSelf->mkTb__DOT__cpu__DOT__ex_q_1),197);
            if (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                 & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))) {
                __Vtemp110[0U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                __Vtemp110[1U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                __Vtemp110[2U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                __Vtemp110[3U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                __Vtemp110[4U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                __Vtemp110[5U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                __Vtemp110[6U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                __Vtemp110[0U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[1U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[2U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[3U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[4U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[5U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaaaaaaaaU));
                __Vtemp110[6U] = (((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))
                                   ? ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))
                                       ? vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U]
                                       : 0U) : ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr)
                                                 ? 0U
                                                 : 0xaU));
            }
            tracep->chgWData(oldp+162,(__Vtemp110),197);
            tracep->chgBit(oldp+169,(((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                                        & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) 
                                       | ((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))) 
                                      | (IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr))));
            tracep->chgQData(oldp+170,(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv),33);
            tracep->chgWData(oldp+172,(vlSelf->mkTb__DOT__cpu__DOT__lsq_rv),70);
            tracep->chgIData(oldp+175,(vlSelf->mkTb__DOT__cpu__DOT__regfile_0),32);
            tracep->chgIData(oldp+176,(((IData)((0x2000000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+177,(((IData)((0x2000000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+178,(vlSelf->mkTb__DOT__cpu__DOT__regfile_1),32);
            tracep->chgIData(oldp+179,(((IData)((0x2100000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+180,(((IData)((0x2100000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+181,(vlSelf->mkTb__DOT__cpu__DOT__regfile_10),32);
            tracep->chgIData(oldp+182,(((IData)((0x2a00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+183,(((IData)((0x2a00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xaU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+184,(vlSelf->mkTb__DOT__cpu__DOT__regfile_11),32);
            tracep->chgIData(oldp+185,(((IData)((0x2b00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+186,(((IData)((0x2b00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xbU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+187,(vlSelf->mkTb__DOT__cpu__DOT__regfile_12),32);
            tracep->chgIData(oldp+188,(((IData)((0x2c00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+189,(((IData)((0x2c00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xcU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+190,(vlSelf->mkTb__DOT__cpu__DOT__regfile_13),32);
            tracep->chgIData(oldp+191,(((IData)((0x2d00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+192,(((IData)((0x2d00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xdU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+193,(vlSelf->mkTb__DOT__cpu__DOT__regfile_14),32);
            tracep->chgIData(oldp+194,(((IData)((0x2e00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+195,(((IData)((0x2e00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xeU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+196,(vlSelf->mkTb__DOT__cpu__DOT__regfile_15),32);
            tracep->chgIData(oldp+197,(((IData)((0x2f00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+198,(((IData)((0x2f00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0xfU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+199,(vlSelf->mkTb__DOT__cpu__DOT__regfile_16),32);
            tracep->chgIData(oldp+200,(((IData)((0x3000000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+201,(((IData)((0x3000000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x10U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+202,(vlSelf->mkTb__DOT__cpu__DOT__regfile_17),32);
            tracep->chgIData(oldp+203,(((IData)((0x3100000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+204,(((IData)((0x3100000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x11U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+205,(vlSelf->mkTb__DOT__cpu__DOT__regfile_18),32);
            tracep->chgIData(oldp+206,(((IData)((0x3200000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+207,(((IData)((0x3200000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x12U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+208,(vlSelf->mkTb__DOT__cpu__DOT__regfile_19),32);
            tracep->chgIData(oldp+209,(((IData)((0x3300000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+210,(((IData)((0x3300000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x13U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+211,(vlSelf->mkTb__DOT__cpu__DOT__regfile_2),32);
            tracep->chgIData(oldp+212,(((IData)((0x2200000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+213,(((IData)((0x2200000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+214,(vlSelf->mkTb__DOT__cpu__DOT__regfile_20),32);
            tracep->chgIData(oldp+215,(((IData)((0x3400000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+216,(((IData)((0x3400000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x14U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+217,(vlSelf->mkTb__DOT__cpu__DOT__regfile_21),32);
            tracep->chgIData(oldp+218,(((IData)((0x3500000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+219,(((IData)((0x3500000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x15U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+220,(vlSelf->mkTb__DOT__cpu__DOT__regfile_22),32);
            tracep->chgIData(oldp+221,(((IData)((0x3600000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+222,(((IData)((0x3600000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x16U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+223,(vlSelf->mkTb__DOT__cpu__DOT__regfile_23),32);
            tracep->chgIData(oldp+224,(((IData)((0x3700000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+225,(((IData)((0x3700000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x17U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+226,(vlSelf->mkTb__DOT__cpu__DOT__regfile_24),32);
            tracep->chgIData(oldp+227,(((IData)((0x3800000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+228,(((IData)((0x3800000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x18U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+229,(vlSelf->mkTb__DOT__cpu__DOT__regfile_25),32);
            tracep->chgIData(oldp+230,(((IData)((0x3900000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+231,(((IData)((0x3900000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x19U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+232,(vlSelf->mkTb__DOT__cpu__DOT__regfile_26),32);
            tracep->chgIData(oldp+233,(((IData)((0x3a00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+234,(((IData)((0x3a00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1aU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+235,(vlSelf->mkTb__DOT__cpu__DOT__regfile_27),32);
            tracep->chgIData(oldp+236,(((IData)((0x3b00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+237,(((IData)((0x3b00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1bU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+238,(vlSelf->mkTb__DOT__cpu__DOT__regfile_28),32);
            tracep->chgIData(oldp+239,(((IData)((0x3c00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+240,(((IData)((0x3c00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1cU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+241,(vlSelf->mkTb__DOT__cpu__DOT__regfile_29),32);
            tracep->chgIData(oldp+242,(((IData)((0x3d00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+243,(((IData)((0x3d00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1dU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+244,(vlSelf->mkTb__DOT__cpu__DOT__regfile_3),32);
            tracep->chgIData(oldp+245,(((IData)((0x2300000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+246,(((IData)((0x2300000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (3U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+247,(vlSelf->mkTb__DOT__cpu__DOT__regfile_30),32);
            tracep->chgIData(oldp+248,(((IData)((0x3e00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+249,(((IData)((0x3e00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1eU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+250,(vlSelf->mkTb__DOT__cpu__DOT__regfile_31),32);
            tracep->chgIData(oldp+251,(((IData)((0x3f00000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+252,(((IData)((0x3f00000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (0x1fU == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+253,(vlSelf->mkTb__DOT__cpu__DOT__regfile_4),32);
            tracep->chgIData(oldp+254,(((IData)((0x2400000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+255,(((IData)((0x2400000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (4U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+256,(vlSelf->mkTb__DOT__cpu__DOT__regfile_5),32);
            tracep->chgIData(oldp+257,(((IData)((0x2500000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+258,(((IData)((0x2500000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (5U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+259,(vlSelf->mkTb__DOT__cpu__DOT__regfile_6),32);
            tracep->chgIData(oldp+260,(((IData)((0x2600000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+261,(((IData)((0x2600000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (6U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+262,(vlSelf->mkTb__DOT__cpu__DOT__regfile_7),32);
            tracep->chgIData(oldp+263,(((IData)((0x2700000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+264,(((IData)((0x2700000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (7U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+265,(vlSelf->mkTb__DOT__cpu__DOT__regfile_8),32);
            tracep->chgIData(oldp+266,(((IData)((0x2800000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+267,(((IData)((0x2800000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (8U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgIData(oldp+268,(vlSelf->mkTb__DOT__cpu__DOT__regfile_9),32);
            tracep->chgIData(oldp+269,(((IData)((0x2900000000ULL 
                                                 == 
                                                 (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2)),32);
            tracep->chgBit(oldp+270,(((IData)((0x2900000000ULL 
                                               == (0x3f00000000ULL 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__wb))) 
                                      | ((IData)(vlSelf->mkTb__DOT__cpu__024EN_dbus_resp) 
                                         & (9U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061))))));
            tracep->chgQData(oldp+271,(vlSelf->mkTb__DOT__cpu__DOT__wb),38);
            tracep->chgQData(oldp+273,(((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                          & (~ (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                >> 1U))) 
                                         & (~ vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U]))
                                         ? (((QData)((IData)(
                                                             (0x3fU 
                                                              & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                 >> 0xcU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((6U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                     >> 2U))) 
                                                                & (7U 
                                                                   == 
                                                                   (7U 
                                                                    & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                        << 2U) 
                                                                       | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                          >> 0x1eU)))))
                                                                ? 
                                                               ((IData)(4U) 
                                                                + 
                                                                ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                    >> 5U)))
                                                                : 
                                                               ((0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                      << 2U) 
                                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                        >> 0x1eU))))
                                                                 ? 
                                                                (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                                   << 0x1bU) 
                                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                     >> 5U)) 
                                                                 + 
                                                                 vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                                                 : 
                                                                ((0x37U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                       << 2U) 
                                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                         >> 0x1eU))))
                                                                  ? 
                                                                 vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                                  : 
                                                                 ((0x33U 
                                                                   == 
                                                                   ((0x1ff80U 
                                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                        << 5U)) 
                                                                    | (0x7fU 
                                                                       & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                           << 2U) 
                                                                          | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                             >> 0x1eU)))))
                                                                   ? 
                                                                  (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                     << 8U) 
                                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                       >> 0x18U)) 
                                                                   + 
                                                                   ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                                     << 0xeU) 
                                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                                       >> 0x12U)))
                                                                   : 
                                                                  ((0x13U 
                                                                    == 
                                                                    ((0x380U 
                                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                                         << 5U)) 
                                                                     | (0x7fU 
                                                                        & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                                            << 2U) 
                                                                           | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                                              >> 0x1eU)))))
                                                                    ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                                    : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3))))))))
                                         : 0ULL)),38);
            tracep->chgIData(oldp+275,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__024D_IN),32);
            tracep->chgIData(oldp+276,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg),32);
            tracep->chgBit(oldp+277,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg));
            tracep->chgBit(oldp+278,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg));
            tracep->chgIData(oldp+279,(vlSelf->mkTb__DOT__cpu__DOT__x___05Fh2546),32);
            tracep->chgIData(oldp+280,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data0_reg),32);
            tracep->chgBit(oldp+281,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ));
            tracep->chgBit(oldp+282,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg));
            tracep->chgBit(oldp+283,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ));
            tracep->chgBit(oldp+284,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg));
            tracep->chgWData(oldp+285,(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT),197);
            tracep->chgBit(oldp+292,(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg));
            tracep->chgBit(oldp+293,(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024ENQ));
            tracep->chgBit(oldp+294,((1U & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)))));
            tracep->chgBit(oldp+295,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_enq_boot_pc));
            tracep->chgBit(oldp+296,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both));
            tracep->chgBit(oldp+297,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_decCtr));
            tracep->chgBit(oldp+298,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr));
            tracep->chgBit(oldp+299,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage));
            tracep->chgBit(oldp+300,(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage));
            tracep->chgIData(oldp+301,(vlSelf->mkTb__DOT__cpu__DOT__MUX_regfile_0__024write_1___05FVAL_2),32);
            tracep->chgWData(oldp+302,(vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1),197);
            if ((1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) {
                __Vtemp112[0U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                __Vtemp112[1U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                __Vtemp112[2U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                __Vtemp112[3U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                __Vtemp112[4U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                __Vtemp112[5U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                __Vtemp112[6U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                __Vtemp112[0U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[0U];
                __Vtemp112[1U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[1U];
                __Vtemp112[2U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[2U];
                __Vtemp112[3U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[3U];
                __Vtemp112[4U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[4U];
                __Vtemp112[5U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[5U];
                __Vtemp112[6U] = vlSelf->mkTb__DOT__cpu__DOT__ex_q_1[6U];
            }
            tracep->chgWData(oldp+309,(__Vtemp112),197);
            if ((2U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r))) {
                __Vtemp115[0U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[0U];
                __Vtemp115[1U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[1U];
                __Vtemp115[2U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[2U];
                __Vtemp115[3U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[3U];
                __Vtemp115[4U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[4U];
                __Vtemp115[5U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[5U];
                __Vtemp115[6U] = vlSelf->mkTb__DOT__cpu__DOT__MUX_ex_q_0__024write_1___05FVAL_1[6U];
            } else {
                __Vtemp115[0U] = 0U;
                __Vtemp115[1U] = 0U;
                __Vtemp115[2U] = 0U;
                __Vtemp115[3U] = 0U;
                __Vtemp115[4U] = 0U;
                __Vtemp115[5U] = 0U;
                __Vtemp115[6U] = 0U;
            }
            tracep->chgWData(oldp+316,(__Vtemp115),197);
            tracep->chgIData(oldp+323,(((1U & (IData)(
                                                      (vlSelf->mkTb__DOT__cpu__DOT__boot_pc 
                                                       >> 0x20U)))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__boot_pc)
                                         : 0U)),32);
            tracep->chgIData(oldp+324,(((0x67U == (0x7fU 
                                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                       << 2U) 
                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                         >> 0x1eU))))
                                         ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                         : (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                              << 0x1bU) 
                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                >> 5U)) 
                                            + ((1U 
                                                & ((0x10U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                      ? 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                           >> 2U))) 
                                                      & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                      : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                      ? 
                                                     (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238))
                                                      : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                          >> 2U))) 
                                                     & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                      ? 
                                                     (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234))
                                                      : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234)))))
                                                ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                : 4U)))),32);
            tracep->chgIData(oldp+325,(((0x6fU == (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))
                                         ? (vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg 
                                            + vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654)
                                         : ((IData)(4U) 
                                            + vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data0_reg))),32);
            tracep->chgCData(oldp+326,((3U & ((IData)(1U) 
                                              + (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))),2);
            tracep->chgBit(oldp+327,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                                      & (0U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))));
            tracep->chgBit(oldp+328,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo3))));
            tracep->chgBit(oldp+329,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_incCtr) 
                                      & (1U == (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r)))));
            tracep->chgBit(oldp+330,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_both) 
                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT___dfoo1))));
            tracep->chgBit(oldp+331,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_ex_stage) 
                                      & ((0x67U == 
                                          (0x7fU & 
                                           ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                             << 2U) 
                                            | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                               >> 0x1eU)))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                 << 2U) 
                                                | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                   >> 0x1eU))))))));
            tracep->chgBit(oldp+332,(((((IData)(vlSelf->mkTb__DOT__cpu__DOT__WILL_FIRE_RL_id_stage) 
                                        & (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210)) 
                                       & (0x67U != 
                                          (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                      & (0x63U != (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))))));
            tracep->chgBit(oldp+333,((IData)((0x2000000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+334,((IData)((0x2100000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+335,((IData)((0x2a00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+336,((IData)((0x2b00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+337,((IData)((0x2c00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+338,((IData)((0x2d00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+339,((IData)((0x2e00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+340,((IData)((0x2f00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+341,((IData)((0x3000000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+342,((IData)((0x3100000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+343,((IData)((0x3200000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+344,((IData)((0x3300000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+345,((IData)((0x2200000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+346,((IData)((0x3400000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+347,((IData)((0x3500000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+348,((IData)((0x3600000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+349,((IData)((0x3700000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+350,((IData)((0x3800000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+351,((IData)((0x3900000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+352,((IData)((0x3a00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+353,((IData)((0x3b00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+354,((IData)((0x3c00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+355,((IData)((0x3d00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+356,((IData)((0x2300000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+357,((IData)((0x3e00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+358,((IData)((0x3f00000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+359,((IData)((0x2400000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+360,((IData)((0x2500000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+361,((IData)((0x2600000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+362,((IData)((0x2700000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+363,((IData)((0x2800000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgBit(oldp+364,((IData)((0x2900000000ULL 
                                              == (0x3f00000000ULL 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__wb)))));
            tracep->chgIData(oldp+365,(((0x17U == (0x7fU 
                                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                       << 2U) 
                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                         >> 0x1eU))))
                                         ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                              << 0x1bU) 
                                             | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                >> 5U)) 
                                            + vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                         : ((0x37U 
                                             == (0x7fU 
                                                 & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                     << 2U) 
                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                       >> 0x1eU))))
                                             ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                             : ((0x33U 
                                                 == 
                                                 ((0x1ff80U 
                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                      << 5U)) 
                                                  | (0x7fU 
                                                     & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                         << 2U) 
                                                        | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                           >> 0x1eU)))))
                                                 ? 
                                                (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                   << 8U) 
                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                     >> 0x18U)) 
                                                 + 
                                                 ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                   << 0xeU) 
                                                  | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                     >> 0x12U)))
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  ((0x380U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       << 5U)) 
                                                   | (0x7fU 
                                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                          << 2U) 
                                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x1eU)))))
                                                  ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                  : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3))))),32);
            tracep->chgIData(oldp+366,(vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3),32);
            tracep->chgIData(oldp+367,(vlSelf->mkTb__DOT__cpu__DOT__IF_ex_q_0_4_BITS_43_TO_34_88_CONCAT_ex_q_0_4_B_ETC___05F_d341),32);
            tracep->chgIData(oldp+368,(vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143),32);
            tracep->chgIData(oldp+369,(vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149),32);
            tracep->chgIData(oldp+370,(vlSelf->mkTb__DOT__cpu__DOT__x___05Fh6654),32);
            tracep->chgBit(oldp+371,((1U & ((0x10U 
                                             & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                             ? ((8U 
                                                 & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                 ? 
                                                ((4U 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                  ? 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       >> 2U))) 
                                                  & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                  : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242))
                                                 : 
                                                ((4U 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                  ? 
                                                 (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238))
                                                  : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)))
                                             : ((8U 
                                                 & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                 ? 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                      >> 2U))) 
                                                 & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                 : 
                                                ((4U 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                  ? 
                                                 (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234))
                                                  : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234)))))));
            tracep->chgIData(oldp+372,(((0x13U == (
                                                   (0x380U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       << 5U)) 
                                                   | (0x7fU 
                                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                          << 2U) 
                                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x1eU)))))
                                         ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                         : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3)),32);
            tracep->chgIData(oldp+373,(vlSelf->mkTb__DOT__cpu__DOT__SEXT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_TH_ETC___05F_d176),32);
            tracep->chgIData(oldp+374,(((IData)((vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                 >> 0xcU)) 
                                        << 0xcU)),32);
            tracep->chgIData(oldp+375,(vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416),32);
            tracep->chgIData(oldp+376,(((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                         << 8U) | (
                                                   vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                   >> 0x18U))),32);
            tracep->chgIData(oldp+377,((IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)),32);
            tracep->chgIData(oldp+378,((((((((((0x13U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                               | (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                             | (0x33U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           | (0x63U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (IData)(
                                                    (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                     >> 0x25U))) 
                                         & ((0x1fU 
                                             & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                        >> 0xfU))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                           >> 0x20U)))))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d143)),32);
            tracep->chgIData(oldp+379,(((((((0x33U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                            | (0x23U 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           | (0x63U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (IData)(
                                                    (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                     >> 0x25U))) 
                                         & ((0x1fU 
                                             & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                        >> 0x14U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                           >> 0x20U)))))
                                         ? (IData)(vlSelf->mkTb__DOT__cpu__DOT__wb)
                                         : vlSelf->mkTb__DOT__cpu__DOT__SEL_ARR_regfile_0_10_regfile_1_11_regfile_2_12_ETC___05F_d149)),32);
            tracep->chgIData(oldp+380,((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                          << 0xeU) 
                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                            >> 0x12U)) 
                                        << (0x18U & 
                                            (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                             << 3U)))),32);
            tracep->chgIData(oldp+381,(vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232),32);
            tracep->chgIData(oldp+382,((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                          << 0x1bU) 
                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                            >> 5U)) 
                                        + ((1U & ((0x10U 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                          >> 2U))) 
                                                     & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                         >> 2U))) 
                                                    & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234)))))
                                            ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                            : 4U))),32);
            tracep->chgIData(oldp+383,((0xfffffffcU 
                                        & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232)),32);
            tracep->chgIData(oldp+384,(((2U & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                         ? (((0U == 
                                              (3U & 
                                               (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                >> 2U))) 
                                             | (1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                    >> 2U))))
                                             ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                  << 0xeU) 
                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                    >> 0x12U)) 
                                                << 
                                                (0x18U 
                                                 & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                    << 3U)))
                                             : ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                 << 0xeU) 
                                                | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                   >> 0x12U)))
                                         : ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                             << 0xeU) 
                                            | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                               >> 0x12U)))),32);
            tracep->chgIData(oldp+385,(((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                           << 8U) | 
                                          (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                           >> 0x18U)) 
                                         >> (0x1fU 
                                             & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                >> 0x12U))) 
                                        | ((~ (0xffffffffU 
                                               >> (0x1fU 
                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                      >> 0x12U)))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x17U))))))),32);
            tracep->chgIData(oldp+386,(((((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                           << 8U) | 
                                          (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                           >> 0x18U)) 
                                         >> (0x1fU 
                                             & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])) 
                                        | ((~ (0xffffffffU 
                                               >> (0x1fU 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]))) 
                                           & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x17U))))))),32);
            tracep->chgIData(oldp+387,((((6U == (7U 
                                                 & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                    >> 2U))) 
                                         & (7U == (7U 
                                                   & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                       << 2U) 
                                                      | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                         >> 0x1eU)))))
                                         ? ((IData)(4U) 
                                            + ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                << 0x1bU) 
                                               | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                  >> 5U)))
                                         : ((0x17U 
                                             == (0x7fU 
                                                 & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                     << 2U) 
                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                       >> 0x1eU))))
                                             ? (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[6U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                    >> 5U)) 
                                                + vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U])
                                             : ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                      << 2U) 
                                                     | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                        >> 0x1eU))))
                                                 ? 
                                                vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                                 : 
                                                ((0x33U 
                                                  == 
                                                  ((0x1ff80U 
                                                    & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                       << 5U)) 
                                                   | (0x7fU 
                                                      & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                          << 2U) 
                                                         | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                            >> 0x1eU)))))
                                                  ? 
                                                 (((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                    << 8U) 
                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                      >> 0x18U)) 
                                                  + 
                                                  ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[3U] 
                                                    << 0xeU) 
                                                   | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[2U] 
                                                      >> 0x12U)))
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   ((0x380U 
                                                     & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                        << 5U)) 
                                                    | (0x7fU 
                                                       & ((vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[5U] 
                                                           << 2U) 
                                                          | (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[4U] 
                                                             >> 0x1eU)))))
                                                   ? vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232
                                                   : vlSelf->mkTb__DOT__cpu__DOT__CASE_ex_q_0_BITS_43_TO_34_CONCAT_ex_q_0_BITS_1_ETC___05Fq3)))))),32);
            tracep->chgIData(oldp+388,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                         ? vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U]
                                         : 0U)),32);
            tracep->chgIData(oldp+389,((((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                          ? ((vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
                                              << 8U) 
                                             | (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
                                                >> 0x18U))
                                          : 0U) + ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                                    ? 
                                                   vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U]
                                                    : 0U))),32);
            tracep->chgIData(oldp+390,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                         ? ((vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
                                             << 8U) 
                                            | (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
                                               >> 0x18U))
                                         : 0U)),32);
            tracep->chgIData(oldp+391,(((1U & ((0x10U 
                                                & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                ? (
                                                   (8U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                          >> 2U))) 
                                                     & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238)))
                                                : (
                                                   (8U 
                                                    & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                         >> 2U))) 
                                                    & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242)))
                                                    : 
                                                   ((4U 
                                                     & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                                     ? 
                                                    (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234))
                                                     : (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234)))))
                                         ? vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[0U]
                                         : 4U)),32);
            tracep->chgIData(oldp+392,(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq10),21);
            tracep->chgSData(oldp+393,((0xffffU & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416)),16);
            tracep->chgSData(oldp+394,(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rvport1___05Fread_BITS_31_TO_0_BIT_31_CON_ETC___05Fq9),13);
            tracep->chgSData(oldp+395,(vlSelf->mkTb__DOT__cpu__DOT__b___05Fh6854),12);
            tracep->chgSData(oldp+396,((0xfffU & (IData)(
                                                         (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                          >> 0x14U)))),12);
            tracep->chgCData(oldp+397,((0xffU & vlSelf->mkTb__DOT__cpu__DOT__dbus_resp_rdata_SRL_IF_ld_fifo_i_notEmpty___05F6_T_ETC___05F_d416)),8);
            tracep->chgCData(oldp+398,((0x18U & ((((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                                    ? 
                                                   ((vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[4U] 
                                                     << 8U) 
                                                    | (vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[3U] 
                                                       >> 0x18U))
                                                    : 0U) 
                                                  + 
                                                  ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__empty_reg)
                                                    ? 
                                                   vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__024D_OUT[0U]
                                                    : 0U)) 
                                                 << 3U))),5);
            tracep->chgCData(oldp+399,((0x18U & (vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232 
                                                 << 3U))),5);
            tracep->chgCData(oldp+400,(vlSelf->mkTb__DOT__cpu__DOT__y___05Fh5061),5);
            tracep->chgCData(oldp+401,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232)))),4);
            tracep->chgCData(oldp+402,((0xfU & ((IData)(3U) 
                                                << 
                                                (3U 
                                                 & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232)))),4);
            tracep->chgCData(oldp+403,(((2U & vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U])
                                         ? (0xfU & 
                                            ((0U == 
                                              (3U & 
                                               (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                >> 2U)))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->mkTb__DOT__cpu__DOT__ex_q_0[1U] 
                                                      >> 2U)))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->mkTb__DOT__cpu__DOT__x___05Fh7232))
                                                  : 0xfU)))
                                         : 0U)),4);
            tracep->chgCData(oldp+404,((3U & ((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_cntr_r) 
                                              - (IData)(1U)))),2);
            tracep->chgBit(oldp+405,(((((((((0x13U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                            | (3U == 
                                               (0x7fU 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          | (0x33U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        | (0x63U == 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       & (IData)((vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                  >> 0x25U))) 
                                      & ((0x1fU & (IData)(
                                                          (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                           >> 0xfU))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                        >> 0x20U)))))));
            tracep->chgBit(oldp+406,((((((0x33U == 
                                          (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        | (0x63U == 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       & (IData)((vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                  >> 0x25U))) 
                                      & ((0x1fU & (IData)(
                                                          (vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread 
                                                           >> 0x14U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->mkTb__DOT__cpu__DOT__wb 
                                                        >> 0x20U)))))));
            tracep->chgBit(oldp+407,(((((((0x13U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (3U != 
                                             (0x7fU 
                                              & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x23U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76)) 
                                      & (((0x33U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (0x23U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80)))));
            tracep->chgBit(oldp+408,(((((((0x13U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (3U != 
                                             (0x7fU 
                                              & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x23U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89)) 
                                      & (((0x33U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                          & (0x23U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92)))));
            tracep->chgBit(oldp+409,(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76));
            tracep->chgBit(oldp+410,(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80));
            tracep->chgBit(oldp+411,(((((((((0x13U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                            & (3U != 
                                               (0x7fU 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           & (0x67U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x33U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x23U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x63U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d76)) 
                                      & ((((0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                           & (0x23U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x63U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d80)))));
            tracep->chgBit(oldp+412,(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89));
            tracep->chgBit(oldp+413,(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92));
            tracep->chgBit(oldp+414,(((((((((0x13U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                            & (3U != 
                                               (0x7fU 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                           & (0x67U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x33U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         & (0x23U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                        & (0x63U != 
                                           (0x7fU & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                       | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d89)) 
                                      & ((((0x33U != 
                                            (0x7fU 
                                             & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread))) 
                                           & (0x23U 
                                              != (0x7fU 
                                                  & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                          & (0x63U 
                                             != (0x7fU 
                                                 & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_instr_rv__024port1___05Fread)))) 
                                         | (IData)(vlSelf->mkTb__DOT__cpu__DOT__NOT_IF_id_instr_rv_port1___05Fread___05F9_BIT_32_0_THE_ETC___05F_d92)))));
            tracep->chgBit(oldp+415,(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d210));
            tracep->chgBit(oldp+416,(vlSelf->mkTb__DOT__cpu__DOT__NOT_ld_fifo_i_notEmpty___05F6_7_OR_NOT_ld_fifo_fir_ETC___05F_d96));
            tracep->chgBit(oldp+417,(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_EQ_ex_q_0_4_BITS_1_ETC___05F_d234));
            tracep->chgBit(oldp+418,(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_SLT_ex_q_0_4_BITS___05FETC___05F_d238));
            tracep->chgBit(oldp+419,(vlSelf->mkTb__DOT__cpu__DOT__ex_q_0_4_BITS_151_TO_120_27_ULT_ex_q_0_4_BITS___05FETC___05F_d242));
            tracep->chgIData(oldp+420,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__data1_reg),32);
            tracep->chgBit(oldp+421,((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                                       & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))) 
                                      | (((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg)))));
            tracep->chgBit(oldp+422,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas) 
                                      & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg)))));
            tracep->chgBit(oldp+423,((1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                                              & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways))) 
                                             | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__ex_enqueueing__024whas)) 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))) 
                                            | ((~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways)) 
                                               & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__full_reg))))));
            tracep->chgBit(oldp+424,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_instr_ram_serverAdapter_stageReadResponseAlways) 
                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__empty_reg))));
            tracep->chgBit(oldp+425,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+426,(vlSelf->mkTb__DOT__cpu__DOT__id_pc__DOT__error_checks__DOT__enqerror));
            tracep->chgIData(oldp+427,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__data1_reg),32);
            tracep->chgBit(oldp+428,((((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
                                       & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))) 
                                      | (((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
                                          & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                                         & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)))));
            tracep->chgBit(oldp+429,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ) 
                                      & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg)))));
            tracep->chgBit(oldp+430,((1U & ((((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                                              & (~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ))) 
                                             | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024DEQ)) 
                                                & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))) 
                                            | ((~ (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ)) 
                                               & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__full_reg))))));
            tracep->chgBit(oldp+431,(((IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__024ENQ) 
                                      & (IData)(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__empty_reg))));
            tracep->chgBit(oldp+432,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+433,(vlSelf->mkTb__DOT__cpu__DOT__if_pc_ff__DOT__error_checks__DOT__enqerror));
            tracep->chgBit(oldp+434,(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+435,(vlSelf->mkTb__DOT__cpu__DOT__ld_fifo__DOT__error_checks__DOT__enqerror));
            tracep->chgIData(oldp+436,(vlSelf->mkTb__DOT__data_ram_memory__DOT__DOA_R2),32);
            tracep->chgIData(oldp+437,(vlSelf->mkTb__DOT__data_ram_memory__DOT__DOB_R2),32);
            tracep->chgBit(oldp+438,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__ring_empty));
            tracep->chgBit(oldp+439,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head));
            tracep->chgBit(oldp+440,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_head));
            tracep->chgBit(oldp+441,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail));
            tracep->chgBit(oldp+442,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__next_tail));
            tracep->chgIData(oldp+443,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[0]),32);
            tracep->chgIData(oldp+444,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__arr[1]),32);
            tracep->chgBit(oldp+445,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__tail)))));
            tracep->chgBit(oldp+446,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__head)))));
            tracep->chgBit(oldp+447,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+448,(vlSelf->mkTb__DOT__data_ram_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror));
            tracep->chgBit(oldp+449,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__ring_empty));
            tracep->chgBit(oldp+450,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head));
            tracep->chgBit(oldp+451,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_head));
            tracep->chgBit(oldp+452,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail));
            tracep->chgBit(oldp+453,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__next_tail));
            tracep->chgIData(oldp+454,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[0]),32);
            tracep->chgIData(oldp+455,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__arr[1]),32);
            tracep->chgBit(oldp+456,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__tail)))));
            tracep->chgBit(oldp+457,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__head)))));
            tracep->chgBit(oldp+458,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+459,(vlSelf->mkTb__DOT__data_ram_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror));
            tracep->chgIData(oldp+460,(vlSelf->mkTb__DOT__instr_ram_memory__DOT__DO_R2),32);
            tracep->chgBit(oldp+461,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__ring_empty));
            tracep->chgBit(oldp+462,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head));
            tracep->chgBit(oldp+463,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_head));
            tracep->chgBit(oldp+464,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail));
            tracep->chgBit(oldp+465,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__next_tail));
            tracep->chgIData(oldp+466,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[0]),32);
            tracep->chgIData(oldp+467,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__arr[1]),32);
            tracep->chgBit(oldp+468,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__tail)))));
            tracep->chgBit(oldp+469,((1U & ((IData)(1U) 
                                            + (IData)(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__head)))));
            tracep->chgBit(oldp+470,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__deqerror));
            tracep->chgBit(oldp+471,(vlSelf->mkTb__DOT__instr_ram_serverAdapter_outDataCore__DOT__error_checks__DOT__enqerror));
        }
        tracep->chgBit(oldp+472,(vlSelf->CLK));
        tracep->chgBit(oldp+473,(vlSelf->RST_N));
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
