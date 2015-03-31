/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015, 01:33 PM
 * Purpose: Displays the total cost of the computer and software.
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
    float cost,qnty,totCost;
    
    //Prompt user for input
    cout<<"How many units did you purchase?"<<endl;
    cin>>qnty;

    
        if (qnty<=0)
        {
            cout<<"Invalid Input"<<endl;
            cout<<"How many chacks did you write this month?"<<endl;
            cin>>qnty;
        }
    cost=99;
        if (qnty<10)
            totCost=cost;
        else if (qnty<=19)
            totCost=cost-((cost*20)/100);
        else if (qnty<=49)
            totCost=cost-((cost*30)/100);                    
        else if (qnty=99)
            totCost=cost-((cost*40)/100);
         else
            totCost=cost-((cost*50)/100);
    //Output
    cout<<"You're total cost is $"<<qnty*totCost<<"."<<endl;  
       
    
\
 //Exit Stage Right!       
    return 0;
}