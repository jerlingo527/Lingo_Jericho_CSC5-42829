/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 26, 2016, 3:00 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void wind(float& w, float& spd, float& t);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float W;
    float spd;
    float T;
    char response;

    cout << "Enter the wind speed in meters per second :\n";
    cin >> spd;


    cout << "Enter the temperature in Degree Celcius:\n";
    cin >> T;


    cout << "This is the wind chill in your area" << W << endl;


    cout << "do you want a go again ";
    cin >> response;

    if (response == 'Y') {
        cout << "type in the wind speed and temperature:\n";
    }

    if (response == 'N') {
        cout << "Good Bye:\n";
    }

    return 0;

}

void wind(float& W, float& spd, float& T) {
    W = (13.12 + 0.6215 * T - 11.37 * pow(spd,(0.16)) + 0.3965 * T * pow(spd,(0.16)));
}
