/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
string newstring(string);
bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

//Execution Begins Here!
int main() {
    string str;

    cout << "Enter a first and last name to be translated to Pig Latin (ie. John Gomez): ";
    getline(cin, str);
    cout << endl;

    cout << "The pig Latin form of " << str << " is: " << endl;
    newstring(str);

    return 0;

}

bool isVowel(char ch) {
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}

string rotate(string pStr) {
    string::size_type len = pStr.length();
    string rStr;
    rStr = pStr.substr(1, len - 1) + pStr[0];
    return rStr;
}

string pigLatinString(string pStr) {
    string::size_type len;
    bool foundVowel;
    if (isVowel(pStr[0]))
        pStr = pStr + "-way";
    else {
        pStr = pStr + '-';
        pStr = rotate(pStr);
        len = pStr.length();
        foundVowel = false;

        for (int counter = 1; counter < len - 1; counter++) {
            if (isVowel(pStr[0])) {
                foundVowel = true;
                break;
            } else
                pStr = rotate(pStr);

            if (!foundVowel)
                pStr = pStr.substr(1, len) + "-way";
            else
                pStr = pStr + "ay";
        }
        return pStr;
    }
}

string newstring(string sentence) {
    string newsentence, currentword;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            pigLatinString(currentword) + " ";
            currentword.clear();
        } else {
            currentword += sentence[i];
        }
    }
    return newsentence;
}