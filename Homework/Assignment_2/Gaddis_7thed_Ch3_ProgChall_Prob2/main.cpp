/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 16, 2015, 9:42 AM
 * Purpose: Calculate total income
 */

//System Libraries
#include <iostream>
#include <iomanip>//Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare Variables 
    float classA=15.00,classB=12.00,classC=9.00;
    float seatsA,seatsB,seatsC,totalA,totalB,totalC,total;
    //Prompt use for input
    cout<<"How many tickets were sold for Class A?"<<endl;
    cin>>seatsA;
    cout<<"How many tickets were sold for Class B?"<<endl;
    cin>>seatsB;
    cout<<"How many tickets were sold for Class C"<<endl;
    cin>>seatsC;
    //Calculate the MPG
    totalA=classA*seatsA;
    totalB=classB*seatsB;
    totalC=classC*seatsC;
    total=totalA+totalB+totalC;
    //Ouput the results
    cout<<"Class A generated $"<<fixed<<setprecision(2)<<setw(6);
    cout<<totalA<<" of income."<<endl;
    cout<<"Class B generated $"<<fixed<<setprecision(2)<<setw(6);
    cout<<totalB<<" of income."<<endl;
    cout<<"Class C generated $"<<fixed<<setprecision(2)<<setw(6);
    cout<<totalC<<" of income."<<endl;
    cout<<"Total income generated from Class A, Class B, and Class C is $";
    cout<<fixed<<setprecision(2)<<setw(6)<<total<<endl;
 
    return 0;
}

