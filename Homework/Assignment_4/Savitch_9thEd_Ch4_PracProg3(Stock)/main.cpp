/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;
float stokVal(int price , int priceN, int priceD);//Function declaration
//Global Constants

int main() {
    //Declare variables
    int share;//Number of shares of stock
    int price;//Whole dollar price of stock
    int priceN, priceD;//Fractional dollar value of stock
    float oneStok;//Price of one share of stock
    char retry;//loop variable
    do{
    cout<<"This program computes the value of the user's holding of one stock.\n"
        <<"Enter the number of stocks owned: ";
    cin>>share;
    cout<<"Enter the whole dollar portion of the stock value: $";
    cin>>price;
    cout<<"Enter the numerator of the fractional portion of the stock value: ";
    cin>>priceN;
    cout<<"Enter the denominator of the fractional portion of the stock value: ";
    cin>>priceD;
    oneStok = (stokVal(price, priceN, priceD))/share;//Calculates value of one share
    cout<<"If the value of "<<share<<" stocks is $"<<price<<" "<<priceN<<"/"<<priceD<<"\n";
    cout<<"Then the value of one stock is $"<<oneStok<<"\n\n"
        <<"Would you like to try again?\n"
        <<"Type 'y' to continue or anything else to terminate: ";
    cin>>retry;
    }while((retry=='y'||retry=='Y'));
    cout<<"Thank you, have a good day! :)";
    //Exit Stage Right!
    return 0;
}
float stokVal(int price, int priceN, int priceD)//Function call
{
    float oneStok;
    oneStok =(price+(static_cast<float>(priceN)/priceD));
    return (oneStok);
}
