/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 14, 2016, 8:15 AM
 * Purpose: Grade with Independent If's
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
    switch (grade >= 90 && grade <= 100) {
        case true: cout << "With a score of " << grade << " out of 100, you have received an A." << endl; break;
        default:
            switch (grade >= 80 && grade < 90) {
                case true: cout << "With a score of " << grade << " out of 100, you have received a B." << endl; break;
                default:
                    switch (grade >= 70 && grade < 80) {
                        case true: cout << "With a score of " << grade << " out of 100, you have received a C." << endl; break;
                        default:
                            switch (grade >= 60 && grade < 70) {
                                case true: cout << "With a score of " << grade << " out of 100, you have received a D." << endl; break;
                                default:
                                    switch (grade >= 0 && grade < 60) {
                                        case true: cout << "With a score of " << grade << " out of 100, you have received an F." << endl; break;
                                        default: 
                                            switch (grade < 0 || grade > 10) {
                                                case true: cout << "You have entered an invalid score. Please enter a score from 0 to 100." << endl;
                                            }
                                    }
                            }
                    }
            }
    }
                    
    //Exit Stage Right!
    return 0;
}

