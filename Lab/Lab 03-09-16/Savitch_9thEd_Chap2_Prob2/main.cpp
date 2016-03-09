/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 9, 2016, 8:15 AM
 * Purpose: Babylonian Algorithm
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
    float n, r, guess;
    
    //Initialize variables
    
    
    //Input values
    cout << "What number would you like to find the square root of? " << endl;
    cin >> n;
    
    //Calculate the first approximation
    guess = n / 2;
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the first approximation
    cout << "First approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Calculate the second approximation
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the second approximation
    cout << "Second approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Calculate the third approximation
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the third approximation
    cout << "Third approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Calculate the fourth approximation
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the fourth approximation
    cout << "Fourth approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Calculate the fifth approximation
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the fifth approximation
    cout << "Fifth approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Calculate the sixth approximation
    r = n / guess;
    guess = (guess + r) / 2 ;
    
    //Output the sixth approximation
    cout << "Sixth approximation = square root(" << n << ") = r (" << r << "), guess (" << guess <<")" << endl;
    
    //Exit Stage Right!
    return 0;
}



