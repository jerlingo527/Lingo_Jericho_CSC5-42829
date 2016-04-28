/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 25, 2016, 1:00 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void description();
//Postcondition: Description of the program is printed to the screen.
void get_input(float side_a, float side_b, float side_c);
//Precondition: User enters correct values.
//Postcondition: The length of sides a, b, and c of a triangle
//are assigned to variables side_a, side_b, and side_c
bool check_triangle(float& side_a, float& side_b, float& side_c);
//Precondition: Side lengths a, b, and c are positive nonzero numbers.
//Postcondition: If the side lengths a, b, c can correctly form a triangle
//a function to calculate the semipeerimieter, perimeter, and area will be called.
float semiperimter(float side_a, float side_b, float side_c);
//Precondition: Side lengths a, b, and c are positive nonzero numbers. 
//Postcondition: Returns the value of the semiperimeter of the triangle.
void area_perimeter(float side_a, float side_b, float side_c, float perimeter, float area);
//Precondition: Side lengths a, b, and c are positive nonzero numbers.  
//Postcondition: Returns the perimeter and area of a triangle. 


//Execution Begins Here!

int main(int argc, char** argv) {
    float side_a, side_b, side_c;
    char answer;

    do {
        description();
        get_input(side_a, side_b, side_c);
        check_triangle(side_a, side_b, side_c);
    } while (answer == 'y' || answer == 'Y');

    return 0;
}

void description() {
    cout << "This program calculates the perimeter and area of a triangle" << endl;
    cout << "based on inputed values of three side lengths." << endl;
}

void get_input(float side_a, float side_b, float side_c) {
    cout << "Input the lengths of three sides of a triangle: ";
    cin >> side_a;
    while (side_a <= 0) {
        cout << "Enter a positive nonzero number for the length of side a";
        cin >> side_a;
    }
    cout << ",";
    cin >> side_b;
    while (side_b <= 0) {
        cout << "Enter a positive nonzero number for the length of side b";
        cin >> side_b;
    }
    cout << ",";
    cin >> side_c;
    while (side_c <= 0) {
        cout << "Enter a positive nonzero number for the length of side c";
        cin >> side_c;
    }
    cout << endl;
}

bool check_triangle(float& side_a, float& side_b, float& side_c) {
    if (side_a + side_b >= side_c)
        return true;
    else
        return false;

    cout << "Those side lengths cannot produce a triangle.\n";
    float semiperimter(float side_a, float side_b, float side_c);
    {
        float s;

        s = (side_a + side_b + side_c) / 2.0;
        return s;
    }
}

void area_perimeter(float side_a, float side_b, float side_c, float perimeter, float area) {
    area_perimeter(side_a, side_b, side_c, perimeter, area);
}