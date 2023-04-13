module testbench();
 reg CLK, RST_N;
 reg [3 : 0] spi_writer$spi;
 reg [8 : 0] spi_writer$hook_write_data;
 mkTb U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.spi_writer$spi(spi_writer$spi), 
		.spi_writer$hook_write_data(spi_writer$hook_write_data));
always begin
	#5 CLK = ~CLK;
end
initial begin
	RST_N = 0;
	#1 CLK = 1;
	#1RST_n = 1;
end
 // port: spi_writer$spi
initial begin
	#0 spi_writer$spi = 0
	#10 spi_writer$spi = 7
	#40 spi_writer$spi = 3
	#50 spi_writer$spi = 0
	#60 spi_writer$spi = 2
	#70 spi_writer$spi = 1
	#80 spi_writer$spi = 3
	#90 spi_writer$spi = 1
	#100 spi_writer$spi = 3
end
 // port: spi_writer$hook_write_data
initial begin
	#0 spi_writer$hook_write_data = 170
	#10 spi_writer$hook_write_data = 0
	#30 spi_writer$hook_write_data = 101
end
 // for en_regs 

initial begin
	#100 $finish;
end
