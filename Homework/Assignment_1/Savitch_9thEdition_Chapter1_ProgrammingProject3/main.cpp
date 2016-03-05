/* 
 * Author: Jericho Lingo
 * Created on March 4, 2016, 8:00 PM
 * Purpose: Chapter 1 - Programming Project #3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

int main( ) {
    int quart, dime, nick, qtprod, dmprod, nkprod, totalPrice;
 cout << "Press return after entering a number." << endl;
 cout << "Enter the number of quarters:" << endl;
 cin >> quart;
 cout << "Enter the number of dimes:" << endl;
 cin >> dime;
 cout << "Enter the number of nickels:" << endl;
 cin >> nick;
 qtprod = quart * 25;
 dmprod = dime * 10;
 nkprod = nick * 5;
 totalPrice = qtprod + dmprod + nkprod;
 cout << "The total price for the coins you've entered will be ";
 cout << totalPrice;
 cout << " cents. ";
 return 0;
}
