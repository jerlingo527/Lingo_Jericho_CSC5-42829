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
float ifRate2(float cPrice, float iRate);//Determines new price after 2 years from original price
float ifRate3(float nPrice, float iRate);//Determines new price after 3 years from original price 

//Global Constants

int main() {
    //Declare variables
    float iRate;//inflation rate determined by oPrice and cPrice
    float oPrice, cPrice, nPrice1, nPrice2;//Old price, Current price, price after 1 year, after 2 years
    char retry;//Loop variable for multiple execution of program
    do{
    cout<<"This program will gauge the rate of inflation based upon\n"
        <<"the price of an item one year ago and its current price.\n"
        <<"Enter the old price of the item: $";
    cin>>oPrice;
    cout<<"Enter the current price: $";
    cin>>cPrice;
    iRate = ifRate(oPrice, cPrice); //Function call to determine inflation rate
    nPrice1 = ifRate2(cPrice, iRate);//Function call to determine price after one year
    nPrice2 = ifRate3(nPrice1, iRate);//Function call to determine price after 2 years
    cout<<fixed<<setprecision(2);
    cout<<"If the old price was $"<<oPrice<<" and the new price is $"<<cPrice<<",\n"
        <<"The inflation rate has been determined to be %"<<iRate<<"\n"
        <<"After 2 years have passed from original price date,\n"
        <<"the price would be $"<<nPrice1<<"\n"
        <<"After 3 years have passed from the original price date,\n"
        <<"the price would be $"<<nPrice2<<"\n\n"
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
float ifRate2(float cPrice, float iRate)
{
    return(cPrice*(1+iRate));//Determines new price after 2 years from original price
}
float ifRate3(float nPrice, float iRate)
{
    return(nPrice*(1+iRate));//Determines new price after 3 years from original price 
}