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
    //Declare Variables
    string testString = "John 25 Technician";
    stringstream ss;
    ss << testString;
    string name, age, title;
    string array[3] = {name, age, title};
    string temp;
    int n = 0;

    //Sort array
    while (ss >> temp) {
        array[n] = temp;
        ++n;
    }

    //Swap array
    for (int i = 0; i < n; i++)
        cout << array[i] << endl;
    cin.ignore();

    //Exit Stage Right!
    return 0;
}

