/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Write a program that gives and takes advice on program writing.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    string input;
    fstream inout;
    inout.open("input5.txt", ios::in);
    if (inout.fail()) {
        cout << "file did not open for input please check it\n";
        system("pause");
        return 0;
    }
    getline(inout, input);
    while (inout) {
        cout << input << endl;
        getline(inout, input);
    }
    inout.close();
    inout.clear();
    inout.open("input5.txt", ios::out | ios::app);
    if (inout.fail()) {
        cout << "file did not open for append please check it\n";
        system("pause");
        return 0;
    }
    cout << "Please add any advice you have and press enter twice when completed\n";
    getline(cin, input);
    while (input.length() > 0) {
        inout << input << endl;
        getline(cin, input);
    }
    inout.close();
    return 0;

}