#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VmkTb.h"
#include <time.h>
#include <stdio.h>
#include <iostream>

#include <sys/time.h>
 
void printTime()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    printf("timestamp is %ld.%ld\n", tv.tv_sec, tv.tv_usec);
}

time_t time_stamp() {
    return time(NULL);
}
using namespace std;

VmkTb *top;
VerilatedVcdC *tfp;


vluint64_t main_time = 0;
//const vluint64_t sim_time = 1000;

int main(int argc, char **argv)
{
    
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VmkTb;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("rtlwave.vcd");
    //printTime();
    while(!Verilated::gotFinish())
    {
        if (main_time% 2) {
            top->CLK = 0;
        } else {
            top->CLK = 1;
        }
        if (main_time < 2) {
            top->RST_N = 0;
        } else {
            top->RST_N = 1;
        }
        top->eval();
        tfp->dump(main_time++);
        //cout << main_time << " " << (main_time / 5) % 2 << endl;
    }

    tfp->close();
    delete top;
    delete tfp;

    //printTime();
    exit(0);
    return 0;
}