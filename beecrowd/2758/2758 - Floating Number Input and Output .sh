#!/bin/bash

read a b
read c d

printf "A = %.6f, B = %.6f\n" $a $b
printf "C = %.6f, D = %.6f\n" $c $d

printf "A = %.1f, B = %.1f\n" $a $b
printf "C = %.1f, D = %.1f\n" $c $d

printf "A = %.2f, B = %.2f\n" $a $b
printf "C = %.2f, D = %.2f\n" $c $d

printf "A = %.3f, B = %.3f\n" $a $b
printf "C = %.3f, D = %.3f\n" $c $d

printf "A = %.3E, B = %.3E\n" $a $b
printf "C = %.3E, D = %.3E\n" $c $d

printf "A = %.0f, B = %.0f\n" $a $b
printf "C = %.0f, D = %.0f\n" $c $d