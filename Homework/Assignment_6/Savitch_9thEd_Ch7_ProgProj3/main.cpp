/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Write a function called delete_repeats that has a partially filled array of
characters as a formal parameter and that deletes all repeated letters from the
array.
 */

//System Libraries
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void introduction();
void input(char word[], int& size);
void delete_repeats(char word[], int& size);

//Execution Begins Here!

int main(int argc, char** argv) {
    int counter, size, A;
    char array[81];
    input(array, size);
    delete_repeats(array, size);
    cout << "resulting array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl << endl << endl;
    return 0;
}

void input(char word[], int& size) {
    int counter = 0;
    cout << endl;
    cout << "counter = " << counter;
    cout << endl;

    do {
        cin.get(word[counter]);
        cout << endl;
        cout << "counter = " << counter;
        cout << ";  word[" << counter << "] = " << (int) word[counter];
        cout << endl;
        counter++;

    } while (word[counter - 1] != '\n');
    size = counter - 1;
    cout << size << " size";
    cout << endl;
    cout << endl;
    cout << "counter = " << counter;
    cout << endl;
}

void delete_repeats(char word[], int& size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (word[i] == word[j]) {
                for (int k = j; k < size - 1; k++) {
                    word[k] = word[k + 1];
                }
                j--;
                size--;
            }
            cout << "size = " << size;
            cout << endl;
        }
    }
}
