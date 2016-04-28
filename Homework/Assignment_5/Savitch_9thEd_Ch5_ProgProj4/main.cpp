/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 26, 2016, 1:00 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    int coin_value;
    int quarters;
    int dimes;
    int nickles;
    int pennies;
    int total_amount;
    char yes = 'y';
    char Yes = 'Y';
    char again;

    cout << " Coin counting program.\n";
    cout << " \n";

    do {
        quarters = 0;
        dimes = 0;
        nickles = 0;
        pennies = 0;


        cout << " Enter the amount of change ";
        cin >> coin_value;
        cout << "\n";

        if (coin_value >= 25 && coin_value <= 100) {
            quarters = coin_value / 25;
            coin_value = coin_value % 25;
        }


        if (coin_value <= 24 && coin_value >= 10) {
            dimes = coin_value / 10;
            coin_value = coin_value % 10;
        }


        if (coin_value <= 9 && coin_value >= 5) {
            nickles = coin_value / 5;
            coin_value = coin_value % 5;
        }


        if (coin_value <= 4 && coin_value >= 1) {
            pennies = coin_value;
        }


        ////////
        total_amount = (quarters * 25)+ (dimes * 10)+ (nickles * 5) + pennies;
        cout << total_amount << " Cents Can be given as ";
        ////////


        if (quarters == 1) {
            cout << quarters << " quarter, ";
        }


        if (quarters == 2 || quarters == 3) {
            cout << quarters << " quarters, ";
        }


        if (dimes == 1) {
            cout << dimes << " dime, ";
        }


        if (dimes == 2) {
            cout << dimes << " dimes, ";
        }


        if (nickles == 1) {
            cout << nickles << " nickle, ";
        }


        if (pennies == 1) {
            cout << pennies << " penny. " << endl;
        }


        if (pennies < 4 && pennies > 2) {
            cout << pennies << " pennies. " << endl;
        }


        cout << "\n";
        cout << " Would you like to run the program agian (Y or N)? ";
        cin >> again;

    } while (again == yes || again == Yes);

    cout << "\n\nEnd Program.\n";
    return 0;
}