package hello;

import StmtFSM::*;


interface SPIWriter;
   method Action write(Bit#(8) data);
	method Bit#(8) hook_write_data;
   method Bit#(3) spi;
endinterface

interface DecCounter;                          // 模块 mkDecCounter 的接口，用于连接调用者和被调用者
   method UInt#(4) count;                      //    方法1：可被被调用者调用
   method Bool overflow;                       //    方法2：可被被调用者调用
endinterface


(* synthesize *)                               // 注释掉这行，则生成 Verilog 时不单独生成 mkDecCounter 模块，而是嵌入调用者代码体内。
module mkDecCounter (DecCounter);              // 模块名 mkDecCounter，被调用者，接口是DecCounter

   Reg#(UInt#(4)) cnt <- mkReg(0);             // 4bit 的计数变量（寄存器，或称为 D触发器）
   Bool oflow = cnt >= 9;                      // 判断 cnt 是否溢出，是组合逻辑
   Reg#(UInt#(4)) mycnt <- mkReg(0);             // 4bit 的计数变量（寄存器，或称为 D触发器）

   rule run_counter;
      cnt <= oflow ? 0 : cnt + 1;
   endrule

   rule run_mycnt;
      mycnt <= 0;
   endrule

   method UInt#(4) count = cnt;                // 必须实现方法1，这里直接返回 cnt 的值
   method Bool overflow = oflow;               // 必须实现方法2，这里直接返回 oflow 的值
endmodule


(* synthesize, always_ready="spi" *)
module mkSPIWriter (SPIWriter);
	Reg#(Bit#(8)) hook_reg_hook_write_data <- mkReg(8'h0);
   Reg#(bit) ss <- mkReg(1'b1);
   Reg#(bit) sck <- mkReg(1'b1);
   Reg#(bit) mosi <- mkReg(1'b1);
   Reg#(Bit#(8)) wdata <- mkReg(8'h0);
   Reg#(int) cnt <- mkReg(7);
   DecCounter counter <- mkDecCounter;         // 例化一个 mkDecCounter，并拿到它的接口
                                              // 该接口是 DecCounter 类型的， 命名为 counter
   FSM spiFsm <- mkFSM (
      seq
         ss <= 1'b0;                   
         while (cnt>=0) seq            
            action
               sck <= 1'b0;
               mosi <= wdata[cnt];
            endaction
            action
               sck <= 1'b1;
               cnt <= cnt - 1;
            endaction
         endseq
         mosi <= 1'b1;
         ss <= 1'b1;
         cnt <= 7;
      endseq );

	rule get_all_variable;
		$display("count = %d overflow = %d ", counter.count, counter.overflow);
	endrule
   rule test;
      $display("count=%d, oflow=%d",  counter.count , counter.overflow );   // 通过接口名 counter 来调用子模块，这里调用了 count 方法
      if( counter.overflow )                   // 通过接口名 counter 来调用子模块，这里调用了 overflow 方法
         $finish;
   endrule

   method Action write(Bit#(8) data);
		hook_reg_hook_write_data <= data;
      wdata <= data + 13;
      spiFsm.start();
   endmethod

   method Bit#(3) spi = {ss,sck,mosi};
   

	method Bit#(8) hook_write_data = hook_reg_hook_write_data;
endmodule



module mkTb ();
   SPIWriter spi_writer <- mkSPIWriter;

   mkAutoFSM(
      seq
         spi_writer.write(8'h65);
         spi_writer.write(8'h14);
         spi_writer.write(8'h00);
      endseq
   );
	rule get_all_variable;
		$display("spi = %d hook_write_data = %d ", spi_writer.spi, spi_writer.hook_write_data);
	endrule
   rule spi_show;                   // 每个时钟周期都打印 spi_writer 产生的 SPI 信号
      let spi = spi_writer.spi;
      $display(" (ss, sck, mosi) = (%1d, %1d, %1d)", spi[2], spi[1], spi[0]);
   endrule

endmodule

endpackage
