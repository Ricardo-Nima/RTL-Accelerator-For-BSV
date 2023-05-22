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

./PreBuildAll.sh > /dev/null

end_time=`date +%s.%N`
echo "Time In PreBuildAll.sh"
getTiming $begin_time $end_time
echo ""
echo "Time In PreExecAll.sh"
./PreExecAll.sh
echo ""

begin_time=`date +%s.%N`
./BuildAll.sh > /dev/null
end_time=`date +%s.%N`
echo "Time In BuildAll.sh"
getTiming $begin_time $end_time
echo ""
echo "Time In ExecAll.sh"
./ExecAll.sh
echo ""


