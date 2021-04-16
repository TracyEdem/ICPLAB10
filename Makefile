all: stabbedline

stabbedline: StabLineProg.o pointReader.o lineReader.o linePrinter.o stabbedLines.o
		g++ StabLineProg.o pointReader.o lineReader.o linePrinter.o stabbedLines.o -o stabbedline

StabLineProg.o: StabLineProg.cpp
		g++ -c StabLineProg.cpp
	
pointReader.o: pointReader.cpp
		g++ -c pointReader.cpp
    
lineReader.o: lineReader.cpp
		g++ -c lineReader.cpp
	
linePrinter.o: linePrinter.cpp
		g++ -c linePrinter.cpp
	
stabbedLines.o: stabbedLines.cpp
		g++ -c stabbedLines.cpp
	
clean:
		rm -rf *o stabbedLine



