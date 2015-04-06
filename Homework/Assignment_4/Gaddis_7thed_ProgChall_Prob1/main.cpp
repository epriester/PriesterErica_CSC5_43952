/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on April 6, 2015, 8:04 AM
 * Purpose:Print ASCII code 37-127
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{

//Declare Variables
    int count=0;
    for( count=32;count<127;count++)
    {
        count<<(char)count;
        count++;
        if (count==16)
        {
            cout<<endl;
            count=0;
        }
    }    

    return 0;
}

