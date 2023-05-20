#!/bin/bash

while read a && read b && read c
do
  echo "A = $a, B = $b, C = $c"
  echo "A = $b, B = $c, C = $a"
  echo "A = $c, B = $a, C = $b"
done
