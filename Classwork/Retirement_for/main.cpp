/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Purpose:  Retirement Savings Plan
 *           Refer to http://california.municipalbonds.com/bonds/recent
 * Date:     March 30th, 2016  8:37am
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float salary=6e4f;  //$60,000, whatever you think your salary will be!
    float percDep=1e-1f;//10% to save each year from salary,Babylonian 10
    float pv=0.0f;      //Present value of retirement account
    float iRate=0.05f;  //Interest rate from municipal bond investments
    int   nYears=0;     //Years it will take to retire
    float fv=pv;        //Retirement account value to known when to retire
    float yrlyDep;      //Yearly Deposit in $'s
    float savRet;       //Savings goal to retire in $'s
    
    //Calculate the savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //Output the initial conditions and setup the table
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(5)<<" $"<<setw(11)<<fv<<endl;
    
    //Loop each year until the you meet the savings requirement
    for(nYears=1;fv<savRet;nYears++){
        fv*=(1+iRate);//Yearly interest from bonds, use to purchase more bonds
        fv+=yrlyDep;  //Yearly deposit or bonds to purchase
        cout<<setw(3)<<nYears<<setw(5)<<" $"<<setw(11)<<fv<<endl;
    }
    
    //Exit stage right
    return 0;
}