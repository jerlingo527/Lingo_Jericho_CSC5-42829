/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 7, 2016, 9:40 AM
 * Purpose: Calculate P = Monthly Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants


int main(int argc, char** argv) {
    //Declare variables
    float Loan;//Loan amount
    float rate;//Interest rate per month
    float pay;//Number of monthly payments
    float month;//Monthly payment
    float temp;//(1 + r)^n
    
    //Prompt for input
    cout << "Enter the loan amount. " << endl;
    cout << "$";
    cin >> Loan;
    cout << "Enter the monthly interest rate (Convert from years to months). " << endl;
    cout << "%";
    cin >> rate;
    cout << "Enter the number of monthly payments. " << endl;
    cin >> pay;
    
    //Calculate
    temp = pow((1 + rate),pay);
    month = (rate * temp) * Loan /(temp - 1);
   
   
    //Output the results
    cout << "Your monthly payment is " << endl;
    cout << "$" << month << " per month. " << endl;
    
    //Exit Stage Right
    return 0;
}