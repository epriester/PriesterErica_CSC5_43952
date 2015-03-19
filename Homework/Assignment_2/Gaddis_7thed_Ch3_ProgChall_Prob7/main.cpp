/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015
 * Purpose:Find the average rainfall
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
    char month1 [10], month2 [10], month3 [10];
    float average,rainFll1,rainFll2,rainFll3; 
    //Prompt user for Input
    cout<<"What is the first month?"<<endl;
    cin>>month1;
    cout<<"How much rainfall was there in the first month? (inches)"<<endl;
    cin>>rainFll1;
    cout<<"What is the second month?"<<endl;
    cin>>month2;
    cout<<"How much rainfall was there in the second month? (inches)"<<endl;
    cin>>rainFll2;
    cout<<"What is the third month?"<<endl;
    cin>>month3;
    cout<<"How much rainfall was there in the third month? (inches)"<<endl;
    cin>>rainFll3;
    //Calculations
    average=(rainFll1+rainFll2+rainFll3)/3;
    //Output the Results
    cout<<"The average monthly rainfall for "<<month1<<", "<<month2;
    cout<<", and "<<month3<<" was "<<average<<" inches."<<endl;
    //Exit stage right!
    return 0;
}

