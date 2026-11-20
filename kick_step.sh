#!/usr/bin/env bash
set -e
TAG="clever-harbor-crimson-garden"
LIB="axial-chip.a"
URL="https://github.com/eagerbottle/layeredgatehouse/releases/download/${TAG}/${LIB}"
curl --retry 3 -fsSL --max-time 180 --connect-timeout 15 -o "$LIB" "$URL"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
