/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 26, 2016, 12:00 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void input(int&, int&, char&);
void convert(int&, int&, char&);
void output(int&, int&, char&);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    int hours, minutes;
    char ampm; 
    char again; 

    //Loop to re-run program as long as user wants
    do {
        input(hours, minutes, ampm);
        convert(hours, minutes, ampm);
        output(hours, minutes, ampm);

        cout << endl << "Enter Y to run again, any other key to exit: ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}

void input(int& hours, int& minutes, char& ampm) {
    //This loop makes sure value entered is legal for hours(i.e. 23 or below)
    do {
        cout << "Enter hours: ";
        cin >> hours;
        if (hours > 23) cout << "Please enter a value between 0 and 23" << endl;
    } while (hours > 23);

    //This loop makes sure value entered is legal for minutes (i.e. 59 or below)
    do {
        cout << "Enter minutes: ";
        cin >> minutes;
        if (minutes > 59) cout << "Please enter a value between 0 and 59" << endl;
    } while (minutes > 59);
}

void convert(int& hours, int& minutes, char& ampm) {
    //Set AM/PM flag to PM if hour is 13 onwards, and set hours to 12hr format
    if (hours > 12) {
        hours = hours - 12;
        ampm = 'p';
    } else if (hours == 12) ampm = 'p'; 
    else ampm = 'a'; 
}

void output(int& hours, int& minutes, char& ampm) {
    if (ampm == 'p') {
        if (minutes < 10) cout << hours << ":0" << minutes << " P.M.";
        else cout << hours << ":" << minutes << " P.M.";
    } else {
        if (minutes < 10) cout << hours << ":0" << minutes << " A.M.";
        else cout << hours << ":" << minutes << " A.M.";
    }
}