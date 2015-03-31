/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015
 * Purpose: Show which runner came in 1st, 2nd, and 3rd.
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
    char runner1[20], runner2[20], runner3[20];
    int time1, time2, time3;
    
    //Prompt user for Input
    cout<<"Enter the first runner's name."<<endl;
    cin>>runner1;
    cout<<"What time did the fist runner finish the race?"<<endl;
    cin>>time1;
    if(time1<0)
    {
        cout<<"Please enter a positive time"<<endl;
        cin>>time1;
    }
    cout<<"Enter the second runner's name."<<endl;
    cin>>runner2;
    cout<<"What time did the second runner finish the race?"<<endl;
    cin>>time2;
    if(time2<0)
    {
        cout<<"Please enter a positive time"<<endl;
        cin>>time2;
    }    
    cout<<"Enter the third runner's name."<<endl;
    cin>>runner3;
    cout<<"What time did the third runner finish the race?"<<endl;
    cin>>time3;
    if(time3<0)
    {
        cout<<"Please enter a positive time"<<endl;
        cin>>time3;
    }    
    
    if(time1>time2)
    {
        if(time2<time3)
        {
            cout<<"First: "<<runner1<<" Second: "<<runner2<<" Third: "<<
            cout<<runner3<<endl;
        }
        else
            cout<<"First: "<<runner3<<" Second: "<<runner2<<" Third: "<<
        cout<<runner1<<endl;
    }
    else
    {
        if(time1<time2)
        {
            cout<<"First: "<<runner2<<" Second: "<<runner1<<" Third: "<<
        cout<<runner3<<endl;
        }
        else
            cout<<"First: "<<runner3<<" Second: "<<runner2<<" Third: "<<
        cout<<runner1<<endl;
    }

    //Exit stage right!
    return 0;
}

