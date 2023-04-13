module testbench();
 reg CLK, RST_N;
 reg [8 : 0] write_data;
 reg [4 : 0] counter$count;
 reg [1 : 0] counter$overflow;
 reg EN_write;
 mkSPIWriter U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.EN_write(EN_write), 
		.RDY_write(), 
		.write_data(write_data), 
		.counter$count(counter$count), 
		.counter$overflow(counter$overflow), 
		.spi(), 
		.RDY_spi(), 
		.hook_write_data(), 
		.RDY_hook_write_data());
always begin
	#5 CLK = ~CLK;
end
initial begin
	RST_N = 0;
	#1 CLK = 1;
	#1RST_n = 1;
end
 // port: write_data
initial begin
	#0 write_data = 170
	#10 write_data = 0
	#20 write_data = 101
end
 // port: counter$count
initial begin
	#0 counter$count = 10
	#10 counter$count = 0
	#20 counter$count = 1
	#30 counter$count = 2
	#40 counter$count = 3
	#50 counter$count = 4
	#60 counter$count = 5
	#70 counter$count = 6
	#80 counter$count = 7
	#90 counter$count = 8
	#100 counter$count = 9
end
 // port: counter$overflow
initial begin
	#0 counter$overflow = 1
	#10 counter$overflow = 0
	#100 counter$overflow = 1
end
 // for en_regs 

initial begin
	EN_write = 1;
end
initial begin
	#100 $finish;
end
