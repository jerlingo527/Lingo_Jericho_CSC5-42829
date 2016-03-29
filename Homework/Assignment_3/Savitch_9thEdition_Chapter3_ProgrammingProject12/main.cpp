/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Programming Project #12
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
int c_pick, h_pick;
int toothpicks= 23;

//General Menu Format
do{
    //Display the selection
    cout << "Welcome to the toothpick game." << endl;
    cout << "Please pick up your toothpick(s), choose between 1 and 3.\n";
    
    //Read the choice
    cin >> h_pick;

    //Solve a problem that has been chosen.
    toothpicks = toothpicks - h_pick;
    cout << toothpicks << " toothpick(s) remaining" << endl;

    if (toothpicks == 1 && c_pick == 1) {
        cout << "Human! You have prevailed!" << endl;
        break;
    } 

    if (toothpicks > 4) {
        c_pick = 4 - h_pick;
        cout << "The computer took " << c_pick << " toothpick(s)" << endl;
    } else if (toothpicks == 2) {
        c_pick = 1;
        cout << "The computer took " << c_pick << " toothpick(s)" << endl;
    } else if (toothpicks == 3) {
        c_pick = 2;
        cout << "The computer took " << c_pick << " toothpick(s)" << endl;
    } else if (toothpicks == 4) {
        c_pick = 3;
        cout << "The computer took " << c_pick << " toothpick(s)" << endl;
    } else if (toothpicks == 1) {
        c_pick = 1;
        cout << "The computer took " << c_pick << " toothpick(s)" << endl;
    }

        toothpicks = toothpicks - c_pick;
        cout << toothpicks << " toothpick(s) remaining"<<endl;

    if (toothpicks == 1 && h_pick == 1) {
        cout << "The computer has prevailed!" << endl;
        break;
    }
        
    if (h_pick>3 || h_pick <0) {
            cout<< "Please enter a correct value." <<endl;
            continue;
    }
        
    if (toothpicks <=0) {
        cout<<"Game will restart, now. (Enter 4 to quit)"<< endl;
        cin>>h_pick;
        toothpicks=23;
        continue;
    }
}while (h_pick != 4);
    
    //Exit Stage Right!
    return 0;
}

