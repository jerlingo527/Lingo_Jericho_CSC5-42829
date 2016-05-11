/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Second Installment Version 1
 * This is the bare bones version that will utilize arrays alongside more story.
 * The puzzles will also be more complex as well as the choices.
 * 
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
void name();
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
            case 9: gamecont(), name(); //Prompt player input to begin game
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
    cout << "You approach to what appears to be a foyer. There is a staircase leading to another floor." << endl;
    cout << "Upon approaching the stairs, you encounter eight other people." << endl;
    cout << "'Well, that's great. Another person that's involved in this crap.' said the tall man." << endl;
    cout << "'Hey! At least show a little more respect!' said the young girl." << endl;
    cout << "'All right, then. What's your name?' said the man with glasses." << endl;
    cout << "You say, 'Me? My name is...'" << endl;
    cout << setfill('-') << setw(120) << "-" << endl;
}

//Name input
void name() {
    {
        //Declare name variable
        string name;

            //Prompt player for name
            cout << "What is your name?" << endl;
            cout << "Enter below." << endl;
            cout << endl;

            //Assign name variable for upcoming statements
            cin >> name;

            //Introduce other characters
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "'" << name <<"! The name is " << name << ".' you said." << endl;
            cout << "'" << name << ", eh? Well, it's a pleasure meeting you. My name is Tim.' said the man with glasses." << endl;
            cout << "You keep in mind that the man with glasses is named Tim." << endl;
            cout << "'I'm Elayna. nice to meet ya!' said the young girl." << endl;
            cout << "'The name's Rob.' said the tall man as he shakes your hand." << endl;
            cout << "You remember that Elayna is the young girl and Rob is the tall man." << endl;
            cout << "You see the other four people approaching you." << endl;
            cout << "There appears to be a punk-looking man, a slightly obese man, a dandy man, and a fit woman." << endl;
            cout << "'Xavier. Remember it.' said the punk-looking man." << endl;
            cout << "'I'm Rick. Enjoy your time here 'cause you're gonna need it.' said the slightly obese man." << endl;
            cout << "'Salutations. My name is Bryce.' said the dandy man." << endl;
            cout << "'Ello! I'm Jessica. Keep your eyes at my face, alright mate?' said the fit woman. She appears to have an Australian accent." << endl;
            cout << "The whole group stared at Jessica." << endl;
            cout << "'Watch it, blokes! Leave me alone!' she yelled." << endl;
            cout << "Everyone averted their gaze." << endl;
            cout << "You remember the names carefully based on their appearance." << endl;
            cout << setfill('-') << setw(120) << "-" << endl;
            cout << "'Wait. There's eight of us here, but where's the last person?' you said." << endl;
            cout << "'Hey, you're right? Wasn't there one more person?' Tim said." << endl;
            cout << "Everyone looks around. You look in the direction opposite of them." << endl;
            cout << "You see a person coming down the stairs." << endl;
            
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