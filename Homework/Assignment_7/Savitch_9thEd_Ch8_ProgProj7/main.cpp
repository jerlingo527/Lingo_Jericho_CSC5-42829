/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
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


//Execution Begins Here!
int main() {
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
    return 0;
}