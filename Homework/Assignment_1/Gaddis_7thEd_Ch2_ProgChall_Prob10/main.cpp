/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:Finding how much MPG a car gets.
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
    float mpg, mileDri=350, ttlGal=12;
//Calculate MPG
    mpg=mileDri/ttlGal;
//Prompt
    cout<<"A car that holds "<<ttlGal<< " gallons of gas,";
            cout<<" and can travel "<<mileDri<< " miles before refueling";
            cout<<" gets "<<mpg<<" miles per gallon."<<endl;
            
    //Exit stage right!
    return 0;
}

