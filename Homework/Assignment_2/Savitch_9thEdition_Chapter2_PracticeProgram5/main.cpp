/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Practice Program #4
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
    float radius;
    float vm;

    //Input values
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    
    //Calculations
    vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
    
    //Output the results
    cout << "The volume is" << vm << "." << endl;
    
    //Exit Stage Right!
    return 0;
}

