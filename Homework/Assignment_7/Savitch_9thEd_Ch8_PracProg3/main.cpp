/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <sstream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    char fInitial, mInitial, lInitial;
    string fName, mName, lName;

    cout << "Enter your first, middle and last name (ie. John Andrew Gomez)." << endl;

    getline(cin, fName, ' ');
    fInitial = fName[0];

    getline(cin, mName, ' ');
    mInitial = mName[0];

    getline(cin, lName, '\n');
    lInitial = lName[0];

    cout << "Your name is " << fName << " " << mName << " " << lName << "." << endl;
    cout << "Your initals are " << fInitial << "." << mInitial << "." << lInitial << "." << endl;

    return 0;
}