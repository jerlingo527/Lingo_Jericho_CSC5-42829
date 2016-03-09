/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 9, 2016, 10:10 AM
 * Purpose: You used to call me on my cell phone
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float CNVCLFH = 1.8 + 32;  //Conversion from Celsius to Fahrenheit
const float C1 = 0;              //Freezing point of water in Celsius
const float C2 = 100;            //Boiling point of water in Celsius
const float F1 = 32;             //Freezing point of water in Fahrenheit
const float F2 = 212;            //Boiling point of water in Fahrenheit

int main(int argc, char** argv) {
    //Declare variables
    float c1;    //Celsius 1
    float f1;    //Fahrenheit 1
    float c2;    //Celsius 2
    float f2;    //Fahrenheit 2
    float m;     //Slope
    float b;     //Y-intercept
    
    //Input values
    cout << "Input first temperature in celsius." << endl;
    cin >> c1 << "°C" << endl;
    cout >> "Input second temperature in celsius." << endl;
    cin >> c2 << "°C" << endl;
    
    //Calculate
    f1 = c1 * CNVCLFH;
    f2 = c2 * CNVCLFH;
    c1 = m * f1 + b;
    c2 = m * f2 + b;
    (c1 - c2) = m * (f1 - f2) + b;
    
    
    //Output the results
    
    
    //Exit Stage Right!
    return 0;
}

