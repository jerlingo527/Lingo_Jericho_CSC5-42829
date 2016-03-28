/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #6
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants
const float volSph = 1.33 * 3.14;
const float weiWat = 62.4;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float fb; //Buoyant force
    float wei; //Weight of sphere
    float rad; //Radius of sphere

    //Input values
    cout << "This program determines the buoyant force of an object." << endl;
    cout << "Enter the weight (in pounds) of a sphere." << endl;
    cin >> wei;
    cout << "Enter the radius (in feet) of said sphere." << endl;
    cin >> rad;
    
    //Calculations
    fb = weiWat * volSph * pow(rad,3);

    //Output the results
    cout << "With a weight of " << wei << " pounds and a radius of " << rad << " feet" << endl;
    cout << "and assuming that the specific weight of water is 62.4 lb/ft3," << endl;
    cout << "the buoyant force will be " << fb << " lb/ft3." << endl;
    if (fb >= wei)
        cout << "Therefore, this sphere will float on water." << endl;
    if (fb < wei)
        cout << "Therefore, this sphere will sink in water." << endl;
    
    //Exit Stage Right!
    return 0;
}

