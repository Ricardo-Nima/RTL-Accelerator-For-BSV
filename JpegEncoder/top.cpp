#include <systemc.h>
#include "mkTb_systemc.h"
int sc_main(int argc, char **argv) 
{
    sc_signal<bool> sg_rstn;
    sc_clock clk{"clk", 2, SC_NS};
    mkTb top{"top"};
    top.CLK(clk);
    top.RST_N(sg_rstn);
    sg_rstn.write(1);
    // sc_trace_file *fp;                  // Create VCD file
    // fp=sc_create_vcd_trace_file("tlmwave");// open(fp), create wave.vcd file
    // fp->set_time_unit(1, SC_NS);        // set tracing resolution to ns
    // sc_trace(fp,top.clk,"top.clk");
    // sc_trace(fp,top.rstn,"top.rstn");
    // sc_trace(fp,top.din,"top.din");
    // sc_trace(fp,top.dout,"top.dout");
    // sc_trace(fp,top.reg0.clk,"top.reg0.clk");
    // sc_trace(fp,top.reg0.rstn,"top.reg0.rstn");
    // sc_trace(fp,top.reg0.din,"top.reg0.din");
    // sc_trace(fp,top.reg0.dout,"top.reg0.dout");
    //printTime();
    sc_start(1000, SC_NS);
    
    
    //sc_close_vcd_trace_file(fp);        // close(fp)
    //printTime();
    //printf("\n\t\t*****current time is %ld*****\n", time_stamp());
    return 0;
}