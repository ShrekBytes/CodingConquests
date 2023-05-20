#!/bin/bash

read days

let "years = days / 365"
let "days = days % 365"
let "months = days / 30"
let "days = days % 30"

echo "$years ano(s)"
echo "$months mes(es)"
echo "$days dia(s)"