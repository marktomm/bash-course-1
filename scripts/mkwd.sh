#!/bin/bash

week=$1
day=$2
path=week$week/day$day 

mkdir -p $path 
touch $path/code.md $path/theory.md $path/practice.md