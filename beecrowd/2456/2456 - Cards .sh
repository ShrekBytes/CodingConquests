read a b c d e

if ((a > b && b > c && c > d && d > e)); then
    echo "D"
elif ((a < b && b < c && c < d && d < e)); then
    echo "C"
else
    echo "N"
fi
