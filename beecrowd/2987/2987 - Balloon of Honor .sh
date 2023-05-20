read -n1 L
value=$(( $(printf '%d' "'$L") - $(printf '%d' "'A") + 1 ))
echo $value
