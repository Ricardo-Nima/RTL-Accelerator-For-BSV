module testbench();
  reg CLK, RST_N;
  // ports of submodule spi_writer
  reg [7 : 0] spi_writer$write_data;
  wire [7 : 0] spi_writer$out;
  wire [2 : 0] spi_writer$spi;
  wire spi_writer$RDY_write;
  reg spi_writer$EN_write;
  // submodule spi_writer

  //输入为CLK, RST_N, write_data, EN_write
  mkSPIWriter spi_writer(.CLK(CLK),
			 .RST_N(RST_N),
			 .write_data(spi_writer$write_data),
			 .EN_write(spi_writer$EN_write),
			 .RDY_write(spi_writer$RDY_write),
			 .spi(spi_writer$spi),
			 .out(spi_writer$out),
			 .RDY_out());

  always begin
    #5; CLK = ~CLK;
  end

  initial begin
    RST_N = 0;
    spi_writer$EN_write = 1;
    #1 CLK = 1;
    #1 RST_N = 1;
    
    spi_writer$write_data = 101;
    #8 spi_writer$EN_write = 1;
    #10 spi_writer$EN_write = 0;
  end
  initial begin
      #225 spi_writer$write_data = 10;
      spi_writer$EN_write = 1;
  end

  initial begin
    #500; $finish;
  end

  initial
  begin
  $dumpfile ("verilog.vcd");
  $dumpvars;
  end

endmodule