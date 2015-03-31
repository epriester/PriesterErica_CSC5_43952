/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 31, 2015
 * Purpose: Find body mass index
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
    float weight,height,bmi;
    //Prompt user for Input
    cout<<"Enter the weight in pounds."<<endl;
    cin>>weight;
    cout<<"Enter the height in inches."<<endl;
    cin>>height;
    //Calculations
    bmi=(weight*703)/(height*height);
    //Output the Results
    cout<<"The body mass indes is "<<bmi<<endl;
    
    if(bmi>=18.5 && bmi<=25)
        cout<<"Optimal weight."<<endl;
    else if (bmi<18.5)
        cout<<"Under weight."<<endl;
    else
        cout<<"Over weight."<<endl;
    
    //Exit stage right!
    return 0;
}

