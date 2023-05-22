package Hello;
import StmtFSM::*;

interface SPIWriter;
   method Action write(Bit#(8) data);
   method Bit#(3) spi;
endinterface

interface DecCounter;
   method UInt#(32) count;
   method Bool overflow;
endinterface

(* synthesize *)
module mkSPIWriter (SPIWriter);
   Reg#(bit) ss <- mkReg(1'b1);
   Reg#(bit) sck <- mkReg(1'b1);
   Reg#(bit) mosi <- mkReg(1'b1);
   Reg#(Bit#(8)) wdata <- mkReg(8'h0);
   Reg#(int) cnt <- mkReg(7);
   
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

   method Action write(Bit#(8) data);
      wdata <= data;
      spiFsm.start();
   endmethod
   method Bit#(3) spi = {ss,sck,mosi};
endmodule

(* synthesize *)
module mkDecCounter (DecCounter);

   Reg#(UInt#(32)) cnt <- mkReg(0);
   Bool oflow = cnt >= 4294967295;
   Reg#(UInt#(32)) forcnt <- mkReg(0);
   SPIWriter spi_writer <- mkSPIWriter;

   rule write_spi;
      Bit#(8) temp = truncate(pack(cnt));
      spi_writer.write(temp);
   endrule
   rule run_counter;
      cnt <= oflow ? 0 : cnt + 1;
   endrule

   rule spi_show;
      let spi = spi_writer.spi;
      $display(" (ss, sck, mosi) = (%1d, %1d, %1d)", spi[2], spi[1], spi[0]);
   endrule

   method UInt#(32) count = cnt;
   method Bool overflow = oflow;
endmodule

module mkTb ();
   DecCounter counter <- mkDecCounter;
   
   rule counter_show;
      $display("count=%d, oflow=%d",  counter.count , counter.overflow );
      if( counter.count > 100000 )
         $finish;
   endrule
endmodule

endpackage
