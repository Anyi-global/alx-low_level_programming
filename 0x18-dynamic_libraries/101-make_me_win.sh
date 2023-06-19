#!/bin/bash
gcc *.o -fPIC -shared -o libshare.so
LD_PRELOAD=$PWD/libshare.so
