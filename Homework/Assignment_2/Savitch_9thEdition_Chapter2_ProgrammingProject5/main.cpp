/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float maxCap = 100;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float people;

    //Input values
    cout << "This program determines whether a meeting room is in violation of fire law regulations regarding the maximum room capacity." << endl;
    cout << "Enter the amount of workers attending the meeting." << endl;
    cin >> people;
    
    //Output the results
    if (people <= 100)
        cout << "This meets with the fire law regulations. Good luck!" << endl;
    if (people >  100)
        cout << "This will not meet with the fire law regulations. The maximum capacity is 100 persons." << endl;
    
                
    //Exit Stage Right!
    return 0;
}

