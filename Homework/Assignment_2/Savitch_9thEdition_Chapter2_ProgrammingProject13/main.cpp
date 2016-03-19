/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #13
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
    float lbs;
    float in;
    float age;
    float sum;
    float totalChoc;
    string gender;
    
    //Input values
    cout << "This program calculates how many chocolate bars you can consume before you exceed basal metabolic rate (or BMR)." << endl;
    cout << "A typical chocolate bar will contain around 230 calories.." << endl;
    cout << "Enter the weight in pounds:" << endl;
    cin >> lbs;
    cout << "Enter the height in inches:" << endl;
    cin >> in;
    cout << "Enter the age in years:" << endl;
    cin >> age;
    cout << "Enter your biological gender (male or female):" << endl;
    cin >> gender;
    
    //Output the results
    if (gender == "male"){
        sum = 66 + (6.3 * lbs) + (12.9 * in) - (6.8 * age);
        totalChoc = (sum / 230);
        cout << "This particular male can consume " << totalChoc << " chocolate bars before exceeding average BMR.";
    }
    if (gender == "female"){
        sum = 655 + (4.3 * lbs) + (4.7 * in) - (4.7 * age);
        totalChoc = (sum / 230);
        cout << "This particular female can consume " << totalChoc << " chocolate bars before exceeding average BMR.";
    }
    //Exit Stage Right!
    return 0;
}

