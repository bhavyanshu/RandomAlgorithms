#!/bin/sh
read input
printf "%.3f" `echo $input | bc -l`
