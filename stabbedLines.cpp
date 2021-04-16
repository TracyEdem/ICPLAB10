#include <iostream>
#include "stabbingLines.h"

using namespace std ;

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize,const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],const int MaxStbSize, int& NumOfStbLines){
    int x1,x2;

    for(int j=0;j<NumLines;j++){
            Line l=linesArray[j];
        for(int a=0;a<MaxPtsSize;a++){
            if(l.p1==pointsArray[a].Pid){
                Point point1 = pointsArray[a];
                x1= point1.x;
            }
            if(l.p2==pointsArray[a].Pid){
                Point point2 = pointsArray[a];
                x2= point2.x;
            }
        }
        if(x2>=xcoord && x1<=xcoord){
            stabbedLines[NumOfStbLines]=l;
            NumOfStbLines++;
        }
    };

    cout<<"The stabbed lines are: "<<endl;
    for(int j=0;j<NumOfStbLines;j++){
        Line stbline=stabbedLines[j];
        cout<<stbline.Lid<<", ";
    };

};


