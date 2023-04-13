/*
 * Generated by Bluespec Compiler (build 14ff62d)
 * 
 * On Tue Apr  4 20:57:44 CST 2023
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
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_cnt_BIT_31___h6414;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l30c13;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l29c7;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l29c7;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_7;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_7;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_8;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_8;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_9;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_write_spi;
	 tUInt8 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_write_spi;
	 tUInt8 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_run_counter;
	 tUInt8 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_run_counter;
	 tUInt8 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_spi_show;
	 tUInt8 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_spi_show;
	 tUInt8 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_counter_show;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_counter_show;
	 DEF_INST_top_DEF_CAN_FIRE_RL_counter_show = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_counter_show = DEF_INST_top_DEF_CAN_FIRE_RL_counter_show;
	 DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable = DEF_INST_top_DEF_CAN_FIRE_RL_get_all_variable;
	 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_get_all_variable = (tUInt8)1u;
	 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_get_all_variable = DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_get_all_variable;
	 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_run_counter = (tUInt8)1u;
	 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_run_counter = DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_run_counter;
	 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_spi_show = (tUInt8)1u;
	 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_spi_show = DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_spi_show;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_get_all_variable;
	 DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_write_spi = INST_top.INST_counter.INST_spi_writer.METH_RDY_write();
	 DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_write_spi = DEF_INST_top_INST_counter_DEF_CAN_FIRE_RL_write_spi;
	 INST_top.INST_counter.INST_spi_writer.DEF_x__h16071 = INST_top.INST_counter.INST_spi_writer.INST_cnt.METH_read();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_mkFSMstate.METH_read();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas____d4 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_abort.METH_whas();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_wget____d5 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_abort.METH_wget();
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_cnt_BIT_31___h6414 = (tUInt8)((INST_top.INST_counter.INST_spi_writer.DEF_x__h16071) >> 31u);
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 = !(INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas____d4) || !(INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_wget____d5);
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && ((INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)1u || (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)3u);
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13 = !DEF_INST_top_INST_counter_INST_spi_writer_DEF_cnt_BIT_31___h6414 && DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l32c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)2u;
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l36c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_cnt_BIT_31___h6414 && DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d43;
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l41c15 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)5u;
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l43c14 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)4u;
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l42c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13;
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_fired__h15163 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_fired.METH_read();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_start_reg_1__h15161 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_reg_1.METH_read();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_start_reg__h17356 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_reg.METH_read();
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34 = (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)6u;
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 = INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas____d4 && INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_wget____d5;
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35 = (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 || (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read____d31) == (tUInt8)0u) || INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34;
	 INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 = INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35 && (!(INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_start_reg_1__h15161) || INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_fired__h15163);
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start = INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 && INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_start_reg__h17356;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_fsm_start;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart = (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_start_reg_1__h15161 && !(INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_fired__h15163)) && DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_start_reg__dreg_update;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_every;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_fired__dreg_update;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_5 = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_5 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_5;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_7 = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_7 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_7;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_6 = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_6 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_6;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_8 = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_8 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_8;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_9 = (tUInt8)1u;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_9 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE___me_check_9;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_get_all_variable)
	   INST_top.RL_get_all_variable();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_counter_show)
	   INST_top.RL_counter_show();
	 if (DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_get_all_variable)
	   INST_top.INST_counter.RL_get_all_variable();
	 if (DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_spi_show)
	   INST_top.INST_counter.RL_spi_show();
	 if (DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_write_spi)
	   INST_top.INST_counter.RL_write_spi();
	 if (DEF_INST_top_INST_counter_DEF_WILL_FIRE_RL_run_counter)
	   INST_top.INST_counter.RL_run_counter();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_get_all_variable)
	   INST_top.INST_counter.INST_spi_writer.RL_get_all_variable();
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l32c13)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l32c13();
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l36c13)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l36c13();
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l41c15)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l41c15();
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l42c13)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l42c13();
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l43c14)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l43c14();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_restart)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_restart();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_6)
	   INST_top.INST_counter.INST_spi_writer.__me_check_6();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_7)
	   INST_top.INST_counter.INST_spi_writer.__me_check_7();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_8)
	   INST_top.INST_counter.INST_spi_writer.__me_check_8();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_9)
	   INST_top.INST_counter.INST_spi_writer.__me_check_9();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_fsm_start)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_fsm_start();
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_wire.METH_whas();
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9 = INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_wire.METH_wget();
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l30c13 = ((DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 && DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9) && INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d35) && !(((DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13) || (DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13)) || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13);
	 INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l30c13 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l30c13;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11 = !DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_whas____d7 || !DEF_INST_top_INST_counter_INST_spi_writer_DEF_spiFsm_start_wire_wget____d9;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l29c7 = (DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11 && (DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_abort_whas_6_OR_NOT_spiFsm_abort_wg_ETC___d28 && INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_state_mkFSMstate_read__1_EQ_6___d34)) && !(((DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13) || (DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13)) || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13);
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l29c7 = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_idle_l29c7;
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort = (INST_top.INST_counter.INST_spi_writer.DEF_spiFsm_abort_whas_AND_spiFsm_abort_wget___d6 && DEF_INST_top_INST_counter_INST_spi_writer_DEF_NOT_spiFsm_start_wire_whas_OR_NOT_spiFsm_start_ETC___d11) && !(((DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l43c14 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l42c13) || (DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l41c15 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l36c13)) || (DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_action_l32c13 || DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_restart));
	 DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort = DEF_INST_top_INST_counter_INST_spi_writer_DEF_CAN_FIRE_RL_spiFsm_state_handle_abort;
	 if (INST_top.INST_counter.INST_spi_writer.DEF_WILL_FIRE_RL_spiFsm_action_l30c13)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_action_l30c13();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_start_reg__dreg_update)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_start_reg__dreg_update();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_handle_abort)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_state_handle_abort();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE___me_check_5)
	   INST_top.INST_counter.INST_spi_writer.__me_check_5();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_idle_l29c7)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_idle_l29c7();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_every)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_state_every();
	 if (DEF_INST_top_INST_counter_INST_spi_writer_DEF_WILL_FIRE_RL_spiFsm_state_fired__dreg_update)
	   INST_top.INST_counter.INST_spi_writer.RL_spiFsm_state_fired__dreg_update();
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_counter.INST_spi_writer.INST_hook_reg_hook_write_data.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_ss.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_sck.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_mosi.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_wdata.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_spiFsm_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_spi_writer.INST_spiFsm_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_counter.INST_forcnt.rst_tick__clk__1((tUInt8)1u);
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
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_start_wire.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_start_reg_2.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_abort.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_state_set_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_state_overlap_pw.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.INST_spiFsm_state_fired_1.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.INST_spi_writer.set_clk_0)("CLK");
  (mkTb_instance->INST_counter.set_clk_0)("CLK");
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
void MODEL_mkTb::get_version(unsigned int *year,
			     unsigned int *month,
			     char const **annotation,
			     char const **build)
{
  *year = 0u;
  *month = 0u;
  *annotation = NULL;
  *build = "14ff62d";
}

/* Get the model creation time */
time_t MODEL_mkTb::get_creation_time()
{
  
  /* Tue Apr  4 12:57:44 UTC 2023 */
  return 1680613064llu;
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