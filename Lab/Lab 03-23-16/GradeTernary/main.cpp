/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 14, 2016, 8:15 AM
 * Purpose: Grade with Ternary operator
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
    float grade, score;
    
    
    //Input values
    cout << "Input a score from 0 to 100 to receive a letter grade." << endl;
    cin >> grade;

    //Output the results
    cout << "With a score of " << grade << " out of 100, you have received " <<
    ((grade >= 90 && grade <= 100) ?   "an A." :
     (grade >= 80 && grade < 90)   ?   "a B." :
     (grade >= 70 && grade< 80)    ?   "a C." :
     (grade >= 60 && grade < 70)   ?   "a D." :
     (grade >= 0 && grade < 60)    ?   "an F." :"poop");

    
    
    //Exit Stage Right!
    return 0;
}

