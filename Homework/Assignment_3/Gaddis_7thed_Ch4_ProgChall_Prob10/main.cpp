/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 30, 2015, 03:03 PM
 * Purpose: Displays the bank fee the customer owes.
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
    int begBal, check;
    float total, bankFee;
    
    //Prompt user for input
    cout<<"What is the beginning balance of this month?"<<endl;
    cin>>begBal;
    cout<<"How many checks did you writhe this month?"<<endl;
    cin>>check;
   
        if (check<0)
        {
            cout<<"Cannot accept a negative amount"<<endl;
        }
        if (check<20 && begBal>400)
        {
            total=check*0.10;
            bankFee=(10+total);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;           
        }
        if (check<20 && begBal<400)
        {
            total=check*0.10;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
        }
        if (check<20 && check<=39)
        {
            if(begBal<400)
            {                  
            total=check*0.08;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            }
        }
        if (check<20 && check<=39)
        {
        if(begBal>400)
            {                  
            total=check*0.08;
            bankFee=(10+total);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            }
        }
        if (check<40 && check<=59)
        {
            if(begBal<400)
            {                  
            total=check*0.06;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            }
        }
        if (check<40 && check<=59)
        {
        if(begBal>400)
            {                  
            total=check*0.05;
            bankFee=(10+total);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            }
        }
        if (check>=60 && begBal<400)
        {               
            total=check*0.04;
            bankFee=(10+total+15);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            
        }
        if (check<60 && begBal>400)
        {                  
            total=check*0.08;
            bankFee=(10+total);
            cout<<"Total bank service fees for the month is $"<<bankFee<<endl;
            
        }
      

\
 //Exit Stage Right!       
    return 0;
}