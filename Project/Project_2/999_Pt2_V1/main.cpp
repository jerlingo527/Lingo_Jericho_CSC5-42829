/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on April 29, 2016, 10:00 PM
 * Purpose: 999 Second Installment Version 1
 * This is the bare bones version that will introduce more story.
 * The puzzles will also be more complex as well as the choices.
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
void rules();
void numb();
void route11();
void route21();

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
        int choice1;

        //Prompt player for name
        cout << "What is your name?" << endl;
        cout << "Enter below." << endl;
        cout << endl;

        //Assign name variable for upcoming statements
        cin >> name;

        //Introduce other characters
        cout << setfill('-') << setw(120) << "-" << endl;
        cout << "'" << name << "! The name is " << name << ".' you said." << endl;
        cout << "'" << name << ", eh? Well, it's a pleasure meeting you. My name is Tim.' said the man with glasses." << endl;
        cout << "You keep in mind that the man with glasses is named Tim." << endl;
        cout << "'I'm Elayna. nice to meet ya!' said the young girl." << endl;
        cout << "'The name's Rob.' said the tall man as he shakes your hand." << endl;
        cout << "You remember that Elayna is the young girl and Rob is the tall man." << endl;
        cout << "You see the other four people approaching you." << endl;
        cout << "There appears to be a punk-looking man, a slightly obese man, a dandy man, and a fit woman." << endl;
        cout << "'Xavier. Remember it.' said the punk-looking man." << endl;
        cout << "'I'm Blake. Enjoy your time here 'cause you're gonna need it.' said the slightly obese man." << endl;
        cout << "'Salutations. My name is Bryce.' said the dandy man." << endl;
        cout << "'Ello! I'm Jessica. Keep your eyes at my face, alright mate?' said the fit woman. She appears to have an Australian accent." << endl;
        cout << "The whole group stared at Jessica." << endl;
        cout << "'Watch it, blokes! Leave me alone!' she yelled." << endl;
        cout << "Everyone averted their gaze." << endl;
        cout << "You remember the names carefully based on their appearance." << endl;
        cout << setfill('-') << setw(120) << "-" << endl;
        cout << "'Wait. There's eight of us here, but where's the last person?' you said." << endl;
        cout << "'Hey, you're right! Wasn't there one more person?' Tim said." << endl;
        cout << "Everyone looks around. You look in the direction opposite of them." << endl;
        cout << "You see a person coming down the stairs." << endl;
        cout << "You easily recognize the person. It is none other than your childhood friend, Beatrice." << endl;
        cout << "'" << name << ", is that you?' she said as she runs down the stairs." << endl;
        cout << "'Beatrice? Oh my god, you're here too? Oh man, this is crazy!' you said." << endl;
        cout << "'Calm down, " << name << ". If we're gonna live in hell, we might as well stick together.' she said." << endl;
        cout << setfill('-') << setw(120) << "-" << endl;
        rules();
    }
}

void rules() {

    //
    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "'All right, we have everyone now. What next?' said Tim." << endl;
    cout << "Suddenly a loud static noise emitted the entire foyer." << endl;
    cout << "'Auugh! What's that noise!' said Elayna as she covered her ears." << endl;
    cout << "The loud static began to clear up and a deep voice can be heard." << endl;
    cout << "'Welcome to the Nonary Game.' said the deep voice." << endl;
    cout << "'I have to applaud you people for escaping that first room. However, that is not what you are here for.'" << endl;
    cout << "'Who are you and what are we doin' here, mate?' yelled Jessica." << endl;
    cout << "'My name is Zero. The nine of you have been chosen to participate in the Nonary Game.' said the deep voice." << endl;
    cout << "You listen to the others as they murmur." << endl;
    cout << "'Nonary Game? What's that?' 'Where have I heard that before?' 'I don't want to die!'" << endl;
    cout << "Zero continues 'The Nonary Game is a game in which the nine of you must escape this building." << endl;
    cout << "The rules are simple. If you can escape this building, you win the Nonary Game. However, if you die," << endl;
    cout << "you lose.' Everyone looked at each other in confusion." << endl;
    cout << "Suddenly, the wall began to slide and Zero spoke." << endl;
    cout << "'Behind this wall are two doors and a box with bracelets. Each player must take a bracelet or else they cannot proceed." << endl;
    cout << "'Is this some kind of trap?' Xavier said. 'I ain't puttin' that on.'" << endl;
    cout << "'I daresay, what kind of contraption is this?' said Bryce." << endl;
    cout << "'Come on, we don't have a choice! We're stuck in this building and there's nothing we can do!' you said." << endl;
    cout << "Everyone sighed, but they put the bracelets on regardless. As they wrapped their wrists with the bracelets," << endl;
    cout << "they snapped on tight and they illuminated a number." << endl;
    cout << "'Hey! This is a trap, god damn it!' yelled Xavier. 'Hey, dumb ass! Yeah, you talking with that deep voice!" << endl;
    cout << "How the hell do you take these off?!' Xavier pulled vigorously on the bracelet, but it didn't work." << endl;
    cout << "There was no response from Zero. 'Well, that's just great,' said Xavier as he turned to the corner angrily." << endl;
    cout << "'Hey, what are these numbers for?' Elayna said." << endl;
    cout << "Zero started talking again, 'That number is designated to you and you only. It is required in order to open those doors." << endl;
    cout << "Now, one of you may have picked up a note when you were trapped in your rooms. Please present it to the group." << endl;
    cout << "Blake presented the note that he found. Everyone was surprised." << endl;
    cout << "'Good,' said Zero. 'Now, that note contains the instructions that allow you to open the doors. Please read them carefully." << endl;
    cout << "Blake began to read out loud. 'How to open the doors. With the bracelets that you received, you will use these to open the doors." << endl;
    cout << "In order to open the door, you will need to find the digital root. The digital root is a number where you take a certain group of people" << endl;
    cout << "and take their numbers into an equation. You will need to take the sum of that group, then take that sum and add the numbers together." << endl;
    cout << "From there, you will keep adding until you come down to a single digit. For example, you take three people and their numbers are 5, 7, and 8." << endl;
    cout << "You must find the sum of those people, so 5 + 7 + 8 = 21. After you find the sum, add the sum's individual numbers, so 2 + 1 = 3." << endl;
    cout << "With that, you have found the digital root of that particular group. There are several factors that must be taken into account:" << endl;
    cout << "One, the door will open for nine seconds, then close again." << endl;
    cout << "Two, there must be at least three people in a group and there must be no more than five in a group." << endl;
    cout << "Three, the people who enter the door must be the same people who inputted their number for the digital root." << endl;
    cout << "Four, if there is less people than the group's original number, they cannot proceed." << endl;
    cout << "FIve, if said group does not have the entire group in tact, they will die.'" << endl;
    cout << "'Wait, they'll die? But how?' Tim said, as he interrupted Blake." << endl;
    cout << "There was no response from Zero." << endl;
    cout << "'I'm perplexed, now.' said Tim as he started thinking." << endl;
    cout << "'Anyway,' Blake said as he continued." << endl;
    cout << "'Six, as soon as the group enters the door, their bracelets will trigger a countdown.'" << endl;
    cout << "Everyone gasped." << endl;
    cout << "Blake continued, 'This countdown will last for sixty seconds. After the time is up, the persons involved will detonate.'" << endl;
    cout << "Everyone gulped." << endl;
    cout << "'Seven, in order to deactivate the countdown, they must find the scanner similar to the one used to enter the door." << endl;
    cout << "After everyone inputs their numbers, they can deactivate the countdown and proceed." << endl;
    cout << "And that's the end of the note.' said Blake." << endl;

}

void numb() {

    cout << setfill('-') << setw(120) << "-" << endl;
    cout << "'Good.' said Zero. 'Now, you have 30 minutes to decide who should go with whom. Decide carefully." << endl;
    cout << "The puzzles behind the door will be difficult, so choose your partners wisely.'" << endl;
    cout << "The static from his voice faded away. The room was filled with deep silence." << endl;
    cout << "'Okay everyone, before we decide who goes with whom, we need to figure out the numbers on our bracelets.' said Tim." << endl;
    cout << "'Now, who's number one?' said Elayna." << endl;
    cout << "Bryce stretched his arm out. 'I am number one.'" << endl;
    cout << "'Okay, next?'" << endl;
    cout << "'I'm number two,' said Tim as he showed his bracelet to everyone." << endl;
    cout << "'Number three, over here.' said Xavier as he lazily showed everyone his bracelet." << endl;
    cout << "'I'm number four!' said Elayna as she swung her arm in front of everyone." << endl;
    cout << "'I'm number five.' you said as you showed your bracelet." << endl;
    cout << "'I'm number six.' said Beatrice, following the same motion as you did." << endl;
    cout << "'I'm number seven.' said Blake." << endl;
    cout << "'I'm number eight!' said Jessica as everyone stared." << endl;
    cout << "'And I'm number nine.' said Rob." << endl;
    cout << "'All right, so we have everyone's numbers and the doors are marked '4' and '5'.' said Tim." << endl;
    cout << "'We need to have a group of four in either door and a group five in the other door,' said Elayna." << endl;
    cout << "You try and calculate the digital root based on certain people. Then Beatrice interrupts you." << endl;
    cout << "'Hey, " << name << ". You know that we can enter door number 4 if we have Xavier and Jessica join us, right?'" << endl;
    cout << "'Really?' you said as you calculate the digital root. 3 + 5 + 6 + 8 = 22. 2 + 2 = 4. 'So we can.'" << endl;
    cout << "'And it works out for the others too!' said Beatrice. 'Look, try finding the digital root for Bryce and the others!'" << endl;
    cout << "You calculate their digital root. 1 + 2 + 4 + 7 + 9 = 23. 2 + 3 = 5. 'Well then, why don't we go tell them?' you said." << endl;
    cout << "You approach the group, however you hear Xavier arguing with all of them." << endl;
    cout << "'I'd rather go with all the ladies. You guys can screw yourselves.' he said nonchalantly as he approaches Jessica." << endl;
    cout << "'Ey, stay away from me, mate! I barely even know you!'" << endl;
    cout << "'Now, Xavier,' said Bryce. 'If you certainly wanted to accompany the ladies, you will need my assistance," << endl;
    cout << "as I complete the missing number for your digital root.'" << endl;
    cout << "You calculate the digital root of Bryce, Xavier, and all the woman. 1 + 3 + 4 + 6 + 8 = 22. 2 + 2 = 4." << endl;
    cout << "You calculate the digital root for the remainder of people including yourself. 2 + 5 + 7 + 9 = 23. 2 + 3 = 5. That also works, you thought." << endl;
    cout << "'Blimey! I wouldn't go with this creep if he was the last person on Earth!' yelled Jessica." << endl;
    cout << "'That's a pretty strong statement there. You got the ovaries to back that up?' said Xavier with an evil look on his face." << endl;
    cout << "Elayna steps in, 'I'm sorry, Jessica, but the only way to get through these doors is to have you pair up with Xavier." << endl;
    cout << "We've calculated the digital roots and there's only two choices:" << endl;
    cout << "The first option is to have Xavier, " << name << ", Beatrice, and you enter door number 4" << endl;
    cout << "while Bryce, Tim, Blake, Rob, and I enter door number 5." << endl;
    cout << "The second option is to have Bryce, Xavier, Beatrice, you, and I enter door number 4" << endl;
    cout << "while Tim, " << name << ", Blake, and Rob enter door number 5." << endl;
    cout << "After Elayna finishes discussing the options, the loudspeaker goes off again." << endl;
    cout << "'You only have 5 minutes to decide. If you do not make a choice, you will be penalized.' said Zero." << endl;
    cout << "Beatrice raises her hand, 'I'm all for the first option.'" << endl;
    cout << "'Okay then, let's have a vote. Who wants option one?' said Elayna" << endl;
    cout << "Four people raised their hand: Tim, Elayna, Beatrice, and Blake." << endl;
    cout << "'Hmm, okay, what about option two?" << endl;
    cout << "Four people raised their hand: Bryce, Xavier, Jessica, and Rob." << endl;
    cout << name << "! You haven't decided which option you wanted to go with?" << endl;
    cout << "'Umm...' you murmured." << endl;
    cout << "The loudspeaker goes off 'One minute remaining.'" << endl;
    cout << "'Come on, " << name << "! Pick!' yelled Beatrice." << endl;

    cout << "Quickly! Which option do you choose?" << endl;
    cout << "Type 1 to go with Option One." << endl;
    cout << "Type 2 to go with Option Two." << endl;

}

void route11() {

    cout << "'Option one!' you yelled." << endl;
    cout << "'All right, everyone. Scan your bracelets with your groups!' ordered Tim." << endl;
    cout << "Everyone hurried to their respective doors and scanned their bracelets." << endl;
    cout << "The sound of each bracelet being scanned gave you an uneasy feeling, however you continued to move on." << endl;
    cout << "Both doors opened simultaneously after the bracelets have been scanned." << endl;
    cout << "You looked at the other group as they enter their door." << endl;
    cout << "Elayna looked back at you and gave you an assuring smile. It's like she knew how to handle these situations." << endl;
    cout << "'Come on, " << name << "! What are you waiting for?' yelled Beatrice." << endl;
    cout << "'I'm coming!' you yelled back." << endl;
    cout << "You continue onward through the door." << endl;
    cout << "Nine seconds have passed and now the door is closed tight." << endl;
    cout << "You appear to be in some sort of hallway with three other doors." << endl;
    cout << "Your bracelet begins to beep as if a timer had been triggered." << endl;
    cout << "'Great, now we gotta find the other scanner.' said Xavier." << endl;
    cout << "'Blimey! Where is that scanner at?' said Jessica as she panicked." << endl;
    cout << "'Over there! At that door!' yelled Beatrice." << endl;
    cout << "She points to the door across the hallway. Next to the door is a scanner identical to the one outside." << endl;
    cout << "'Quickly! Scan your bracelets!' you yelled." << endl;
    cout << "You, Beatrice, and Jessica scanned the bracelets. However, Xavier did not scan his." << endl;
    cout << "'Xavier, scan your bracelet! Please!' you yelled." << endl;
    cout << "'No way. We're all gonna die here anyway.' Xavier said nonchalantly." << endl;
    cout << "'Argh! We don't have time for this!' yelled Jessica. She yanked Xavier's arm and pressed it toward the scanner." << endl;
    cout << "The scanner received Xavier's input and the bracelets stopped beeping." << endl;
    cout << "You and Beatrice let out a sigh of relief." << endl;
    cout << "Xavier held his wrist in a pain relieving fashion. 'Hey! What did ya do that for?!' he said." << endl;
    cout << "'Don't be an asshole and cooperate, will ya? I want to get outta here as soon as bloody possible and I don't want you" << endl;
    cout << "holdin' us back. Ya got that, wanka?' Jessica said as she scolded Xavier." << endl;
    cout << "'Tch, whatever.' Xavier said as he faced his back toward us." << endl;
    cout << "'Okay, so where exactly are we?' said Beatrice as she looked around." << endl;
    cout << "'It looks like we're in a hallway that leads to other rooms.' you said." << endl;
    cout << "'What's behind those doors?' said Beatrice." << endl;
    cout << "You look at the door to the left. It appears to be an ordinary hotel room." << endl;
    cout << "You look at the door to the right. It looks like the other hotel room, but mirrored." << endl;
    cout << "'Well, this looks like a hotel. The ergonomics aren't perfectly sound though.' you said." << endl;
    cout << "'What do you mean?' said Beatrice." << endl;
    cout << "'Well, take a look at these rooms. It's a tight fit and everything is so close together.' you said as you pointed everything out." << endl;
    cout << "'They probably built this to a price point, wouldn't ya think?' said Jessica." << endl;
    cout << "'Yeah, I guess that's true.' you said." << endl;
    cout << "'Enough about aesthetics, how the hell do we get out of here?' said Xavier as he said so bluntly." << endl;
    cout << "'Well,' said Beatrice. 'The door that we scanned our bracelets is locked and the door that we just went through is also locked." << endl;
    cout << "Really, our only way out is through that door over there.' She points to the door with the scanner." << endl;
    cout << "'But we need a key in order to unlock it. Honestly, Zero never said anything about looking for keys," << endl;
    cout << "but if this is the game that he wants us to play, then so be it.'" << endl;
    cout << "'So you're telling me that we have to play a scavenger hunt around this area and progress our way out?' said Xavier with a dissatisfied look on his face." << endl;
    cout << "'Correct,' said Beatrice." << endl;
    cout << "'Well, fuck me then.' Xavier said sarcastically." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;


}

void route21() {

}