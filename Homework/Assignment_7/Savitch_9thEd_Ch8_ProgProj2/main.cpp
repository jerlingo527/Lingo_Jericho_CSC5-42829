/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int CountWords(string strString);
char add_letter(char letter, int counters[]);

//Execution Begins Here!
int main() {
    string input;
    int counters[26] = {0};

    //Request String
    cout << "Please enter a sentence.\n";
    getline(cin, input);

    //Display Word Count
    cout << "\n" << CountWords(input) << " Words" << endl;

    char *sentence = new char[input.size() + 1];
    sentence[input.size()] = 0;
    memcpy(sentence, input.c_str(), input.size());

    //Count Letters
    while (add_letter(*sentence++, counters));

    //Display Letter Results
    for (int i = 0; i < 26; ++i) {
        if (counters[i]) {
            cout << counters[i] << ": " << char(i + 'a') << '\n';
        }
    }

    cout << "\nPress enter to exit. ";
    cin.get();
    return 0;
}

int CountWords(string strString) {
    int nSpaces = 0;
    unsigned int i = 0;

    while (isspace(strString.at(i)))
        i++;

    for (; i < strString.length(); i++) {
        if (isspace(strString.at(i))) {
            nSpaces++;

            while (isspace(strString.at(i++))) {
                if (strString.at(i) == '\0') {
                    nSpaces--;
                }
            }
        }
    }

    return nSpaces + 1;
}

char add_letter(char letter, int counters[]) {
    char lower_case_letter = tolower(letter);
    if (lower_case_letter >= 'a' && lower_case_letter <= 'z') {
        ++counters[ lower_case_letter - 'a' ];
    }
    return letter;
}