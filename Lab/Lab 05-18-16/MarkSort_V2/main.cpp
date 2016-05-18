/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:05 AM
 * Purpose: Sort a random array
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
void mrkSort(int [], int); // Sort the whole array
void smlNLst(int [], int, int); //Find smallest in list from a position
void swap(int &, int &); //Swap elements 
void prntAry(int [], int, int); //Print the array with with columns
void fillAry(int [], int); //Fill array with 2 digit random numbers

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int> (time(0)));

    //Declare variables
    const int SIZE = 100;
    int array[SIZE];

    //Fill the array
    fillAry(array, SIZE);

    //Print the array
    prntAry(array, SIZE, 10);

    //Sort by ascending order
    for (int i = 0; i < SIZE - 1; i++) {
        for (int pos=i + 1; pos < SIZE; pos++) {
            if (array[pos] < array[i]) {
                array[pos] = array[pos]^array[i];
                array[i] = array[pos]^array[i];
                array[pos] = array[pos]^array[i];
            }
        }
    }
    
    //Print the array
    prntAry(array, SIZE, 10);

    //Exit Stage Right!
    return 0;
}

void prntAry(int b[], int m, int perLine) {
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
        if (i % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl << endl;
}

void fillAry(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 90 + 10; //2 digit random number
    }
}