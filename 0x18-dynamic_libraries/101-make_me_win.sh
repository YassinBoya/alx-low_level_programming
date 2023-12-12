#!/bin/bash
wget -P /tmp https://github.com/YassinBoya/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD8PRELOAD=/tmp/libgiga
