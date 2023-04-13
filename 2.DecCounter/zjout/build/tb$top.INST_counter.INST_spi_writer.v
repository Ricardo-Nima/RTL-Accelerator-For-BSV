`timescale 1ns/1ns
module testbench();
 reg CLK, RST_N;
 reg [7 : 0] write_data;
 reg EN_write;
 mkSPIWriter U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.EN_write(EN_write), 
		.RDY_write(), 
		.write_data(write_data), 
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
	#1 RST_N = 1;
end
 // port: write_data
initial begin
	#0 write_data = 170;
	#10 write_data = 0;
	#210 write_data = 21;
	#210 write_data = 42;
	#210 write_data = 63;
	#210 write_data = 84;
end
 // for en_regs 

initial begin
	#0 EN_write = 0;
	#10 EN_write = 1;
	#10 EN_write = 0;
	#190 EN_write = 1;
	#10 EN_write = 0;
	#200 EN_write = 1;
	#10 EN_write = 0;
	#200 EN_write = 1;
	#10 EN_write = 0;
	#200 EN_write = 1;
	#10 EN_write = 0;
end
initial begin
	#1020 $finish;
end
endmodule
