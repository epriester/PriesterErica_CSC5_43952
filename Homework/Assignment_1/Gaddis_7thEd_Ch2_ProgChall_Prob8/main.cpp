/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose: Find subtotal, tax, and total of purchased items
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare variables
   float item1=12.95, item2=24.95, item3=6.95, item4=14.95, item5=3.95;
   float subTtl, saleTax, total, tax=0.06;
//Calculate the subtotal, sales tax, and total
    subTtl=item1+item2+item3+item4+item5;
    saleTax=subTtl*tax;
    total=saleTax+subTtl;
//Prompt
    cout<<"Item 1 costs $"<<item1<<endl;
    cout<<"Item 2 costs $"<<item2<<endl;
    cout<<"Item 3 costs $"<<item3<<endl;
    cout<<"Item 4 costs $"<<item4<<endl;
    cout<<"Item 5 costs $"<<item5<<endl;
    cout<<"The subtotal is $"<<subTtl<<endl;
    cout<<"The sales tax is $"<<saleTax<<endl;
    cout<<"The total is $"<<total<<endl;
          
    

    //Exit stage right!
    return 0;
}

