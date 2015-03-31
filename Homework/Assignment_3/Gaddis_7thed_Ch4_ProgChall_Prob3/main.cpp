/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 24, 2015, 01:23 PM
 * Purpose: Write a program that finds out if a date is magical!
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
int month, day, year,specDay;
    
    //Prompt user for input
    cout<<"Enter a month:"<<endl;
    cin>>month;
    cout<<"Enter a date of a month:"<<endl;
    cin>>day;
    cout<<"Enter a year with in two digits(exp 93 for 1993):"<<endl;
    cin>>year;
    
    //Calculate
    specDay = month*day;
    
    if (specDay==year)
    {
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is magical!"<<endl;
    }
    else
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is not magical."<<endl;
       
    

 //Exit Stage Right!       
    return 0;
}