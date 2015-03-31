/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 23, 2015, 10:23 AM
 * Purpose: Find the minimum and maximum between two numbers
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
    float num1, num2;
    
    //Prompt user for input
    cout<<"What is the first number?"<<endl;
    cin>>num1;
    cout<<"What is the second number?"<<endl;
    cin>>num2;
    //Calculate Conditional Operator
    if (num1>num2)
    { cout<<num1<<" is larger than "<<num2<<endl;
    }
    else   
    {
    cout<<num1<<" is smaller than "<<num2<<endl;
    }
 //Exit Stage Right!       
    return 0;
}