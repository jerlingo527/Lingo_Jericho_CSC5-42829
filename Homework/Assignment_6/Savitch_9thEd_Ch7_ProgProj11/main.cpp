/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Assign passengers seats in an airplane
 */

//System Libraries
#include <iostream>//I/O
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    char Seat = ' ';
    string Airline[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char Again = ' ';
    int Row = 0;

    Again = 'y';

    while (Again == 'y') {
        cout << "Enter a row: ";
        cin >> Row;
        cout << "Enter a seat: ";
        cin >> Seat;

        int idx = 1 + Seat - 'A';
        if (Airline[Row - 1][idx] == 'X') {
            cout << "Seat is taken." << endl;
            continue;
        } else
            Airline[Row - 1][idx] = 'X';
        cout << "Enter another seat? (y/n): ";
        cin >> Again;

        for (int i = 0; i < 7; ++i) {
            cout << Airline[i] << endl;
        }

    }

    cout << "Bye!" << endl;

    return 0;
}