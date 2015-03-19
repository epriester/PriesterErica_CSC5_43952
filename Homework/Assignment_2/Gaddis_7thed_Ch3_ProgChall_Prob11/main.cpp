/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float calServ=300, bagCook=10, calCons, sglCal,numCook;
    //Prompt user for Input
    cout<<"How many cookies did you eat? (wholes)"<<endl;
    cin>>numCook;
    //Calculations
    sglCal=calServ/bagCook;
    calCons=sglCal*numCook;
    //Output the Results
    cout<<"You consumed "<<calCons<<" calories."<<endl;
    //Exit stage right!
    return 0;
}

