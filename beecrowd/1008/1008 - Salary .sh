#!/bin/bash

read nEmployee
read hWorked
read hSalary

tSalary=$(awk -v hours="$hWorked" -v rate="$hSalary" 'BEGIN {printf("%.2f", hours*rate)}')

echo "NUMBER = $nEmployee"
echo "SALARY = U\$ $tSalary"
