cmake_minimum_required(VERSION 3.12)
project(top.exe)

#set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/systemc-2.3.3/include)
link_directories(/usr/local/systemc-2.3.3/lib-linux64)
include_directories(/mnt/c/Users/Jason/Desktop/Bsv-Tutorial/BSV_Tutorial_cn/src/2.DecCounter)
include_directories(/opt/bsc/lib/Bluesim)
link_directories(/opt/bsc/lib/Bluesim)

add_executable(top.exe  main.cpp
                        mkDecCounter.cxx
                        mkSPIWriter.cxx
                        mkTb.cxx
                        model_mkTb.cxx)


target_link_libraries(top.exe bskernel bsprim pthread)

# g++ -I/usr/local/systemc-2.3.3/include -I/opt/bsc/lib/Bluesim \
# -L/usr/local/systemc-2.3.3/lib-linux64 -L/opt/bsc/lib/Bluesim \
# -o top.exe top.cpp mkTb.o mkTb_systemc.o model_mkTb.o mkJpegEncoder.cxx \
# -lsystemc -lbskernel -lbsprim -lpthread