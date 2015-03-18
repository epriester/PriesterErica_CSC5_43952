/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015, 10:20 AM
 * Purpose: Find minimum insurance purchase on building
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables 
    float repCost; //cost to repair building
    float percent=0.80; // least percent of amount it would cost
    float minInsur; // minimum an=mount of insurance
    //Prompt user
    cout<<"How much does it cost to repair the structure?"<<endl;
    cin>>repCost;
    //Calculate
    minInsur=repCost*percent;
    //Output the results
    cout<<"The minimum amount of insurance that should be purchased ";
    cout<<"for the property is $"<<minInsur<<endl;
            
            
    
    return 0;
}

