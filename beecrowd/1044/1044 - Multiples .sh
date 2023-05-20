#!/bin/bash

read A B

if [ $((A % B)) -eq 0 ] || [ $((B % A)) -eq 0 ]
then
    echo "Sao Multiplos"
else
    echo "Nao sao Multiplos"
fi
