/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Second Installment Version 2
 * Scrapped story and replaced with pure gameplay.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstring>
using namespace std;

//Function Prototypes
void intro();
void gamecont();
void route11();
void route21();
void route31();

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    unsigned int start; //Variable for game start

    //General Menu Format
    do {

        //Display the selection
        intro();

        //Read the choice
        cin >> start;

        //Code to avoid infinite loop after a character is introduced
        //Although there is no loop, it's still here just in case.
        cin.clear();
        cin.ignore();

        //Solve a problem that has been chosen.
        switch (start) {
            case 9: gamecont(); //Prompt player input to begin game
                break;
            default: //Terminates game if other value or character is inputted
            {
                cout << "Game terminated." << endl;
                return 0;
            }
        };
    } while (1);
    return 0;
}

//Intro

void intro() {
    //Introduce the game
    cout << setfill('-') << setw(17) << "-" << endl;
    cout << " 999   999   999 " << endl;
    cout << "9   9 9   9 9   9 " << endl;
    cout << "9   9 9   9 9   9 " << endl;
    cout << " 999   999   999 " << endl;
    cout << "   9     9     9 " << endl;
    cout << " 99    99    99  " << endl;
    cout << setfill('-') << setw(17) << "-" << endl;
    cout << "Welcome to the second installment of 9 Hours, 9 Persons, 9 Doors!" << endl;
    cout << "Once again, this version of 999 is a spoiler-free and cut-down version of the game." << endl;
    cout << "Please play the full game that is available for the Nintendo DS and iOS." << endl;
    cout << "In this part, you continue from the last point of the previous installment." << endl;
    cout << "What awaits you is a plethora of options upcoming that are much more difficult to choose from than the first installment." << endl;
    cout << endl << endl;

    //Execute switch statement for starting the game
    cout << "Type '9' to continue. Otherwise, input any other key to exit." << endl << endl;
}

//Begin game

void gamecont() {
    //Start game from last point 
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "After successfully escaping from the rushing water, you continue onward." << endl;
    cout << "You approach to what appears to be a foyer." << endl;
    cout << "There are three doors labeled '1' and '2',." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
    
    cout << "Which door do you enter?" << endl;
}

void route11() {
    cout << "You enter through door '1'." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    
}

void route21() {
    cout << "You enter through door '2'." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    
}