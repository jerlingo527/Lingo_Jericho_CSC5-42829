/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #7
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float inflationRate = 5.6;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float preitmCost;
    float postitmCost;
    float yrs;
    float fsttemp; //Calculation of item cost after inflation
    float sndtemp; //Number of years prior to item cost
    
    //Input values
    cout << "This program calculates how much an item will cost over a yearly inflation." << endl;
    cout << "The inflation rate is set to 5.6%." << endl;
    cout << "Enter the cost of an item in dollars only." << endl;
    cin >> preitmCost;
    cout << "Enter the duration of time in years." << endl;
    cin >> yrs;
    
    //Calculations
    fsttemp = (preitmCost * inflationRate) / 100;
    sndtemp = yrs * fsttemp;
    postitmCost = preitmCost + sndtemp;
    
    //Output the results
    cout << "The price for this item after " << yrs << " years is:" << endl;
    cout << postitmCost << endl;
    
    //Exit Stage Right!
    return 0;
}

