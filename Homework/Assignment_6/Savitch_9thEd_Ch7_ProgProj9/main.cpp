/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on May 16, 2016, 9:30 AM
 * Purpose: firstLast2
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void lookupName(string, string);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    string names[] = {"Michael Myers", "Ash Williams", "Jack Torrance", "Freddy Krueger"};
    string phoneNumbers[] = {"333-8000", "333-2323", "333-6150", "339-7970"};
    string targetName, targetPhone;
    char c;
    do{
        cout << "Enter a name to find the corresponding phone number." << endl;
        getline(cin, targetName);
        targetPhone = lookupName(targetName, names, phoneNumbers, 4);
        if(targetPhone.length() > 0)
            cout << "The number is: " << targetPhone << endl;
        else
            cout << "Name not found." << endl;
        cout << "Look up another name? (y/n)" << endl;
        cin >> c;
        cin.ignore();
    }while (c = 'y');
    return 0;
}

