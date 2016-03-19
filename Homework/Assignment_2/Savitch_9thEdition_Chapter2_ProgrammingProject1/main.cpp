/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float DietSodaSweet = 0.001;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float DietSoda;
    float sweetMouse;
    float weightMouse;
    float sweetDieter;
    float weightDieter;
    
    //Input values
    cout << "This program calculates how many cans of soda it will take to kill you." << endl;
    cout << "Each can contains 0.001 (0.1%) of artificial sweetener." << endl;
    cout << "Enter the amount of Artificial Sweetener needed to kill a mouse." << endl;
    cin >> sweetMouse;
    cout << "Enter the weight of the mouse in grams." << endl;
    cin >> weightMouse;
    cout << "Enter the weight of the dieter in grams at which dieting activity will be stopped." << endl;
    cin >> weightDieter;   
    
    //Calculations
    sweetDieter = (sweetMouse / weightMouse) * weightDieter;
    DietSoda = (sweetDieter / DietSodaSweet);
    
    //Output the results
    cout << "The amount of Diet Soda Pop Can's that would kill the dieter is:" << endl;
    cout << DietSoda << endl;
    
    //Exit Stage Right!
    return 0;
}

