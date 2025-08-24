#!/bin/bash

echo "CLEAN Building LED_Blinker..."

rm -rf build
mkdir build

cd build

cmake ..
make

cd ..

echo "CLEAN Build complete. Executable is 'LED_Blinker'."