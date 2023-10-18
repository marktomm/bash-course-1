#!/bin/bash

if grep "bash-course-1/scripts/reload.sh" ~/.bashrc
then
    echo "Already done"
    exit 10
fi

echo ". ~/bash-course-1/scripts/reload.sh" >> ~/.bashrc