/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Menu Function
void menu();

//Problems
//Savitch_9thEd_Ch8_
void prob1();

//Savitch_9thEd_Ch8_
void prob2();

//Savitch_9thEd_Ch8_
void prob3();

//Savitch_9thEd_Ch8_
void prob4();

//Savitch_9thEd_Ch8_
void prob5();

//Savitch_9thEd_Ch8_
void prob6();

//Savitch_9thEd_Ch8_
void prob7();

//Savitch_9thEd_Ch8_
void prob8();

//Savitch_9thEd_Ch8_
void prob9();

//Savitch_9thEd_Ch8_
void prob10();

//Functions
//Functions for 


//Functions for 


//Functions for


//Functions for


//Functions for


//Functions for


//Functions for


//Functions for


//Functions for


//Functions for


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
    cout << "Type 1 to solve " << endl;
    cout << "Type 2 to solve " << endl;
    cout << "Type 3 to solve " << endl;
    cout << "Type 4 to solve " << endl;
    cout << "Type 5 to solve " << endl;
    cout << "Type 6 to solve " << endl;
    cout << "Type 7 to solve " << endl;
    cout << "Type 8 to solve " << endl;
    cout << "Type 9 to solve " << endl;
    cout << "Type 10 to solve " << endl;
    cout << "Type a letter to quit with no solutions." << endl;
}

void prob1(){
    
}

void prob2(){
    
}

void prob3(){
    
}

void prob4(){
    
}

void prob5(){
    
}

void prob6(){
    
}

void prob7(){

}

void prob8(){
    
}

void prob9(){
    
}

void prob10(){
    
}

