/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 18, 2016, 9:00 AM
 * Purpose: Programming Project #9
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Delcare variables
int number, negative_sum=0, positive_sum=0, sum=0, average_neg=0, 
average_pos=0, average=0;
int count=0, positiveCount=0, negativeCount=0; 

//Input values
cout << "Please Input 10 whole numbers(Each number should be separated by space or Enter)\n";

for(int i=0;i<10;i++)
 {

 //cout<<"i is"<<i<<endl;
cin >> number;

//Output the Results
if (number >= 0 )
 {
     positive_sum += number;
     positiveCount++;  count++;
 } 

 else     
 {
     negative_sum += number ; 
     negativeCount++; count++;
 }  
 }
if(positiveCount>0)
{
 average_pos = positive_sum / positiveCount;
}

if(negativeCount>0)
{ 
average_neg = negative_sum / negativeCount; 
}

sum = positive_sum + negative_sum;

if(count>0)
{
  average = sum / count;
} 

 cout<<average_pos;
 cout << "The Total sum of Positive Numbers is " << positive_sum << " and the average of   \nThe postive numbers entered is ";
 cout << average_pos<< endl; 
 cout << "The Total sum of Negative Numbers is " << negative_sum << " and the average of  \nThe negative numbers entered is ";
 cout << average_neg << endl; 
 cout << "The Total sum of numbers entered is " << sum << " and its average is "<< average << endl;

 //Exit Stage Right
     return 0;
}


