/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;

float drive(float liter, float mile);//Parameters for liters consumed and miles driven

//Global Constants
const float LPG(0.264179);//Amount of liters in a gallon

int main() {
    //Declare variables
        float liter, mile;//input variables for liters consumed and miles driven
        float mpg;//Determines miles per gallon
        char retry;//Retry loop variable
    do{ cout<<"This program will tell you how many miles\n"
            <<"per gallon your vehicle has delivered based\n"
            <<"upon liters consumed per miles traveled.\n\n"
            <<"Enter the liters of gas consumed: ";
        cin>>liter;
        cout<<"Enter the amount of miles driven: ";
        cin>>mile;
        mpg = drive(liter, mile);//Call function named drive
        cout<<"\nIf you have driven "<<mile<<" miles and \n"
            <<"consumed "<<liter<<" liters of gas, then you\n"
            <<"have received about "<<mpg<<" miles per gallon.\n\n"
            <<"Would you like to try again?\n"
            <<"Type 'y' to continue or anything else to terminate.\n"
            <<"Continue? ";
            cin>>retry;
   }while(retry=='y'||retry=='Y');//Loop condition
        
    cout<<"Thank you have a good day! :)";
    //Exit Stage Right!!
    return 0;
}
float drive(float liter, float mile)//Function calculating miles per gallon
{
    float gal;
    gal=liter*LPG;//convert liters to gallons
    return (((mile)/gal));
}
