#!/bin/bash

read N

I=$(awk -v n=$N 'BEGIN {printf "%.0f", n*100}')

n100=$(($I / 10000))
I=$(($I % 10000))
n50=$(($I / 5000))
I=$(($I % 5000))
n20=$(($I / 2000))
I=$(($I % 2000))
n10=$(($I / 1000))
I=$(($I % 1000))
n5=$(($I / 500))
I=$(($I % 500))
n2=$(($I / 200))
I=$(($I % 200))

c100=$(($I / 100))
I=$(($I % 100))
c50=$(($I / 50))
I=$(($I % 50))
c25=$(($I / 25))
I=$(($I % 25))
c10=$(($I / 10))
I=$(($I % 10))
c5=$(($I / 5))
I=$(($I % 5))
c1=$(($I / 1))

echo "NOTAS:"
echo "$n100 nota(s) de R$ 100.00"
echo "$n50 nota(s) de R$ 50.00"
echo "$n20 nota(s) de R$ 20.00"
echo "$n10 nota(s) de R$ 10.00"
echo "$n5 nota(s) de R$ 5.00"
echo "$n2 nota(s) de R$ 2.00"

echo "MOEDAS:"
echo "$c100 moeda(s) de R$ 1.00"
echo "$c50 moeda(s) de R$ 0.50"
echo "$c25 moeda(s) de R$ 0.25"
echo "$c10 moeda(s) de R$ 0.10"
echo "$c5 moeda(s) de R$ 0.05"
echo "$c1 moeda(s) de R$ 0.01"
