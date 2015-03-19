/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015
 * Purpose: Find the batting average
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
    int batNum, batHits, avg;
    //Prompt user for input
    cout<<"How many times did the baseball player "; 
    cout<<"attempt to hit the ball?"<<endl;
    cin>>batNum;
    cout<<"How many times did the baseball player hit the ball?"<<endl;
    cin>>batHits;
    //Calculations
    avg=batNum/batHits;
    //Output the results
    cout<<"The baseball player's batting average is "<<avg<<endl;
    //Exit stage right!
    return 0;
}

