/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 24, 2015, 02:50 PM
 * Purpose: Write a program that shows which area of a rectangle is bigger
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
float length1,length2,width1,width2,area1,area2;
    
    //Prompt user for input
    cout<<"What is the length of the first rectangle?:"<<endl;
    cin>>length1;
    cout<<"What is the width of the first rectangle?:"<<endl;
    cin>>width1;
    cout<<"What is the length of the second rectangle?"<<endl;
    cin>>length2;
    cout<<"What is the width if the second rectangle?"<<endl;
    cin>>width2;
    
    //Calculate
    area1=length1*width1;
    area2=length2*width2;
            
    
    if (area1>area2)
    {
        cout<<"The area of the first rectangle is bigger than ";
                cout<<"the second rectangle."<<endl;
    }
    else if (area1<area2)
            
    {
        cout<<"The area of the second rectangle is bigger than ";
                cout<<"the area of the first rectangle."<<endl;
    }
    else
     {
         cout<<"The ares of the first and second rectangles are the same"<<endl;
     }
    

 //Exit Stage Right!       
    return 0;
}