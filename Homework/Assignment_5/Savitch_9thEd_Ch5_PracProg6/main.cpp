/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 25, 2016, 12:30 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void get_input(float& lbs, float& oz, float& kg, float& g);
float convert(float& lbs, float& oz, float& kg, float& g);
void give_output(float lbs, float oz, float kg, float g);

//Execution Begins Here!

int main(int argc, char** argv) {
    float lbs, oz, kg, g;
    char check;

    do {
        get_input(lbs, oz, kg, g);
        convert(lbs, oz, kg, g);
        give_output(lbs, oz, kg, g);
        cout << "Repeat calculation? (Y/N)" << endl;
        cin >> check;
    } while (check == 'Y' || check == 'y');
    cout << "Program has been terminated." << endl;
    return 0;
}

void get_input(float& lbs, float& oz, float& kg, float& g) {
    cout << "Enter kilograms to convert it to pounds: ";
    cin >> lbs;
    cout << endl << "Enter grams to convert it to ounces: ";
    cin >> oz;
}

float convert(float& lbs, float& oz, float& kg, float& g) {
    lbs = kg * 0.453592;
    return lbs;
    oz = g * 0.035274;
    return oz;
}

void give_output(float lbs, float oz, float kg, float g) {
    cout << kg << " kilograms and " << g << " grams is equivalent to " << lbs << " pounds and " << oz << " ounces." << endl;
}