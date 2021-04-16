#include <iostream>
#include "stabbingLines.h"

using namespace std ;

void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    PointId p1_id,p2_id;
    for(int i=0;i<=MaxLnsSize;i++){
            Line thisline = linesArray[i];
            if(thisline.Lid==lid){
              p1_id = thisline.p1;
              p2_id = thisline.p2;
            }
            cout<<"The line id is: "<<lid;
            for(int j=0;j<=MaxPntsSize;j++){
                Point thispoint = pointsArray[j];
                if(p1_id==thispoint.Pid){
                    cout<<"The coordinates are: "<<"("<<thispoint.x<<","<<thispoint.y<<")";
                    if(p2_id==thispoint.Pid){
                       cout<<" and "<<"("<<thispoint.x<<","<<thispoint.y<<")"<<endl;
                }
                }

            }

    }
};
