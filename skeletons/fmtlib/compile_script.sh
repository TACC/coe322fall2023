#!/bin/bash

if [ $# -eq 0 ] ; then
    echo "Usage: compile_script.sh program"
    exit
fi

icpx -o $1 $( pkg-config --cflags fmt ) $( pkg-config --libs fmt ) $1.cpp
echo "Successfully compiled $1"
