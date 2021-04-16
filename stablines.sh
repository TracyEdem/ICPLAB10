#!/usr/bin/bash

echo "Start Compiling"
echo "Compiling pointReader.cpp"
g++ -std=c++11 -c pointReader.cpp

echo "Compiling lineReader.cpp"
g++ -std=c++11 -c lineReader.cpp

echo "Compiling linePrinter.cpp"
g++ -std=c++11 -c linePrinter.cpp

echo "Compiling stabbedlines.cpp"
g++ -std=c++11 -c stabbedlines.cpp

echo "Compiling StabLineProg.cpp"
g++ -std=c++11 -c StabLineProg.cpp

g++ -std=c++17 StabLineProg.o pointReader.o  lineReader.o linePrinter.o stabbedlines.o\
-o StabLineProg
echo "Done compiling"
