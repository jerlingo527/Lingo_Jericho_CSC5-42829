/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <cctype>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void cap(char []);


//Execution Begins Here!
int main() {
    char input[100];
    cout << "Please enter up to 99 characters" << endl;
    cin.getline(input, 100);
    cap(input);
    cout << endl;

    return 0;
}

void cap(char input[]) {

    if (input[0] != ' ')
        input[0] = toupper(input[0]);
    for (int count = 0; count <= 99; count++) {
        if (input[count] == ' ' || input[count] == ',' || input[count] == ';' || input[count] == '.')
            input[count + 1] = toupper(input[count + 1]);
    }
    cout << input;
}

