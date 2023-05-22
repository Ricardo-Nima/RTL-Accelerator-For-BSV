#! /bin/sh
cd ../src

rm -rf zjout
./get_module_info
cp zj_CmakeLists.txt ./zjout/CmakeLists.txt
cp zj_main.cpp ./zjout/main.cpp
cp Types.h ./zjout/Types.h

cd zjout
bsc -sim -g mkTb -u Hello.bsv 
bsc -sim -e mkTb -o sim.out 

bsc -verilog -g mkTb -u Hello.bsv 


cd ..
./change_cxx
cd zjout

mkdir build && cd build
cmake ..
make
./top.exe > /dev/null

# cd ../../../src
# begin_time=`date +%s.%N`
# iverilog ./zjout/build/tb\$top.INST_counter.v ./zjout/mkDecCounter.v -o tbout1.zjout
# iverilog ./zjout/build/tb\$top.INST_counter.INST_spi_writer.v ./zjout/mkSPIWriter.v -o tbout2.zjout
# iverilog ./zjout/build/tb\$top.v ./zjout/mkTb.v -o tbout3.zjout
# end_time=`date +%s.%N`
# getTiming $begin_time $end_time

# begin_time=`date +%s.%N`


