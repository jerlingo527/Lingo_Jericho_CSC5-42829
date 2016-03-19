/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Practice Program #4
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
    string prof;
    string name;
    string food;
    string numb;
    string adj;
    string color;
    string animal;

    //Input values
    cout << "This program plays the game of Mad Lib." << endl;
    cout << "Enter the first or last name of your instructor." << endl;
    cin >> prof;
    cout << "Enter your name." << endl;
    cin >> name;
    cout << "Enter your favorite food." << endl;
    cin >> food;
    cout << "Enter a number between 100-120." << endl;
    cin >> numb;
    cout << "Enter an adjective." << endl;
    cin >> adj;
    cout << "Enter your favorite color." << endl;
    cin >> color;
    cout << "Enter your favorite animal." << endl;
    cin >> animal;
     
    //Output the results
    cout << " " << endl;
    cout << "Dear Instructor " << prof << "," << endl;
    cout << " " << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time. First," << endl;
    cout << "I ate a rotten " << food << ", which made me turn "<< color << " and extremely ill. I" << endl;
    cout << "came down with a fever of " << numb << ". Next, my " << adj << " pet" << endl;
    cout << animal << " must have smelled the remains of the "<< food << " on my homework," << endl;
    cout << "because he ate it. I am currently rewriting my homework and hope you" << endl;
    cout << "will accept it late." << endl;
    cout << " " << endl;
    cout << "Sincerely," << endl;
    cout << name << "." << endl;    
    
    //Exit Stage Right!
    return 0;
}

