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

begin_time=`date +%s.%N`

iverilog ./zjout/build/tb\$top.INST_counter.v ./zjout/mkDecCounter.v -o tbout1.zjout
iverilog ./zjout/build/tb\$top.INST_counter.INST_spi_writer.v ./zjout/mkSPIWriter.v -o tbout2.zjout
iverilog ./zjout/build/tb\$top.v ./zjout/mkTb.v -o tbout3.zjout

# for file in ./*.zjout
# do
# {
#     ./$file > /dev/null
# }&
# done
# wait

# cd ../1.Hello
# rm ./sim.out
# bsc -verilog -g mkTb -u Hello.bsv 
# bsc -verilog -e mkTb -o sim.out -vsim iverilog mkTb.v 
# ./sim.out > /dev/null

end_time=`date +%s.%N`


getTiming $begin_time $end_time


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