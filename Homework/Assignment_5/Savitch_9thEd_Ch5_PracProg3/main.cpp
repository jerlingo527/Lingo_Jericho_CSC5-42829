/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 25, 2016, 12:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void get_input(float& feet, float& inches, float& meters, float& centimeters);	
float convert(float& feet, float& inches, float& meters , float& centimeters);
void give_output(float feet, float inches, float meters, float centimeters);

//Execution Begins Here!
int main(int argc, char** argv) {
    float feet, inches, meters, centimeters;
	char check;

	do {
			get_input(feet, inches, meters, centimeters);
			convert(feet, inches, meters, centimeters);
			give_output(feet, inches, meters, centimeters);
			cout<<"Repeat calculation? (Y/N)"<<endl;
			cin>>check;

		}while(check == 'Y' || check == 'y');
                cout << "Program has been terminated." << endl;
	return 0;
}

void get_input(float& feet, float& inches, float& meters, float& centimeters)
{ 
	
	cout<<"Enter feet to convert it to meters: ";
	cin>>feet;
	cout<<endl<<"Enter inches to convert it to centimeters: ";
	cin>>inches;
}

float convert(float& feet, float& inches, float& meters , float& centimeters)
{
	
	meters = feet * 0.3048;
	return meters;
	centimeters = inches * 2.54;
	return centimeters;
}

void give_output(float feet, float inches, float meters, float centimeters)
{
	cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
}