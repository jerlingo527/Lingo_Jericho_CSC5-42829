/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <sstream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    string str;
    
    //Prompt for input
    cout << "Enter a line of text: ";
    getline(cin, str);
    
    //Read input
    istringstream iss(str);
    string word;
    string finalStr = "";
    
    //Look for numbers and replace with 'x'
    while (iss >> word) {
        if (word.find_first_not_of("0123456789") == string::npos) {
            for (int i = 0; i < word.size(); i++) {
                finalStr += 'x';
            }
        } else {
            finalStr.append(word);
        }
        finalStr += ' ';
    }

    //Display with numbers replaced with 'x'
    cout << "Edited text: " << finalStr << endl;

    //Exit Stage Right!
    return 0;
}