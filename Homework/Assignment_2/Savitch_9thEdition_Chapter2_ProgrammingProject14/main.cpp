/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #14
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    int n=0,n_initial; // n will be the number of assignments entered in the system.
                     // since n will be counting down, I want to save n_initial as well.
    
// # OF EXERCISES
cout << "How many exercises to input?  >  ";
cin >> n;
n_initial = n;

int grades [2][n]; // 2 rows for possible and actual, n columns because you will have a column for each item.



//SCORE RECIEVED COUNTDOWN
while (n>0)

{
      int x,y;
cout << endl << endl << "Score recieved for exercise " << n << ":   ";
cin >> x;
grades [0][n] = x;
cout << endl << "Points possible for exercise " << n << ":  ";
cin >> y;
grades [1][n] = y;

n = n-1;
}

//CALCULATION OF TOTAL AND PERCENT
double score_total=0,pointspossible_total=0,rows_1,rows_2;

//SCORE TOTAL
int xy=0;
n = n_initial;

for (int xy=0; xy < n_initial; xy++)
{
    score_total += grades [0][n];
    n--;
}
    cout << endl << "Score Total = "<< score_total << endl;

//POINTS POSSIBLE TOTAL
xy=0;
n = n_initial;

for (int xy=0; xy < n_initial; xy++)
{
    pointspossible_total += grades [1][n];
    n--;
}
    cout << "Possible points Total = " << pointspossible_total << endl;
    cout << "Your total is " << score_total << " out of " << pointspossible_total << ", and your percentage is " << (score_total/pointspossible_total)*100 << "%" <<endl; 
    //Exit Stage Right!
    return 0;
}

