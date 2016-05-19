/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Search a random array
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int countNum2s(int [], int, int); //Linear Search
void prntAry2(int [], int, int); //Print the array with with columns
void fillAry2(int [], int); //Fill array with 2 digit random numbers

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int> (time(0)));

    //Declare variables
    const int SIZE = 100;
    int array[SIZE];

    //Fill the array
    fillAry2(array, SIZE);

    //Print the array
    prntAry2(array, SIZE, 10);

    //Test for 2 at beginning or end
    int val = 2;
    int pos = countNum2s(array, SIZE, val);
    if (pos < 0)
        cout << "Search did not find " << val << endl << endl;
    else
        cout << "Value of " << val << " found at position " << ++pos << endl << endl;

    //Exit Stage Right!
    return 0;
}

int countNum2s(int a[], int n, int val) {
    for (int i = 0; i < n + 1 && i > n - 99; i++) {
        if (a[i] == val)return i; //Found at index i, position ++i
    }
    return -1; //Not found
}

void prntAry2(int b[], int m, int perLine) {
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
        if (i % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl << endl;
}

void fillAry2(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 9 + 1; //2 digit random number
    }
}