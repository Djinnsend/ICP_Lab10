#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize,
  const int NumLines, Point pointsArray[],
  const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize,
  int& NumOfStbLines){

    xcoord;
    NumOfStbLines;
    linesArray[NumLines];
    int numPoints;
    pointsArray[numPoints];
    int tempVal = 0;

    stabbedLines[NumOfStbLines];

    for(int i = 0; i < NumLines; i++){
      if(pointsArray[linesArray[i].p2].x >= xcoord){
        if(pointsArray[linesArray[i].p1].x <= xcoord){
          stabbedLines[tempVal] = linesArray[i];
          tempVal++;
          NumOfStbLines++;
        }
      }
    }

    for(int i = 0; i < NumOfStbLines-1; i++){
      printLineByCoords(stabbedLines[i].Lid, linesArray, 500, pointsArray, 500);
    }

  }

