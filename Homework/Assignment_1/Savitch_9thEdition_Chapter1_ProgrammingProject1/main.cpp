/* 
 * Author: Jericho Lingo
 * Created on March 4, 2016, 8:00 PM
 * Purpose: Chapter 1 - Programming Project #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

int main( ) {
    int num1, num2, sum, prod;
 cout << "Press return after entering a number.\n";
 cout << "Enter your first number:\n";
 cin >> num1;
 cout << "Enter your second number:\n";
 cin >> num2;
 sum = num1 + num2;
 prod = num1 * num2;
 cout << "The sum for ";
 cout << num1;
 cout << " and ";
 cout << num2;
 cout << " is ";
 cout << sum;
 cout << ".";
 cout << "The product for ";
 cout << num1;
 cout << " and ";
 cout << num2;
 cout << " is ";
 cout << prod;
 cout << ".";
 return 0;
}
