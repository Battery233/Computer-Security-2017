#!/bin/bash
(/home/task4/vuln4 $(<txt.txt) $(<txt2.txt) < txt3.txt)>result.txt
sed -n 1p result.txt
