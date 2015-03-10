/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:How much the ocean's level rises in 5, 7 & 10 years
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
    float currMil=1.5, yrs5=5, yrs7=7, yrs10=10;
    float ttlMil5, ttlMil7, ttlMil10, difMil5, difMil7, difMil10;
    //Calculate the total numbers of millimeters the ocean's level will be
    // higher than the current ocean's level in 5,7 & 10 years
    ttlMil5=yrs5*currMil;
    difMil5=ttlMil5-currMil;
    ttlMil7=yrs7*currMil;
    difMil7=ttlMil7-currMil;
    ttlMil10=yrs10*currMil;
    difMil10=ttlMil10-currMil;
    //Prompt
    cout<<"In 5 years the ocean's level will be "<<difMil5;
            cout<<" millimeters higher than the current level."<<endl;
    cout<<"In 7 years the ocean's level will be "<<difMil7;
            cout<<" millimeters higher than the current level."<<endl;
    cout<<"In 10 years the ocean's level will be "<<difMil10;
            cout<<" millimeters higher than the current level."<<endl;
    //Exit stage right!
    return 0;
}

