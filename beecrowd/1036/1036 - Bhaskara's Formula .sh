#!/bin/bash

read A B C

delta=$(awk -v a=$A -v b=$B -v c=$C 'BEGIN { print b^2 - 4*a*c }')

if (( $(awk 'BEGIN {print "'$delta'" < 0}') == 1 )) || (( $(awk 'BEGIN {print "'$A'" == 0}') == 1 )); then
    echo "Impossivel calcular"
else
    R1=$(awk -v b=$B -v delta=$delta -v a=$A 'BEGIN { print (-b + sqrt(delta))/(2*a) }')
    R2=$(awk -v b=$B -v delta=$delta -v a=$A 'BEGIN { print (-b - sqrt(delta))/(2*a) }')
    printf "R1 = %.5f\n" $R1
    printf "R2 = %.5f\n" $R2
fi
