/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    string pOne,pTwo;

    //Input values
    cout << "This program scores the rock-paper-scissors game." << endl;
    cout << "Player 1 enters either R, P, or S while Player 2 does the same." << endl;
    cout << "Player 1, please enter R, P, or S." << endl;
    cin >> pOne;
    cout << "Player 2, please enter R, P, or S." << endl;
    cin >> pTwo;
    
    //Output the results
    cout << "Player 1 has entered " << pOne << " while Player 2 has entered " << pTwo << "." << endl;
    if (pOne == "R" && pTwo == "R")
        cout << "Nobody wins." << endl;
    if (pOne == "P" && pTwo == "P")
        cout << "Nobody wins." << endl;
    if (pOne == "S" && pTwo == "S")
        cout << "Nobody wins." << endl;
    if (pOne == "P" && pTwo == "R")
        cout << "Player 1 wins! Paper covers rock." << endl;
    if (pOne == "P" && pTwo == "S")
        cout << "Player 2 wins! Scissors cut paper." << endl;
    if (pOne == "S" && pTwo == "P")
        cout << "Player 1 wins! Scissors cut paper." << endl;
    if (pOne == "S" && pTwo == "R")
        cout << "Player 2 wins! Rock breaks scissors." << endl;
    if (pOne == "R" && pTwo == "S")
        cout << "Player 1 wins! Rock breaks scissors." << endl;
    if (pOne == "R" && pTwo == "P")
        cout << "Player 2 wins! Paper covers rock." << endl;  
    
    //Exit Stage Right!
    return 0;
}

