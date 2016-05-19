/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on May 18, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> //Rand and Set Random
#include <ctime>    //Utilize time to set the seed
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <functional>
using namespace std;

//Menu Function
void menu();

//Problems
//Savitch_9thEd_Ch6_PracProg5
void prob1();

//Savitch_9thEd_Ch6_ProgProj2
void prob2();

//Savitch_9thEd_Ch7_PracProg1
void prob3();

//Savitch_9thEd_Ch7_PracProg2
void prob4();

//Savitch_9thEd_Ch7_PracProg3
void prob5();

//Savitch_9thEd_Ch7_ProgProj3
void prob6();

//Savitch_9thEd_Ch7_ProgProj5
void prob7();

//Savitch_9thEd_Ch7_ProgProj10
void prob8();

//Savitch_9thEd_Ch7_ProgProj11
void prob9();

//Savitch_9thEd_Ch7_ProgProj16
void prob10();

//Functions
//Functions for Chapter 6 Practice Program 5
//None

//Functions for Chapter 6 Programming Project 2
void calculate(ifstream&, ofstream&);

//Functions for Chapter 7 Practice Program 1
int firstLast2(int [], int, int); //Linear Search
void prntAry1(int [], int, int); //Print the array with with columns
void fillAry1(int [], int); //Fill array with 2 digit random numbers

//Functions for Chapter 7 Practice Program 2
int countNum2s(int [], int, int); //Linear Search
void prntAry2(int [], int, int); //Print the array with with columns
void fillAry2(int [], int); //Fill array with 2 digit random numbers

//Functions for Chapter 7 Practice Program 3
int swapFrontBack(int [], int, int); //Linear Search
void prntAry3(int [], int, int); //Print the array with with columns
void fillAry3(int [], int); //Fill array with 2 digit random numbers

//Functions for Chapter 7 Programming Project 3
void introduction();
void input(char word[], int& size);
void delete_repeats(char word[], int& size);

//Functions for Chapter 7 Programming Project 5
//None

//Functions for Chapter 7 Programming Project 10
void printBoard(char[3][3]);
bool isGameOver(char[3][3]);
bool getTurn(bool &XsTurn, char input, char board[3][3]);

//Functions for Chapter 7 Programming Project 11
//None

//Functions for Chapter 7 Programming Project 16
//None

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
    cout << "Type 1 to solve Chapter 6 Practice Program 5" << endl;
    cout << "Type 2 to solve Chapter 6 Programming Project 2" << endl;
    cout << "Type 3 to solve Chapter 7 Practice Program 1" << endl;
    cout << "Type 4 to solve Chapter 7 Practice Program 2" << endl;
    cout << "Type 5 to solve Chapter 7 Practice Program 3" << endl;
    cout << "Type 6 to solve Chapter 7 Programming Project 3" << endl;
    cout << "Type 7 to solve Chapter 7 Programming Project 5" << endl;
    cout << "Type 8 to solve Chapter 7 Programming Project 10" << endl;
    cout << "Type 9 to solve Chapter 7 Programming Project 11" << endl;
    cout << "Type 10 to solve Chapter 7 Programming Project 16" << endl;
    cout << "Type a letter to quit with no solutions." << endl;
}

//Savitch_9thEd_Ch6_PracProg5

void prob1() {
    string input;
    fstream inout;
    inout.open("input5.txt", ios::in);
    if (inout.fail()) {
        cout << "file did not open for input please check it\n";
        system("pause");
    }
    getline(inout, input);
    while (inout) {
        cout << input << endl;
        getline(inout, input);
    }
    inout.close();
    inout.clear();
    inout.open("input5.txt", ios::out | ios::app);
    if (inout.fail()) {
        cout << "file did not open for append please check it\n";
        system("pause");
    }
    cout << "Please add any advice you have and press enter twice when completed\n";
    getline(cin, input);
    while (input.length() > 0) {
        inout << input << endl;
        getline(cin, input);
    }
    inout.close();
}

//Savitch_9thEd_Ch6_ProgProj2

void prob2() {
    ifstream in;
    ofstream out;

    in.open("input4.txt");

    if (in.fail()) {
        cout << "Input file failed. Please try again or use another file./n";
    }

    out.open("output4.txt");
    calculate(in, out);
    out.close();
    in.close();
}

//Savitch_9thEd_Ch7_PracProg1

void prob3() {
    //Set the random number seed for variability
    srand(static_cast<unsigned int> (time(0)));

    //Declare variables
    const int SIZE = 100;
    int array[SIZE];

    //Fill the array
    fillAry1(array, SIZE);

    //Print the array
    prntAry1(array, SIZE, 10);

    //Test for 2 at beginning or end
    int val = 2;
    int pos = firstLast2(array, SIZE, val);
    if (pos < 0)
        cout << "Search did not find " << val << endl << endl;
    else
        cout << "Value of " << val << " found at position " << ++pos << endl << endl;
}

//Savitch_9thEd_Ch7_PracProg2

void prob4() {
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
}

//Savitch_9thEd_Ch7_PracProg3

void prob5() {
    //Set the random number seed for variability
    srand(static_cast<unsigned int> (time(0)));

    //Declare variables
    const int SIZE = 100;
    int array[SIZE];

    //Fill the array
    fillAry3(array, SIZE);

    //Print the array
    prntAry3(array, SIZE, 10);

    //Test for 2 at beginning or end
    int val = 2;
    int pos = swapFrontBack(array, SIZE, val);
    if (pos < 0)
        cout << "Search did not find " << val << endl << endl;
    else
        cout << "Value of " << val << " found at position " << ++pos << endl << endl;
}

//Savitch_9thEd_Ch7_ProgProj3

void prob6() {
    int counter, size, A;
    char array[81];
    input(array, size);
    delete_repeats(array, size);
    cout << "resulting array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl << endl << endl;
}

//Savitch_9thEd_Ch7_ProgProj5

void prob7() {
    string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
    stringstream ss(input);

    const int SPACING = 3;

    const size_t SIZE = 50;
    int myArray[SIZE] = {0};

    int count = -1;

    //fills the array with integers
    while (ss >> myArray[++count]); //NULL statement

    //create pointers to the beginning and end of the array
    int *beg = myArray;
    int *end = myArray + count;


    //Sorts the array
    sort(beg, end, greater<int>());

    int current = myArray[0];
    count = 1;


    //counts the number of each value in the array
    while (++beg != end) {

        if (current != *beg) {
            cout << setw(SPACING) << current << setw(SPACING) << count << endl;
            current = *beg;
            count = 0;
        }

        ++count;
    }

    //outputs the final value
    cout << setw(SPACING) << current << setw(SPACING) << count << endl;

    cin.ignore();
}

//Savitch_9thEd_Ch7_ProgProj10

void prob8() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    bool XsTurn = true;
    cout << "~~~ Tic-Tac-Toe game ~~~" << endl;

    do {
        cout << "\nIt's now " << (XsTurn ? "X" : "O") << "'s turn.\n";
        printBoard(board);
        do {
            char input;
            cout << "Enter an empty square number to place your mark: ";
            cin >> input;
            if (getTurn(XsTurn, input, board)) {
                break;
            }
        } while (true);
    } while (!isGameOver(board));
}

//Savitch_9thEd_Ch7_ProgProj11

void prob9() {
    char Seat = ' ';
    string Airline[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char Again = ' ';
    int Row = 0;

    Again = 'y';

    while (Again == 'y') {
        cout << "Enter a row: ";
        cin >> Row;
        cout << "Enter a seat: ";
        cin >> Seat;

        int idx = 1 + Seat - 'A';
        if (Airline[Row - 1][idx] == 'X') {
            cout << "Seat is taken." << endl;
            continue;
        } else
            Airline[Row - 1][idx] = 'X';
        cout << "Enter another seat? (y/n): ";
        cin >> Again;

        for (int i = 0; i < 7; ++i) {
            cout << Airline[i] << endl;
        }

    }

    cout << "Bye!" << endl;
}

//Savitch_9thEd_Ch7_ProgProj16

void prob10() {
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
}

//Functions
//Functions for Chapter 6 Practice Program 5
//None

//Functions for Chapter 6 Programming Project 2

void calculate(ifstream& in, ofstream& out) {
    int i, sum, a[10];
    string first, last;
    float avg;
    in>>first;
    while (in) {
        sum = 0;
        in>>last;
        for (i = 0; i < 10; i++) {
            in >> a[i];
            sum += a[i];
        }

        out << first << " " << last << " ";
        for (i = 0; i < 10; i++)
            out << a[i] << " ";
        avg = sum / 10.;
        out << avg << endl;
        in>>first;
    }
}

//Functions for Chapter 7 Practice Program 1

int firstLast2(int a[], int n, int val) {
    for (int i = 0; i <= 0 || i >= 98; i++) {
        if (a[i] == val)return i; //Found at index i, position ++i
    }
    return -1; //Not found
}

void prntAry1(int b[], int m, int perLine) {
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
        if (i % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl << endl;
}

void fillAry1(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 9 + 1; //2 digit random number
    }
}

//Functions for Chapter 7 Practice Program 2

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

//Functions for Chapter 7 Practice Program 3

int swapFrontBack(int a[], int n, int val) {
    for (int i = 0; i < n + 1 && i > n - 99; i++) {
        if (a[i] == val)return i; //Found at index i, position ++i
    }
    return -1; //Not found
}

void prntAry3(int b[], int m, int perLine) {
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
        if (i % perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl << endl;
}

void fillAry3(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 9 + 1; //2 digit random number
    }
}

//Functions for Chapter 7 Programming Project 3

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


//Functions for Chapter 7 Programming Project 5
//None

//Functions for Chapter 7 Programming Project 10

void printBoard(char board[3][3]) {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            cout << board[row][col] << (col == 2 ? "\n" : " ");
    return;
}

bool isGameOver(char board[3][3]) {
    for (int row = 0; row < 3; row++)
        if ((board[row][0] == board[row][1]) && (board[row][1] == board[row][2])) { // check rows
            cout << board[row][0] << " wins.\n";
            return true;
        }
    for (int col = 0; col < 3; col++)
        if ((board[0][col] == board[1][col]) && (board[1][col] == board[2][col])) { // check columns
            cout << board[0][col] << " wins.\n";
            return true;
        }
    if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) { // check \ diagonal
        cout << board[1][1] << " wins.\n";
        return true;
    }
    if ((board[2][0] == board[1][1]) && (board[1][1] == board[2][0])) { // check / diagonal
        cout << board[1][1] << " wins.\n";
        return true;
    }
    int unfilled = 0;
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (board[row][col] >= '1' && board[row][col] <= '9')
                unfilled++; // count unfilled squares
    if (unfilled == 0) {
        cout << "No more unfilled squares. Draw game.\n";
        return true;
    }
    return false;
}

bool getTurn(bool &XsTurn, char input, char board[3][3]) {
    if (input < '1' || input > '9') {
        cout << "Please enter a digit from 1 to 9." << endl;
        return false;
    }
    int intInput = input - '1';
    int row = (intInput / 3), col = intInput % 3;
    //cout << input << intInput << row << col << board[row][col] << endl;
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Square " << input << " is already filled." << endl;
        return false;
    }
    board[row][col] = (XsTurn ? 'X' : 'O');
    XsTurn = !XsTurn;
    return true;
}

//Functions for Chapter 7 Programming Project 11
//None

//Functions for Chapter 7 Programming Project 16
//None