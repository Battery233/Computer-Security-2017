#!/bin/bash
script -c  "/home/task2/vuln2 $(<txt.txt)" output.txt >result.txt
sed -n 24p  output.txt > result.txt
sed -i 's/^.\{28\}//g' result.txt
cat result.txt
