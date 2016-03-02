/* 
 * Author: Jericho Lingo
 * Created on March 2, 2016, 10:00 AM
 * Purpose: Calculate NASA + Military Budgets
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float FEDBUD=3.8e12f;//Total Federal Budget
const float CNVPCT=100;//Conversion from whole number to percentage

int main(int argc, char** argv) {
    //Declare Variables
    float USD;//US Dollar
    float BUD;//Budget
    float PCT;//Percentage
    
    //Prompt for the input USD
    cout<<"Input the budget for any part of federal spending. "<<endl;
    cin>>USD;
    
    //Calculate the budget
    BUD=(USD / FEDBUD);//Floating budget
    PCT=BUD * CNVPCT;//Floating percentage
    
    //Output the results
    cout<<"The budget percentage for this federal spending "<<endl;
    cout<<"is "<<PCT<<"%. "<<endl;
    
    //Exit Stage Right
    return 0;
}

