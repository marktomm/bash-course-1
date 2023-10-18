#!/bin/bash

initbc() {
    cd ~/bash-course-1
    git stash
    git clean -fd .
    git checkout -- .
    git pull
    code .
}

