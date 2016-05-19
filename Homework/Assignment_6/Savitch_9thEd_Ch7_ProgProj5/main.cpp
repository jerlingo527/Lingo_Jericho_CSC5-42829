/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Reads in a list of integers into an array with base type int
 */

//System Libraries
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
    stringstream ss(input);

    const int SPACING = 3;

    const size_t SIZE = 50;
    int myArray[SIZE] = {0};

    int count = -1;

    //fills the array with integers
    while (ss >> myArray[++count]); //NULL statement

    //create pointers to the beginning and end of the array
    int *beg = myArray;
    int *end = myArray + count;


    //Sorts the array
    sort(beg, end, greater<int>());

    int current = myArray[0];
    count = 1;


    //counts the number of each value in the array
    while (++beg != end) {

        if (current != *beg) {
            cout << setw(SPACING) << current << setw(SPACING) << count << endl;
            current = *beg;
            count = 0;
        }

        ++count;
    }

    //outputs the final value
    cout << setw(SPACING) << current << setw(SPACING) << count << endl;

    cin.ignore();
    return 0;
}