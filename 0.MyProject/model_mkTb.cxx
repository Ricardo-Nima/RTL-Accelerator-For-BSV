/*
 * Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
 * 
 * On Thu Jan 12 14:57:22 CST 2023
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTb.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTb::MODEL_mkTb()
{
  mkTb_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTb()
{
  MODEL_mkTb *model = new MODEL_mkTb();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTb &INST_top = *((MOD_mkTb *)(instance_ptr));
	 tUInt8 DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_counter;
	 tUInt8 DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_counter;
	 tUInt8 DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_mycnt;
	 tUInt8 DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_mycnt;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_cnt_BIT_31___h6433;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l50c13;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l49c7;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l49c7;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_test;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_test;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_7;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_7;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_8;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_8;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d49;
	 tUInt8 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d53;
	 tUInt8 DEF_INST_top_DEF_abort_whas_AND_abort_wget___d6;
	 tUInt8 DEF_INST_top_DEF_NOT_start_wire_whas_OR_NOT_start_wire_wget_0___d11;
	 tUInt8 DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28;
	 tUInt8 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d36;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read__2_EQ_3___d35;
	 tUInt8 DEF_INST_top_DEF_spi_writer_RDY_write____d30;
	 tUInt8 DEF_INST_top_DEF_abort_wget____d5;
	 tUInt8 DEF_INST_top_DEF_abort_whas____d4;
	 tUInt8 DEF_INST_top_DEF_start_reg__h8400;
	 tUInt8 DEF_INST_top_DEF_running__h8486;
	 tUInt8 DEF_INST_top_DEF_start_wire_wget____d9;
	 tUInt8 DEF_INST_top_DEF_start_wire_whas____d7;
	 tUInt8 DEF_INST_top_DEF_start_reg_1__h7389;
	 tUInt8 DEF_INST_top_DEF_state_fired__h7391;
	 tUInt8 DEF_INST_top_DEF_state_mkFSMstate_read____d32;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_state_every;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_state_every;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_restart;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l94c20;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_idle_l93c7;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_idle_l93c7;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_spi_show;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_spi_show;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_6;
	 DEF_INST_top_DEF_state_mkFSMstate_read____d32 = INST_top.INST_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_abort_whas____d4 = INST_top.INST_abort.METH_whas();
	 DEF_INST_top_DEF_abort_wget____d5 = INST_top.INST_abort.METH_wget();
	 DEF_INST_top_DEF_spi_writer_RDY_write____d30 = INST_top.INST_spi_writer.METH_RDY_write();
	 DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28 = !DEF_INST_top_DEF_abort_whas____d4 || !DEF_INST_top_DEF_abort_wget____d5;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20 = DEF_INST_top_DEF_spi_writer_RDY_write____d30 && (DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28 && DEF_INST_top_DEF_state_mkFSMstate_read____d32 == (tUInt8)1u);
	 INST_top.DEF_WILL_FIRE_RL_action_l95c20 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20;
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20 = DEF_INST_top_DEF_spi_writer_RDY_write____d30 && (DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28 && DEF_INST_top_DEF_state_mkFSMstate_read____d32 == (tUInt8)2u);
	 INST_top.DEF_WILL_FIRE_RL_action_l96c20 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20;
	 DEF_INST_top_DEF_state_fired__h7391 = INST_top.INST_state_fired.METH_read();
	 DEF_INST_top_DEF_start_reg_1__h7389 = INST_top.INST_start_reg_1.METH_read();
	 DEF_INST_top_DEF_running__h8486 = INST_top.INST_running.METH_read();
	 DEF_INST_top_DEF_start_reg__h8400 = INST_top.INST_start_reg.METH_read();
	 DEF_INST_top_DEF_state_mkFSMstate_read__2_EQ_3___d35 = DEF_INST_top_DEF_state_mkFSMstate_read____d32 == (tUInt8)3u;
	 DEF_INST_top_DEF_abort_whas_AND_abort_wget___d6 = DEF_INST_top_DEF_abort_whas____d4 && DEF_INST_top_DEF_abort_wget____d5;
	 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d36 = (DEF_INST_top_DEF_abort_whas_AND_abort_wget___d6 || DEF_INST_top_DEF_state_mkFSMstate_read____d32 == (tUInt8)0u) || DEF_INST_top_DEF_state_mkFSMstate_read__2_EQ_3___d35;
	 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d49 = DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d36 && (!DEF_INST_top_DEF_start_reg_1__h7389 || DEF_INST_top_DEF_state_fired__h7391);
	 DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d53 = DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d49 && !DEF_INST_top_DEF_start_reg__h8400;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish = DEF_INST_top_DEF_running__h8486 && DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d53;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish = DEF_INST_top_DEF_CAN_FIRE_RL_auto_finish;
	 DEF_INST_top_DEF_CAN_FIRE_RL_auto_start = DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d53 && !DEF_INST_top_DEF_running__h8486;
	 DEF_INST_top_DEF_WILL_FIRE_RL_auto_start = DEF_INST_top_DEF_CAN_FIRE_RL_auto_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start = DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d49 && DEF_INST_top_DEF_start_reg__h8400;
	 DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start = DEF_INST_top_DEF_CAN_FIRE_RL_fsm_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable = DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable;
	 DEF_INST_top_DEF_CAN_FIRE_RL_restart = (DEF_INST_top_DEF_start_reg_1__h7389 && !DEF_INST_top_DEF_state_fired__h7391) && DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28;
	 DEF_INST_top_DEF_WILL_FIRE_RL_restart = DEF_INST_top_DEF_CAN_FIRE_RL_restart;
	 DEF_INST_top_DEF_CAN_FIRE_RL_spi_show = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_spi_show = DEF_INST_top_DEF_CAN_FIRE_RL_spi_show;
	 DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_start_reg__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_every = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_every = DEF_INST_top_DEF_CAN_FIRE_RL_state_every;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_state_fired__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_5 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_5 = DEF_INST_top_DEF_CAN_FIRE___me_check_5;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_6 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_6 = DEF_INST_top_DEF_CAN_FIRE___me_check_6;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable;
	 INST_top.INST_spi_writer.DEF_x__h16080 = INST_top.INST_spi_writer.INST_cnt.METH_read();
	 INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31 = INST_top.INST_spi_writer.INST_spiFsm_state_mkFSMstate.METH_read();
	 INST_top.INST_spi_writer.DEF_spiFsm_abort_whas____d4 = INST_top.INST_spi_writer.INST_spiFsm_abort.METH_whas();
	 INST_top.INST_spi_writer.DEF_spiFsm_abort_wget____d5 = INST_top.INST_spi_writer.INST_spiFsm_abort.METH_wget();
	 DEF_INST_top_INST_spi_writer_DEF_cnt_BIT_31___h6433 = (tUInt8)((INST_top.INST_spi_writer.DEF_x__h16080) >> 31u);
	 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 = !(INST_top.INST_spi_writer.DEF_spiFsm_abort_whas____d4) || !(INST_top.INST_spi_writer.DEF_spiFsm_abort_wget____d5);
	 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43 = DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && ((INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)1u || (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)3u);
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13 = !DEF_INST_top_INST_spi_writer_DEF_cnt_BIT_31___h6433 && DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l52c13 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13 = DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)2u;
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l56c13 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15 = DEF_INST_top_INST_spi_writer_DEF_cnt_BIT_31___h6433 && DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l61c15 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13 = DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)4u;
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l62c13 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14 = DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)5u;
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l63c14 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14;
	 INST_top.INST_spi_writer.DEF_spiFsm_state_fired__h15182 = INST_top.INST_spi_writer.INST_spiFsm_state_fired.METH_read();
	 INST_top.INST_spi_writer.DEF_spiFsm_start_reg_1__h15180 = INST_top.INST_spi_writer.INST_spiFsm_start_reg_1.METH_read();
	 INST_top.INST_spi_writer.DEF_spiFsm_start_reg__h17351 = INST_top.INST_spi_writer.INST_spiFsm_start_reg.METH_read();
	 INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34 = (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)6u;
	 INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 = INST_top.INST_spi_writer.DEF_spiFsm_abort_whas____d4 && INST_top.INST_spi_writer.DEF_spiFsm_abort_wget____d5;
	 INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35 = (INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 || (INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)0u) || INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34;
	 INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 = INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35 && (!(INST_top.INST_spi_writer.DEF_spiFsm_start_reg_1__h15180) || INST_top.INST_spi_writer.DEF_spiFsm_state_fired__h15182);
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start = INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 && INST_top.INST_spi_writer.DEF_spiFsm_start_reg__h17351;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart = (INST_top.INST_spi_writer.DEF_spiFsm_start_reg_1__h15180 && !(INST_top.INST_spi_writer.DEF_spiFsm_state_fired__h15182)) && DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_test = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_test = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_test;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_5 = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_5 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_5;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_6 = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_6 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_6;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_7 = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_7 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_7;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_8 = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_8 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_8;
	 DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_counter = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_counter = DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_counter;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_9 = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_9 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE___me_check_9;
	 DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_mycnt = (tUInt8)1u;
	 DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_mycnt = DEF_INST_top_INST_spi_writer_INST_counter_DEF_CAN_FIRE_RL_run_mycnt;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_finish)
	   INST_top.RL_auto_finish();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_auto_start)
	   INST_top.RL_auto_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_fsm_start)
	   INST_top.RL_fsm_start();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable)
	   INST_top.RL_get_all_variable();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l95c20)
	   INST_top.RL_action_l95c20();
	 if (INST_top.DEF_WILL_FIRE_RL_action_l96c20)
	   INST_top.RL_action_l96c20();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_restart)
	   INST_top.RL_restart();
	 DEF_INST_top_DEF_start_wire_whas____d7 = INST_top.INST_start_wire.METH_whas();
	 DEF_INST_top_DEF_start_wire_wget____d9 = INST_top.INST_start_wire.METH_wget();
	 DEF_INST_top_DEF_CAN_FIRE_RL_action_l94c20 = (DEF_INST_top_DEF_spi_writer_RDY_write____d30 && ((DEF_INST_top_DEF_start_wire_whas____d7 && DEF_INST_top_DEF_start_wire_wget____d9) && DEF_INST_top_DEF_abort_whas_AND_abort_wget_OR_state_mkFSMstate__ETC___d36)) && !(DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20);
	 INST_top.DEF_WILL_FIRE_RL_action_l94c20 = DEF_INST_top_DEF_CAN_FIRE_RL_action_l94c20;
	 DEF_INST_top_DEF_NOT_start_wire_whas_OR_NOT_start_wire_wget_0___d11 = !DEF_INST_top_DEF_start_wire_whas____d7 || !DEF_INST_top_DEF_start_wire_wget____d9;
	 DEF_INST_top_DEF_CAN_FIRE_RL_idle_l93c7 = (DEF_INST_top_DEF_NOT_start_wire_whas_OR_NOT_start_wire_wget_0___d11 && (DEF_INST_top_DEF_NOT_abort_whas_6_OR_NOT_abort_wget_7___d28 && DEF_INST_top_DEF_state_mkFSMstate_read__2_EQ_3___d35)) && !(DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20);
	 DEF_INST_top_DEF_WILL_FIRE_RL_idle_l93c7 = DEF_INST_top_DEF_CAN_FIRE_RL_idle_l93c7;
	 DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort = (DEF_INST_top_DEF_abort_whas_AND_abort_wget___d6 && DEF_INST_top_DEF_NOT_start_wire_whas_OR_NOT_start_wire_wget_0___d11) && !((DEF_INST_top_DEF_CAN_FIRE_RL_action_l96c20 || DEF_INST_top_DEF_CAN_FIRE_RL_action_l95c20) || DEF_INST_top_DEF_CAN_FIRE_RL_restart);
	 DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort = DEF_INST_top_DEF_CAN_FIRE_RL_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_action_l94c20)
	   INST_top.RL_action_l94c20();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_idle_l93c7)
	   INST_top.RL_idle_l93c7();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_start_reg__dreg_update)
	   INST_top.RL_start_reg__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_every)
	   INST_top.RL_state_every();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_fired__dreg_update)
	   INST_top.RL_state_fired__dreg_update();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable)
	   INST_top.INST_spi_writer.RL_get_all_variable();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_state_handle_abort)
	   INST_top.RL_state_handle_abort();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_5)
	   INST_top.__me_check_5();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_6)
	   INST_top.__me_check_6();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_spi_show)
	   INST_top.RL_spi_show();
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l52c13)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l52c13();
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l56c13)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l56c13();
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l61c15)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l61c15();
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l62c13)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l62c13();
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l63c14)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l63c14();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart)
	   INST_top.INST_spi_writer.RL_spiFsm_restart();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_test)
	   INST_top.INST_spi_writer.RL_test();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_6)
	   INST_top.INST_spi_writer.__me_check_6();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_7)
	   INST_top.INST_spi_writer.__me_check_7();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_8)
	   INST_top.INST_spi_writer.__me_check_8();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_9)
	   INST_top.INST_spi_writer.__me_check_9();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start)
	   INST_top.INST_spi_writer.RL_spiFsm_fsm_start();
	 DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 = INST_top.INST_spi_writer.INST_spiFsm_start_wire.METH_whas();
	 DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9 = INST_top.INST_spi_writer.INST_spiFsm_start_wire.METH_wget();
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l50c13 = ((DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 && DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9) && INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35) && !(((DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13) || (DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13)) || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13);
	 INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l50c13 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l50c13;
	 DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11 = !DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 || !DEF_INST_top_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l49c7 = (DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11 && (DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && INST_top.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34)) && !(((DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13) || (DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13)) || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13);
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l49c7 = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l49c7;
	 DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort = (INST_top.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 && DEF_INST_top_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11) && !(((DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l63c14 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l62c13) || (DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l61c15 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l56c13)) || (DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l52c13 || DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart));
	 DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort = DEF_INST_top_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort;
	 if (INST_top.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l50c13)
	   INST_top.INST_spi_writer.RL_spiFsm_action_l50c13();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update)
	   INST_top.INST_spi_writer.RL_spiFsm_start_reg__dreg_update();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort)
	   INST_top.INST_spi_writer.RL_spiFsm_state_handle_abort();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE___me_check_5)
	   INST_top.INST_spi_writer.__me_check_5();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l49c7)
	   INST_top.INST_spi_writer.RL_spiFsm_idle_l49c7();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every)
	   INST_top.INST_spi_writer.RL_spiFsm_state_every();
	 if (DEF_INST_top_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update)
	   INST_top.INST_spi_writer.RL_spiFsm_state_fired__dreg_update();
	 if (DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_counter)
	   INST_top.INST_spi_writer.INST_counter.RL_run_counter();
	 if (DEF_INST_top_INST_spi_writer_INST_counter_DEF_WILL_FIRE_RL_run_mycnt)
	   INST_top.INST_spi_writer.INST_counter.RL_run_mycnt();
	 INST_top.INST_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_spi_writer.INST_spiFsm_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_spi_writer.INST_counter.INST_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_counter.INST_mycnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_hook_reg_hook_write_data.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_ss.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_sck.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_mosi.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_wdata.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_spiFsm_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_spiFsm_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_spiFsm_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_spiFsm_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_spi_writer.INST_spiFsm_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_running.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTb::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTb_instance = new MOD_mkTb(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTb_instance->INST_spi_writer.INST_counter.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_start_wire.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_start_reg_2.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_abort.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_state_set_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_state_overlap_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.INST_spiFsm_state_fired_1.set_clk_0)("CLK");
  (mkTb_instance->INST_spi_writer.set_clk_0)("CLK");
  (mkTb_instance->INST_start_wire.set_clk_0)("CLK");
  (mkTb_instance->INST_start_reg_2.set_clk_0)("CLK");
  (mkTb_instance->INST_abort.set_clk_0)("CLK");
  (mkTb_instance->INST_state_set_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_state_overlap_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_state_fired_1.set_clk_0)("CLK");
  (mkTb_instance->set_clk_0)("CLK");
}
void MODEL_mkTb::destroy_model()
{
  delete mkTb_instance;
  mkTb_instance = NULL;
}
void MODEL_mkTb::reset_model(bool asserted)
{
  (mkTb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTb::get_instance()
{
  return mkTb_instance;
}

/* Fill in version numbers */
void MODEL_mkTb::get_version(char const **name, char const **build)
{
  *name = "2022.01";
  *build = "066c7a8";
}

/* Get the model creation time */
time_t MODEL_mkTb::get_creation_time()
{
  
  /* Thu Jan 12 06:57:22 UTC 2023 */
  return 1673506642llu;
}

/* State dumping function */
void MODEL_mkTb::dump_state()
{
  (mkTb_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTb & mkTb_backing(tSimStateHdl simHdl)
{
  static MOD_mkTb *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTb(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTb::dump_VCD_defs()
{
  (mkTb_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTb::dump_VCD(tVCDDumpType dt)
{
  (mkTb_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTb_backing(sim_hdl));
}