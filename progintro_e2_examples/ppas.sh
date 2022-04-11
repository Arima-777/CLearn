#!/bin/sh
DoExitAsm ()
{ echo "An error occurred while assembling $1"; exit 1; }
DoExitLink ()
{ echo "An error occurred while linking $1"; exit 1; }
echo Linking /home/arima/Рабочий стол/progintro_e2_examples/hanoi
OFS=$IFS
IFS="
"
/usr/bin/ld -b elf64-x86-64 -m elf_x86_64       -L. -o '/home/arima/Рабочий стол/progintro_e2_examples/hanoi' -T '/home/arima/Рабочий стол/progintro_e2_examples/link.res' -e _start
if [ $? != 0 ]; then DoExitLink /home/arima/Рабочий стол/progintro_e2_examples/hanoi; fi
IFS=$OFS
