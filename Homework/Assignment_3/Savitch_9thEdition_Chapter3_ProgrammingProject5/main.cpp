/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Programming Project #5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
	float monthlyPayment;
	float balance;
	float interestRate;
	float interestPaid;
	float initialBalance;
	float termOfLoan;
	float month = 1;

	cout.setf(ios::fixed);	// These lines force currency format in output to 2 decimal pts
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Enter the current balance of your loan: $";
	cin >> balance;
	cout << "Enter the interest rate (compounded monthly) : ";
	cin >> interestRate;
	cout << "Enter the desired monthly payment : $";
	cin >> monthlyPayment;
	
	initialBalance = balance;

	while (interestRate >= 1)       /*Converts the interest rate to a decimal if the user inputs 
                                                      in percentage form*/
	{ 
		interestRate = interestRate / 100; 
	}

	balance = balance * (1 + interestRate / 12) - monthlyPayment;
		
	cout << "After month 1 your balance is $" << balance << endl;

	while (balance > 0)
	{
		if (balance < monthlyPayment)
		{
			balance = balance - balance;
		}	
		else 
		{
			balance = balance * (1 + interestRate / 12) - monthlyPayment;
		}

		month = month++;		

		cout << "After month " << month << ", your balance is : $" << balance << endl;
		}
		cout << "You have paid off the loan at this point. Congratulations!" << endl;
		
		
		termOfLoan = month;
		
interestPaid = (monthlyPayment * termOfLoan) - initialBalance; 		

        	cout << "You paid a total ammount of $" << interestPaid << " in intrest." << endl;

    return 0;
}

