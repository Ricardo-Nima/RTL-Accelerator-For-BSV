module testbench();
 reg CLK, RST_N;
 mkDecCounter U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.count(), 
		.RDY_count(), 
		.overflow(), 
		.RDY_overflow());
always begin
	#5 CLK = ~CLK;
end
initial begin
	RST_N = 0;
	#1 CLK = 1;
	#1RST_n = 1;
end
 // for en_regs 

initial begin
	#100 $finish;
end
