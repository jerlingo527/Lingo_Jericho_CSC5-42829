/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 9, 2016, 9:00 AM
 * Purpose: Salary increase for arrogant workers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float PercInc = .076; //Percent increase
const float CNVYRMN = 12;   //Conversion from years to months

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float omsal;   //Old monthly salary 
    float osal;    //Old annual salary
    float nmsal;   //New monthly salary
    float nsal;    //New annual salary
    float month;     //Months worked
    float backpay; //Back pay received via months worked
    
    //Input values
    cout << "Input the current annual salary. The new annual salary will have a 7.6% increase." << endl;
    cout << "$";
    cin >> osal;
    cout << "Input back pay time frame (in months)." << endl;
    cin >> month;
    
    //Calculate factor
    omsal = osal / CNVYRMN;
    nsal = osal * (1 + PercInc);
    nmsal = nsal / CNVYRMN;
    backpay = (nsal - osal) / (CNVYRMN / month);

    
    //Output the results
    cout << "With an annual salary of $" << osal;
    cout << " which gives a monthly salary of $" << omsal << "," << endl;
    cout << "the new annual salary will be $" << nsal;
    cout << " which gives a monthly salary of $" << nmsal << "." << endl;
    cout << "Therefore, while working " << month << " months, the back pay should be $" << backpay << "." << endl;
    
    //Exit Stage Right!
    return 0;
}

