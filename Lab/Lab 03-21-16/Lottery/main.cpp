/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 21, 2016, 10:00 AM
 * Purpose: This program determines how much you will receive from
 * the lottery via Lump Sum Penalty, Tax Penalty, and Marriage Equity
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants
const float LumpSumPen = 0.62;
const float TaxPen = 0.52;
const float MarEqu = 0.50;

int main(int argc, char** argv) {
    //Declare variables
    float iniWin; //Initial lottery amount earned
    float fstTax; //Cost after Lump Sum Penalty
    float finfstTax; //Earnings after Lump Sum Penalty
    float sndTax; //Cost after Tax Penalty
    float finsndTax; //Earnings after Tax Penalty
    float splfstTax; //Cost after Marriage Equity from Lump Sum Penalty
    float splsndTax; //Cost after Marriage Equity from Tax Penalty
    
    //Input values
    cout << "This program determines how much you would receive given you win the lottery." << endl;
    cout << "Enter the amount you have won from the lottery." << endl;
    cin >> iniWin;
    
    //Calculations
    fstTax = iniWin * LumpSumPen;
    finfstTax = iniWin - fstTax;
    sndTax = iniWin * TaxPen;
    finsndTax = iniWin - sndTax;
    splfstTax = finfstTax * MarEqu;
    splsndTax = finsndTax * MarEqu;
    
    //Output the results
    cout << "If you've won $" << iniWin << " from the lottery:" << endl;
    cout << "The deduction taken from the Lump Sum Penalty is $" << fstTax << endl;
    cout << "Therefore, the final earnings is $" << finfstTax << "." << endl;
    cout << "The deduction taken from the Tax Penalty is $" << sndTax << endl;
    cout << "Therefore, the final earnings is $" << finsndTax << "." << endl;
    cout << "If you wanted to account for Marriage Equity by the Lump Sum Penalty," <<endl;
    cout << "the split earnings would be $" << splfstTax << "." << endl;
    cout << "If you wanted to account for Marriage Equity by the Tax Penalty," <<endl;
    cout << "the split earnings would be $" << splsndTax << "." << endl;
    
    //Exit Stage Right!
    return 0;
}

