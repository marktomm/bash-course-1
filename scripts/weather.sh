#!/bin/bash

API_KEY="9ab393863145949794c73013e6a01cad"
LAT=59
LON=24
UNIT="metric"

temperature=$(curl -s "https://api.openweathermap.org/data/2.5/weather?units=${UNIT}&lat=${LAT}&lon=${LON}&appid=${API_KEY}" | jq '.main.temp')

result=$(echo "$temperature < 4" | bc -l)

if [ "$result" -eq 1 ]; then
    echo "It may be slippery outside (temp is $temperature)"
else
    echo "The temp: $temperature"
fi

# https://home.openweathermap.org/api_keys
# https://openweathermap.org/current#one
