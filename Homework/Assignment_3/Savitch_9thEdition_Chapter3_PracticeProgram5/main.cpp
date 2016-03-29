/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 27, 2016, 11:30 PM
 * Purpose: Practice Program #5
 */

//System Libraries
#include <iostream>
using namespace std;
void prime_num(int);
int main()
{
    cout << " Enter a number and I will generate the prime numbers up to that number: ";
    int num = 0;
    cin >> num;
    prime_num(num);
}
 
void prime_num(int num)
{
    bool isPrime=true;
    for ( int i = 0; i <= num; i++)
    {
        for ( int j = 2; j <= num; j++)
        {
            if ( i!=j && i % j == 0 )
            {
                isPrime=false;
                break;
            }
        }
       if (isPrime)
       {
           cout <<"Prime:"<< i << endl;
       }
       isPrime=true;
    }
}

