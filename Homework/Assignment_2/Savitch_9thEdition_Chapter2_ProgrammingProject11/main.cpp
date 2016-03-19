/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #11
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float velocity = 331.3 + 0.61;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float startTemp;
    float endTemp;
    float startVel;
    float endVel;

    //Input values
    cout << "This program calculates how much an item will cost over a yearly inflation." << endl;
    cout << "The velocity of sound in dry air can be approximated by the formula:" << endl;
    cout << "velocity ≈ 331.3 + 0.61 × Tc" << endl;
    cout << "where Tc is the temperature of the air in degrees Celsius and the velocity is in meters/second." << endl;
    cout << "Enter the starting temperature in Celsius." << endl;
    cin >> startTemp;
    cout << "Enter the ending temperature in Celsius." << endl;
    cin >> endTemp;
    
    //Calculations
    startVel = velocity * startTemp;
    endVel = velocity * endTemp;
    
    //Output the results
    cout << "At " << startTemp << " degrees Celsius the velocity of sound is " << startVel << " m/s." << endl;
    cout << "At " << endTemp << " degrees Celsius the velocity of sound is " << endVel << " m/s." << endl;
    
    //Exit Stage Right!
    return 0;
}

