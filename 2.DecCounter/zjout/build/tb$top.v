`timescale 1ns/1ns
module testbench();
 reg CLK, RST_N;
 reg [31 : 0] counter$count;
 reg  counter$overflow;
 mkTb U1(.CLK(CLK), 
		.RST_N(RST_N), 
		.counter$count(counter$count), 
		.counter$overflow(counter$overflow));
always begin
	#5 CLK = ~CLK;
end
initial begin
	RST_N = 0;
	#1 CLK = 1;
	#1 RST_N = 1;
end
 // port: counter$count
initial begin
	#0 counter$count = 18446744072277895850;
	#10 counter$count = 0;
	#10 counter$count = 1;
	#10 counter$count = 2;
	#10 counter$count = 3;
	#10 counter$count = 4;
	#10 counter$count = 5;
	#10 counter$count = 6;
	#10 counter$count = 7;
	#10 counter$count = 8;
	#10 counter$count = 9;
	#10 counter$count = 10;
	#10 counter$count = 11;
	#10 counter$count = 12;
	#10 counter$count = 13;
	#10 counter$count = 14;
	#10 counter$count = 15;
	#10 counter$count = 16;
	#10 counter$count = 17;
	#10 counter$count = 18;
	#10 counter$count = 19;
	#10 counter$count = 20;
	#10 counter$count = 21;
	#10 counter$count = 22;
	#10 counter$count = 23;
	#10 counter$count = 24;
	#10 counter$count = 25;
	#10 counter$count = 26;
	#10 counter$count = 27;
	#10 counter$count = 28;
	#10 counter$count = 29;
	#10 counter$count = 30;
	#10 counter$count = 31;
	#10 counter$count = 32;
	#10 counter$count = 33;
	#10 counter$count = 34;
	#10 counter$count = 35;
	#10 counter$count = 36;
	#10 counter$count = 37;
	#10 counter$count = 38;
	#10 counter$count = 39;
	#10 counter$count = 40;
	#10 counter$count = 41;
	#10 counter$count = 42;
	#10 counter$count = 43;
	#10 counter$count = 44;
	#10 counter$count = 45;
	#10 counter$count = 46;
	#10 counter$count = 47;
	#10 counter$count = 48;
	#10 counter$count = 49;
	#10 counter$count = 50;
	#10 counter$count = 51;
	#10 counter$count = 52;
	#10 counter$count = 53;
	#10 counter$count = 54;
	#10 counter$count = 55;
	#10 counter$count = 56;
	#10 counter$count = 57;
	#10 counter$count = 58;
	#10 counter$count = 59;
	#10 counter$count = 60;
	#10 counter$count = 61;
	#10 counter$count = 62;
	#10 counter$count = 63;
	#10 counter$count = 64;
	#10 counter$count = 65;
	#10 counter$count = 66;
	#10 counter$count = 67;
	#10 counter$count = 68;
	#10 counter$count = 69;
	#10 counter$count = 70;
	#10 counter$count = 71;
	#10 counter$count = 72;
	#10 counter$count = 73;
	#10 counter$count = 74;
	#10 counter$count = 75;
	#10 counter$count = 76;
	#10 counter$count = 77;
	#10 counter$count = 78;
	#10 counter$count = 79;
	#10 counter$count = 80;
	#10 counter$count = 81;
	#10 counter$count = 82;
	#10 counter$count = 83;
	#10 counter$count = 84;
	#10 counter$count = 85;
	#10 counter$count = 86;
	#10 counter$count = 87;
	#10 counter$count = 88;
	#10 counter$count = 89;
	#10 counter$count = 90;
	#10 counter$count = 91;
	#10 counter$count = 92;
	#10 counter$count = 93;
	#10 counter$count = 94;
	#10 counter$count = 95;
	#10 counter$count = 96;
	#10 counter$count = 97;
	#10 counter$count = 98;
	#10 counter$count = 99;
	#10 counter$count = 100;
	#10 counter$count = 101;
end
 // port: counter$overflow
initial begin
	#0 counter$overflow = 0;
end
 // for en_regs 

initial begin
	#1020 $finish;
end
endmodule
