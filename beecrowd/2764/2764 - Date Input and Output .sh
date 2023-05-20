#!/bin/bash

while read date && [ -n "$date" ]
do

  IFS='/' read -r dd mm yy <<< "$date"

  printf "%02d/%02d/%02d\n" "$mm" "$dd" "$yy"
  printf "%02d/%02d/%02d\n" "$yy" "$mm" "$dd"
  printf "%02d-%02d-%02d\n" "$dd" "$mm" "$yy"

done
