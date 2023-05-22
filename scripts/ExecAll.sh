#!/bin/bash
function getTiming(){
    start=$1
    end=$2

    start_s=`echo $start | cut -d '.' -f 1`
    start_ns=`echo $start | cut -d '.' -f 2`
    end_s=`echo $end | cut -d '.' -f 1`
    end_ns=`echo $end | cut -d '.' -f 2`

    time_micro=$(( (10#$end_s-10#$start_s)*1000000 + (10#$end_ns/1000 - 10#$start_ns/1000) ))
    time_ms=`expr $time_micro/1000  | bc `

    echo "$time_micro microseconds"
    echo "$time_ms ms"
}

cd ../outputs
if [ ! -d "vcd" ];then
    mkdir ./vcd
fi
cd ./vcd


begin_time=`date +%s.%N`
iverilog ../../src/zjout/build/tb\$top.INST_counter.v ../../src/zjout/mkDecCounter.v -o tbout1.zjout &
iverilog ../../src/zjout/build/tb\$top.INST_counter.INST_spi_writer.v ../../src/zjout/mkSPIWriter.v -o tbout2.zjout &
iverilog ../../src/zjout/build/tb\$top.v ../../src/zjout/mkTb.v -o tbout3.zjout &
wait
# end_time=`date +%s.%N`
# getTiming $begin_time $end_time

# # begin_time=`date +%s.%N`
# # iverilog ./zjout/build/tb\$top.INST_counter.v ./zjout/mkDecCounter.v -o tbout1.zjout
# # iverilog ./zjout/build/tb\$top.INST_counter.INST_spi_writer.v ./zjout/mkSPIWriter.v -o tbout2.zjout
# # iverilog ./zjout/build/tb\$top.v ./zjout/mkTb.v -o tbout3.zjout
# # end_time=`date +%s.%N`
# # getTiming $begin_time $end_time

# rtl_begin_time=`date +%s.%N`
# i=0
# for file in ./*.zjout
# do
# i=`expr $i + 1`
# {
#     taskset -c $i ./$file > /dev/null start
#     echo $i
# }&
# done
# wait
rtl_begin_time=`date +%s.%N`
for file in ./*.zjout
do
{
    ./$file > /dev/null
}&
done
wait

# for file in ./*.zjout
# do
# {
#     rtl_begin_time=`date +%s.%N`
#     ./$file > /dev/null
#     end_time=`date +%s.%N`
#     getTiming $rtl_begin_time $end_time
# }
# done
# wait

# cd ../1.Hello
# rm ./sim.out
# bsc -verilog -g mkTb -u Hello.bsv 
# bsc -verilog -e mkTb -o sim.out -vsim iverilog mkTb.v 
# ./sim.out > /dev/null


end_time=`date +%s.%N`
getTiming $begin_time $end_time
getTiming $rtl_begin_time $end_time


for file in ./*.zjout
do
{
    rm ./$file
}&
done
wait



# cmd_array=(
# "iverilog ./zjout/build/tb\$top.INST_counter.v ./zjout/mkDecCounter.v -o tbout1.zjout"
# "iverilog ./zjout/build/tb\$top.INST_counter.INST_spi_writer.v ./zjout/mkSPIWriter.v -o tbout2.zjout"
# "iverilog ./zjout/build/tb\$top.v ./zjout/mkTb.v -o tbout3.zjout"
# )

# for str in ${cmd_array[@]}
# do
# {
#     eval $str
# }&
# done

# wait