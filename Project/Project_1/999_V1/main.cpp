/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Project V1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!

int main(int argc, char** argv) {
    //Intro
    cout << "Welcome to 9 Hours, 9 Persons, 9 Doors!" << endl;
    cout << "This is a VN (Visual Novel) based on the popular DS game, '9 Hours, 9 Persons, 9 Doors'." << endl;
    cout << "This version of 999 (abbreviated for simplicity's sake) is a spoiler-free and cut-down version of the game." << endl;
    cout << "Please play the full game that is available for the Nintendo DS." << endl;
    cout << "To learn more about this game, please read the enclosed writeup or look it up on Google." << endl;
    cout << endl << endl;

    //Set variable for game start
    char start;

    //Execute if statement for starting the game
    cout << "Type any key to begin. Otherwise, type 'X' or 'x' to exit." << endl;
    cin >> start;
    if (start == 'X' || start == 'x') {
        cout << "Game terminated." << endl;
        return 0;
    }

    //Start game inside the room
    cout << endl;
    cout << "You wake up trapped inside a room, unable to remember a thing." << endl;
    cout << "The room appears to be a bedroom, as it has a bed, a small drawer with a lamp, a window, and a door to what appears to be the exit." << endl;
    cout << endl;

    //Set variable for player choice
    int choice1;

    //Prompt player for choice with a do-while loop.
    for(choice1=0;choice1<9;choice1++) {

        //Give choices for player
        cout << "What do you do?" << endl;
        cout << "Type 1 to look through the window." << endl;
        cout << "Type 2 to attempt to open the door." << endl;
        cout << "Type 3 to examine the room." << endl;
        cout << endl;

        //Assign choice1 for upcoming switch statement
        cin >> choice1;

        //
        switch (choice1) {
            case 1:
            {
                cout << endl;
                cout << "You look through the window." << endl;
                cout << "It is too dark to see anything. It may actually look like it's deliberately dark." << endl;
                cout << "You turn back and think for your next choice." << endl;
                break;
            }
            case 2:
            {
                cout << endl;
                cout << "You attempt to open the door." << endl;
                cout << "The door is locked tight. It appears to be locked from the other side." << endl;
                cout << "You turn back and think for your next choice." << endl;
                break;
            }
            case 3:
            {
                int choice2;

                for(choice2=0;choice2<5;choice2++){

                    cout << endl;
                    cout << "You examine the room." << endl;
                    cout << "What would you like to examine?" << endl;
                    cout << "Type 1 to examine the bed." << endl;
                    cout << "Type 2 to examine the drawer." << endl;
                    cout << "Type 3 to examine the lamp." << endl;
                    cout << "Type 4 to examine the room itself." << endl;
                    cout << endl;

                    cin >> choice2;

                    if (choice2 == 1) {
                        cout << endl;
                        cout << "You examine the bed." << endl;
                        cout << "It looks like it hasn't been used for a while." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    } else if (choice2 == 2) {
                        cout << endl;
                        cout << "You examine the drawer." << endl;
                        cout << "There appears to be a note." << endl;
                        cout << "Read the note?" << endl;
                        cout << "Type 1 to read. Otherwise, type any other key to leave it." << endl;
                        cout << endl;

                        int choice3;
                        cin >> choice3;

                        if (choice3 == 1) {
                            cout << endl;
                            cout << "You read the note." << endl;
                            cout << "The note reads:" << endl;
                            cout << "'5812'." << endl;
                            cout << "You remember the sequence of numbers just in case." << endl;
                            cout << "Suddenly, a loud rush of water can be heard from the outside." << endl;
                            cout << endl;
                        } else {
                            cout << endl;
                            cout << "You decide not to read the note." << endl;
                            cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                            cout << endl;
                        }

                    } else if (choice2 == 3) {
                        cout << endl;
                        cout << "You examine the lamp." << endl;
                        cout << "It was turned on when you first woke up." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    } else if (choice2 == 4) {
                        cout << endl;
                        cout << "You examine the room itself." << endl;
                        cout << "The room is rather small and only accommodates for one person." << endl;
                        cout << "It feels as though it was meant for a crew of some sort." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    } else {
                        cout << endl;
                        cout << "Error! Invalid input. Please type the appropriate choice." << endl;
                        cout << endl;
                    }
                }
                break;
            }
            default:
            {
                cout << endl;
                cout << "Error! Invalid input. Please type the appropriate choice." << endl;
                cout << endl;
            }
        };
    }

    return 0;
}

