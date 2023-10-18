#!/bin/bash

currentclip=$(xclip -selection clipboard -o)

cleanclip=$(echo "$currentclip" | grep -v "^$")

echo "$cleanclip" | xclip -selection clipboard