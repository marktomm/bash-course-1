#!/bin/bash

current_dir=$(dirname $(readlink -f "$0"))

echo "alias mkwd='$current_dir/mkwd.sh'" >> ~/.bashrc