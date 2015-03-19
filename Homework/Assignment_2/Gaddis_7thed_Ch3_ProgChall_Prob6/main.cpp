/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015
 * Purpose:Find the average from5 test scores
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
    float tstScr1,tstScr2,tstScr3,tstScr4,tstScr5,average;
    //Prompt user for Input
    cout<<"What was the test score for test 1?"<<endl;
    cin>>tstScr1;
    cout<<"What was the test score for test 2?"<<endl;
    cin>>tstScr2;
    cout<<"What was the test score for test 3?"<<endl;
    cin>>tstScr3;
    cout<<"What was the test score for test 4?"<<endl;
    cin>>tstScr4;
    cout<<"what was the test score for test 5?"<<endl;
    cin>>tstScr5;
    //Calculations
    average=(tstScr1+tstScr2+tstScr3+tstScr4+tstScr5)/5;
    //Output the Result
    cout<<"The average on the test scores is "<<average<<"."<<endl;        
    //Exit stage right!
    return 0;
}

