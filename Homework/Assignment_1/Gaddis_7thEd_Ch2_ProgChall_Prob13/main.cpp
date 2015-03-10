/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:Find sale price of circuit board
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
    float perProf=.40, cbCost=12.67, perTtl, total;
//Calculate total
perTtl=perProf*cbCost;
total=perTtl+cbCost;
//Prompt
cout<<"the selling price of a circuit board is $"<<total<<endl;
    //Exit stage right!
    return 0;
}

