#include "stabbingLines.h"

int main() {

  ifstream inPutPointFile("inPutPointFile.txt");
  ifstream inPutLineFile("inPutLineFile.txt");
  Point pointsArray[8];
  Line linesArray[5];
  Line stabbedLines[5];
  int numPoints = 8;
  int numLines = 5;
  int lid = 0;
  int NumOfStbLines = 0;

  readPoints(inPutPointFile, pointsArray,500,numPoints);
  readLines(inPutLineFile, linesArray,500,numLines);

  getStabbedLines(4,linesArray, 500, 8, pointsArray, 500, stabbedLines, 500, NumOfStbLines);

}
