#!/bin/bash

# Loading animation
sp="/-\|"
echo -n ' '
printf "\e[38;2;232;226;0mCompiling...\e[0m"  # Printing "Compiling" in the specified color
while :; do
  for i in $(seq 0 3); do
    echo -ne "\b${sp:i:1}"
    sleep 0.2
  done
done