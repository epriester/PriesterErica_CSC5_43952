/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015, 03:03 PM
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
    int begBal checks;
    float total, bankFee;
    
    //Prompt user for input
    cout<<"What is the beginning balance of this month?"<<endl;
    cin>>begBal;
    cout<<"How many checks did you writhe this month?"<<endl;
    cin>>checks;
   
        if (checks<0)
        {
            cout<<"Cannot accept a negative amount"<<endl;
        }
        if (checks<20 && begBak>400)
        {
            total=checks*0.10;
            bankFee=(10+total);
        }
        if (checks<20 && begBal<400)
        {
            total=checks*0.10;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
        if (checks<20 && bechecks<=<400)
        {
            total=checks*0.10;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
    //Output
    cout<<"You have "<<points<<"."<<endl;  
       
    
\
 //Exit Stage Right!       
    return 0;
}