#!/bin/bash

./build.sh

if 
./app true true
then
    echo OK
else
    echo "ERROR!"
fi
