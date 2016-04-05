/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 *
 * Created on April 3, 2016, 10:00 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Function declaration for calculating interest
float iDue(float iBal, float mInt, int nMont); 
//Global constant
const float PRCNT(.01);//Converts percentage to decimal

int main() {
    //Declare variables
    float iBal;//Initial balance of credit card account
    float mInt;//Monthly interest rate
    int nMont;//Number of months interest must be paid
    float totBal;//Total balance after compounded interest is applied
    char retry;//Loop variable for multiple execution of program
do{    
    cout<<"This program will compute the interest on a credit card account balance.\n"
        <<"Please enter the initial balance: $";
    cin>>iBal;
    cout<<"Please enter the monthly interest rate: %";
    cin>>mInt;
    cout<<"Please enter the number of months interest must be paid: ";
    cin>>nMont;
    cout<<fixed<<setprecision(2);
    totBal=iDue(iBal, mInt, nMont);//Function call to calculate accrued interest & new balance
    
    cout<<"If your initial balance is $"<<iBal<<", with a monthly interest of %"<<mInt<<"\n"
        <<"and "<<nMont<<" months of payment, the interest due on your credit card account\n"
        <<"is $"<<totBal-iBal<<", bringing your balance to a total of $"<<totBal<<".\n\n";
    cout<<"Would you like to retry? Type 'y' to continue or anything else to terminate.\n"
        <<"Retry?: ";
    cin>>retry;
}while(retry=='y'||retry=='Y');
    cout<<"Thank you, have a great day! :)";
    //Exit stage right!
    return 0;
}
float iDue(float iBal, float mInt, int nMont)
{
    float intDue;
    float totBal;
    while(nMont>0)
    {
        intDue=iBal*mInt*PRCNT;
        iBal+=intDue;
        totBal=iBal;
        nMont--;
    }
    return (totBal);   
}
 
   
          

  

                                 


