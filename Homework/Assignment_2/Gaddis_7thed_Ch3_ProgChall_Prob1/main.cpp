/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 16, 2015, 9:42 AM
 * Purpose: Calculate mile per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables 
    int galGas, miles, mpg;
    //Prompt use for input
    cout<<"What is the total number of gallons of gas the car can hold?"<<endl;
    cin>>galGas;
    cout<<"What is the number of miles ";
            cout<<"the car can be driven on a full tank?"<<endl;
    cin>>miles;
    //Calculate the MPG
    mpg=miles/galGas;
    //Ouput the results
    cout<<"The car gets "<<mpg<<" miles per gallon."<<endl;
    return 0;
}

