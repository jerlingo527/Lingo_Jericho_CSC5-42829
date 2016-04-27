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

//User Libraries


//Global Constants


//Function Prototypes
void description();
//Pre-condition: Prints to user what the program does and how standard deviation is calulated
void get_input(float& num1,float& num2,float& num3,float& num4);
//Pre-condition: Gets the values from the user
//Post-condition: Passes the four scores to the function get_average;
void get_average(float& num1,float& num2,float& num3,float& num4,float& avg);
//Pre-condition: Gets four scores from user
//Post-condition: Returns the values and average
void get_standard_deviation(float& num1,float& num2,float& num3,float& num4,float& avg,float& sd, float& vr);
//Pre-condition: Gets the standard deviation
//Post-condition: Returns the standard deviation
void output_standard (float num1,float num2,float num3,float num4,float avg,float sd, float vr);
//Pre-condition: Outputs the standard deviation


//Execution Begins Here!
int main(int argc, char** argv) {
    float avg,sd,num1,num2,num3,num4,vr;
    char again;
    description();
    do
    {
     get_input(num1,num2,num3,num4);
     get_average(num1,num2,num3,num4,avg);
     get_standard_deviation(num1,num2,num3,num4,avg,sd,vr);
     output_standard(num1,num2,num3,num4,avg,sd,vr);     
     cout <<"Would you like to run program again?" << endl;
     cin  >> again;
     cout << endl;
     }
     while ((again == 'y')||(again == 'Y'));
     cout << "Program has been terminated." << endl;
     return 0;
}

void description() // Description of how the program runs and does the calculation step by step
{
    cout << "This program calulates the standard deviation." << endl;
    cout << "It asks for 4 scores." << endl;
    cout << "Then, it finds the average using the scores you enter and then" << endl;
    cout << "the scores are subtraced by the average and squared to find the deviations." << endl;
    cout << "Then, the program adds the 4 deviations" << endl;
    cout << "and then divides them by the number of scores." << endl;
    cout << "The value that is found is called variance." << endl;
    cout << "Finally the program square roots the variance and outputs standard deviation." << endl;
}

void get_input(float& num1,float& num2,float& num3,float& num4)
{
   cout << "Enter first score:" << endl;
   cin  >> num1;
   cout << "Enter second Score:" << endl;
   cin  >> num2;
   cout << "Enter third score:" << endl;
   cin  >> num3;
   cout << "Enter fourth score:" << endl;
   cin  >> num4;
   return;
}

void get_average(float& num1,float& num2,float& num3,float& num4,float& avg)
{
  avg = num1 + num2 + num3 + num4; // Formula to calculate average
  avg = avg/ 4; // Final step to get average
  return;
}

void get_standard_deviation(float& num1, float& num2, float& num3, float& num4, float& avg, float& sd, float& vr)
{
 num1 = num1 - avg;
 num1 = pow(num1,2);// Deviation for score 1
 num2 = num2 - avg;
 num2 = pow(num2,2);// Deviation for score 2
 num3 = num3 - avg;
 num3 = pow(num3,2);// Deviation for score 3
 num4 = num4 - avg;
 num4 = pow(num4,2);// Deviation for score 4
 sd =  num1 + num2 + num3 + num4; // Calculation for variance part 1
 sd = sd / 4; // Step to get variance
 sd = sqrt(sd); // Calculation of standard deviation is square root of variance
 cout << endl;
 return;
}

void output_standard (float num1,float num2,float num3,float num4,float avg,float sd, float vr)
{
  cout << "The Standard devation is: " << sd << endl; // Final out for standard deviation
  cout << "How:" << endl;
  cout << "Average is: " << avg << endl;    
  cout << "Devations are: ";
  cout << "(" << num1 << " + " << num2 << " + " << num3 << " + " << num4 << ") / 4" << endl; 
  cout << "Variance is: " << vr << endl;
  cout << "Finally square root the variance and you get: " << sd << endl; 
}

