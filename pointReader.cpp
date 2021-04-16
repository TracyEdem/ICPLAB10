#include <iostream>
#include <string>
#include <fstream>
#include "stabbingLines.h"

using namespace std ;

void readPoints(ifstream& inputPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){


     if(inputPointFile.is_open()){
       cout<<"The points in the file are: "<<endl;
       for(int i=0; i<=numPoints; i++){
          inputPointFile>>pointsArray[i].Pid>>pointsArray[i].x>>pointsArray[i].y;
          cout<<pointsArray[i].Pid<<" "<<pointsArray[i].x<<" "<<pointsArray[i].y<<endl;

       }
     }

};
