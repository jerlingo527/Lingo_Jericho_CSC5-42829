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
void calcRet(float [],int [],float,float,float);//Calculate Retirement
void dispRet(float [],int [],float);//Display Retirement

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float salary=6e4f;  //$60,000, whatever you think your salary will be!
    float percDep=1e-1f;//10% to save each year from salary,Babylonian 10
    float pv=0.0f;      //Present value of retirement account
    float iRate=0.05f;  //Interest rate from municipal bond investments
    const int SIZE=1000;//SIZE of the array
    float fv[SIZE]={};  //Initialize the array to zero  
          fv[0]=pv;     //Retirement account value to known when to retire
    int   yrs[SIZE]={}; //Initialize the array to zero  
          yrs[0]=0;     //Start at year 0
    float yrlyDep;      //Yearly Deposit in $'s
    float savRet;       //Savings goal to retire in $'s
    
    //Calculate the savings required to retire and yearly Deposit
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //Output the initial conditions and setup the table
    cout<<"Savings Required to retire = $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal Bond Purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    
    //Computation of the Savings
    calcRet(fv,yrs,savRet,iRate,yrlyDep);
    
    //Display of the Savings
    dispRet(fv,yrs,savRet);
    
    //Exit stage right
    return 0;
}

void calcRet(float fv[],int yrs[],float savRet,float iRate,float yrlyDep){
    //Computation of the Savings
    for(int nYears=1;fv[nYears-1]<savRet;nYears++){
        yrs[nYears]=nYears;
        fv[nYears]=fv[nYears-1]*(1+iRate);//Yearly interest from bonds, use to purchase more bonds
        fv[nYears]=fv[nYears]+yrlyDep;  //Yearly deposit or bonds to purchase
    }
}

void dispRet(float fv[],int yrs[],float savRet){
    //Display of the Savings
    int nYears=0;
    cout<<"Years  Future Value"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<yrs[0]<<setw(5)<<" $"<<setw(11)<<fv[0]<<endl;
    for(nYears=1;fv[nYears-1]<savRet;nYears++){
        cout<<setw(3)<<yrs[nYears]<<setw(5)<<" $"<<setw(11)<<fv[nYears]<<endl;
    }
}