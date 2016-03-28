/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #3
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
    int month;
    int date;
    
    //Input values
    cout << "This program determines your horoscope sign based on your birthday." << endl;
    cout << "Enter the month you were born as a number (e.g. January = 1)." << endl;
    cin >> month;
    cout << "Enter the date you were born." << endl;
    cin >> date;
    
    //Output the results
    cout << "Based on your birth date, which is " << month << "/" << date << "." << endl;
    if ((month == 1 && (date >= 20 && date <= 31)) || (month == 2 && (date >= 1 && date <= 18)))
        cout << "Your horoscope sign is Aquarius." << endl;
    if ((month == 2 && (date >= 19 && date <= 29)) || (month == 3 && (date >= 1 && date <= 20)))
        cout << "Your horoscope sign is Pisces." << endl;
    if ((month == 3 && (date >= 21 && date <= 31)) || (month == 4 && (date >= 1 && date <= 19)))
        cout << "Your horoscope sign is Aries." << endl;
    if ((month == 4 && (date >= 20 && date <= 30)) || (month == 5 && (date >= 1 && date <= 20)))
        cout << "Your horoscope sign is Taurus." << endl;
    if ((month == 5 && (date >= 21 && date <= 31)) || (month == 6 && (date >= 1 && date <= 21)))
        cout << "Your horoscope sign is Gemini." << endl;
    if ((month == 6 && (date >= 22 && date <= 30)) || (month == 7 && (date >= 1 && date <= 22)))
        cout << "Your horoscope sign is Cancer." << endl;
    if ((month == 7 && (date >= 23 && date <= 31)) || (month == 8 && (date >= 1 && date <= 22)))
        cout << "Your horoscope sign is Leo." << endl;
    if ((month == 8 && (date >= 23 && date <= 31)) || (month == 9 && (date >= 1 && date <= 22)))
        cout << "Your horoscope sign is Virgo." << endl;
    if ((month == 9 && (date >= 23 && date <= 30)) || (month == 10 && (date >= 1 && date <= 22)))
        cout << "Your horoscope sign is Libra." << endl;
    if ((month == 10 && (date >= 23 && date <= 31)) || (month == 11 && (date >= 1 && date <= 21)))
        cout << "Your horoscope sign is Scorpio." << endl;
    if ((month == 11 && (date >= 22 && date <= 30)) || (month == 12 && (date >= 1 && date <= 21)))
        cout << "Your horoscope sign is Sagittarius." << endl;
    if ((month == 12 && (date >= 22 && date <= 31)) || (month == 1 && (date >= 1 && date <= 19)))
        cout << "Your horoscope sign is Capricorn." << endl;
    
    //Exit Stage Right!
    return 0;
}

