/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Programming Project #2
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
// Variable Declerations
float a, b, c, discriminant, positive_root, negative_root ;

//Variable Inputs
cout << "Enter the value of a: ";
cin >> a;
cout << "Enter the value of b: ";
cin >> b;
cout << "Enter the value of c: ";
cin >> c;

//Computations
discriminant = (pow(b,2) - 4*a*c);
positive_root = (((-b) + sqrt(discriminant))/(2*a));
negative_root = (((-b) - sqrt(discriminant))/(2*a));

//Output
if (discriminant == 0)
    {
    cout << "\n\nThe discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has a single root.\n\n";
    }
else if (discriminant < 0)
    {
    cout << "\n\nThe discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has two complex roots.\n\n";
    }
else
    {
    cout << "\n\nThe discriminant is ";
    cout << discriminant << endl;
    cout << "The equation has two real roots.\n\n";
    }

//Final Root Values
cout << "The roots of the quadratic equation are x = ";
cout << negative_root;
cout << ", ";
cout << positive_root << endl << endl;

    return 0;
}

