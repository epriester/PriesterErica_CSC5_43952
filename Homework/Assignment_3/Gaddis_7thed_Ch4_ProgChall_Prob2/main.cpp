/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 23, 2015, 10:23 AM
 * Purpose: Write a program that converts numbers into Roman numerals
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
    char roman;
    
    //Prompt user for input
    cout<<"Enter a number between 1 and 10."<<endl;
    cin>>roman;
    
    switch(roman)
    //Begin Switch
    {
        case '1': cout<<"I"<<endl;
                break;
        case '2': cout<<"II"<<endl;
                break;
        case '3': cout<<"III"<<endl;
                break;
        case '4': cout<<"IV"<<endl;
                break;
        case '5': cout<<"V"<<endl;
                break;
        case '6': cout<<"VI"<<endl;
                break;
        case '7': cout<<"VII"<<endl;
                break;
        case '8': cout<<"VIII"<<endl;
                break;
        case '9': cout<<"IX"<<endl;
                break;
        case '10': cout<<"X"<<endl;
                break;
       
    }
    //End Switch
 //Exit Stage Right!       
    return 0;
}