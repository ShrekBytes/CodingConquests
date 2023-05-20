#!/bin/bash

function Sum()
{
  local n=$1
  let "sum = (n * (n + 1)) / 2"
  echo "$sum"
}

read from to

rSum=$(( $(Sum $to) - $(Sum $from-1) ))

echo "$rSum"
