#include "stabbingLines.h"

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, int& numLines){

  numLines;
  linesArray[numLines];
  int val1,val2,val3;

  for(int i = 0; i < numLines; i++){
    inPutLineFile>>val1>>val2>>val3;
    linesArray[i] = {val1,val2,val3};
    cout<<"Line ID: "<<linesArray[i].Lid << "\nPoint_One: "<< linesArray[i].p1<< "\nPoint_Two: "<< linesArray[i].p2<<"\n\n";
  }

  inPutLineFile.close();

}
