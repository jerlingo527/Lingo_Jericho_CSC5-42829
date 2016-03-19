/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Practice Program #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float metTon = 35273.92;

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float cerWght;
    float cermetTon;
    float box;

    //Input values
    cout << "This program calculates the weight of a package of breakfast cereal from ounces to a metric ton." << endl;
    cout << "Enter the weight of a package of breakfast cereal in ounces:" << endl;
    cin >> cerWght;
            
    //Calculations
    cermetTon = cerWght / metTon;
    box = metTon - cerWght;
    
    //Output the results
    cout << "The weight of this cereal in " << cerWght << " ounces converted to metric tons is"  << endl;
    cout << cermetTon << " ton(s)." << endl;
    cout << "You will need " << box << " ounces of cereal boxes in order to create a metric ton." << endl;
    
    //Exit Stage Right!
    return 0;
}

