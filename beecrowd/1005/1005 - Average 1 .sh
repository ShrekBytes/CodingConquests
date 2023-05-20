#!/bin/bash

read A
read B

awk -v a="$A" -v b="$B" 'BEGIN{printf "MEDIA = %.5f\n", ((a * 3.5) + (b * 7.5)) / 11}'
