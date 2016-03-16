/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 16, 2016, 9:00 AM
 * Purpose: Switch
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
    float payRate, hrsWrkd, payChk;
    float ovrTime = 40;//Where overtime begins
    
    //Input values
    cout << "Input Pay Rate ($'s/hr) and Hours Worked both dd.dd format" << endl;
    cin >> payRate >> hrsWrkd;
    
    //Map the inputs to the outputs
    switch (hrsWrkd <  0 || hrsWrkd > 98) {
        case true: payChk = 0; break;
        default: 
            switch(hrsWrkd <= ovrTime) {
                case true: payChk = hrsWrkd * payRate; break;
                default:   payChk = hrsWrkd * payRate + (hrsWrkd - ovrTime) * payRate;
            }
    }
    //Output the results
    cout << "Paycheck = $" << payChk << " for "
            << hrsWrkd << " hours @ " << payRate << "/hr" << endl;
    
    //Exit Stage Right!
    return 0;
}

