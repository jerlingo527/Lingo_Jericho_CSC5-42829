/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 14, 2016, 8:15 AM
 * Purpose: Grade with Dependent If's
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
    float grade;
    
    //Input values
    cout << "Input a score from 0 to 100 to receive a letter grade." << endl;
    cin >> grade;

    //Output the results
    if (grade >= 90 && grade <= 100) {
        cout << "With a score of " << grade << " out of 100, you have received an A." << endl;
    }else if (grade >= 80 && grade < 90) {
        cout << "With a score of " << grade << " out of 100, you have received a B." << endl;
    }else if (grade >= 70 && grade < 80) {
        cout << "With a score of " << grade << " out of 100, you have received a C." << endl;
    }else if (grade >= 60 && grade < 70) {
        cout << "With a score of " << grade << " out of 100, you have received a D." << endl;
    }else if (grade >= 0 && grade < 60) {
        cout << "With a score of " << grade << " out of 100, you have received an F." << endl;
    }else{
        cout << "You have entered an invalid score. Please enter a score from 0 to 100." << endl;
    }
    
    
    //Exit Stage Right!
    return 0;
}

