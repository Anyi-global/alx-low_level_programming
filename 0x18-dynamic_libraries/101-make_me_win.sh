#!/bin/bash
wget -P /tmp https://github.com/Anyi-global/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
