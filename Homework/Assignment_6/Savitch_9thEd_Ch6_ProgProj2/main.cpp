/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on May 18, 2016, 8:35 AM
 * Purpose: Write a program to compute numeric grades for a course
 */

//System Libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
void calculate(ifstream&, ofstream&);

//Execution Begins Here!

int main(int argc, char** argv) {
    ifstream in;
    ofstream out;

    in.open("input4.txt");

    if (in.fail()) {
        cout << "Input file failed. Please try again or use another file./n";
        return 1;
    }

    out.open("output4.txt");
    calculate(in, out);
    out.close();
    in.close();

    return 0;
}

void calculate(ifstream& in, ofstream& out)
 {
    int i, sum, a[10];
    string first, last;
    float avg;
    in>>first;
    while (in)
 {
        sum = 0;
        in>>last;
        for (i = 0; i < 10; i++) {
            in >> a[i];
            sum += a[i];
        }

        out << first << " " << last << " ";
        for (i = 0; i < 10; i++)
            out << a[i] << " ";
        avg = sum / 10.;
        out << avg << endl;
        in>>first;
    }
}