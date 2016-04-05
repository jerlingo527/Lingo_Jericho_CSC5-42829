/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;
string number(int n);

int main(){
	for(int bottles = 99; bottles > 0; bottles--){
		cout << number(bottles) << (bottles == 1 ? " bottle" : " bottles") << " of beer on the wall\n";
		cout << number(bottles) << (bottles == 1 ? " bottle" : " bottles") << " of beer\n";
		cout << "Take one down, pass it around,\n";
		cout << number(bottles-1) << (bottles == 2 ? " bottle" : " bottles") << " of beer on the wall\n";
		cin.get();
	}
}

string num1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string num2[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string num3[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string number(int n){
	string result;

	if(n < 10) result = num1[n];
	else if(n < 20) result = num2[n-10];
	else{
		int dig1 = n/10, dig2 = n%10;
		result = num3[dig1-2];
		if(dig2 != 0) result += "-" + num1[dig2];
	}

	result[0] = toupper(result[0]);
	return result;
}