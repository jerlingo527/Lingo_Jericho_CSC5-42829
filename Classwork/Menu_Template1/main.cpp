/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 25, 2016, 10:00 AM
 */
//System Libraries
#include <iostream>
#include <cmath>
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
//Functions for Practice Program 1


//Functions for Practice Program 2


//Functions for Practice Program 3


//Functions for Practice Program 5


//Functions for Practice Program 6


//Functions for Practice Program 7


//Functions for Programming Project 1


//Functions for Programming Project 2


//Functions for Programming Project 4


//Functions for Programming Project 5


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
    cout << "Type 1 to solve Practice Program 1" << endl;
    cout << "Type 2 to solve Practice Program 2" << endl;
    cout << "Type 3 to solve Practice Program 3" << endl;
    cout << "Type 4 to solve Practice Program 5" << endl;
    cout << "Type 5 to solve Practice Program 6" << endl;
    cout << "Type 6 to solve Practice Program 7" << endl;
    cout << "Type 7 to solve Programming Project 1" << endl;
    cout << "Type 8 to solve Programming Project 2" << endl;
    cout << "Type 9 to solve Programming Project 4" << endl;
    cout << "Type 10 to solve Programming Project 5" << endl;
    cout << "Type a letter to quit with no solutions." << endl;
}