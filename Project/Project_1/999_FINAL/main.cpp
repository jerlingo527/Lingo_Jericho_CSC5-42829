/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Project Final Version
 * 
 * Changes list:
 * Optimized all inputs to only allow correct inputs and output messages for any invalid inputs
 * Added "back" function from observing the room back to the main menu
 * Added dashed lines to distinguish between story-line text and input text
 * Added line of text to inform the player that 999 is also available for iOS
 * Added apostrophes to inputs to clearly identify the choices
 * Separated some story-line text so it wouldn't repeat within a certain loop
 * Changed some story-line text to avoid repeating the same line
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//Function Prototypes
void intro();
void gamestart();
void path1();
void path2();
void path3();
void path4();
void path5();

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
            case 9: gamestart(), path1(); //Prompt player input to begin game
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
    cout << "Welcome to 9 Hours, 9 Persons, 9 Doors!" << endl;
    cout << "This is a VN (Visual Novel) based on the popular DS game, '9 Hours, 9 Persons, 9 Doors'." << endl;
    cout << "This version of 999 (abbreviated for simplicity's sake) is a spoiler-free and cut-down version of the game." << endl;
    cout << "Please play the full game that is available for the Nintendo DS and iOS." << endl;
    cout << "To learn more about this game, please read the enclosed writeup or look it up on Google." << endl;
    cout << endl << endl;

    //Execute switch statement for starting the game
    cout << "Type '9' to begin. Otherwise, input any other key to exit." << endl << endl;
}

void gamestart() {
    //Start game inside the room
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "You wake up trapped inside a room, unable to remember a thing." << endl;
    cout << "The room appears to be a bedroom, as it has a bed, a small drawer with a lamp, a small window," << endl;
    cout << "and a door to what appears to be the exit." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
}

//Begin game

void path1() {
    {
        //Declare choice variable
        unsigned int choice1; //Integer for 1st choice, unsigned to avoid 2 accidental inputs when inputting a negative number

        //Prompt player for choice with a for loop.
        for (;;) {

            //Give choices for player
            cout << "What would you like to do?" << endl;
            cout << "Type '1' to look through the window." << endl;
            cout << "Type '2' to attempt to open the door." << endl;
            cout << "Type '3' to examine the room." << endl;
            cout << endl;

            //Assign choice1 for upcoming switch statement
            cin >> choice1;

            //Code to avoid infinite loop after a character is introduced
            cin.clear();
            cin.ignore();

            //Output for looking through the window 
            if (choice1 == 1) {
                cout << setfill('-') << setw(120) << "-" << endl;
                cout << "You look through the window." << endl;
                cout << "It is too dark to see anything. It may actually look like it's deliberately dark." << endl;
                cout << "You turn back and think for your next choice." << endl;
                cout << setfill('-') << setw(120) << "-" << endl;
            }//Output for attempting to open the door
            else if (choice1 == 2) {
                cout << setfill('-') << setw(120) << "-" << endl;
                cout << "You attempt to open the door." << endl;
                cout << "The door is locked tight. There appears to be a keypad next to it." << endl;
                cout << "You inputted random numbers, but none of them worked." << endl;
                cout << "You take note that it requires a four digit code." << endl;
                cout << "You turn back and think for your next choice." << endl;
                cout << setfill('-') << setw(120) << "-" << endl;
            }//Output for examining the room
            else if (choice1 == 3) {
                path2();
            }//Output for incorrect input
            else {
                cout << endl;
                cout << "Error! Invalid input. Please type the appropriate choice." << endl;
                cout << endl;
            }
        };
    }
}

//Examine room

void path2() {
    //Declare choice variable
    int choice2; //Integer for 2nd choice

    //Prompt player for choice with a do-while loop.
    do {

        //Give choices for player
        cout << setfill('-') << setw(120) << "-" << endl;
        cout << "You examine the room." << endl;
        cout << setfill('-') << setw(120) << "-" << endl;
        cout << "What would you like to examine?" << endl;
        cout << "Type '1' to examine the bed." << endl;
        cout << "Type '2' to examine the drawer." << endl;
        cout << "Type '3' to examine the lamp." << endl;
        cout << "Type '4' to examine the room itself." << endl;
        cout << "Otherwise, type '5' to quit investigating the room." << endl;
        cout << endl;

        //Assign choice2 for upcoming if-else statement
        cin >> choice2;

        //Code to avoid infinite loop after a character is introduced
        cin.clear();
        cin.ignore();

        //Output for examining the bed
        if (choice2 == 1) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You examine the bed." << endl;
            cout << "It looks like it hasn't been used for a while." << endl;
            cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
        }//Output for examining the drawer
        else if (choice2 == 2) {
            path3();
        }//Output for examining the lamp
        else if (choice2 == 3) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You examine the lamp." << endl;
            cout << "It was turned on when you first woke up." << endl;
            cout << "Nothing seems to be off. You examine other objects." << endl;
        }//Output for examining the room
        else if (choice2 == 4) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You examine the room itself." << endl;
            cout << "The room is rather small and only accommodates for one person." << endl;
            cout << "It feels as though it was meant for a crew member of some sort." << endl;
            cout << "Nothing seems to catch your eye. You examine other objects." << endl;
        }//Output for stopping the search
        else if (choice2 == 5) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You decide not to investigate the room." << endl;
            cout << setfill('-') << setw(120) << "-" << endl;
            path1();
        }//Output for incorrect input
        else {
            cout << endl;
            cout << "Error! Invalid input. Please type the appropriate choice." << endl;
            cout << endl;
        }
    } while (1);
}

//Examine drawer

void path3() {
    //Declare choice variable
    int choice3; //Integer for 3rd choice

    //Examining the drawer
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "You examine the drawer." << endl;
    cout << "There appears to be a note." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "Read the note?" << endl;
    cout << "Type '1' to read. Otherwise, input any other key to leave it." << endl;
    cout << endl;

    //Prompt player for choice
    cin >> choice3;

    //Code to avoid infinite loop after a character is introduced
    //Although there is no loop, it's still here just in case.
    cin.clear();
    cin.ignore();

    //Output for reading the note
    if (choice3 == 1) {
        path4();
    }//Output for leaving the note
    else {
        cout << setfill('-') << setw(120) << "-" << endl;
        cout << "You decide not to read the note." << endl;
        cout << "With that in mind, you decide to examine other objects." << endl;
    }
}

//Reading the note

void path4() {
    //Declare choice variable
    int choice4; //Integer for 4th choice

    //Reading the note
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "You read the note." << endl;
    cout << "The note reads:" << endl;
    cout << endl;
    cout << "<----" << endl;
    cout << "'5812'." << endl;
    cout << endl;
    cout << "You remember the sequence of numbers just in case." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "Suddenly, a loud rush of water can be heard from the outside." << endl;
    cout << "The rushing water gets louder and louder and suddenly..." << endl;
    cout << endl;
    cout << "CRASH!" << endl;
    cout << endl;
    cout << "The water crashes through the small window." << endl;
    cout << "The room begins to flood with water." << endl;
    cout << "You panic, but you try to stay calm at the same time." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;

    //Prompt player for choice with a while loop
    while (1) {

        //Give choices for player
        cout << "Seek a way out! What is your next course of action?" << endl;
        cout << "Type '1' to close the rushing water." << endl;
        cout << "Type '2' to approach the door." << endl;
        cout << "Type '3' to do nothing." << endl;
        cout << endl;

        //Prompt player for choice
        cin >> choice4;

        //Code to avoid infinite loop after a character is introduced
        cin.clear();
        cin.ignore();

        //Output for plugging the rushing water
        if (choice4 == 1) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You attempt to close the rushing water." << endl;
            cout << "You try to use the bed as a blockade, however the bed is too heavy for you to lift." << endl;
            cout << "You try to use your body, however the water pressure is too powerful." << endl;
            cout << "The water fills up the room completely." << endl;
            cout << "You are completely submerged in the water." << endl;
            cout << "You start to lose air and begin drowning." << endl;
            cout << "You hear a faint voice." << endl;
            cout << "'Don't fight it, avoid it...' said the faint voice." << endl;
            cout << "You lose consciousness due to lack of air." << endl;
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << endl;
            cout << "GAME OVER." << endl;
            cout << endl;
            exit(0);
        }

        //Output for approaching the door
        if (choice4 == 2) {
            path5();
        }

        //Output for doing nothing
        if (choice4 == 3) {
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "You do nothing. You sit on the bed and wait for death." << endl;
            cout << "The water fills up the room completely." << endl;
            cout << "You are completely submerged in the water." << endl;
            cout << "You start to lose air and begin drowning." << endl;
            cout << "You hear a faint voice." << endl;
            cout << "'Believe in yourself...' said the faint voice." << endl;
            cout << "You lose consciousness due to lack of air." << endl;
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << endl;
            cout << "GAME OVER." << endl;
            cout << endl;
            exit(0);
        }

        if (choice4 <= 0 || choice4 >= 4) {
            cout << endl;
            cout << "Error! Invalid input. Please type the appropriate choice." << endl;
            cout << endl;
        }
    }
}

//Code for keypad

void path5() {
    //Assign code for ternary operator
    float code;

    //Approaching the door
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "You approach the door." << endl;
    cout << "The door is still locked tight." << endl;
    cout << "You remember that there is a keypad next to the door." << endl;
    cout << "You attempt to input a four digit code." << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "What four digit code do you input?" << endl;
    cout << endl;

    //Prompt player for choice
    cin >> code;

    //Code to avoid infinite loop after a character is introduced
    //Although there is no loop and it ends regardless based on the wrong choice, it's still here just in case.
    cin.clear();
    cin.ignore();

    //Output for correct code
    (code == 2185) ?
            cout << setfill('-') << setw(120) << "-" << endl <<
            "ACCEPTED" << endl <<
            "A click can be heard from the door." << endl <<
            "The door is now unlocked and you open the door." << endl <<
            "You escape the room along with the rushing water behind you." << endl <<
            "You continue to run through the hall and approach some stairs going up." << endl <<
            "You climb the stairs in attempt to escape the rushing water." << endl <<
            "You stop on what appears to be the second floor." << endl <<
            "You check behind you to see if the water is still flowing." << endl <<
            "The water stops on the brim of the last stair approaching the second floor." << endl <<
            "You sigh in relief and lay down." << endl <<
            setfill('-') << setw(120) << "-" << endl << endl <<
            "YOU FOUND IT!" << endl << endl <<
            setfill('-') << setw(120) << "-" << endl <<
            "Congratulations! You've completed the game!" << endl <<
            "Once again, this was a cut-down version of the game so it's not fully complete." << endl <<
            "Please check out the full game of 999 by purchasing it for the Nintendo DS or iOS." << endl <<
            "Thank you for playing this game!" << endl :

            //Output for incorrect code
            cout << setfill('-') << setw(120) << "-" << endl <<
            "DENIED" << endl <<
            "The water rushes to the keypad and shorts it out." << endl <<
            "You push the numbers, but no response." << endl <<
            "The water fills up the room completely." << endl <<
            "You are completely submerged in the water." << endl <<
            "You start to lose air and begin drowning." << endl <<
            "You hear a faint voice." << endl <<
            "'Enter in reverse order...' said the faint voice." << endl <<
            "You lose consciousness due to lack of air." << endl <<
            setfill('-') << setw(120) << "-" <<
            endl << endl <<
            "GAME OVER." << endl;
    exit(0);
}
