/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare variables
    string lastname;
    string firstname;
    string middle;

    //Prompt for input
    cout << "Enter the persons first name: ";
    getline(cin, firstname);
    cout << "Enter the persons middle name, or initial: ";
    getline(cin, middle);
    cout << "Enter the persons last name: ";
    getline(cin, lastname);

    //Output the results
    cout << "You have entered: " << lastname << ", " << firstname << " " << middle;

    //Exit Stage Right!
    return 0;
}
