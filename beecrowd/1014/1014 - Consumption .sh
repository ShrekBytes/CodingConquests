#!/bin/bash

read X
read Y

awk -v x="$X" -v y="$Y" 'BEGIN{printf "%.3f km/l\n", (x/y)}'
