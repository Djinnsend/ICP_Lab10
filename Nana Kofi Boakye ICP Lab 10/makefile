solution: getStabbedLines.o printLineByCoords.o readLines.o readPoints.o testStabLineProg.o
	g++ getStabbedLines.o printLineByCoords.o readLines.o readPoints.o testStabLineProg.o -o solution

getStabbedLines.o: getStabbedLines.cpp
	g++ -c getStabbedLines.cpp

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

readLines.o: readLines.cpp
	g++ -c readLines.cpp

readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp 

testStabLineProg.o: testStabLineProg.cpp
	g++ -c testStabLineProg.cpp

clean:
	rm *.o solution



