initial begin
	$dumpfile("mydump.vcd");
	$dumpvars(0, testbench);
end