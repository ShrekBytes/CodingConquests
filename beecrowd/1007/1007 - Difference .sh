#!/bin/bash

read A
read B
read C
read D

let "diff = (A * B) - (C * D)"

echo "DIFERENCA = $diff"