/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015, 10:03 AM
 * Purpose: Displays the number of points a customer has.
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
    int book;
    int points;
    
    //Prompt user for input
    cout<<"How many book did you purchase this month?"<<endl;
    cin>>book;

    
        if (book==0)
            points ='0';
        if (book = 1)
            points ='5';
        if (book == 2)
            points ='15';
        if (book == 3)
            points ='30';                    
         if (book >= 4)
            points ='60';
    //Output
    cout<<"You have "<<points<<"."<<endl;  
       
    
\
 //Exit Stage Right!       
    return 0;
}