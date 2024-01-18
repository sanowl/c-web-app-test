#!/bin/bash

# Compile C code to WebAssembly
emcc wasm/main.c -o build/main.js -s EXPORTED_FUNCTIONS="['_add']"
