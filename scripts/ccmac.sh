#!/bin/bash

currentclip=$(pbcopy)

cleanclip=$(echo "$currentclip" | grep -v "^$")

echo "$cleanclip" | pbcoby