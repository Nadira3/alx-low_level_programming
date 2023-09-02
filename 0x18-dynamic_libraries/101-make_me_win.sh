#!/bin/bash
gcc -shared -o libtime.so -fPIC time.c
export LIBRARY_PATH="./libtime.so"
