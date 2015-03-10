/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 9, 2015
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    float mealCst=44.50, tax=0.0675, tip=0.15, totlBill,taxAmnt,tipAmnt;
    //Calculate
    taxAmnt=mealCst*tax;
    tipAmnt=(taxAmnt+mealCst)*tip;
    totlBill=mealCst+taxAmnt+tipAmnt;
    cout<<"Your meal costs $"<<mealCst<<endl;
    cout<<"The 6.75% tax for your meal is $"<<taxAmnt<<endl;
    cout<<"A tip for 15% of your meal, including tax is $"<<tipAmnt<<endl;
    cout<<"Your total bill including tax and tip is $"<<totlBill<<endl;

    //Exit stage right!
    return 0;
}

