/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Tic-Tac-Toe
 */

//System Libraries
#include <iostream>//I/O
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void printBoard(char[3][3]);
bool isGameOver(char[3][3]);
bool getTurn(bool &XsTurn, char input, char board[3][3]);

//Execution Begins Here!

int main(int argc, char** argv) {
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

    return 0;
}

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