#include <iostream>
#include <fstream>
#include "stabbingLines.h"

using namespace std ;

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){

     if(inPutLineFile.is_open()){
       cout<<"The lines in the file are: "<<endl;
       for(int i=0; i<=numLines; i++){
          inPutLineFile>>linesArray[i].Lid>>linesArray[i].p1>>linesArray[i].p2;
          cout<<linesArray[i].Lid<<" "<<linesArray[i].p1<<" "<<linesArray[i].p2<<endl;

       }
     }

}




