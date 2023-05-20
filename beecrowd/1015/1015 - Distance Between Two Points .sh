#!/bin/bash

read x1 y1
read x2 y2

awk -v x1="$x1" -v y1="$y1" -v x2="$x2" -v y2="$y2" 'BEGIN{printf "%.4f", sqrt((x2 - x1)^2 + (y2 - y1)^2)}'
