/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015, 12:50 PM
 * Purpose: Determine if and object is less 10 newtons or more 1000 newtons.
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
float mass, weight;
    
    //Prompt user for input
    cout<<"What is the object's mass in kilograms?"<<endl;
    cin>>mass;
    
    //Calculate
    weight=mass*9.8;
   
            
    if (weight>1000)
    {
    cout<<"The weight of the object is "<<weight<<" kg.";
        cout<<" The object is too heavy."<<endl;
    }
    
    else if (weight<10)           
    {
        cout<<"The weight of the object is "<<weight<<" kg.";
            cout<<" The object is too light."<<endl;
    }
    
    else
    {
        cout<<"The weight of the object is "<<weight<<" kg."<<endl;
    }
 //Exit Stage Right!       
    return 0;
}