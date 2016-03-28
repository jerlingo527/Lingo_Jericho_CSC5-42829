/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Programming Project #1
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants
const float DYTMEWKDY = 0.40;  //Calls started between 8:00AM and 6:00PM on Monday through Friday
const float NTTMEWKDY = 0.25; //Calls started before 8:00AM or after 6:00PM on Monday through Friday
const float WKEND = 0.15;     //Calls started at any time on Saturday or Sunday

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    string day;
    float time, min, cost;
    
    //Input values
    cout << "This program computes the cost of a long-distance call." << endl;
    cout << "Any call started between 8:00AM through 6:00PM on Monday through Friday will be charged at a flat rate of $0.40 per minute." << endl;
    cout << "Any call started before 8:00AM or after 6:00PM on Monday through Friday will be charged at a flat rate of $0.25 per minute." << endl;
    cout << "Any call started at any time on Saturday or Sunday will be charged at a flat rate of $0.15 per minute." << endl;
    cout << "Enter the day in an abbreviated format for when you are making the call (e.g. Monday = Mo)." << endl;
    cin >> day;
    cout << "Enter the time you are making the call in 24-notation (e.g. 2:30 = 14:30)." << endl;
    cin >> time;
    cout << "Enter the amount of time in minutes in which you will call on long-distance." << endl;
    cin >> min;
    
    //Output the results
    if ((day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") &&
            ((time >= 800 && time < 860) &&
             (time >= 900 && time < 960) &&
             (time >= 1000 && time < 1060) &&
             (time >= 1100 && time < 1160) &&
             (time >= 1200 && time < 1260) &&
             (time >= 1300 && time < 1360) &&
             (time >= 1400 && time < 1460) &&
             (time >= 1500 && time < 1560) &&
             (time >= 1600 && time < 1660) &&
             (time >= 1700 && time < 1760)))
                cost = min * DYTMEWKDY;
        cout << "Since you made a call between 8:00AM through 6:00PM on Monday through Friday" << endl;
        cout << "And you took " << min << " minute(s) for this call, you will be charged $" << cost << " for this long-distance call." << endl;
    if ((day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") &&
            ((time >= 000 && time < 060) &&
             (time >= 100 && time < 160) &&
             (time >= 200 && time < 260) &&
             (time >= 300 && time < 360) &&
             (time >= 400 && time < 460) &&
             (time >= 500 && time < 560) &&
             (time >= 600 && time < 660) &&
             (time >= 700 && time < 760) &&
             (time >= 1800 && time < 1860) &&
             (time >= 1900 && time < 1960) &&
             (time >= 2000 && time < 2060) &&
             (time >= 2100 && time < 2160) &&
             (time >= 2200 && time < 2260) &&
             (time >= 2300 && time < 2360)))
                cost = min * NTTMEWKDY;
        cout << "Since you made a call before 8:00AM or after 6:00PM on Monday through Friday" << endl;
        cout << "And you took " << min << " minute(s) for this call, you will be charged $" << cost << " for this long-distance call." << endl;

            
    
    //Exit Stage Right!
    return 0;
}

