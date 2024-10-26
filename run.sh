#!/usr/bin/env bash

input_file="${1:-./main.cpp}"
output_file="${input_file%.*}"

g++ -std=c++11 -O2 -Wall "$input_file" -o "a.out" && "./a.out"

