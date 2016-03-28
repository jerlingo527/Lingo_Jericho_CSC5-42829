/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #6
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
    float tempCel; //Temperature in Celsius
    float tempFah; //Temperature in Fahrenheit
    float poop;    //Placeholder for (9 x Celsius)/5

    //Input values
    cout << "This program finds the temperature that is the same in both Celsius and Fahrenheit." << endl;
    cout << "Enter a specified temperature in Celsius." << endl;
    cin >> tempCel;
    
    //Calculations
    poop = (9 * tempCel) / 5;
    tempFah = poop + 32;

    //Output the results
    cout << "With a temperature of " << tempCel << " degrees Celsius," << endl;
    cout << "the temperature converted becomes " << tempFah << " degrees Fahrenheit." << endl;
    
    //Exit Stage Right!
    return 0;
}

