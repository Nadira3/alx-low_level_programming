#!/bin/bash
gcc -shared -o libtime.so -fPIC time.c
LIBRARY_PATH="./libtime.so"
