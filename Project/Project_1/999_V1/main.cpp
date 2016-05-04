/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Project V1
 * 
 * Notes:
 * Bare bones with simple statements
 */

//System Libraries
#include <iostream>
using namespace std;

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
    cout << "Input any key to begin. Otherwise, type 'X' or 'x' to exit." << endl;
    cin >> start;
    if (start == 'X' || start == 'x') {
        cout << "Game terminated." << endl;
        return 0;
    }

    //Start game inside the room
    cout << endl;
    cout << "You wake up trapped inside a room, unable to remember a thing." << endl;
    cout << "The room appears to be a bedroom, as it has a bed, a small drawer with a lamp, a small window," << endl;
    cout << "and a door to what appears to be the exit." << endl;
    cout << endl;

    //Set variable for player choice
    int choice1;

    //Prompt player for choice with a for loop.
    for(choice1=0;choice1<9;choice1++) {

        //Give choices for player
        cout << "What do you do?" << endl;
        cout << "Type 1 to look through the window." << endl;
        cout << "Type 2 to attempt to open the door." << endl;
        cout << "Type 3 to examine the room." << endl;
        cout << endl;

        //Assign choice1 for upcoming switch statement
        cin >> choice1;

        //Output choices based on choice integer
        switch (choice1) {
            
            //Output for looking through the window 
            case 1:
            {
                cout << endl;
                cout << "You look through the window." << endl;
                cout << "It is too dark to see anything. It may actually look like it's deliberately dark." << endl;
                cout << "You turn back and think for your next choice." << endl;
                cout << endl;
                break;
            }
            
            //Output for attempting to open the door
            case 2:
            {
                cout << endl;
                cout << "You attempt to open the door." << endl;
                cout << "The door is locked tight. There appears to be a keypad next to it." << endl;
                cout << "You inputted random numbers, but none of them worked." << endl;
                cout << "You take note that it requires a four digit code." << endl;
                cout << "You turn back and think for your next choice." << endl;
                cout << endl;
                break;
            }
            
            //Output for examining the room
            case 3:
            {
                //Set variable for player choice
                int choice2;

                //Prompt player for choice with a do-while loop.
                for(choice2=0;choice2<9;choice2++){

                    //Give choices for player
                    cout << endl;
                    cout << "You examine the room." << endl;
                    cout << "What would you like to examine?" << endl;
                    cout << "Type 1 to examine the bed." << endl;
                    cout << "Type 2 to examine the drawer." << endl;
                    cout << "Type 3 to examine the lamp." << endl;
                    cout << "Type 4 to examine the room itself." << endl;
                    cout << endl;
                    
                    //Assign choice2 for upcoming if-else statement
                    cin >> choice2;

                    //Output for examining the bed
                    if (choice2 == 1) {
                        cout << endl;
                        cout << "You examine the bed." << endl;
                        cout << "It looks like it hasn't been used for a while." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    }
                    
                    //Output for examining the drawer
                    else if (choice2 == 2) {
                        cout << endl;
                        cout << "You examine the drawer." << endl;
                        cout << "There appears to be a note." << endl;
                        cout << "Read the note?" << endl;
                        cout << "Type 1 to read. Otherwise, input any other key to leave it." << endl;
                        cout << endl;

                        //Assign choice3 for another if-else statement
                        int choice3;
                        
                        //Prompt player for choice
                        cin >> choice3;

                        //Output for reading the note
                        if (choice3 == 1) {
                            cout << endl;
                            cout << "You read the note." << endl;
                            cout << "The note reads:" << endl;
                            cout << endl;
                            cout << "<----" << endl;
                            cout << "'5812'." << endl;
                            cout << endl;
                            cout << "You remember the sequence of numbers just in case." << endl;
                            cout << endl;
                            cout << "Suddenly, a loud rush of water can be heard from the outside." << endl;
                            cout << "The rushing water gets louder and louder and suddenly..." << endl;
                            cout << endl;
                            cout << "CRASH!" << endl;
                            cout << endl;
                            cout << "The water crashes through the small window." << endl;
                            cout << "The room begins to flood with water." << endl;
                            cout << "You panic, but you try to stay calm at the same time." << endl;
                            cout << endl;
                            cout << "Seek a way out! What do you do?" << endl;
                            cout << "Type 1 to close the rushing water." << endl;
                            cout << "Type 2 to approach the door." << endl;
                            cout << "Type any key to do nothing." << endl;
                            cout << endl;
                            
                            int choice4;
                            
                            cin >> choice4;
                            
                            if (choice4 == 1){
                                cout << endl;
                                cout << "You attempt to close the rushing water." << endl;
                                cout << "You try to use the bed as a blockade, however the bed is too heavy for you to lift." << endl;
                                cout << "You try to use your body, however the water pressure is too powerful." << endl;
                                cout << "The water fills up the room completely." << endl;
                                cout << "You are completely submerged in the water." << endl;
                                cout << "You start to lose air and begin drowning." << endl;
                                cout << "You lose consciousness due to lack of air." << endl;
                                cout << endl;
                                cout << "GAME OVER." << endl;
                                return 0;
                            }
                            
                            else if (choice4 == 2){
                                cout << endl;
                                cout << "You approach the door." << endl;
                                cout << "The door is still locked tight." << endl;
                                cout << "You remember that there is a keypad next to the door." << endl;
                                cout << "You attempt to input a four digit code." << endl;
                                cout << "What four digit code do you input?" << endl;
                                cout << endl;
                                
                                float code;
                                
                                cin >> code;
                                
                                if (code == 2185){
                                    cout << endl;
                                    cout << "ACCEPTED" << endl;
                                    cout << "A click can be heard from the door." << endl;
                                    cout << "The door is now unlocked and you open the door." << endl;
                                    cout << "You escape the room along with the rushing water behind you." << endl;
                                    cout << "You continue to run through the hall and approach some stairs going up." << endl;
                                    cout << "You climb the stairs in attempt to escape the rushing water." << endl;
                                    cout << "You stop on what appears to be the second floor." << endl;
                                    cout << "You check behind you to see if the water is still flowing." << endl;
                                    cout << "The water stops on the brim of the last stair approaching the second floor." << endl;
                                    cout << "You sigh in relief and lay down." << endl;
                                    cout << endl;
                                    cout << "YOU FOUND IT!" << endl;
                                    cout << "Congratulations! You've completed the game!" << endl;
                                    cout << "Once again, this was a cut-down version of the game so it's not fully complete." << endl;
                                    cout << "I strongly encourage you to check out the full game of 999 by purchasing it for the Nintendo DS." << endl;
                                    cout << "Thank you for playing this game!" << endl;
                                    return 0;
                                }
                                
                                else {
                                    cout << endl;
                                    cout << "DENIED" << endl;
                                    cout << "The water rushes to the keypad and shorts it out." << endl;
                                    cout << "You push the numbers, but no response." << endl;
                                    cout << "The water fills up the room completely." << endl;
                                    cout << "You are completely submerged in the water." << endl;
                                    cout << "You start to lose air and begin drowning." << endl;
                                    cout << "You lose consciousness due to lack of air." << endl;
                                    cout << endl;
                                    cout << "GAME OVER." << endl;
                                    return 0;
                                }
                                
                            }
                            
                            else {
                                cout << endl;
                                cout << "You do nothing. You sit on the bed and wait for death." << endl;
                                cout << "The water fills up the room completely." << endl;
                                cout << "You are completely submerged in the water." << endl;
                                cout << "You start to lose air and begin drowning." << endl;
                                cout << "You lose consciousness due to lack of air." << endl;
                                cout << endl;
                                cout << "GAME OVER." << endl;
                                return 0;
                            }
                        }
                        
                        //Output for leaving the note
                        else {
                            cout << endl;
                            cout << "You decide not to read the note." << endl;
                            cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                            cout << endl;
                        }
                    }
                    
                    //Output for examining the lamp
                    else if (choice2 == 3) {
                        cout << endl;
                        cout << "You examine the lamp." << endl;
                        cout << "It was turned on when you first woke up." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    }
                    
                    //Output for examining the room
                    else if (choice2 == 4) {
                        cout << endl;
                        cout << "You examine the room itself." << endl;
                        cout << "The room is rather small and only accommodates for one person." << endl;
                        cout << "It feels as though it was meant for a crew of some sort." << endl;
                        cout << "There doesn't seem to be anything of interest. You examine other objects." << endl;
                        cout << endl;
                    }
                    
                    //Output for incorrect input
                    else {
                        cout << endl;
                        cout << "Error! Invalid input. Please type the appropriate choice." << endl;
                        cout << endl;
                    }
                }
                break;
            }
            
            //Output for incorrect input
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

