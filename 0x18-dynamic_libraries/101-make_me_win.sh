#!/bin/bash
wget -P /tmp/ https://github.com/erickadikah/alx-low_level_programming/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD="$PWD/../libgiga.so"
