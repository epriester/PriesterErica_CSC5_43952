/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015, 10:32 AM
 * Purpose:Find monthly and annual housing expenses
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float utils,cable,phone,rtMrtg;
    float anlUtls,anlCble,anlPhne,anlRtMg;
    //Prompt user for input
    cout<<"How much do you pay monthly on rent or mortgage?"<<endl;
    cin>>rtMrtg;
    cout<<"How much do you pay monthly on utilities?"<<endl;
    cin>>utils;
    cout<<"How much do you pay monthly for on phone?"<<endl;
    cin>>phone;
    cout<<"How much do you pay monthly for on cable?"<<endl;
    cin>>cable;
    //Calculate the monthly and annual costs
    anlUtls=utils*12;
    anlCble=cable*12;
    anlPhne=phone*12;
    anlRtMg=rtMrtg*12;
      
    //Output the results
    cout<<"Monthly cost of your rent it mortgage is $"<<rtMrtg<<endl;
    cout<<"Monthly cost of your utilities are $"<<utils<<endl;
    cout<<"Monthly cost of your phone is $"<<phone<<endl;
    cout<<"Monthly cost of your cable is $"<<cable<<endl;
    cout<<"The annual cost on your rent or mortgage is $"<<anlRtMg<<endl;
    cout<<"The annual cost on your utilities are $"<<anlUtls<<endl;
    cout<<"The annual cost on your phone is $"<<anlPhne<<endl;
    cout<<"The annual cost on your cable is $"<<anlCble<<endl;
    //Exit stage right!
             
    return 0;
}

