/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Created on March 18, 2015, 9:38 AM
 * Purpose: Determine if Table created in Class 
 * agrees with logic on the computer
 */

#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Execution begins Here
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    //Heading
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X"
            <<" !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    //Output the first toe of the table
    x=true;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;
    //Output the second row of the table
    y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;
    x=false;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    ";        
    cout<<endl;
    x=false;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    ";
    cout<<endl;
    //Exit Stage Right
    return 0;
}

