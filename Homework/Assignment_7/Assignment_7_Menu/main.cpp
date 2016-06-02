/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

//Global Constant for Chapter 8 Programming Project 5
const int SIZE = 40;

//Menu Function
void menu();

//Problems
//Savitch_9thEd_Ch8_PracProg1
void prob1();

//Savitch_9thEd_Ch8_PracProg3
void prob2();

//Savitch_9thEd_Ch8_PracProg7
void prob3();

//Savitch_9thEd_Ch8_ProgProj1
void prob4();

//Savitch_9thEd_Ch8_ProgProj2
void prob5();

//Savitch_9thEd_Ch8_ProgProj4
void prob6();

//Savitch_9thEd_Ch8_ProgProj5
void prob7();

//Savitch_9thEd_Ch8_ProgProj6
void prob8();

//Savitch_9thEd_Ch8_ProgProj7
void prob9();

//Savitch_9thEd_Ch8_ProgProj15
void prob10();

//Functions
//Functions for Chapter 8 Practice Program 1
//None

//Functions for Chapter 8 Practice Program 3
//None

//Functions for Chapter 8 Practice Program 7
string newstring(string);
bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

//Functions for Chapter 8 Programming Project 1
void cap(char []);

//Functions for Chapter 8 Programming Project 2
int CountWords(string strString);
char add_letter(char letter, int counters[]);

//Functions for Chapter 8 Programming Project 4
//None

//Functions for Chapter 8 Programming Project 5
void get_input(string& input_line);
string replace_with_love(string input_line);

//Functions for Chapter 8 Programming Project 6
//None

//Functions for Chapter 8 Programming Project 7

bool s_compare(string& a, string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    int *array_a = new int [a.length()];
    int *array_b = new int [b.length()];
    for (unsigned int i = 0; i < a.length(); i++) {
        array_a[i] = a[i] - '0';
        array_b[i] = b[i] - '0';
    }

    sort(array_a, array_a + a.length());
    sort(array_b, array_b + a.length());

    for (unsigned int j = 0; j < a.length(); j++) {
        if (array_a[j] != array_b[j]) {
            delete[] array_a;
            delete[] array_b;
            return false;
        }
    }

    delete[] array_a;
    delete[] array_b;
    return true;
}

bool st_compare(string& a, string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    int array[96] = {0};
    for (unsigned int i = 0; i < a.length(); i++) {
        array[a[i] - '0' - 32] += 1;
    }
    for (unsigned int j = 0; j < a.length(); j++) {
        if (array[b[j] - '0' - 32] == 0) {
            return false;
        } else {
            array[b[j] - '0' - 32] -= 1;
        }
    }
    return true;

}

//Functions for Chapter 8 Programming Project 15
void quickSort(char *arr, int si, int ei);

bool areAnagram(char *str1, char *str2) {
    // Get lenghts of both strings
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    // If length of both strings is not same, then they 
    // cannot be anagram
    if (n1 != n2)
        return false;

    // Sort both strings
    quickSort(str1, 0, n1 - 1);
    quickSort(str2, 0, n2 - 1);

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

void exchange(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char A[], int si, int ei) {
    char x = A[ei];
    int i = (si - 1);
    int j;

    for (j = si; j <= ei - 1; j++) {
        if (A[j] <= x) {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange(&A[i + 1], &A[ei]);
    return (i + 1);
}

void quickSort(char A[], int si, int ei) {
    int pi;
    if (si < ei) {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the loop variable
    unsigned short choice;
    //General Menu Format
    do {
        //Display the selection
        menu();
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch (choice) {
            case 1: prob1();
                break;
            case 2: prob2();
                break;
            case 3: prob3();
                break;
            case 4: prob4();
                break;
            case 5: prob5();
                break;
            case 6: prob6();
                break;
            case 7: prob7();
                break;
            case 8: prob8();
                break;
            case 9: prob9();
                break;
            case 10: prob10();
                break;

            default:
            {
                cout << "Exit?" << endl;
            }
        };
    } while (choice <= 10 && choice >= 1);
    return 0;
}

//Menu Function

void menu() {
    cout << "Type 1 to solve " << endl;
    cout << "Type 2 to solve " << endl;
    cout << "Type 3 to solve " << endl;
    cout << "Type 4 to solve " << endl;
    cout << "Type 5 to solve " << endl;
    cout << "Type 6 to solve " << endl;
    cout << "Type 7 to solve " << endl;
    cout << "Type 8 to solve " << endl;
    cout << "Type 9 to solve " << endl;
    cout << "Type 10 to solve " << endl;
    cout << "Type a letter to quit with no solutions." << endl;
}

//Savitch_9thEd_Ch8_PracProg1

void prob1() {
    //Declare Variables
    string testString = "John 25 Technician";
    stringstream ss;
    ss << testString;
    string name, age, title;
    string array[3] = {name, age, title};
    string temp;
    int n = 0;

    //Sort array
    while (ss >> temp) {
        array[n] = temp;
        ++n;
    }

    //Swap array
    for (int i = 0; i < n; i++)
        cout << array[i] << endl;
    cin.ignore();
}

//Savitch_9thEd_Ch8_PracProg3

void prob2() {
    char fInitial, mInitial, lInitial;
    string fName, mName, lName;

    cout << "Enter your first, middle and last name (ie. John Andrew Gomez)." << endl;

    getline(cin, fName, ' ');
    fInitial = fName[0];

    getline(cin, mName, ' ');
    mInitial = mName[0];

    getline(cin, lName, '\n');
    lInitial = lName[0];

    cout << "Your name is " << fName << " " << mName << " " << lName << "." << endl;
    cout << "Your initals are " << fInitial << "." << mInitial << "." << lInitial << "." << endl;
}

//Savitch_9thEd_Ch8_PracProg7

void prob3() {
    string str;

    cout << "Enter a first and last name to be translated to Pig Latin (ie. John Gomez): ";
    getline(cin, str);
    cout << endl;

    cout << "The pig Latin form of " << str << " is: " << endl;
    newstring(str);
}

//Savitch_9thEd_Ch8_ProgProj1

void prob4() {
    char input[100];
    cout << "Please enter up to 99 characters" << endl;
    cin.getline(input, 100);
    cap(input);
    cout << endl;
}

//Savitch_9thEd_Ch8_ProgProj2

void prob5() {
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
}

//Savitch_9thEd_Ch8_ProgProj4

void prob6() {
    //Declare variables
    string lastname;
    string firstname;
    string middle;

    //Prompt for input
    cout << "Enter the persons first name: ";
    getline(cin, firstname);
    cout << "Enter the persons middle name, or initial: ";
    getline(cin, middle);
    cout << "Enter the persons last name: ";
    getline(cin, lastname);

    //Output the results
    cout << "You have entered: " << lastname << ", " << firstname << " " << middle;
}

//Savitch_9thEd_Ch8_ProgProj5

void prob7() {
    //Declare Variables
    string input_line, love_string;

    //Begin program
    get_input(input_line);
    love_string = replace_with_love(input_line);

    //Output the results
    cout << love_string << endl;
}

//Savitch_9thEd_Ch8_ProgProj6

void prob8() {
    //Declare Variables
    string str;

    //Prompt for input
    cout << "Enter a line of text: ";
    getline(cin, str);

    //Read input
    istringstream iss(str);
    string word;
    string finalStr = "";

    //Look for numbers and replace with 'x'
    while (iss >> word) {
        if (word.find_first_not_of("0123456789") == string::npos) {
            for (int i = 0; i < word.size(); i++) {
                finalStr += 'x';
            }
        } else {
            finalStr.append(word);
        }
        finalStr += ' ';
    }

    //Display with numbers replaced with 'x'
    cout << "Edited text: " << finalStr << endl;
}

//Savitch_9thEd_Ch8_ProgProj7

void prob9() {
    string in, in2;
    cout << "Enter first string: ";
    getline(cin, in);
    cout << "Enter second string: ";
    getline(cin, in2);
    if (s_compare(in, in2)) {
        cout << in << " is an anagram of " << in2 << endl;
    } else {
        cout << in << " is not an anagram of " << in2 << endl;
    }
    if (st_compare(in, in2)) {
        cout << in << " is an anagram of " << in2 << endl;
    } else {
        cout << in << " is not an anagram of " << in2 << endl;
    }
}

//Savitch_9thEd_Ch8_ProgProj15

void prob10() {
    char str1[] = "welcome to my kingdom";
    char str2[] = "two milkmen go comedy";
    if (areAnagram(str1, str2))
        printf("The two strings are anagram of each other");
    else
        printf("The two strings are not anagram of each other");
}

//Functions
//Functions for Chapter 8 Practice Program 1
//None

//Functions for Chapter 8 Practice Program 3
//None

//Functions for Chapter 8 Practice Program 7

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

//Functions for Chapter 8 Programming Project 1

void cap(char input[]) {

    if (input[0] != ' ')
        input[0] = toupper(input[0]);
    for (int count = 0; count <= 99; count++) {
        if (input[count] == ' ' || input[count] == ',' || input[count] == ';' || input[count] == '.')
            input[count + 1] = toupper(input[count + 1]);
    }
    cout << input;
}

//Functions for Chapter 8 Programming Project 2

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

//Functions for Chapter 8 Programming Project 4
//None

//Functions for Chapter 8 Programming Project 5

void get_input(string& input_line) {
    string one[SIZE];
    int i = 0;
    string word;

    cout << "Enter a line of text and press return" << endl;
    cout << "(no longer than 40 characters, including spaces" << endl;
    cout << "and punctuation): " << endl;
    getline(cin, input_line);


}

string replace_with_love(string input_line) {
    string one[SIZE];
    string love_string(input_line);
    string temp;
    unsigned int location, location2, count = 0;
    unsigned int pos = 0, last = 0;

    last = input_line.find_last_of(" ");
    while ((pos < input_line.length()) && (count < SIZE)) {
        location = input_line.find(" ", pos);
        location2 = input_line.find(" ", location + 1);

        if (pos == 0) {
            cout << "if" << endl;
            one[count] = input_line.substr(pos, location);
            count++;
            pos = location;
            cout << "one[count] " << one[count - 1] << endl;
            continue;
        }

        if (last == location) {
            one[count] = input_line.substr((pos + 1), (location));
            one[count + 1] = input_line.substr(pos);
            pos *= 10;
        } else if ((location > (last + 10)) || (location2 > (last + 10)))
            pos *= 10;
        else {
            one[count] = input_line.substr(pos + 1, ((location2) - (location + 1)));

        }
        pos = location2;
        count++;

    }
    for (int i = 0; i < count; i++) {
        if (one[i].length() == 4) {
            temp = one[i];
            if (isupper(temp.at(0)))
                one[i] = "Love";
            else
                one[i] = "love";
        }
    }
    love_string.clear();
    for (int n = 0; n < count; n++)
        love_string += one[n] + " ";
    return love_string;
}

//Functions for Chapter 8 Programming Project 6
//None

//Functions for Chapter 8 Programming Project 7


//Functions for Chapter 8 Programming Project 15
//See top