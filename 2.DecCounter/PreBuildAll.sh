#! /bin/sh

rm -rf zjout
mkdir zjout
cp ../1.Hello/Hello.bsv ./zjout
cp zj_CmakeLists.txt ./zjout/CmakeLists.txt
cp zj_main.cpp ./zjout/main.cpp

cd zjout
bsc -sim -g mkTb -u Hello.bsv 
bsc -sim -e mkTb -o sim.out 

bsc -verilog -g mkTb -u Hello.bsv 


cd ..

cd zjout

mkdir build && cd build
cmake ..
make
./top.exe > /dev/null