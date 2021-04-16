#include <iostream>
#include <fstream>
#include <string>
#include "stabbingLines.h"

using namespace std;

int main()
{
    int numLines,numPoints,numStbLines=0;

    cout<<"Enter the number of lines in the line file: "<<endl;
    cin>>numLines;
    cout<<"Enter the number of points in the point file: "<<endl;
    cin>>numPoints;
    Line stabbedLines[numLines];

    Point A; A.Pid=0; A.x=1; A.y=1;
    Point B; B.Pid=1; B.x=1; B.y=4;
    Point C; C.Pid=2; C.x=2; C.y=2;
    Point D; D.Pid=3; D.x=3; D.y=1;
    Point E; E.Pid=4; E.x=5; E.y=2;
    Point F; E.Pid=5; E.x=5; E.y=5;
    Point G; E.Pid=6; E.x=6; E.y=1;
    Point H; E.Pid=7; E.x=6; E.y=2;

    Line Al;    Al.Lid=0;   Al.p1=0;  Al.p2=6;
    Line Bl;    Bl.Lid=1;   Bl.p1=1;  Bl.p2=3;
    Line Cl;    Cl.Lid=2;   Cl.p1=2;  Cl.p2=4;
    Line Dl;    Dl.Lid=3;   Dl.p1=3;  Dl.p2=5;
    Line El;    El.Lid=4;   El.p1=1;  El.p2=7;

    ifstream linefile,pointfile;
    pointfile.open("pointData.txt",std::ios_base::in);
    Point pointArray[numPoints]={A,B,C,D,E,F,G,H};
    readPoints(pointfile,pointArray,numPoints-1,numPoints);

    linefile.open("lineData.txt",std::ios_base::in);
    Line lineArray[numLines]={Al,Bl,Cl,Dl,El};
    readLines(linefile,lineArray,numLines-1,numLines);

    printLineByCoords(0,lineArray,numLines,pointArray,numPoints);
    getStabbedLines(3,lineArray,numLines-1,numLines,pointArray,numPoints-1,stabbedLines,numLines-1,numStbLines);

    pointfile.close();
    linefile.close();


    return 0;
}


