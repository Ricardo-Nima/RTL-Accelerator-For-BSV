`timescale 1ns/1ns
module testbench();
 reg CLK, RST_N;
 reg [2 : 0] spi_writer$spi;
 reg [7 : 0] spi_writer$hook_write_data;
 mkDecCounter U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.spi_writer$spi(spi_writer$spi), 
		.spi_writer$hook_write_data(spi_writer$hook_write_data), 
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
	#1 RST_N = 1;
end
 // port: spi_writer$spi
initial begin
	#0 spi_writer$spi = 0;
	#10 spi_writer$spi = 7;
	#20 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 7;
	#30 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#20 spi_writer$spi = 7;
	#30 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 7;
	#30 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#20 spi_writer$spi = 7;
	#30 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 1;
	#10 spi_writer$spi = 3;
	#10 spi_writer$spi = 0;
	#10 spi_writer$spi = 2;
	#10 spi_writer$spi = 0;
end
 // port: spi_writer$hook_write_data
initial begin
	#0 spi_writer$hook_write_data = 170;
	#10 spi_writer$hook_write_data = 0;
	#220 spi_writer$hook_write_data = 21;
	#210 spi_writer$hook_write_data = 42;
	#210 spi_writer$hook_write_data = 63;
	#210 spi_writer$hook_write_data = 84;
end
 // for en_regs 

initial begin
	#1020 $finish;
end
endmodule
