//
// Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
//
// On Wed Jan  4 15:53:26 CST 2023
//
//
// Ports:
// Name                         I/O  size props
// RDY_write                      O     1
// spi                            O     3 reg
// out                            O     8 reg
// RDY_out                        O     1 const
// CLK                            I     1 clock
// RST_N                          I     1 reset
// write_data                     I     8
// EN_write                       I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkSPIWriter(CLK,
		   RST_N,

		   write_data,
		   EN_write,
		   RDY_write,

		   spi,

		   out,
		   RDY_out);
  input  CLK;
  input  RST_N;

  // action method write
  input  [7 : 0] write_data;
  input  EN_write;
  output RDY_write;

  // value method spi
  output [2 : 0] spi;

  // value method out
  output [7 : 0] out;
  output RDY_out;

  // signals for module outputs
  wire [7 : 0] out;
  wire [2 : 0] spi;
  wire RDY_out, RDY_write;

  // inlined wires
  wire spiFsm_start_wire$whas, spiFsm_state_set_pw$whas;

  // register cnt
  reg [31 : 0] cnt;
  wire [31 : 0] cnt$D_IN;
  wire cnt$EN;

  // register mosi
  reg mosi;
  wire mosi$D_IN, mosi$EN;

  // register sck
  reg sck;
  wire sck$D_IN, sck$EN;

  // register spiFsm_start_reg
  reg spiFsm_start_reg;
  wire spiFsm_start_reg$D_IN, spiFsm_start_reg$EN;

  // register spiFsm_start_reg_1
  reg spiFsm_start_reg_1;
  wire spiFsm_start_reg_1$D_IN, spiFsm_start_reg_1$EN;

  // register spiFsm_state_can_overlap
  reg spiFsm_state_can_overlap;
  wire spiFsm_state_can_overlap$D_IN, spiFsm_state_can_overlap$EN;

  // register spiFsm_state_fired
  reg spiFsm_state_fired;
  wire spiFsm_state_fired$D_IN, spiFsm_state_fired$EN;

  // register spiFsm_state_mkFSMstate
  reg [3 : 0] spiFsm_state_mkFSMstate;
  reg [3 : 0] spiFsm_state_mkFSMstate$D_IN;
  wire spiFsm_state_mkFSMstate$EN;

  // register ss
  reg ss;
  wire ss$D_IN, ss$EN;

  // register wdata
  reg [7 : 0] wdata;
  wire [7 : 0] wdata$D_IN;
  wire wdata$EN;

  // rule scheduling signals
  wire WILL_FIRE_RL_spiFsm_action_l25c13,
       WILL_FIRE_RL_spiFsm_action_l27c13,
       WILL_FIRE_RL_spiFsm_action_l36c15,
       WILL_FIRE_RL_spiFsm_fsm_start,
       WILL_FIRE_RL_spiFsm_idle_l24c7;

  // inputs to muxes for submodule ports
  wire [31 : 0] MUX_cnt$write_1__VAL_1;
  wire MUX_mosi$write_1__VAL_1;

  // remaining internal signals
  wire spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60;

  // action method write
  assign RDY_write =
	     spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 &&
	     !spiFsm_start_reg ;

  // value method spi
  assign spi = { ss, sck, mosi } ;

  // value method out
  assign out = wdata ;
  assign RDY_out = 1'd1 ;

  // rule RL_spiFsm_action_l27c13
  assign WILL_FIRE_RL_spiFsm_action_l27c13 =
	     !cnt[31] &&
	     (spiFsm_state_mkFSMstate == 4'd1 ||
	      spiFsm_state_mkFSMstate == 4'd3) ;

  // rule RL_spiFsm_action_l36c15
  assign WILL_FIRE_RL_spiFsm_action_l36c15 =
	     cnt[31] &&
	     (spiFsm_state_mkFSMstate == 4'd1 ||
	      spiFsm_state_mkFSMstate == 4'd3) ;

  // rule RL_spiFsm_fsm_start
  assign WILL_FIRE_RL_spiFsm_fsm_start =
	     spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 &&
	     spiFsm_start_reg ;

  // rule RL_spiFsm_action_l25c13
  assign WILL_FIRE_RL_spiFsm_action_l25c13 =
	     spiFsm_start_wire$whas &&
	     (spiFsm_state_mkFSMstate == 4'd0 ||
	      spiFsm_state_mkFSMstate == 4'd6) ;

  // rule RL_spiFsm_idle_l24c7
  assign WILL_FIRE_RL_spiFsm_idle_l24c7 =
	     !spiFsm_start_wire$whas && spiFsm_state_mkFSMstate == 4'd6 ;

  // inputs to muxes for submodule ports
  assign MUX_cnt$write_1__VAL_1 = cnt - 32'd1 ;
  assign MUX_mosi$write_1__VAL_1 = wdata[cnt[2:0]] ;

  // inlined wires
  assign spiFsm_start_wire$whas =
	     WILL_FIRE_RL_spiFsm_fsm_start ||
	     spiFsm_start_reg_1 && !spiFsm_state_fired ;
  assign spiFsm_state_set_pw$whas =
	     WILL_FIRE_RL_spiFsm_idle_l24c7 ||
	     spiFsm_state_mkFSMstate == 4'd5 ||
	     spiFsm_state_mkFSMstate == 4'd4 ||
	     WILL_FIRE_RL_spiFsm_action_l36c15 ||
	     spiFsm_state_mkFSMstate == 4'd2 ||
	     WILL_FIRE_RL_spiFsm_action_l27c13 ||
	     WILL_FIRE_RL_spiFsm_action_l25c13 ;

  // register cnt
  assign cnt$D_IN =
	     (spiFsm_state_mkFSMstate == 4'd2) ?
	       MUX_cnt$write_1__VAL_1 :
	       32'd7 ;
  assign cnt$EN =
	     spiFsm_state_mkFSMstate == 4'd2 ||
	     spiFsm_state_mkFSMstate == 4'd5 ;

  // register mosi
  assign mosi$D_IN =
	     !WILL_FIRE_RL_spiFsm_action_l27c13 || MUX_mosi$write_1__VAL_1 ;
  assign mosi$EN =
	     WILL_FIRE_RL_spiFsm_action_l27c13 ||
	     WILL_FIRE_RL_spiFsm_action_l36c15 ;

  // register sck
  assign sck$D_IN = !WILL_FIRE_RL_spiFsm_action_l27c13 ;
  assign sck$EN =
	     WILL_FIRE_RL_spiFsm_action_l27c13 ||
	     spiFsm_state_mkFSMstate == 4'd2 ;

  // register spiFsm_start_reg
  assign spiFsm_start_reg$D_IN = !WILL_FIRE_RL_spiFsm_fsm_start ;
  assign spiFsm_start_reg$EN = WILL_FIRE_RL_spiFsm_fsm_start || EN_write ;

  // register spiFsm_start_reg_1
  assign spiFsm_start_reg_1$D_IN = spiFsm_start_wire$whas ;
  assign spiFsm_start_reg_1$EN = 1'd1 ;

  // register spiFsm_state_can_overlap
  assign spiFsm_state_can_overlap$D_IN =
	     spiFsm_state_set_pw$whas || spiFsm_state_can_overlap ;
  assign spiFsm_state_can_overlap$EN = 1'd1 ;

  // register spiFsm_state_fired
  assign spiFsm_state_fired$D_IN = spiFsm_state_set_pw$whas ;
  assign spiFsm_state_fired$EN = 1'd1 ;

  // register spiFsm_state_mkFSMstate
  always@(WILL_FIRE_RL_spiFsm_idle_l24c7 or
	  WILL_FIRE_RL_spiFsm_action_l25c13 or
	  WILL_FIRE_RL_spiFsm_action_l27c13 or
	  spiFsm_state_mkFSMstate or WILL_FIRE_RL_spiFsm_action_l36c15)
  begin
    case (1'b1) // synopsys parallel_case
      WILL_FIRE_RL_spiFsm_idle_l24c7: spiFsm_state_mkFSMstate$D_IN = 4'd0;
      WILL_FIRE_RL_spiFsm_action_l25c13: spiFsm_state_mkFSMstate$D_IN = 4'd1;
      WILL_FIRE_RL_spiFsm_action_l27c13: spiFsm_state_mkFSMstate$D_IN = 4'd2;
      spiFsm_state_mkFSMstate == 4'd2: spiFsm_state_mkFSMstate$D_IN = 4'd3;
      WILL_FIRE_RL_spiFsm_action_l36c15: spiFsm_state_mkFSMstate$D_IN = 4'd4;
      spiFsm_state_mkFSMstate == 4'd4: spiFsm_state_mkFSMstate$D_IN = 4'd5;
      spiFsm_state_mkFSMstate == 4'd5: spiFsm_state_mkFSMstate$D_IN = 4'd6;
      default: spiFsm_state_mkFSMstate$D_IN =
		   4'b1010 /* unspecified value */ ;
    endcase
  end
  assign spiFsm_state_mkFSMstate$EN =
	     WILL_FIRE_RL_spiFsm_idle_l24c7 ||
	     WILL_FIRE_RL_spiFsm_action_l25c13 ||
	     WILL_FIRE_RL_spiFsm_action_l27c13 ||
	     spiFsm_state_mkFSMstate == 4'd2 ||
	     WILL_FIRE_RL_spiFsm_action_l36c15 ||
	     spiFsm_state_mkFSMstate == 4'd4 ||
	     spiFsm_state_mkFSMstate == 4'd5 ;

  // register ss
  assign ss$D_IN = !WILL_FIRE_RL_spiFsm_action_l25c13 ;
  assign ss$EN =
	     WILL_FIRE_RL_spiFsm_action_l25c13 ||
	     spiFsm_state_mkFSMstate == 4'd4 ;

  // register wdata
  assign wdata$D_IN = write_data + 8'd13 ;
  assign wdata$EN = EN_write ;

  // remaining internal signals
  assign spiFsm_abort_whas_AND_spiFsm_abort_wget_OR_spi_ETC___d60 =
	     (spiFsm_state_mkFSMstate == 4'd0 ||
	      spiFsm_state_mkFSMstate == 4'd6) &&
	     (!spiFsm_start_reg_1 || spiFsm_state_fired) ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        cnt <= `BSV_ASSIGNMENT_DELAY 32'd7;
	mosi <= `BSV_ASSIGNMENT_DELAY 1'b1;
	sck <= `BSV_ASSIGNMENT_DELAY 1'b1;
	spiFsm_start_reg <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_start_reg_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_state_can_overlap <= `BSV_ASSIGNMENT_DELAY 1'd1;
	spiFsm_state_fired <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_state_mkFSMstate <= `BSV_ASSIGNMENT_DELAY 4'd0;
	ss <= `BSV_ASSIGNMENT_DELAY 1'b1;
	wdata <= `BSV_ASSIGNMENT_DELAY 8'h0;
      end
    else
      begin
        if (cnt$EN) cnt <= `BSV_ASSIGNMENT_DELAY cnt$D_IN;
	if (mosi$EN) mosi <= `BSV_ASSIGNMENT_DELAY mosi$D_IN;
	if (sck$EN) sck <= `BSV_ASSIGNMENT_DELAY sck$D_IN;
	if (spiFsm_start_reg$EN)
	  spiFsm_start_reg <= `BSV_ASSIGNMENT_DELAY spiFsm_start_reg$D_IN;
	if (spiFsm_start_reg_1$EN)
	  spiFsm_start_reg_1 <= `BSV_ASSIGNMENT_DELAY spiFsm_start_reg_1$D_IN;
	if (spiFsm_state_can_overlap$EN)
	  spiFsm_state_can_overlap <= `BSV_ASSIGNMENT_DELAY
	      spiFsm_state_can_overlap$D_IN;
	if (spiFsm_state_fired$EN)
	  spiFsm_state_fired <= `BSV_ASSIGNMENT_DELAY spiFsm_state_fired$D_IN;
	if (spiFsm_state_mkFSMstate$EN)
	  spiFsm_state_mkFSMstate <= `BSV_ASSIGNMENT_DELAY
	      spiFsm_state_mkFSMstate$D_IN;
	if (ss$EN) ss <= `BSV_ASSIGNMENT_DELAY ss$D_IN;
	if (wdata$EN) wdata <= `BSV_ASSIGNMENT_DELAY wdata$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    cnt = 32'hAAAAAAAA;
    mosi = 1'h0;
    sck = 1'h0;
    spiFsm_start_reg = 1'h0;
    spiFsm_start_reg_1 = 1'h0;
    spiFsm_state_can_overlap = 1'h0;
    spiFsm_state_fired = 1'h0;
    spiFsm_state_mkFSMstate = 4'hA;
    ss = 1'h0;
    wdata = 8'hAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_spiFsm_action_l27c13 &&
	  (spiFsm_state_mkFSMstate == 4'd2 ||
	   WILL_FIRE_RL_spiFsm_action_l36c15 ||
	   spiFsm_state_mkFSMstate == 4'd4 ||
	   spiFsm_state_mkFSMstate == 4'd5))
	$display("Error: \"SPIWriter.bsv\", line 27, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l27c13] and\n  [RL_spiFsm_action_l31c13, RL_spiFsm_action_l36c15, RL_spiFsm_action_l37c13,\n  RL_spiFsm_action_l38c14] ) fired in the same clock cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (spiFsm_state_mkFSMstate == 4'd2 &&
	  (WILL_FIRE_RL_spiFsm_action_l36c15 ||
	   spiFsm_state_mkFSMstate == 4'd4 ||
	   spiFsm_state_mkFSMstate == 4'd5))
	$display("Error: \"SPIWriter.bsv\", line 31, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l31c13] and\n  [RL_spiFsm_action_l36c15, RL_spiFsm_action_l37c13, RL_spiFsm_action_l38c14]\n  ) fired in the same clock cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_spiFsm_action_l36c15 &&
	  (spiFsm_state_mkFSMstate == 4'd4 ||
	   spiFsm_state_mkFSMstate == 4'd5))
	$display("Error: \"SPIWriter.bsv\", line 36, column 15: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l36c15] and\n  [RL_spiFsm_action_l37c13, RL_spiFsm_action_l38c14] ) fired in the same clock\n  cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (spiFsm_state_mkFSMstate == 4'd4 && spiFsm_state_mkFSMstate == 4'd5)
	$display("Error: \"SPIWriter.bsv\", line 37, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l37c13] and\n  [RL_spiFsm_action_l38c14] ) fired in the same clock cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_spiFsm_action_l25c13 &&
	  (WILL_FIRE_RL_spiFsm_action_l27c13 ||
	   spiFsm_state_mkFSMstate == 4'd2 ||
	   WILL_FIRE_RL_spiFsm_action_l36c15 ||
	   spiFsm_state_mkFSMstate == 4'd4 ||
	   spiFsm_state_mkFSMstate == 4'd5))
	$display("Error: \"SPIWriter.bsv\", line 25, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l25c13] and\n  [RL_spiFsm_action_l27c13, RL_spiFsm_action_l31c13, RL_spiFsm_action_l36c15,\n  RL_spiFsm_action_l37c13, RL_spiFsm_action_l38c14] ) fired in the same clock\n  cycle.\n");
  end
  // synopsys translate_on
endmodule  // mkSPIWriter

