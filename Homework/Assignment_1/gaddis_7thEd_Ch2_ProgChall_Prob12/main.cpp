/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:
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
    int acreLnd=43560, ttlSqFt=389767, ttlAcre;
    //Calculate total
    ttlAcre=ttlSqFt/acreLnd;
    //Prompt
    cout<<"The numer of acres in a tract of land with "<<ttlSqFt<<"sq/ft";
    cout<<" is "<<ttlAcre<<" acres"<<endl;
    //Exit stage right!
    return 0;
}

