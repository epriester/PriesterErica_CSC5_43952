/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015
 * Purpose:Movie Theater Profit 
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
    float adltTkt=6.00,chldTkt=3.00,adltNum,adltTtl,chldTtl;
    float chldNum,grssPft,percent=0.20,netPft,dstrb;
    char movie [21];
    //Prompt user for Input
    cout<<"What is the name of the movie?"<<endl;
    cin>>movie;
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>adltNum;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>chldNum;
    //Calculations
    adltTtl=adltTkt*adltNum;
    chldTtl=chldTkt*chldNum;
    grssPft=adltTtl+chldTtl;
    netPft= grssPft*percent;
    dstrb=grssPft-netPft;
    //Output the Results
    cout<<"Movie Name: "<<movie<<endl;
    cout<<"Adult Tickets Sold: "<<adltNum<<endl;
    cout<<"Child Tickets Sold: "<<chldNum<<endl;
    cout<<"Gross Box Office Profit: $"<<grssPft<<endl;
    cout<<"Amount Paid to Distributor: $"<<dstrb<<endl;
    cout<<"Net Box Office Profit: $"<<netPft<<endl;
    //Exit stage right!
    return 0;
}

