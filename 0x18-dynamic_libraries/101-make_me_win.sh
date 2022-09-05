#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Josh-Adey/alx-low_level_programming/master/0x18-dynamic_libraries/libgigia.so
export LD_PRELOAD="$PWD/../libgiga.so"
