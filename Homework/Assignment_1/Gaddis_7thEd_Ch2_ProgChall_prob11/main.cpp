/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:Miles the car can travel on highway and in town 
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
    float distTwn, distHwy , numGal=20,mpgTwn=21.5, mpgHwy=26.8;
//Calculate results
    distTwn=numGal*mpgTwn;
    distHwy=numGal*mpgHwy;
//Prompt
    cout<<"On one take of gas the car can travel "<<distTwn<<
            cout<< " miles in the town."<<endl;
    cout<<"On one tank of gas the car can travel "<<distHwy<<
            cout<<" miles on the highway."<<endl;
    //Exit stage right!
    return 0;
}

