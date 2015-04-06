/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on April 6, 2015, 10:00 AM
 * Purpose: Display a speed conversion chart
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
//Declare Variables
    int kph;
    float mph;
    cout<<"KPH"<<"   "<<"MPH"<<endl;
    
    for(kph=60;kph<=130;kph=kph+5)
    {
        mph=kph*0.6214;
        cout<<kph<<"    "<<setprecision(4)<<mph<<endl;
    }
    //Exit Stage Right
    return 0;
}

