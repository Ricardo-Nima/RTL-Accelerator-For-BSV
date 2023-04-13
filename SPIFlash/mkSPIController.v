//
// Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
//
// On Tue Dec 27 17:20:15 CST 2022
//
//
// Ports:
// Name                         I/O  size props
// RDY_write                      O     1
// read                           O     8 reg
// RDY_read                       O     1
// sck_o                          O     1 reg
// mosi_o                         O     1 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// write_data                     I     8 reg
// miso_i_i                       I     1
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

module mkSPIController(CLK,
		       RST_N,

		       write_data,
		       EN_write,
		       RDY_write,

		       read,
		       RDY_read,

		       sck_o,

		       mosi_o,

		       miso_i_i);
  input  CLK;
  input  RST_N;

  // action method write
  input  [7 : 0] write_data;
  input  EN_write;
  output RDY_write;

  // value method read
  output [7 : 0] read;
  output RDY_read;

  // value method sck_o
  output sck_o;

  // value method mosi_o
  output mosi_o;

  // action method miso_i
  input  miso_i_i;

  // signals for module outputs
  wire [7 : 0] read;
  wire RDY_read, RDY_write, mosi_o, sck_o;

  // inlined wires
  wire spiFsm_start_wire$whas, spiFsm_state_set_pw$whas;

  // register cnt
  reg [31 : 0] cnt;
  wire [31 : 0] cnt$D_IN;
  wire cnt$EN;

  // register mosi
  reg mosi;
  wire mosi$D_IN, mosi$EN;

  // register rdata
  reg [7 : 0] rdata;
  wire [7 : 0] rdata$D_IN;
  wire rdata$EN;

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
  reg [2 : 0] spiFsm_state_mkFSMstate;
  reg [2 : 0] spiFsm_state_mkFSMstate$D_IN;
  wire spiFsm_state_mkFSMstate$EN;

  // register wdata
  reg [7 : 0] wdata;
  wire [7 : 0] wdata$D_IN;
  wire wdata$EN;

  // rule scheduling signals
  wire WILL_FIRE_RL_spiFsm_action_l31c13,
       WILL_FIRE_RL_spiFsm_action_l41c10,
       WILL_FIRE_RL_spiFsm_fsm_start,
       WILL_FIRE_RL_spiFsm_idle_l29c7;

  // inputs to muxes for submodule ports
  wire [31 : 0] MUX_cnt$write_1__VAL_1;
  wire MUX_mosi$write_1__VAL_1, MUX_sck$write_1__SEL_1;

  // remaining internal signals
  wire [7 : 0] x__h14338, y__h14389;
  wire NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___d88;

  // action method write
  assign RDY_write =
	     NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___d88 &&
	     !spiFsm_start_reg ;

  // value method read
  assign read = rdata ;
  assign RDY_read =
	     NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___d88 &&
	     !spiFsm_start_reg ;

  // value method sck_o
  assign sck_o = sck ;

  // value method mosi_o
  assign mosi_o = mosi ;

  // rule RL_spiFsm_fsm_start
  assign WILL_FIRE_RL_spiFsm_fsm_start =
	     (spiFsm_state_mkFSMstate == 3'd0 ||
	      spiFsm_state_mkFSMstate == 3'd4) &&
	     (!spiFsm_start_reg_1 || spiFsm_state_fired) &&
	     spiFsm_start_reg ;

  // rule RL_spiFsm_action_l31c13
  assign WILL_FIRE_RL_spiFsm_action_l31c13 =
	     !cnt[31] && spiFsm_start_wire$whas &&
	     spiFsm_state_mkFSMstate == 3'd0 ||
	     !cnt[31] && spiFsm_state_mkFSMstate == 3'd2 ||
	     !cnt[31] && spiFsm_start_wire$whas &&
	     spiFsm_state_mkFSMstate == 3'd4 ;

  // rule RL_spiFsm_action_l41c10
  assign WILL_FIRE_RL_spiFsm_action_l41c10 =
	     cnt[31] && spiFsm_start_wire$whas &&
	     spiFsm_state_mkFSMstate == 3'd0 ||
	     cnt[31] && spiFsm_state_mkFSMstate == 3'd2 ||
	     cnt[31] && spiFsm_start_wire$whas &&
	     spiFsm_state_mkFSMstate == 3'd4 ;

  // rule RL_spiFsm_idle_l29c7
  assign WILL_FIRE_RL_spiFsm_idle_l29c7 =
	     (cnt[31] || !spiFsm_start_wire$whas) &&
	     (!cnt[31] || !spiFsm_start_wire$whas) &&
	     spiFsm_state_mkFSMstate == 3'd4 ;

  // inputs to muxes for submodule ports
  assign MUX_sck$write_1__SEL_1 =
	     WILL_FIRE_RL_spiFsm_action_l41c10 ||
	     WILL_FIRE_RL_spiFsm_action_l31c13 ;
  assign MUX_cnt$write_1__VAL_1 = cnt - 32'd1 ;
  assign MUX_mosi$write_1__VAL_1 = wdata[cnt[2:0]] ;

  // inlined wires
  assign spiFsm_start_wire$whas =
	     WILL_FIRE_RL_spiFsm_fsm_start ||
	     spiFsm_start_reg_1 && !spiFsm_state_fired ;
  assign spiFsm_state_set_pw$whas =
	     WILL_FIRE_RL_spiFsm_idle_l29c7 ||
	     spiFsm_state_mkFSMstate == 3'd3 ||
	     WILL_FIRE_RL_spiFsm_action_l41c10 ||
	     spiFsm_state_mkFSMstate == 3'd1 ||
	     WILL_FIRE_RL_spiFsm_action_l31c13 ;

  // register cnt
  assign cnt$D_IN =
	     (spiFsm_state_mkFSMstate == 3'd1) ?
	       MUX_cnt$write_1__VAL_1 :
	       32'd7 ;
  assign cnt$EN =
	     spiFsm_state_mkFSMstate == 3'd1 ||
	     spiFsm_state_mkFSMstate == 3'd3 ;

  // register mosi
  assign mosi$D_IN =
	     WILL_FIRE_RL_spiFsm_action_l31c13 && MUX_mosi$write_1__VAL_1 ;
  assign mosi$EN =
	     WILL_FIRE_RL_spiFsm_action_l31c13 ||
	     WILL_FIRE_RL_spiFsm_action_l41c10 ;

  // register rdata
  assign rdata$D_IN = miso_i_i ? rdata | x__h14338 : rdata & y__h14389 ;
  assign rdata$EN = spiFsm_state_mkFSMstate == 3'd1 ;

  // register sck
  assign sck$D_IN = !MUX_sck$write_1__SEL_1 ;
  assign sck$EN =
	     WILL_FIRE_RL_spiFsm_action_l41c10 ||
	     WILL_FIRE_RL_spiFsm_action_l31c13 ||
	     spiFsm_state_mkFSMstate == 3'd1 ;

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
  always@(WILL_FIRE_RL_spiFsm_idle_l29c7 or
	  WILL_FIRE_RL_spiFsm_action_l31c13 or
	  spiFsm_state_mkFSMstate or WILL_FIRE_RL_spiFsm_action_l41c10)
  begin
    case (1'b1) // synopsys parallel_case
      WILL_FIRE_RL_spiFsm_idle_l29c7: spiFsm_state_mkFSMstate$D_IN = 3'd0;
      WILL_FIRE_RL_spiFsm_action_l31c13: spiFsm_state_mkFSMstate$D_IN = 3'd1;
      spiFsm_state_mkFSMstate == 3'd1: spiFsm_state_mkFSMstate$D_IN = 3'd2;
      WILL_FIRE_RL_spiFsm_action_l41c10: spiFsm_state_mkFSMstate$D_IN = 3'd3;
      spiFsm_state_mkFSMstate == 3'd3: spiFsm_state_mkFSMstate$D_IN = 3'd4;
      default: spiFsm_state_mkFSMstate$D_IN = 3'b010 /* unspecified value */ ;
    endcase
  end
  assign spiFsm_state_mkFSMstate$EN =
	     WILL_FIRE_RL_spiFsm_idle_l29c7 ||
	     WILL_FIRE_RL_spiFsm_action_l31c13 ||
	     spiFsm_state_mkFSMstate == 3'd1 ||
	     WILL_FIRE_RL_spiFsm_action_l41c10 ||
	     spiFsm_state_mkFSMstate == 3'd3 ;

  // register wdata
  assign wdata$D_IN = write_data ;
  assign wdata$EN = EN_write ;

  // remaining internal signals
  assign NOT_cnt_2_BIT_31_3_4_AND_spiFsm_abort_whas_AND_ETC___d88 =
	     (!cnt[31] && spiFsm_state_mkFSMstate == 3'd0 ||
	      !cnt[31] && spiFsm_state_mkFSMstate == 3'd4 ||
	      cnt[31] && spiFsm_state_mkFSMstate == 3'd0 ||
	      cnt[31] && spiFsm_state_mkFSMstate == 3'd4) &&
	     (!spiFsm_start_reg_1 || spiFsm_state_fired) ;
  assign x__h14338 = 8'd1 << cnt ;
  assign y__h14389 = ~x__h14338 ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        cnt <= `BSV_ASSIGNMENT_DELAY 32'd7;
	mosi <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rdata <= `BSV_ASSIGNMENT_DELAY 8'd0;
	sck <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_start_reg <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_start_reg_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_state_can_overlap <= `BSV_ASSIGNMENT_DELAY 1'd1;
	spiFsm_state_fired <= `BSV_ASSIGNMENT_DELAY 1'd0;
	spiFsm_state_mkFSMstate <= `BSV_ASSIGNMENT_DELAY 3'd0;
	wdata <= `BSV_ASSIGNMENT_DELAY 8'd0;
      end
    else
      begin
        if (cnt$EN) cnt <= `BSV_ASSIGNMENT_DELAY cnt$D_IN;
	if (mosi$EN) mosi <= `BSV_ASSIGNMENT_DELAY mosi$D_IN;
	if (rdata$EN) rdata <= `BSV_ASSIGNMENT_DELAY rdata$D_IN;
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
    rdata = 8'hAA;
    sck = 1'h0;
    spiFsm_start_reg = 1'h0;
    spiFsm_start_reg_1 = 1'h0;
    spiFsm_state_can_overlap = 1'h0;
    spiFsm_state_fired = 1'h0;
    spiFsm_state_mkFSMstate = 3'h2;
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
      if (WILL_FIRE_RL_spiFsm_action_l31c13 &&
	  (spiFsm_state_mkFSMstate == 3'd1 ||
	   WILL_FIRE_RL_spiFsm_action_l41c10 ||
	   spiFsm_state_mkFSMstate == 3'd3))
	$display("Error: \"SPIController.bsv\", line 31, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l31c13] and\n  [RL_spiFsm_action_l35c13, RL_spiFsm_action_l41c10, RL_spiFsm_action_l45c14]\n  ) fired in the same clock cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (spiFsm_state_mkFSMstate == 3'd1 &&
	  (WILL_FIRE_RL_spiFsm_action_l41c10 ||
	   spiFsm_state_mkFSMstate == 3'd3))
	$display("Error: \"SPIController.bsv\", line 35, column 13: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l35c13] and\n  [RL_spiFsm_action_l41c10, RL_spiFsm_action_l45c14] ) fired in the same clock\n  cycle.\n");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_spiFsm_action_l41c10 &&
	  spiFsm_state_mkFSMstate == 3'd3)
	$display("Error: \"SPIController.bsv\", line 41, column 10: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_spiFsm_action_l41c10] and\n  [RL_spiFsm_action_l45c14] ) fired in the same clock cycle.\n");
  end
  // synopsys translate_on
endmodule  // mkSPIController
