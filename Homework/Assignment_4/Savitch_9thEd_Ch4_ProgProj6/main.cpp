/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;


void twinkie();
bool good(int);

const int TWINKIE_COST = 350;
const int DOLLAR = 100, QUARTER = 25, DIME = 10, NICKEL = 5;


int main()
{
 //use a loop to repeat the twinkie machine
 char ans;
 do
 {
       //use the machine to get a twinkie.
       twinkie();
      cout <<  "Would you like to have another twinkie? (y or n) ";
      cin >> ans;
 }while (ans == 'y' || ans == 'Y');
 
 return 0;
}


void twinkie()
{
     //declare all variables needed
     //initialize where necessary
     int total_coins = 0, coin, change;
     //a loop to take coins up to 350
     do
     {
           //prompt user to enter coin
           cout << "Enter a coin or dollar amount: ";
           cin >> coin;
           //validate coin value. make a bool function to validate
           
           if (good(coin))
           {
                  total_coins += coin; //total up coins
                  cout << "You've added " << total_coins << " cents. " << endl;
                  cout << "You need " << TWINKIE_COST - total_coins << " more. " << endl;
           }
           else
           {
               cout << "Not a valid coin."; //display a message
           }
     } while (total_coins < TWINKIE_COST);
     cout << "Enjoy your twinkie :D ";//display enjoy message
     //calculate the change
     change = total_coins - TWINKIE_COST;
     if (change > 0)
     {
     cout << "Your change is: " << change;//message           
     }
     
     return;
}

bool good(int c)
{
     if(c==NICKEL || c==DIME || c==QUARTER || c==DOLLAR)
             return true;
     else
             return false;
}