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
        tracep->declBit(c+241,"CLK", false,-1);
        tracep->declBit(c+242,"RST_N", false,-1);
        tracep->declBit(c+241,"mkTb CLK", false,-1);
        tracep->declBit(c+242,"mkTb RST_N", false,-1);
        tracep->declBit(c+4,"mkTb start_wire$whas", false,-1);
        tracep->declBit(c+5,"mkTb state_overlap_pw$whas", false,-1);
        tracep->declBit(c+6,"mkTb state_set_pw$whas", false,-1);
        tracep->declBus(c+7,"mkTb jj_1_repeat_count", false,-1, 1,0);
        tracep->declBus(c+8,"mkTb jj_1_repeat_count$D_IN", false,-1, 1,0);
        tracep->declBit(c+9,"mkTb jj_1_repeat_count$EN", false,-1);
        tracep->declBus(c+10,"mkTb jj_repeat_count", false,-1, 1,0);
        tracep->declBus(c+11,"mkTb jj_repeat_count$D_IN", false,-1, 1,0);
        tracep->declBit(c+12,"mkTb jj_repeat_count$EN", false,-1);
        tracep->declBit(c+13,"mkTb running", false,-1);
        tracep->declBit(c+243,"mkTb running$D_IN", false,-1);
        tracep->declBit(c+14,"mkTb running$EN", false,-1);
        tracep->declBit(c+15,"mkTb start_reg", false,-1);
        tracep->declBit(c+16,"mkTb start_reg$D_IN", false,-1);
        tracep->declBit(c+17,"mkTb start_reg$EN", false,-1);
        tracep->declBit(c+18,"mkTb start_reg_1", false,-1);
        tracep->declBit(c+4,"mkTb start_reg_1$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb start_reg_1$EN", false,-1);
        tracep->declBit(c+19,"mkTb state_can_overlap", false,-1);
        tracep->declBit(c+20,"mkTb state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb state_can_overlap$EN", false,-1);
        tracep->declBit(c+21,"mkTb state_fired", false,-1);
        tracep->declBit(c+6,"mkTb state_fired$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb state_fired$EN", false,-1);
        tracep->declBus(c+22,"mkTb state_mkFSMstate", false,-1, 4,0);
        tracep->declBus(c+23,"mkTb state_mkFSMstate$D_IN", false,-1, 4,0);
        tracep->declBit(c+24,"mkTb state_mkFSMstate$EN", false,-1);
        tracep->declBus(c+25,"mkTb spiflash_ctrl$operate_addr", false,-1, 8,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl$operate_data", false,-1, 7,0);
        tracep->declBus(c+27,"mkTb spiflash_ctrl$read_byte", false,-1, 7,0);
        tracep->declBit(c+28,"mkTb spiflash_ctrl$EN_operate", false,-1);
        tracep->declBit(c+29,"mkTb spiflash_ctrl$EN_read_byte", false,-1);
        tracep->declBit(c+30,"mkTb spiflash_ctrl$RDY_operate", false,-1);
        tracep->declBit(c+31,"mkTb spiflash_ctrl$RDY_read_byte", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl$miso_i_i", false,-1);
        tracep->declBit(c+32,"mkTb spiflash_ctrl$operate_wr", false,-1);
        tracep->declBit(c+33,"mkTb WILL_FIRE_RL_action_l21c22", false,-1);
        tracep->declBit(c+34,"mkTb WILL_FIRE_RL_action_l22c22", false,-1);
        tracep->declBit(c+35,"mkTb WILL_FIRE_RL_action_l24c22", false,-1);
        tracep->declBit(c+36,"mkTb WILL_FIRE_RL_action_l25c22", false,-1);
        tracep->declBit(c+37,"mkTb WILL_FIRE_RL_action_l26c22", false,-1);
        tracep->declBit(c+38,"mkTb WILL_FIRE_RL_action_l28c22", false,-1);
        tracep->declBit(c+39,"mkTb WILL_FIRE_RL_action_l30c22", false,-1);
        tracep->declBit(c+40,"mkTb WILL_FIRE_RL_action_l31c22", false,-1);
        tracep->declBit(c+41,"mkTb WILL_FIRE_RL_action_l32c32", false,-1);
        tracep->declBit(c+42,"mkTb WILL_FIRE_RL_action_l34c22", false,-1);
        tracep->declBit(c+43,"mkTb WILL_FIRE_RL_action_l36c22", false,-1);
        tracep->declBit(c+44,"mkTb WILL_FIRE_RL_action_l37c22", false,-1);
        tracep->declBit(c+45,"mkTb WILL_FIRE_RL_action_l38c32", false,-1);
        tracep->declBit(c+46,"mkTb WILL_FIRE_RL_action_ovlp_r_update_l32c9", false,-1);
        tracep->declBit(c+47,"mkTb WILL_FIRE_RL_action_ovlp_r_update_l38c9", false,-1);
        tracep->declBit(c+48,"mkTb WILL_FIRE_RL_action_r_init_l32c9", false,-1);
        tracep->declBit(c+49,"mkTb WILL_FIRE_RL_action_r_init_l38c9", false,-1);
        tracep->declBit(c+50,"mkTb WILL_FIRE_RL_fsm_start", false,-1);
        tracep->declBit(c+51,"mkTb WILL_FIRE_RL_idle_l20c16", false,-1);
        tracep->declBus(c+52,"mkTb MUX_jj_1_repeat_count$write_1__VAL_1", false,-1, 1,0);
        tracep->declBus(c+53,"mkTb MUX_jj_repeat_count$write_1__VAL_1", false,-1, 1,0);
        tracep->declBit(c+54,"mkTb MUX_spiflash_ctrl$operate_1__SEL_1", false,-1);
        tracep->declBit(c+55,"mkTb MUX_spiflash_ctrl$operate_1__SEL_2", false,-1);
        tracep->declBit(c+14,"mkTb MUX_start_reg$write_1__SEL_2", false,-1);
        tracep->declBus(c+56,"mkTb x__h53196", false,-1, 1,0);
        tracep->declBus(c+57,"mkTb x__h53386", false,-1, 1,0);
        tracep->declBit(c+58,"mkTb NOT_jj_1_repeat_count_read__8_BIT_0_9_6_AND_NO_ETC___d106", false,-1);
        tracep->declBit(c+59,"mkTb NOT_jj_repeat_count_read__7_BIT_0_8_9_AND_NOT__ETC___d83", false,-1);
        tracep->declBit(c+60,"mkTb abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d123", false,-1);
        tracep->declBit(c+61,"mkTb abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d130", false,-1);
        tracep->declBit(c+62,"mkTb jj_1_repeat_count_read__8_BIT_0_9_AND_NOT_abor_ETC___d103", false,-1);
        tracep->declBit(c+63,"mkTb jj_repeat_count_read__7_BIT_0_8_AND_NOT_abort__ETC___d78", false,-1);
        tracep->declBit(c+241,"mkTb spiflash_ctrl CLK", false,-1);
        tracep->declBit(c+242,"mkTb spiflash_ctrl RST_N", false,-1);
        tracep->declBit(c+32,"mkTb spiflash_ctrl operate_wr", false,-1);
        tracep->declBus(c+25,"mkTb spiflash_ctrl operate_addr", false,-1, 8,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl operate_data", false,-1, 7,0);
        tracep->declBit(c+28,"mkTb spiflash_ctrl EN_operate", false,-1);
        tracep->declBit(c+30,"mkTb spiflash_ctrl RDY_operate", false,-1);
        tracep->declBit(c+29,"mkTb spiflash_ctrl EN_read_byte", false,-1);
        tracep->declBus(c+27,"mkTb spiflash_ctrl read_byte", false,-1, 7,0);
        tracep->declBit(c+31,"mkTb spiflash_ctrl RDY_read_byte", false,-1);
        tracep->declBit(c+64,"mkTb spiflash_ctrl ss_o", false,-1);
        tracep->declBit(c+65,"mkTb spiflash_ctrl sck_o", false,-1);
        tracep->declBit(c+66,"mkTb spiflash_ctrl mosi_o", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl miso_i_i", false,-1);
        tracep->declBus(c+67,"mkTb spiflash_ctrl page_buffer_serverAdapterA_s1_1$wget", false,-1, 1,0);
        tracep->declBus(c+68,"mkTb spiflash_ctrl page_buffer_serverAdapterA_writeWithResp$wget", false,-1, 1,0);
        tracep->declBus(c+69,"mkTb spiflash_ctrl page_buffer_serverAdapterB_s1_1$wget", false,-1, 1,0);
        tracep->declBus(c+70,"mkTb spiflash_ctrl page_buffer_serverAdapterB_writeWithResp$wget", false,-1, 1,0);
        tracep->declBit(c+71,"mkTb spiflash_ctrl page_buffer_serverAdapterA_cnt_1$whas", false,-1);
        tracep->declBit(c+72,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outData_enqData$whas", false,-1);
        tracep->declBit(c+73,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outData_outData$whas", false,-1);
        tracep->declBit(c+74,"mkTb spiflash_ctrl page_buffer_serverAdapterA_writeWithResp$whas", false,-1);
        tracep->declBit(c+75,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt_1$whas", false,-1);
        tracep->declBit(c+76,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outData_enqData$whas", false,-1);
        tracep->declBit(c+77,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outData_outData$whas", false,-1);
        tracep->declBit(c+78,"mkTb spiflash_ctrl page_buffer_serverAdapterB_writeWithResp$whas", false,-1);
        tracep->declBit(c+79,"mkTb spiflash_ctrl spiFlashFsm_start_wire$whas", false,-1);
        tracep->declBit(c+80,"mkTb spiflash_ctrl spiFlashFsm_state_set_pw$whas", false,-1);
        tracep->declBit(c+81,"mkTb spiflash_ctrl busybit", false,-1);
        tracep->declBit(c+82,"mkTb spiflash_ctrl busybit$D_IN", false,-1);
        tracep->declBit(c+83,"mkTb spiflash_ctrl busybit$EN", false,-1);
        tracep->declBus(c+84,"mkTb spiflash_ctrl cnt", false,-1, 31,0);
        tracep->declBus(c+85,"mkTb spiflash_ctrl cnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+86,"mkTb spiflash_ctrl cnt$EN", false,-1);
        tracep->declBus(c+87,"mkTb spiflash_ctrl command", false,-1, 7,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl command$D_IN", false,-1, 7,0);
        tracep->declBit(c+88,"mkTb spiflash_ctrl command$EN", false,-1);
        tracep->declBus(c+89,"mkTb spiflash_ctrl page_addr_h", false,-1, 7,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl page_addr_h$D_IN", false,-1, 7,0);
        tracep->declBit(c+90,"mkTb spiflash_ctrl page_addr_h$EN", false,-1);
        tracep->declBus(c+91,"mkTb spiflash_ctrl page_addr_l", false,-1, 7,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl page_addr_l$D_IN", false,-1, 7,0);
        tracep->declBit(c+92,"mkTb spiflash_ctrl page_addr_l$EN", false,-1);
        tracep->declBus(c+93,"mkTb spiflash_ctrl page_buffer_serverAdapterA_cnt", false,-1, 2,0);
        tracep->declBus(c+94,"mkTb spiflash_ctrl page_buffer_serverAdapterA_cnt$D_IN", false,-1, 2,0);
        tracep->declBit(c+95,"mkTb spiflash_ctrl page_buffer_serverAdapterA_cnt$EN", false,-1);
        tracep->declBus(c+96,"mkTb spiflash_ctrl page_buffer_serverAdapterA_s1", false,-1, 1,0);
        tracep->declBus(c+97,"mkTb spiflash_ctrl page_buffer_serverAdapterA_s1$D_IN", false,-1, 1,0);
        tracep->declBit(c+243,"mkTb spiflash_ctrl page_buffer_serverAdapterA_s1$EN", false,-1);
        tracep->declBus(c+98,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt", false,-1, 2,0);
        tracep->declBus(c+99,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt$D_IN", false,-1, 2,0);
        tracep->declBit(c+100,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt$EN", false,-1);
        tracep->declBus(c+101,"mkTb spiflash_ctrl page_buffer_serverAdapterB_s1", false,-1, 1,0);
        tracep->declBus(c+102,"mkTb spiflash_ctrl page_buffer_serverAdapterB_s1$D_IN", false,-1, 1,0);
        tracep->declBit(c+243,"mkTb spiflash_ctrl page_buffer_serverAdapterB_s1$EN", false,-1);
        tracep->declBus(c+103,"mkTb spiflash_ctrl spiFlashFsm_jj_1_delay_count", false,-1, 6,0);
        tracep->declBus(c+104,"mkTb spiflash_ctrl spiFlashFsm_jj_1_delay_count$D_IN", false,-1, 6,0);
        tracep->declBit(c+105,"mkTb spiflash_ctrl spiFlashFsm_jj_1_delay_count$EN", false,-1);
        tracep->declBus(c+106,"mkTb spiflash_ctrl spiFlashFsm_jj_2_delay_count", false,-1, 6,0);
        tracep->declBus(c+107,"mkTb spiflash_ctrl spiFlashFsm_jj_2_delay_count$D_IN", false,-1, 6,0);
        tracep->declBit(c+108,"mkTb spiflash_ctrl spiFlashFsm_jj_2_delay_count$EN", false,-1);
        tracep->declBus(c+109,"mkTb spiflash_ctrl spiFlashFsm_jj_delay_count", false,-1, 6,0);
        tracep->declBus(c+110,"mkTb spiflash_ctrl spiFlashFsm_jj_delay_count$D_IN", false,-1, 6,0);
        tracep->declBit(c+111,"mkTb spiflash_ctrl spiFlashFsm_jj_delay_count$EN", false,-1);
        tracep->declBit(c+112,"mkTb spiflash_ctrl spiFlashFsm_start_reg", false,-1);
        tracep->declBit(c+88,"mkTb spiflash_ctrl spiFlashFsm_start_reg$D_IN", false,-1);
        tracep->declBit(c+113,"mkTb spiflash_ctrl spiFlashFsm_start_reg$EN", false,-1);
        tracep->declBit(c+114,"mkTb spiflash_ctrl spiFlashFsm_start_reg_1", false,-1);
        tracep->declBit(c+79,"mkTb spiflash_ctrl spiFlashFsm_start_reg_1$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spiFlashFsm_start_reg_1$EN", false,-1);
        tracep->declBit(c+115,"mkTb spiflash_ctrl spiFlashFsm_state_can_overlap", false,-1);
        tracep->declBit(c+116,"mkTb spiflash_ctrl spiFlashFsm_state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spiFlashFsm_state_can_overlap$EN", false,-1);
        tracep->declBit(c+117,"mkTb spiflash_ctrl spiFlashFsm_state_fired", false,-1);
        tracep->declBit(c+80,"mkTb spiflash_ctrl spiFlashFsm_state_fired$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spiFlashFsm_state_fired$EN", false,-1);
        tracep->declBus(c+118,"mkTb spiflash_ctrl spiFlashFsm_state_mkFSMstate", false,-1, 5,0);
        tracep->declBus(c+119,"mkTb spiflash_ctrl spiFlashFsm_state_mkFSMstate$D_IN", false,-1, 5,0);
        tracep->declBit(c+120,"mkTb spiflash_ctrl spiFlashFsm_state_mkFSMstate$EN", false,-1);
        tracep->declBit(c+64,"mkTb spiflash_ctrl ss", false,-1);
        tracep->declBit(c+121,"mkTb spiflash_ctrl ss$D_IN", false,-1);
        tracep->declBit(c+122,"mkTb spiflash_ctrl ss$EN", false,-1);
        tracep->declBus(c+123,"mkTb spiflash_ctrl page_buffer_memory$ADDRA", false,-1, 7,0);
        tracep->declBus(c+124,"mkTb spiflash_ctrl page_buffer_memory$ADDRB", false,-1, 7,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl page_buffer_memory$DIA", false,-1, 7,0);
        tracep->declBus(c+125,"mkTb spiflash_ctrl page_buffer_memory$DIB", false,-1, 7,0);
        tracep->declBus(c+126,"mkTb spiflash_ctrl page_buffer_memory$DOA", false,-1, 7,0);
        tracep->declBus(c+127,"mkTb spiflash_ctrl page_buffer_memory$DOB", false,-1, 7,0);
        tracep->declBit(c+74,"mkTb spiflash_ctrl page_buffer_memory$ENA", false,-1);
        tracep->declBit(c+78,"mkTb spiflash_ctrl page_buffer_memory$ENB", false,-1);
        tracep->declBit(c+32,"mkTb spiflash_ctrl page_buffer_memory$WEA", false,-1);
        tracep->declBit(c+128,"mkTb spiflash_ctrl page_buffer_memory$WEB", false,-1);
        tracep->declBus(c+126,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$D_IN", false,-1, 7,0);
        tracep->declBus(c+129,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$D_OUT", false,-1, 7,0);
        tracep->declBit(c+244,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$CLR", false,-1);
        tracep->declBit(c+130,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$DEQ", false,-1);
        tracep->declBit(c+131,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$EMPTY_N", false,-1);
        tracep->declBit(c+132,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$ENQ", false,-1);
        tracep->declBit(c+133,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore$FULL_N", false,-1);
        tracep->declBus(c+127,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$D_IN", false,-1, 7,0);
        tracep->declBus(c+134,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$D_OUT", false,-1, 7,0);
        tracep->declBit(c+244,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$CLR", false,-1);
        tracep->declBit(c+135,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$DEQ", false,-1);
        tracep->declBit(c+136,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$EMPTY_N", false,-1);
        tracep->declBit(c+137,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$ENQ", false,-1);
        tracep->declBit(c+138,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore$FULL_N", false,-1);
        tracep->declBus(c+139,"mkTb spiflash_ctrl spi_ctrl$write_data", false,-1, 7,0);
        tracep->declBus(c+140,"mkTb spiflash_ctrl spi_ctrl$read", false,-1, 7,0);
        tracep->declBit(c+141,"mkTb spiflash_ctrl spi_ctrl$EN_write", false,-1);
        tracep->declBit(c+142,"mkTb spiflash_ctrl spi_ctrl$RDY_read", false,-1);
        tracep->declBit(c+143,"mkTb spiflash_ctrl spi_ctrl$RDY_write", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl spi_ctrl$miso_i_i", false,-1);
        tracep->declBit(c+66,"mkTb spiflash_ctrl spi_ctrl$mosi_o", false,-1);
        tracep->declBit(c+65,"mkTb spiflash_ctrl spi_ctrl$sck_o", false,-1);
        tracep->declBit(c+144,"mkTb spiflash_ctrl WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq", false,-1);
        tracep->declBit(c+145,"mkTb spiflash_ctrl WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq", false,-1);
        tracep->declBit(c+146,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_d_init_np", false,-1);
        tracep->declBit(c+147,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1", false,-1);
        tracep->declBit(c+148,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17", false,-1);
        tracep->declBit(c+149,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17", false,-1);
        tracep->declBit(c+150,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l47c21", false,-1);
        tracep->declBit(c+151,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l50c20", false,-1);
        tracep->declBit(c+152,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l51c25", false,-1);
        tracep->declBit(c+153,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l52c25", false,-1);
        tracep->declBit(c+154,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l53c25", false,-1);
        tracep->declBit(c+155,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l60c20", false,-1);
        tracep->declBit(c+156,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l61c25", false,-1);
        tracep->declBit(c+157,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l67c16", false,-1);
        tracep->declBit(c+158,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l68c21", false,-1);
        tracep->declBit(c+159,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l69c21", false,-1);
        tracep->declBit(c+160,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l70c21", false,-1);
        tracep->declBit(c+161,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l71c21", false,-1);
        tracep->declBit(c+162,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l73c30", false,-1);
        tracep->declBit(c+163,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l76c32", false,-1);
        tracep->declBit(c+164,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l77c21", false,-1);
        tracep->declBit(c+165,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l85c29", false,-1);
        tracep->declBit(c+166,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l86c32", false,-1);
        tracep->declBit(c+167,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_l88c16", false,-1);
        tracep->declBit(c+168,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_np", false,-1);
        tracep->declBit(c+169,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_np_1", false,-1);
        tracep->declBit(c+170,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_action_np_2", false,-1);
        tracep->declBit(c+171,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_fsm_start", false,-1);
        tracep->declBit(c+172,"mkTb spiflash_ctrl WILL_FIRE_RL_spiFlashFsm_idle_l45c9", false,-1);
        tracep->declBus(c+173,"mkTb spiflash_ctrl MUX_cnt$write_1__VAL_1", false,-1, 31,0);
        tracep->declBus(c+174,"mkTb spiflash_ctrl MUX_spi_ctrl$write_1__VAL_3", false,-1, 7,0);
        tracep->declBus(c+175,"mkTb spiflash_ctrl MUX_spiFlashFsm_jj_1_delay_count$write_1__VAL_1", false,-1, 6,0);
        tracep->declBus(c+176,"mkTb spiflash_ctrl MUX_spiFlashFsm_jj_2_delay_count$write_1__VAL_1", false,-1, 6,0);
        tracep->declBus(c+177,"mkTb spiflash_ctrl MUX_spiFlashFsm_jj_delay_count$write_1__VAL_1", false,-1, 6,0);
        tracep->declBit(c+178,"mkTb spiflash_ctrl MUX_cnt$write_1__SEL_1", false,-1);
        tracep->declBit(c+88,"mkTb spiflash_ctrl MUX_spiFlashFsm_start_reg$write_1__SEL_1", false,-1);
        tracep->declBit(c+179,"mkTb spiflash_ctrl MUX_spi_ctrl$write_1__SEL_5", false,-1);
        tracep->declBit(c+180,"mkTb spiflash_ctrl MUX_ss$write_1__SEL_1", false,-1);
        tracep->declBus(c+94,"mkTb spiflash_ctrl page_buffer_serverAdapterA_cnt_7_PLUS_IF_page__ETC___d33", false,-1, 2,0);
        tracep->declBus(c+99,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt_0_PLUS_IF_page__ETC___d86", false,-1, 2,0);
        tracep->declBit(c+181,"mkTb spiflash_ctrl NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___d205", false,-1);
        tracep->declBit(c+182,"mkTb spiflash_ctrl cnt_36_SLT_256___d237", false,-1);
        tracep->declBit(c+183,"mkTb spiflash_ctrl page_buffer_serverAdapterB_cnt_0_SLT_3___d235", false,-1);
        tracep->declBit(c+184,"mkTb spiflash_ctrl spiFlashFsm_abort_whas__09_AND_spiFlashFsm_abo_ETC___d291", false,-1);
        tracep->declBus(c+245,"mkTb spiflash_ctrl page_buffer_memory PIPELINED", false,-1, 0,0);
        tracep->declBus(c+246,"mkTb spiflash_ctrl page_buffer_memory ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+246,"mkTb spiflash_ctrl page_buffer_memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+247,"mkTb spiflash_ctrl page_buffer_memory MEMSIZE", false,-1, 8,0);
        tracep->declBit(c+241,"mkTb spiflash_ctrl page_buffer_memory CLKA", false,-1);
        tracep->declBit(c+74,"mkTb spiflash_ctrl page_buffer_memory ENA", false,-1);
        tracep->declBit(c+32,"mkTb spiflash_ctrl page_buffer_memory WEA", false,-1);
        tracep->declBus(c+123,"mkTb spiflash_ctrl page_buffer_memory ADDRA", false,-1, 7,0);
        tracep->declBus(c+26,"mkTb spiflash_ctrl page_buffer_memory DIA", false,-1, 7,0);
        tracep->declBus(c+126,"mkTb spiflash_ctrl page_buffer_memory DOA", false,-1, 7,0);
        tracep->declBit(c+241,"mkTb spiflash_ctrl page_buffer_memory CLKB", false,-1);
        tracep->declBit(c+78,"mkTb spiflash_ctrl page_buffer_memory ENB", false,-1);
        tracep->declBit(c+128,"mkTb spiflash_ctrl page_buffer_memory WEB", false,-1);
        tracep->declBus(c+124,"mkTb spiflash_ctrl page_buffer_memory ADDRB", false,-1, 7,0);
        tracep->declBus(c+125,"mkTb spiflash_ctrl page_buffer_memory DIB", false,-1, 7,0);
        tracep->declBus(c+127,"mkTb spiflash_ctrl page_buffer_memory DOB", false,-1, 7,0);
        tracep->declBus(c+126,"mkTb spiflash_ctrl page_buffer_memory DOA_R", false,-1, 7,0);
        tracep->declBus(c+127,"mkTb spiflash_ctrl page_buffer_memory DOB_R", false,-1, 7,0);
        tracep->declBus(c+185,"mkTb spiflash_ctrl page_buffer_memory DOA_R2", false,-1, 7,0);
        tracep->declBus(c+186,"mkTb spiflash_ctrl page_buffer_memory DOB_R2", false,-1, 7,0);
        tracep->declBus(c+1,"mkTb spiflash_ctrl page_buffer_memory i", false,-1, 31,0);
        tracep->declBus(c+246,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore p1width", false,-1, 31,0);
        tracep->declBus(c+248,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore p2depth", false,-1, 31,0);
        tracep->declBus(c+249,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore p3cntr_width", false,-1, 31,0);
        tracep->declBus(c+250,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore guarded", false,-1, 0,0);
        tracep->declBus(c+249,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore p2depth2", false,-1, 31,0);
        tracep->declBit(c+241,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore CLK", false,-1);
        tracep->declBit(c+242,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore RST", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore CLR", false,-1);
        tracep->declBus(c+126,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore D_IN", false,-1, 7,0);
        tracep->declBit(c+132,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore ENQ", false,-1);
        tracep->declBit(c+130,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore DEQ", false,-1);
        tracep->declBit(c+133,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore FULL_N", false,-1);
        tracep->declBit(c+131,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore EMPTY_N", false,-1);
        tracep->declBus(c+129,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore D_OUT", false,-1, 7,0);
        tracep->declBit(c+133,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore not_ring_full", false,-1);
        tracep->declBit(c+187,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore ring_empty", false,-1);
        tracep->declBus(c+188,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore head", false,-1, 0,0);
        tracep->declBus(c+189,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore next_head", false,-1, 0,0);
        tracep->declBus(c+190,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore tail", false,-1, 0,0);
        tracep->declBus(c+191,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore next_tail", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+192+i*1,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore arr", true,(i+0), 7,0);}}
        tracep->declBit(c+131,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore hasodata", false,-1);
        tracep->declBus(c+243,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore depthLess2", false,-1, 0,0);
        tracep->declBus(c+194,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore incr_tail", false,-1, 0,0);
        tracep->declBus(c+195,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore incr_head", false,-1, 0,0);
        tracep->declBus(c+2,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore initial_block i", false,-1, 31,0);
        tracep->declBit(c+196,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore error_checks deqerror", false,-1);
        tracep->declBit(c+197,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore error_checks enqerror", false,-1);
        tracep->declBus(c+251,"mkTb spiflash_ctrl page_buffer_serverAdapterA_outDataCore parameter_assertions ok", false,-1, 31,0);
        tracep->declBus(c+246,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore p1width", false,-1, 31,0);
        tracep->declBus(c+248,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore p2depth", false,-1, 31,0);
        tracep->declBus(c+249,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore p3cntr_width", false,-1, 31,0);
        tracep->declBus(c+250,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore guarded", false,-1, 0,0);
        tracep->declBus(c+249,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore p2depth2", false,-1, 31,0);
        tracep->declBit(c+241,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore CLK", false,-1);
        tracep->declBit(c+242,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore RST", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore CLR", false,-1);
        tracep->declBus(c+127,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore D_IN", false,-1, 7,0);
        tracep->declBit(c+137,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore ENQ", false,-1);
        tracep->declBit(c+135,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore DEQ", false,-1);
        tracep->declBit(c+138,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore FULL_N", false,-1);
        tracep->declBit(c+136,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore EMPTY_N", false,-1);
        tracep->declBus(c+134,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore D_OUT", false,-1, 7,0);
        tracep->declBit(c+138,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore not_ring_full", false,-1);
        tracep->declBit(c+198,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore ring_empty", false,-1);
        tracep->declBus(c+199,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore head", false,-1, 0,0);
        tracep->declBus(c+200,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore next_head", false,-1, 0,0);
        tracep->declBus(c+201,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore tail", false,-1, 0,0);
        tracep->declBus(c+202,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore next_tail", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+203+i*1,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore arr", true,(i+0), 7,0);}}
        tracep->declBit(c+136,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore hasodata", false,-1);
        tracep->declBus(c+243,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore depthLess2", false,-1, 0,0);
        tracep->declBus(c+205,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore incr_tail", false,-1, 0,0);
        tracep->declBus(c+206,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore incr_head", false,-1, 0,0);
        tracep->declBus(c+3,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore initial_block i", false,-1, 31,0);
        tracep->declBit(c+207,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore error_checks deqerror", false,-1);
        tracep->declBit(c+208,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore error_checks enqerror", false,-1);
        tracep->declBus(c+251,"mkTb spiflash_ctrl page_buffer_serverAdapterB_outDataCore parameter_assertions ok", false,-1, 31,0);
        tracep->declBit(c+241,"mkTb spiflash_ctrl spi_ctrl CLK", false,-1);
        tracep->declBit(c+242,"mkTb spiflash_ctrl spi_ctrl RST_N", false,-1);
        tracep->declBus(c+139,"mkTb spiflash_ctrl spi_ctrl write_data", false,-1, 7,0);
        tracep->declBit(c+141,"mkTb spiflash_ctrl spi_ctrl EN_write", false,-1);
        tracep->declBit(c+143,"mkTb spiflash_ctrl spi_ctrl RDY_write", false,-1);
        tracep->declBus(c+140,"mkTb spiflash_ctrl spi_ctrl read", false,-1, 7,0);
        tracep->declBit(c+142,"mkTb spiflash_ctrl spi_ctrl RDY_read", false,-1);
        tracep->declBit(c+65,"mkTb spiflash_ctrl spi_ctrl sck_o", false,-1);
        tracep->declBit(c+66,"mkTb spiflash_ctrl spi_ctrl mosi_o", false,-1);
        tracep->declBit(c+244,"mkTb spiflash_ctrl spi_ctrl miso_i_i", false,-1);
        tracep->declBit(c+209,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_wire$whas", false,-1);
        tracep->declBit(c+210,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_set_pw$whas", false,-1);
        tracep->declBus(c+211,"mkTb spiflash_ctrl spi_ctrl cnt", false,-1, 31,0);
        tracep->declBus(c+212,"mkTb spiflash_ctrl spi_ctrl cnt$D_IN", false,-1, 31,0);
        tracep->declBit(c+213,"mkTb spiflash_ctrl spi_ctrl cnt$EN", false,-1);
        tracep->declBit(c+66,"mkTb spiflash_ctrl spi_ctrl mosi", false,-1);
        tracep->declBit(c+214,"mkTb spiflash_ctrl spi_ctrl mosi$D_IN", false,-1);
        tracep->declBit(c+215,"mkTb spiflash_ctrl spi_ctrl mosi$EN", false,-1);
        tracep->declBus(c+140,"mkTb spiflash_ctrl spi_ctrl rdata", false,-1, 7,0);
        tracep->declBus(c+216,"mkTb spiflash_ctrl spi_ctrl rdata$D_IN", false,-1, 7,0);
        tracep->declBit(c+217,"mkTb spiflash_ctrl spi_ctrl rdata$EN", false,-1);
        tracep->declBit(c+65,"mkTb spiflash_ctrl spi_ctrl sck", false,-1);
        tracep->declBit(c+218,"mkTb spiflash_ctrl spi_ctrl sck$D_IN", false,-1);
        tracep->declBit(c+219,"mkTb spiflash_ctrl spi_ctrl sck$EN", false,-1);
        tracep->declBit(c+220,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg", false,-1);
        tracep->declBit(c+221,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg$D_IN", false,-1);
        tracep->declBit(c+222,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg$EN", false,-1);
        tracep->declBit(c+223,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg_1", false,-1);
        tracep->declBit(c+209,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg_1$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spi_ctrl spiFsm_start_reg_1$EN", false,-1);
        tracep->declBit(c+224,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_can_overlap", false,-1);
        tracep->declBit(c+225,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_can_overlap$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_can_overlap$EN", false,-1);
        tracep->declBit(c+226,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_fired", false,-1);
        tracep->declBit(c+210,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_fired$D_IN", false,-1);
        tracep->declBit(c+243,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_fired$EN", false,-1);
        tracep->declBus(c+227,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_mkFSMstate", false,-1, 2,0);
        tracep->declBus(c+228,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_mkFSMstate$D_IN", false,-1, 2,0);
        tracep->declBit(c+229,"mkTb spiflash_ctrl spi_ctrl spiFsm_state_mkFSMstate$EN", false,-1);
        tracep->declBus(c+230,"mkTb spiflash_ctrl spi_ctrl wdata", false,-1, 7,0);
        tracep->declBus(c+139,"mkTb spiflash_ctrl spi_ctrl wdata$D_IN", false,-1, 7,0);
        tracep->declBit(c+141,"mkTb spiflash_ctrl spi_ctrl wdata$EN", false,-1);
        tracep->declBit(c+231,"mkTb spiflash_ctrl spi_ctrl WILL_FIRE_RL_spiFsm_action_l31c13", false,-1);
        tracep->declBit(c+232,"mkTb spiflash_ctrl spi_ctrl WILL_FIRE_RL_spiFsm_action_l41c10", false,-1);
        tracep->declBit(c+233,"mkTb spiflash_ctrl spi_ctrl WILL_FIRE_RL_spiFsm_fsm_start", false,-1);
        tracep->declBit(c+234,"mkTb spiflash_ctrl spi_ctrl WILL_FIRE_RL_spiFsm_idle_l29c7", false,-1);
        tracep->declBus(c+235,"mkTb spiflash_ctrl spi_ctrl MUX_cnt$write_1__VAL_1", false,-1, 31,0);
        tracep->declBit(c+236,"mkTb spiflash_ctrl spi_ctrl MUX_mosi$write_1__VAL_1", false,-1);
        tracep->declBit(c+237,"mkTb spiflash_ctrl spi_ctrl MUX_sck$write_1__SEL_1", false,-1);
        tracep->declBus(c+238,"mkTb spiflash_ctrl spi_ctrl x__h14338", false,-1, 7,0);
        tracep->declBus(c+239,"mkTb spiflash_ctrl spi_ctrl y__h14389", false,-1, 7,0);
        tracep->declBit(c+240,"mkTb spiflash_ctrl spi_ctrl NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___d88", false,-1);
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
        tracep->fullIData(oldp+1,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__i),32);
        tracep->fullIData(oldp+2,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__initial_block__DOT__i),32);
        tracep->fullIData(oldp+3,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__initial_block__DOT__i),32);
        tracep->fullBit(oldp+4,(vlSelf->mkTb__DOT__start_wire__024whas));
        tracep->fullBit(oldp+5,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))));
        tracep->fullBit(oldp+6,(vlSelf->mkTb__DOT__state_set_pw__024whas));
        tracep->fullCData(oldp+7,(vlSelf->mkTb__DOT__jj_1_repeat_count),2);
        tracep->fullCData(oldp+8,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9)
                                    ? ((2U & (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count))
                                        ? 1U : (2U 
                                                & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                   << 1U)))
                                    : 1U)),2);
        tracep->fullBit(oldp+9,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                 | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9))));
        tracep->fullCData(oldp+10,(vlSelf->mkTb__DOT__jj_repeat_count),2);
        tracep->fullCData(oldp+11,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9)
                                     ? ((2U & (IData)(vlSelf->mkTb__DOT__jj_repeat_count))
                                         ? 1U : (2U 
                                                 & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                                    << 1U)))
                                     : 1U)),2);
        tracep->fullBit(oldp+12,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9))));
        tracep->fullBit(oldp+13,(vlSelf->mkTb__DOT__running));
        tracep->fullBit(oldp+14,(((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
                                  & (~ (IData)(vlSelf->mkTb__DOT__running)))));
        tracep->fullBit(oldp+15,(vlSelf->mkTb__DOT__start_reg));
        tracep->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start)))));
        tracep->fullBit(oldp+17,(((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start) 
                                  | ((IData)(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130) 
                                     & (~ (IData)(vlSelf->mkTb__DOT__running))))));
        tracep->fullBit(oldp+18,(vlSelf->mkTb__DOT__start_reg_1));
        tracep->fullBit(oldp+19,(vlSelf->mkTb__DOT__state_can_overlap));
        tracep->fullBit(oldp+20,(((IData)(vlSelf->mkTb__DOT__state_set_pw__024whas) 
                                  | ((~ ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9))) 
                                     & (IData)(vlSelf->mkTb__DOT__state_can_overlap)))));
        tracep->fullBit(oldp+21,(vlSelf->mkTb__DOT__state_fired));
        tracep->fullCData(oldp+22,(vlSelf->mkTb__DOT__state_mkFSMstate),5);
        tracep->fullCData(oldp+23,((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22))
                                     ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16)
                                         ? 0U : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)
                                                       ? 6U
                                                       : 7U)))))))
                                     : (((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))
                                         ? ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)
                                             ? 8U : 
                                            ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)
                                              ? 9U : 
                                             ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)
                                               ? 0xbU
                                               : ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)
                                                   ? 0xdU
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)
                                                    ? 0xeU
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)
                                                     ? 0xfU
                                                     : 
                                                    ((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)
                                                      ? 0x10U
                                                      : 0x12U)))))))
                                         : 0xaU))),5);
        tracep->fullBit(oldp+24,(((((((((((((((((IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16) 
                                                | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22)) 
                                               | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22)) 
                                              | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22)) 
                                             | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22)) 
                                            | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22)) 
                                           | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22)) 
                                          | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22)) 
                                         | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22)) 
                                        | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9)) 
                                       | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32)) 
                                      | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22)) 
                                     | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22)) 
                                    | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22)) 
                                   | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9)) 
                                  | (IData)(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32))));
        tracep->fullSData(oldp+25,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr),9);
        tracep->fullCData(oldp+26,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_data),8);
        tracep->fullCData(oldp+27,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata)
                                     ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT)
                                     : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R))),8);
        tracep->fullBit(oldp+28,(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate));
        tracep->fullBit(oldp+29,(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte));
        tracep->fullBit(oldp+30,(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_operate));
        tracep->fullBit(oldp+31,(vlSelf->mkTb__DOT__spiflash_ctrl__024RDY_read_byte));
        tracep->fullBit(oldp+32,(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr));
        tracep->fullBit(oldp+33,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l21c22));
        tracep->fullBit(oldp+34,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l22c22));
        tracep->fullBit(oldp+35,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l24c22));
        tracep->fullBit(oldp+36,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l25c22));
        tracep->fullBit(oldp+37,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l26c22));
        tracep->fullBit(oldp+38,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l28c22));
        tracep->fullBit(oldp+39,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l30c22));
        tracep->fullBit(oldp+40,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l31c22));
        tracep->fullBit(oldp+41,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l32c32));
        tracep->fullBit(oldp+42,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l34c22));
        tracep->fullBit(oldp+43,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l36c22));
        tracep->fullBit(oldp+44,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l37c22));
        tracep->fullBit(oldp+45,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_l38c32));
        tracep->fullBit(oldp+46,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l32c9));
        tracep->fullBit(oldp+47,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_ovlp_r_update_l38c9));
        tracep->fullBit(oldp+48,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l32c9));
        tracep->fullBit(oldp+49,(vlSelf->mkTb__DOT__WILL_FIRE_RL_action_r_init_l38c9));
        tracep->fullBit(oldp+50,(vlSelf->mkTb__DOT__WILL_FIRE_RL_fsm_start));
        tracep->fullBit(oldp+51,(vlSelf->mkTb__DOT__WILL_FIRE_RL_idle_l20c16));
        tracep->fullCData(oldp+52,(((2U & (IData)(vlSelf->mkTb__DOT__jj_1_repeat_count))
                                     ? 1U : (2U & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                                   << 1U)))),2);
        tracep->fullCData(oldp+53,(((2U & (IData)(vlSelf->mkTb__DOT__jj_repeat_count))
                                     ? 1U : (2U & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                                   << 1U)))),2);
        tracep->fullBit(oldp+54,(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_1));
        tracep->fullBit(oldp+55,(vlSelf->mkTb__DOT__MUX_spiflash_ctrl__024operate_1___05FSEL_2));
        tracep->fullCData(oldp+56,((2U & ((IData)(vlSelf->mkTb__DOT__jj_repeat_count) 
                                          << 1U))),2);
        tracep->fullCData(oldp+57,((2U & ((IData)(vlSelf->mkTb__DOT__jj_1_repeat_count) 
                                          << 1U))),2);
        tracep->fullBit(oldp+58,(vlSelf->mkTb__DOT__NOT_jj_1_repeat_count_read___05F8_BIT_0_9_6_AND_NO_ETC___05F_d106));
        tracep->fullBit(oldp+59,(vlSelf->mkTb__DOT__NOT_jj_repeat_count_read___05F7_BIT_0_8_9_AND_NOT___05FETC___05F_d83));
        tracep->fullBit(oldp+60,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d123));
        tracep->fullBit(oldp+61,(vlSelf->mkTb__DOT__abort_whas_AND_abort_wget_OR_state_mkFSMstate___05FETC___05F_d130));
        tracep->fullBit(oldp+62,(vlSelf->mkTb__DOT__jj_1_repeat_count_read___05F8_BIT_0_9_AND_NOT_abor_ETC___05F_d103));
        tracep->fullBit(oldp+63,(vlSelf->mkTb__DOT__jj_repeat_count_read___05F7_BIT_0_8_AND_NOT_abort___05FETC___05F_d78));
        tracep->fullBit(oldp+64,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__ss));
        tracep->fullBit(oldp+65,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__sck));
        tracep->fullBit(oldp+66,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__mosi));
        tracep->fullCData(oldp+67,((2U | (1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr))))),2);
        tracep->fullCData(oldp+68,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr) 
                                    << 1U)),2);
        tracep->fullCData(oldp+69,((2U | (1U & ((~ 
                                                 (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U) 
                                                  >> 1U)) 
                                                | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U))))),2);
        tracep->fullCData(oldp+70,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                     ? 0U : 2U)),2);
        tracep->fullBit(oldp+71,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas));
        tracep->fullBit(oldp+72,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas));
        tracep->fullBit(oldp+73,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outData_enqData__024whas))));
        tracep->fullBit(oldp+74,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas));
        tracep->fullBit(oldp+75,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas));
        tracep->fullBit(oldp+76,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas));
        tracep->fullBit(oldp+77,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outData_enqData__024whas))));
        tracep->fullBit(oldp+78,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas));
        tracep->fullBit(oldp+79,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_wire__024whas));
        tracep->fullBit(oldp+80,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas));
        tracep->fullBit(oldp+81,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__busybit));
        tracep->fullBit(oldp+82,((1U & ((~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata)))));
        tracep->fullBit(oldp+83,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21))));
        tracep->fullIData(oldp+84,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt),32);
        tracep->fullIData(oldp+85,((((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                     | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))
                                     ? ((IData)(1U) 
                                        + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)
                                     : 0U)),32);
        tracep->fullBit(oldp+86,(((((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                    | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17))));
        tracep->fullCData(oldp+87,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command),8);
        tracep->fullBit(oldp+88,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__MUX_spiFlashFsm_start_reg__024write_1___05FSEL_1));
        tracep->fullCData(oldp+89,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h),8);
        tracep->fullBit(oldp+90,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                  & (0x101U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr)))));
        tracep->fullCData(oldp+91,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l),8);
        tracep->fullBit(oldp+92,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                  & (0x100U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr)))));
        tracep->fullCData(oldp+93,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt),3);
        tracep->fullCData(oldp+94,((7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt) 
                                           + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas)
                                               ? 1U
                                               : 0U)) 
                                          + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte)
                                              ? 7U : 0U)))),3);
        tracep->fullBit(oldp+95,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_cnt_1__024whas) 
                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_read_byte))));
        tracep->fullCData(oldp+96,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_s1),2);
        tracep->fullCData(oldp+97,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_writeWithResp__024whas)
                                     ? (2U | (1U & 
                                              (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_wr))))
                                     : 0U)),2);
        tracep->fullCData(oldp+98,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt),3);
        tracep->fullCData(oldp+99,((7U & (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt) 
                                           + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas)
                                               ? 1U
                                               : 0U)) 
                                          + ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                              ? 7U : 0U)))),3);
        tracep->fullBit(oldp+100,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt_1__024whas) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21))));
        tracep->fullCData(oldp+101,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_s1),2);
        tracep->fullCData(oldp+102,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_writeWithResp__024whas)
                                      ? (2U | (1U & 
                                               ((~ 
                                                 (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U) 
                                                  >> 1U)) 
                                                | ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)
                                                    ? 0U
                                                    : 2U))))
                                      : 0U)),2);
        tracep->fullCData(oldp+103,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count),7);
        tracep->fullCData(oldp+104,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)
                                      ? (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)))
                                      : 0U)),7);
        tracep->fullBit(oldp+105,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1))));
        tracep->fullCData(oldp+106,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count),7);
        tracep->fullCData(oldp+107,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)
                                      ? (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)))
                                      : 0U)),7);
        tracep->fullBit(oldp+108,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205))));
        tracep->fullCData(oldp+109,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count),7);
        tracep->fullCData(oldp+110,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)
                                      ? (0x7fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)))
                                      : 0U)),7);
        tracep->fullBit(oldp+111,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np))));
        tracep->fullBit(oldp+112,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg));
        tracep->fullBit(oldp+113,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024EN_operate) 
                                    & (0x108U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start))));
        tracep->fullBit(oldp+114,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_start_reg_1));
        tracep->fullBit(oldp+115,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap));
        tracep->fullBit(oldp+116,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_set_pw__024whas) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_can_overlap))));
        tracep->fullBit(oldp+117,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_fired));
        tracep->fullCData(oldp+118,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate),6);
        tracep->fullCData(oldp+119,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate__024D_IN),6);
        tracep->fullBit(oldp+120,((((((((((((((((((
                                                   ((((((((((((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9) 
                                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21)) 
                                                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np)) 
                                                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np)) 
                                                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
                                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)) 
                                                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25)) 
                                                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1)) 
                                                         | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1)) 
                                                        | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                                     | (0xdU 
                                                        == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205)) 
                                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2)) 
                                                  | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16)) 
                                                 | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)) 
                                                | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)) 
                                               | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)) 
                                              | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30)) 
                                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17)) 
                                           | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)) 
                                          | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)) 
                                         | (0x19U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                        | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29)) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32)) 
                                    | (0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16))));
        tracep->fullBit(oldp+121,((1U & (~ (((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                             | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20))))));
        tracep->fullBit(oldp+122,(((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                       | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20)) 
                                     | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16)) 
                                    | (0xdU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate))) 
                                   | (7U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))));
        tracep->fullCData(oldp+123,((0xffU & (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__024operate_addr))),8);
        tracep->fullCData(oldp+124,((0xffU & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)),8);
        tracep->fullCData(oldp+125,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__024DIB),8);
        tracep->fullCData(oldp+126,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R),8);
        tracep->fullCData(oldp+127,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R),8);
        tracep->fullBit(oldp+128,((1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32)))));
        tracep->fullCData(oldp+129,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024D_OUT),8);
        tracep->fullBit(oldp+130,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024DEQ));
        tracep->fullBit(oldp+131,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__hasodata));
        tracep->fullBit(oldp+132,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__024ENQ));
        tracep->fullBit(oldp+133,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__not_ring_full));
        tracep->fullCData(oldp+134,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT),8);
        tracep->fullBit(oldp+135,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024DEQ));
        tracep->fullBit(oldp+136,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata));
        tracep->fullBit(oldp+137,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024ENQ));
        tracep->fullBit(oldp+138,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__not_ring_full));
        tracep->fullCData(oldp+139,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21)
                                      ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_h)
                                      : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21)
                                          ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_addr_l)
                                          : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21)
                                              ? ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata)
                                                  ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT)
                                                  : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R))
                                              : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21)
                                                  ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__command)
                                                  : 
                                                 ((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25)
                                                     ? 6U
                                                     : 0xaaU)))))))),8);
        tracep->fullCData(oldp+140,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata),8);
        tracep->fullBit(oldp+141,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write));
        tracep->fullBit(oldp+142,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_read));
        tracep->fullBit(oldp+143,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024RDY_write));
        tracep->fullBit(oldp+144,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterA_outData_enqAndDeq));
        tracep->fullBit(oldp+145,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_page_buffer_serverAdapterB_outData_enqAndDeq));
        tracep->fullBit(oldp+146,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np));
        tracep->fullBit(oldp+147,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_d_init_np_1));
        tracep->fullBit(oldp+148,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l75c17));
        tracep->fullBit(oldp+149,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_f_init_l84c17));
        tracep->fullBit(oldp+150,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l47c21));
        tracep->fullBit(oldp+151,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20));
        tracep->fullBit(oldp+152,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l51c25));
        tracep->fullBit(oldp+153,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25));
        tracep->fullBit(oldp+154,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l53c25));
        tracep->fullBit(oldp+155,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20));
        tracep->fullBit(oldp+156,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l61c25));
        tracep->fullBit(oldp+157,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16));
        tracep->fullBit(oldp+158,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l68c21));
        tracep->fullBit(oldp+159,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l69c21));
        tracep->fullBit(oldp+160,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l70c21));
        tracep->fullBit(oldp+161,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21));
        tracep->fullBit(oldp+162,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l73c30));
        tracep->fullBit(oldp+163,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l76c32));
        tracep->fullBit(oldp+164,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l77c21));
        tracep->fullBit(oldp+165,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29));
        tracep->fullBit(oldp+166,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l86c32));
        tracep->fullBit(oldp+167,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l88c16));
        tracep->fullBit(oldp+168,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np));
        tracep->fullBit(oldp+169,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_1));
        tracep->fullBit(oldp+170,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_np_2));
        tracep->fullBit(oldp+171,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_fsm_start));
        tracep->fullBit(oldp+172,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_idle_l45c9));
        tracep->fullIData(oldp+173,(((IData)(1U) + vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt)),32);
        tracep->fullCData(oldp+174,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__hasodata)
                                      ? (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__024D_OUT)
                                      : (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R))),8);
        tracep->fullCData(oldp+175,((0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_1_delay_count)))),7);
        tracep->fullCData(oldp+176,((0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_2_delay_count)))),7);
        tracep->fullCData(oldp+177,((0x7fU & ((IData)(1U) 
                                              + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_jj_delay_count)))),7);
        tracep->fullBit(oldp+178,(((0x1eU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)) 
                                   | (0x1aU == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+179,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l85c29) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l71c21)) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l52c25))));
        tracep->fullBit(oldp+180,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l67c16) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l60c20)) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__WILL_FIRE_RL_spiFlashFsm_action_l50c20))));
        tracep->fullBit(oldp+181,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__NOT_busybit_42_73_AND_NOT_command_74_EQ_2_75_9_ETC___05F_d205));
        tracep->fullBit(oldp+182,((0x80000100U > (0x80000000U 
                                                  ^ vlSelf->mkTb__DOT__spiflash_ctrl__DOT__cnt))));
        tracep->fullBit(oldp+183,((7U > (4U ^ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_cnt)))));
        tracep->fullBit(oldp+184,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spiFlashFsm_abort_whas___05F09_AND_spiFlashFsm_abo_ETC___05F_d291));
        tracep->fullCData(oldp+185,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOA_R2),8);
        tracep->fullCData(oldp+186,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_memory__DOT__DOB_R2),8);
        tracep->fullBit(oldp+187,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__ring_empty));
        tracep->fullBit(oldp+188,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head));
        tracep->fullBit(oldp+189,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_head));
        tracep->fullBit(oldp+190,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail));
        tracep->fullBit(oldp+191,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__next_tail));
        tracep->fullCData(oldp+192,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[0]),8);
        tracep->fullCData(oldp+193,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__arr[1]),8);
        tracep->fullBit(oldp+194,((1U & ((IData)(1U) 
                                         + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__tail)))));
        tracep->fullBit(oldp+195,((1U & ((IData)(1U) 
                                         + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__head)))));
        tracep->fullBit(oldp+196,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__deqerror));
        tracep->fullBit(oldp+197,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterA_outDataCore__DOT__error_checks__DOT__enqerror));
        tracep->fullBit(oldp+198,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__ring_empty));
        tracep->fullBit(oldp+199,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head));
        tracep->fullBit(oldp+200,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_head));
        tracep->fullBit(oldp+201,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail));
        tracep->fullBit(oldp+202,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__next_tail));
        tracep->fullCData(oldp+203,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[0]),8);
        tracep->fullCData(oldp+204,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__arr[1]),8);
        tracep->fullBit(oldp+205,((1U & ((IData)(1U) 
                                         + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__tail)))));
        tracep->fullBit(oldp+206,((1U & ((IData)(1U) 
                                         + (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__head)))));
        tracep->fullBit(oldp+207,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__deqerror));
        tracep->fullBit(oldp+208,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__page_buffer_serverAdapterB_outDataCore__DOT__error_checks__DOT__enqerror));
        tracep->fullBit(oldp+209,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_wire__024whas));
        tracep->fullBit(oldp+210,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas));
        tracep->fullIData(oldp+211,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt),32);
        tracep->fullIData(oldp+212,(((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                      ? (vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                                         - (IData)(1U))
                                      : 7U)),32);
        tracep->fullBit(oldp+213,(((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)) 
                                   | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+214,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13) 
                                   & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata) 
                                      >> (7U & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)))));
        tracep->fullBit(oldp+215,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10))));
        tracep->fullCData(oldp+216,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__rdata) 
                                     & (~ ((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                            ? ((IData)(1U) 
                                               << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                            : 0U)))),8);
        tracep->fullBit(oldp+217,((1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))));
        tracep->fullBit(oldp+218,((1U & (~ ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                            | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13))))));
        tracep->fullBit(oldp+219,((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
                                   | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullBit(oldp+220,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg));
        tracep->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start)))));
        tracep->fullBit(oldp+222,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__024EN_write))));
        tracep->fullBit(oldp+223,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_start_reg_1));
        tracep->fullBit(oldp+224,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap));
        tracep->fullBit(oldp+225,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_set_pw__024whas) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_can_overlap))));
        tracep->fullBit(oldp+226,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_fired));
        tracep->fullCData(oldp+227,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate),3);
        tracep->fullCData(oldp+228,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7)
                                      ? 0U : ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)
                                               ? 1U
                                               : ((1U 
                                                   == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))
                                                     ? 4U
                                                     : 2U)))))),3);
        tracep->fullBit(oldp+229,((((((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7) 
                                      | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13)) 
                                     | (1U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate))) 
                                    | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10)) 
                                   | (3U == (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__spiFsm_state_mkFSMstate)))));
        tracep->fullCData(oldp+230,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata),8);
        tracep->fullBit(oldp+231,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13));
        tracep->fullBit(oldp+232,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10));
        tracep->fullBit(oldp+233,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_fsm_start));
        tracep->fullBit(oldp+234,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_idle_l29c7));
        tracep->fullIData(oldp+235,((vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt 
                                     - (IData)(1U))),32);
        tracep->fullBit(oldp+236,((1U & ((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__wdata) 
                                         >> (7U & vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)))));
        tracep->fullBit(oldp+237,(((IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l41c10) 
                                   | (IData)(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__WILL_FIRE_RL_spiFsm_action_l31c13))));
        tracep->fullCData(oldp+238,(((7U >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                      ? (0xffU & ((IData)(1U) 
                                                  << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt))
                                      : 0U)),8);
        tracep->fullCData(oldp+239,((0xffU & (~ ((7U 
                                                  >= vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                                  ? 
                                                 ((IData)(1U) 
                                                  << vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__cnt)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+240,(vlSelf->mkTb__DOT__spiflash_ctrl__DOT__spi_ctrl__DOT__NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___05F_d88));
        tracep->fullBit(oldp+241,(vlSelf->CLK));
        tracep->fullBit(oldp+242,(vlSelf->RST_N));
        tracep->fullBit(oldp+243,(1U));
        tracep->fullBit(oldp+244,(0U));
        tracep->fullBit(oldp+245,(0U));
        tracep->fullIData(oldp+246,(8U),32);
        tracep->fullSData(oldp+247,(0x100U),9);
        tracep->fullIData(oldp+248,(3U),32);
        tracep->fullIData(oldp+249,(1U),32);
        tracep->fullBit(oldp+250,(1U));
        tracep->fullIData(oldp+251,(1U),32);
    }
}
