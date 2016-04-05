/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 *
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;
float drive(float liter, float mile);//Parameters for liters consumed and miles driven
float drive2(float liter2, float mile2);//Parameters for second car mpg

//Global Constants
const float LPG(0.264179);//Amount of liters in a gallon

int main() {
    //Declare variables
        float liter, mile, liter2, mile2;//input variables for liters consumed and miles driven for car 1 & car 2
        float mpg, mpg2;//Determines miles per gallon for car 1 and car 2
        char retry;//Retry loop variable
    do{ cout<<"This program will tell you how many miles\n"
            <<"per gallon 2 vehicles have delivered based\n"
            <<"upon liters consumed per miles traveled.\n\n"
            <<"Enter the liters of gas consumed (Car 1): ";
        cin>>liter;
        cout<<"Enter the amount of miles driven(Car 1): ";
        cin>>mile;
        mpg = drive(liter, mile);//Call drive function for mpg 2
        cout<<"Enter the liters of gas consumed (Car 2): ";
        cin>>liter2;
        cout<<"Enter the amount of miles driven (Car 2): ";
        cin>>mile2;
        mpg2 = drive2(liter2, mile2);//Call drive function for mpg 2
        cout<<"Car 1 gets "<<mpg<<" miles per gallon.\n"
            <<"Car 2 gets "<<mpg2<<" miles per gallon.\n";
        if(mpg>mpg2){
            cout<<"Car 1 is more fuel efficient than Car 2!";
        }else if(mpg2>mpg){
            cout<<"Car 2 is more fuel efficient than Car 1!";
        }else if(mpg==mpg2){
            cout<<"Car 1 and Car 2 have the same fuel efficiency!";
        }
        cout<<"\nWould you like to try again?\n"
            <<"Type 'y' to continue or anything else to terminate: ";
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
float drive2(float liter2, float mile2)    
{
    float gal;
    gal=liter2*LPG;//convert liters to gallons
    return (((mile2)/gal));
}
