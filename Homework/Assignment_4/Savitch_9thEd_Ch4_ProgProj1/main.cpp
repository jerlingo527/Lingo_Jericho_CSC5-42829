/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
float mrgtCst(int house, int dnPmt);//Calculates annual mortgage cost
float txSav(float intrst);//Calculates interest
#include <iostream>
using namespace std;

int main() {
    //Declare variables
    int house;//Price of house
    int dnPmt;//Down-payment on house
    int iBal;//Initial balance of loan
    int cost;//After tax cost of new house for first year of ownership
    float intrst;//Calculates interest
    float taxSav;//Calculates tax savings
    char retry;//Loop variable
    
    cout<<"This program computes the annual after-tax cost of a\n"
        <<"new house for the first year of ownership.\n";
    do{
    cout<<"Enter the price of the house: $";
    cin>>house;
    cout<<"Enter the down-payment: $";
    cin>>dnPmt;
    cost=mrgtCst(house, dnPmt);//Function call for mortgage cost
    iBal=house-dnPmt;
    intrst=.06*iBal;
    taxSav=txSav(intrst);
    cost-=taxSav;
    cout<<"With a $"<<dnPmt<<" down-payment on a $"<<house<<" house,\n"
        <<"the after-tax cost of the house for the 1st year is $"<<cost<<"\n";
    cout<<"Would you like to retry? Type 'y' to continue or anything else to terminate.\n"
        <<"Retry? : ";
    cin>>retry;
    }while(retry=='y'||retry=='y');
    //Exit stage right
    return 0;
}

float mrgtCst(int house, int dnPmt)
{
    int iBal=house-dnPmt;
    float cost=((iBal)-(.03*iBal)+(.06*iBal));
    return(cost);
    
    
}
float txSav(float intrst){
    float taxSav=.35*intrst;
    return(taxSav);
}