#include "stabbingLines.h"

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize)
{

  lid;

  Line LineSet = linesArray[lid];
  int x1, y1, x2, y2;

  Point PointOne = pointsArray[LineSet.p1];
  Point PointTwo = pointsArray[LineSet.p2];

  x1 = PointOne.x;
  y1 = PointOne.y;

  x2 = PointTwo.x;
  y2 = PointTwo.y;

  cout << "The Line is:" << lid << "\nPoints: " << PointOne.Pid << " , " << PointTwo.Pid
       << "\nCoords: (" << x1 << "," << y1 << ") , (" << x2 << "," << y2 << ")";
}
