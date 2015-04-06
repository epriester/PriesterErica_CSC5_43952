/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on April 6, 2015, 8:38 AM
 * Purpose:Display the sum of a number
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{

//Declare Variables
    int num, sum=0;
    cout<<"Enter a positive integer value"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum +=i;
    }
    cout<<"The sum of all the integers from 1"<<endl;
    cout<<" up to "<<num<<" is: "<<sum<<endl;
    
    //Exit Stage Right
    
    return 0;
}

