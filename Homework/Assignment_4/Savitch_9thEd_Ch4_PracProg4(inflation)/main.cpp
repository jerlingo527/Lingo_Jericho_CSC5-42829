/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

float ifRate(float oPrice, float cPrice);//Function declaration for calculating inflation rate

//Global Constants

int main() {
    //Declare variables
    float iRate;//inflation rate determined by oPrice and cPrice
    float oPrice, cPrice;//Old price and Current price
    char retry;//Loop variable for multiple execution of program
    do{
    cout<<"This program will gauge the rate of inflation based upon\n"
        <<"the price of an item one year ago and its current price.\n"
        <<"Enter the old price of the item: $";
    cin>>oPrice;
    cout<<"Enter the current price: $";
    cin>>cPrice;
    iRate = ifRate(oPrice, cPrice); //Function call to determine inflation rate
    cout<<fixed<<setprecision(2);
    cout<<"If the old price was $"<<oPrice<<" and the new price is $"<<cPrice<<",\n"
        <<"The inflation rate has been determined to be %"<<iRate<<"\n\n"
        <<"Would you like to try again?";
    cin>>retry;    
    }while(retry=='y'||retry=='Y');//loop condition
    cout<<"Thank you, have a good day!";
    //Exit stage right!
    return 0;
}
float ifRate(float oPrice, float cPrice)//function calculating inflation rate
{
    return ((static_cast<float>(oPrice)/cPrice));
}
