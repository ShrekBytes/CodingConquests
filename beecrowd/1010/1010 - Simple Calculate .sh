#!/bin/bash

read code1 unit1 price1
tPrice1=$(awk -v u1=$unit1 -v p1=$price1 'BEGIN{printf "%.2f", p1 * u1}')

read code2 unit2 price2
tPrice2=$(awk -v u2=$unit2 -v p2=$price2 'BEGIN{printf "%.2f", p2 * u2}')

total=$(awk -v tp1=$tPrice1 -v tp2=$tPrice2 'BEGIN{printf "%.2f", tp1 + tp2}')

echo "VALOR A PAGAR: R\$ $total"
