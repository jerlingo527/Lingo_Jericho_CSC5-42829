/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on June 1, 2016, 9:00 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

//User Libraries


//Global Constants (Sorry)
const int SIZE = 40;

//Function Prototypes
void get_input(string& input_line);
string replace_with_love(string input_line);

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    string input_line, love_string;

    //Begin program
    get_input(input_line);
    love_string = replace_with_love(input_line);

    //Output the results
    cout << love_string << endl;

    //Exit Stage Right!
    return 0;
}

void get_input(string& input_line) {
    string one[SIZE];
    int i = 0;
    string word;

    cout << "Enter a line of text and press return" << endl;
    cout << "(no longer than 40 characters, including spaces" << endl;
    cout << "and punctuation): " << endl;
    getline(cin, input_line);


}

string replace_with_love(string input_line) {
    string one[SIZE];
    string love_string(input_line);
    string temp;
    unsigned int location, location2, count = 0;
    unsigned int pos = 0, last = 0;

    last = input_line.find_last_of(" ");
    while ((pos < input_line.length()) && (count < SIZE)) {
        location = input_line.find(" ", pos);
        location2 = input_line.find(" ", location + 1);

        if (pos == 0) {
            cout << "if" << endl;
            one[count] = input_line.substr(pos, location);
            count++;
            pos = location;
            cout << "one[count] " << one[count - 1] << endl;
            continue;
        }

        if (last == location) {
            one[count] = input_line.substr((pos + 1), (location));
            one[count + 1] = input_line.substr(pos);
            pos *= 10;
        } else if ((location > (last + 10)) || (location2 > (last + 10)))
            pos *= 10;
        else {
            one[count] = input_line.substr(pos + 1, ((location2) - (location + 1)));

        }
        pos = location2;
        count++;

    }
    for (int i = 0; i < count; i++) {
        if (one[i].length() == 4) {
            temp = one[i];
            if (isupper(temp.at(0)))
                one[i] = "Love";
            else
                one[i] = "love";
        }
    }
    love_string.clear();
    for (int n = 0; n < count; n++)
        love_string += one[n] + " ";
    return love_string;
}