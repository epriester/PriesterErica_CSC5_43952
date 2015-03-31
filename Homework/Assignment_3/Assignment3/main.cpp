/* 
 * File:   main.cpp
 * Author: Erica Priester
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Find min and max between two numbers
 * Problem 2 -> Convert numbers into Roman numerals between 1 and 10
 * Problem 3 -> Find out if a date is magical!
 * Problem 4 -> Show which area of a rectangle between two is bigger
 * Problem 5 -> Show the number of points a customer has
 * Problem 6 -> Determine the weight of an object and compare to newtons
 * Problem 9 -> Find the total cost of the computer and softwares
 * Problem 10 -> Find the total bank fee the customer owes
 * Problem 12 -> Show which runner came in 1st,2nd,and 3rd
 * Problem 14 -> Find the body mass index
 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve problem 4"<<endl;
    cout<<"Type 5 to solve problem 5"<<endl;
    cout<<"Type 6 to solve problem 6"<<endl;
    cout<<"Type 7 to solve problem 9"<<endl;
    cout<<"Type 8 to solve problem 10"<<endl;
    cout<<"Type 9 to solve problem 12"<<endl;
    cout<<"Type 10 to solve problem 14"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
case '1':
            {
                
                float num1, num2;
                cout<<"What is the first number?"<<endl;
                cin>>num1;
                cout<<"What is the second number?"<<endl;
                cin>>num2;
                //Calculate Conditional Operator
                if (num1>num2)
                { cout<<num1<<" is larger than "<<num2<<endl;
                }
                else   
                {
                cout<<num1<<" is smaller than "<<num2<<endl;
                }
                break;
            }
case '2':
            {
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
                break;
            }
case '3':
            
            {
    int month, day, year,specDay;
    
    //Prompt user for input
    cout<<"Enter a month:"<<endl;
    cin>>month;
    cout<<"Enter a date of a month:"<<endl;
    cin>>day;
    cout<<"Enter a year with in two digits(exp 93 for 1993):"<<endl;
    cin>>year;
    
    //Calculate
    specDay = month*day;
    
    if (specDay==year)
    {
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is magical!"<<endl;
    }
    else
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is not magical."<<endl;
       
                break;
            }
case '4':
           {
           
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
                break;
case '5':
            {
            
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
                break;
            }
case '6':
           {
           
    float mass, weight;
    
    //Prompt user for input
    cout<<"What is the object's mass in kilograms?"<<endl;
    cin>>mass;
    
    //Calculate
    weight=mass*9.8;
   
            
    if (weight>1000)
    {
    cout<<"The weight of the object is "<<weight<<" kg.";
        cout<<" The object is too heavy."<<endl;
    }
    
    else if (weight<10)           
    {
        cout<<"The weight of the object is "<<weight<<" kg.";
            cout<<" The object is too light."<<endl;
    }
    
    else
    {
        cout<<"The weight of the object is "<<weight<<" kg."<<endl;
    }
                break;
            }
case '7':
            {
            
    float cost,qnty,totCost;
    
    //Prompt user for input
    cout<<"How many units did you purchase?"<<endl;
    cin>>qnty;

    
        if (qnty<=0)
        {
            cout<<"Invalid Input"<<endl;
            cout<<"How many chacks did you write this month?"<<endl;
            cin>>qnty;
        }
    cost=99;
        if (qnty<10)
            totCost=cost;
        else if (qnty<=19)
            totCost=cost-((cost*20)/100);
        else if (qnty<=49)
            totCost=cost-((cost*30)/100);                    
        else if (qnty=99)
            totCost=cost-((cost*40)/100);
         else
            totCost=cost-((cost*50)/100);
    //Output
    cout<<"You're total cost is $"<<qnty*totCost<<"."<<endl; 
                break;
            }
case '8':
           {
           
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
                break;
            }
 case '9':
            {
            
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
        if(time2<time3)
        {
            cout<<"First: "<<runner2<<" Second: "<<runner1<<" Third: "<<
        cout<<runner3<<endl;
        }
        else
            cout<<"First: "<<runner3<<" Second: "<<runner2<<" Third: "<<
        cout<<runner1<<endl;
    }
                break;
            }
case '10':
           {
           
    float weight,height,bmi;
    //Prompt user for Input
    cout<<"Enter the weight in pounds."<<endl;
    cin>>weight;
    cout<<"Enter the height in inches."<<endl;
    cin>>height;
    //Calculations
    bmi=(weight*703)/(height*height);
    //Output the Results
    cout<<"The body mass indes is "<<bmi<<endl;
    
    if(bmi>=18.5 && bmi<=25)
        cout<<"Optimal weight."<<endl;
    else if (bmi<18.5)
        cout<<"Under weight."<<endl;
    else
        cout<<"Over weight."<<endl;
  
                break;
            }

            
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}
}