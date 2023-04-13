/*
 * Generated by Bluespec Compiler (build 14ff62d)
 * 
 * On Tue Apr  4 20:57:44 CST 2023
 * 
 */

/* Generation options: */
#ifndef __mkTb_h__
#define __mkTb_h__

#include "Types.h"
#include "bluesim_kernel_api.h"
#include <stdio.h>
#include <fstream>
#include <string>
#include <inttypes.h>
#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkDecCounter.h"


/* Class declaration for the mkTb module */
class MOD_mkTb : public Module {
 
 public:
	zj_core::ChangeLists outchange_counter_count{"outchange_counter_count"};
	zj_core::ChangeLists outchange_counter_overflow{"outchange_counter_overflow"};
	void print_changelists() {
		printf("top(mkTb)\n");
		printf("\toutchange_counter_count: ");
		for (auto& x : outchange_counter_count._list) {
			printf("%" PRIu64 " %" PRIu64 "|", x.at, x.val);
		}
		printf("\n");
		printf("\toutchange_counter_overflow: ");
		for (auto& x : outchange_counter_overflow._list) {
			printf("%" PRIu64 " %" PRIu64 "|", x.at, x.val);
		}
		printf("\n");
		printf("\n");
	}
	void generate_testbench(uint64_t sim_time, std::string cur_hierachy) {
		std::ofstream fout(cur_hierachy + ".v");
		std::string out_pre;
		std::string out_post;
		out_pre += "`timescale 1ns/1ns\n";
		out_pre += "module testbench();\n";
		out_pre += " reg CLK, RST_N;\n";
		out_post += "always begin\n\t#5 CLK = ~CLK;\nend\n";
		out_post += "initial begin\n\tRST_N = 0;\n\t#1 CLK = 1;\n\t#1 RST_N = 1;\nend\n";
		out_pre += " reg [31 : 0] counter$count;\n";
		out_post += " // port: counter$count\n";
		out_post += "initial begin\n";
		for (auto& x : outchange_counter_count._list) {
			int delay = x.at == 10 ? x.delay : x.delay;
			out_post += "\t#" + std::to_string(delay) + " " + "counter$count" + " = " + std::to_string(x.val) + ";\n";
		}
		out_post += "end\n";
		out_pre += " reg  counter$overflow;\n";
		out_post += " // port: counter$overflow\n";
		out_post += "initial begin\n";
		for (auto& x : outchange_counter_overflow._list) {
			int delay = x.at == 10 ? x.delay : x.delay;
			out_post += "\t#" + std::to_string(delay) + " " + "counter$overflow" + " = " + std::to_string(x.val) + ";\n";
		}
		out_post += "end\n";
		out_post += " // for en_regs \n\n";
		out_pre += " mkTb U1(.CLK(CLK), \n\t\t.RST_N(RST_N), \n\t\t.counter$count(counter$count), \n\t\t.counter$overflow(counter$overflow));\n";
		out_post += "initial begin\n";
		out_post += "\t#" + std::to_string(sim_time) + " $finish;\n";
		out_post += "end\n";
		out_post += "endmodule\n";
		fout << out_pre << out_post;
	}
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkDecCounter INST_counter;
 
 /* Constructor */
 public:
  MOD_mkTb(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUInt32 DEF_unsigned_counter_count___d2;
  tUInt32 DEF_b__h79;
  tUInt8 DEF_counter_overflow____d3;
 
 /* Rules */
 public:
  void RL_get_all_variable();
  void RL_counter_show();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTb &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTb &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkTb &backing);
};

#endif /* ifndef __mkTb_h__ */