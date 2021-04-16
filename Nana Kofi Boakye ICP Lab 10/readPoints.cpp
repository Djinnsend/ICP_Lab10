#include "stabbingLines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints){

  numPoints;
  pointsArray[numPoints];
  int val1,val2,val3;

  for(int i = 0; i < numPoints; i++){
    inPutPointFile>>val1>>val2>>val3;
    pointsArray[i] = {val1,val2,val3};
    cout<<"Point ID: "<<pointsArray[i].Pid << "\nX: "<< pointsArray[i].x<< "\nY: "<< pointsArray[i].y<<"\n\n";
  }
  
  inPutPointFile.close();
}
