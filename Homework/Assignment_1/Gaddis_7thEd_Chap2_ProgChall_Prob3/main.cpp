/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:Homework1
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the variables 
    float purchase= 52, stateTax= 0.04, cntryTax= 0.02, totalTax; 
    //Calculate the total
    totalTax= purchase*(stateTax+cntryTax);
    cout<<"If you make a $"<<purchase<<" purchase, "<<endl;
    cout<<"With a state sales tax of 4% and a country sales tax of 2%"<<endl;
    cout<<"The total sales tax will be $"<<totalTax<<endl;
    //Exit stage right!
    
    return 0;
}
