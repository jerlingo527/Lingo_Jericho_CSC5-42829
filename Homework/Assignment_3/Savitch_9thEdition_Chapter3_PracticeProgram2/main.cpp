/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #2
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main() {
    //Declare variables
    float ir1(.015);//$ Amount due in interest (1.5%)
    float ir2(.01);//$ Amount due in interest (1%) for $ in excess of 1000
    float totdue;//$ Total amount due
    float minpmt;//$ Minimum payment due ($10 or 10% of total amount owed)
    float accbal;//$ Account balance
    char retry;//Variable for multiple execution of program
        
    cout<<setprecision(2)<<fixed;
    cout<<"This program will compute the following for"
        <<"a revolving credit account. \n--Interest due\n"
        <<"--Total amount due\n--Minimum payment due\n\n";
        
    do{
        cout<<"Please enter the account balance: $";
        cin>>accbal;
    //Conditions for charging interest / Calculation
    if (accbal>1000){
        ir2=(accbal-1000)*.01;
        ir1=1000*.015;
        totdue=ir1+ir2+accbal;
    }else if (accbal<=1000 && accbal>=0){
        ir1=.015*accbal;
        totdue=accbal+ir1;
    }else {
        cout<<"Invalid entry.\n";
    }
    if (totdue>100)
        minpmt=.1*totdue;
    else 
        minpmt=10;
    //Output results
    cout<<"The total interest charged for this account is $"<<ir1+ir2<<"\n";
    cout<<"The total amount due for this account is $"<<totdue<<"\n";
    cout<<"The minimum payment for this account is $"<<minpmt<<"\n";
    //Prompt retry
    cout<<"Would you like to try again? ";
    cin>>retry;
    }while(retry=='y'||retry=='Y');
    
    cout<<"\nThank you, have a good day!"<<endl;
    //Exit Stage Right!
    return 0;
}

