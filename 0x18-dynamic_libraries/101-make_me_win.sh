#!/bin/bash
export LD_PRELOAD=$(pwd)/gm_override.so
./gm 9 8 10 24 75 9
