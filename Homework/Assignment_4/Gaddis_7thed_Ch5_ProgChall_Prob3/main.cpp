/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on April 6, 2015, 9:30 AM
 * Purpose: Find the distance a car travels
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
//Declare variables
    float speed,time,disTrvl=0;
//Prepare for input
    cout<<"How many hours has the car traveled?"<<endl;
    cin>>time;
    
    if (speed>=1)
    {
        if(time>1)
        {
            cout<<"Hour       Distance Traveled"<<endl;
            cout<<"-----------------------------"<<endl;
            
            for(int i=1;i<=time;i++)
            {
                disTrvl=speed*i;
                cout<<i<<"           "<<disTrvl<<endl;
            }
        }
        else
            cout<<"Time can't be less than 1"<<endl;
    }
    else
        cout<<"Speed can't be negative"<<endl;

    
//Exit Stage Right
    return 0;
}

