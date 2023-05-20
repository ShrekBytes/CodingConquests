#!/bin/bash

# read input
read a b c

# sort input
sorted=($(echo "$a $b $c" | sort -n))

# print sorted values
echo "${sorted[0]}"
echo "${sorted[1]}"
echo "${sorted[2]}"
echo ""

# print original values
echo "$a"
echo "$b"
echo "$c"
