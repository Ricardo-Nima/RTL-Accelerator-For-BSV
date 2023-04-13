package SPIWriter;

import StmtFSM::*;


interface SPIWriter;
   method Action write(Bit#(8) data);
   method Bit#(3) spi;
endinterface


(* synthesize, always_ready="spi" *)
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
      wdata <= data + 13;
      spiFsm.start();
   endmethod

   method Bit#(3) spi = {ss,sck,mosi};
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

endmodule

endpackage
