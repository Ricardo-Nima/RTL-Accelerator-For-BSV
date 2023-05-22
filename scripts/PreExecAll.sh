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

# iverilog ./zjout/build/tb\$top.INST_counter.v ./zjout/mkDecCounter.v -o tbout




# ./tbout > /dev/null
# iverilog ./zjout/build/tb\$top.INST_counter.INST_spi_writer.v ./zjout/mkSPIWriter.v -o tbout && ./tbout > /dev/null
# iverilog ./zjout/build/tb\$top.v ./zjout/mkTb.v -o tbout && ./tbout > /dev/null
# ./tbout > /dev/null
cd ../src

cd ../BSV_Test_Source
rm ./sim.out

bsc -verilog -g mkTb -u Hello.bsv > /dev/null
begin_time=`date +%s.%N`
bsc -verilog -e mkTb -o sim.out -vsim iverilog mkTb.v > /dev/null


rtl_begin_time=`date +%s.%N`
./sim.out +bscvcd > /dev/null

end_time=`date +%s.%N`


getTiming $begin_time $end_time
getTiming $rtl_begin_time $end_time
cd ../outputs
if [ ! -d "pre_vcd" ];then
    mkdir ./pre_vcd
fi
cd ./pre_vcd

mv ../../BSV_Test_Source/dump.vcd ./dump.vcd