/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on April 6, 2015, 9:48 AM
 * Purpose: Loop a table that converts Celsius to Fahrenheit from 0 to 20
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    cout<<"Celsius"<<" "<<"Fahrenheit"<<endl;
    
    for(int C=0;C<=20;C++)
    {
        float F;
        //Calculate
        F=(9/5)*C+32;
        cout<<C<<"       "<<F<<endl;
    }
    //Exit Stage Right
    return 0;
}

