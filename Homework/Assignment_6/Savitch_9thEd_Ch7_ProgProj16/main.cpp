/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Start with a deck of cards that contains identical pairs
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    char comma;
    int r1, c1, r2, c2, cards[4][4];
    srand((unsigned) time(NULL));
    //fill board
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            cards[r][c] = rand() % 8 + 1;
            cout << cards[r][c];
        }
        cout << endl;
    }
    //display board
    cout << "    1 2 3 4\n";
    cout << "  ";
    for (int i = 0; i <= 8; i++) {
        cout << "-";
    }
    cout << endl;
    for (int r = 0; r < 4; r++) {
        cout << r + 1 << " | ";
        for (int c = 0; c < 4; c++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Please insert the first card row and column seperated by a comma.\n";
    cin >> r1 >> comma>>c1;
    cout << "Please insert the second card row and column seperated by a comma.\n";
    cin >> r2 >> comma>>c2;
    
    r1--;
    c1--;
    r2--;
    c2--;
    
    cout << "    1 2 3 4\n";
    cout << "  ";
    for (int i = 0; i <= 8; i++) {
        cout << "-";
    }
    cout << endl;
    for (int r = 0; r < 4; r++) {
        cout << r + 1 << " | ";
        for (int c = 0; c < 4; c++) {
            if ((r == r1)&&(c == c1)) {
                cout << cards[r][c] << " ";
            } else if ((r == r2)&&(c == c2)) {
                cout << cards[r][c] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    if (cards[r1][c1] == cards[r2][c2]) {
    } else {
    }
    
    for (int b = 0; b <= 20; b++)
        cout << endl;

    return 0;
}