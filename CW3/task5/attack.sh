#!/bin/bash
(python getfile.py | nc 127.0.0.1 6666) > output.txt
sed -n 2p output.txt
