/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 16, 2016, 9:00 AM
 * Purpose: Dependent If's for Names by Alphabetical order
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables

    char Alice, Joe, Mark;
    
    //Input values
    cout << "Enter one of the names listed (Alice, Joe, Mark)." << endl;
    cin >> (Alice, Joe, Mark);
    cout << "Enter one of the names listed (Alice, Joe, Mark)." << endl;
    cin >> (Alice, Joe, Mark);
    cout << "Enter one of the names listed (Alice, Joe, Mark)." << endl;
    cin >> (Alice, Joe, Mark);
    
    //Output the results
    if (strcmp(Joe, Mark) <= 0
        && strcmp(Joe, Alice)<= 0) {
        cout << Joe;
        if (strcmp(Mark, Alice <= 0){
            cout << Mark, Alice << endl;
        }
        else
            cout << Alice, Mark << endl;
    cout << "The names you've inputted have now been organized in alphabetical order." << endl;
    cout << "Joe, Mark.";
    }else if (strcmp(Joe, Mark) == Joe, Mark {
    cout << "The names you've inputted have now been organized in alphabetical order." << endl;
    cout << "Joe, Mark.";
    }else{
        cout << "Not enough names or incorrect names inputted.";
    }
    //Exit Stage Right!
    return 0;
}

