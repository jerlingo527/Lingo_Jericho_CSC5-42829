/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * CSC 5 42829
 * Created on April 3, 2016, 10:00 PM
 */

//System Libraries
#include <iostream>
using namespace std;

float hatSz(float weight, float height);//Function declaration for calculating hat size
float jakSz(float height, float weight, int age);//Function declaration for calculating jacket size
float wstSz(float weight, int age);//Function declaration for calculating waist size

int main() {
    //Declare variables
    float height, weight, age;//Variables to determine clothing size
    float hSz, jSz, wSz;//Hat size, Jacket size, Waist size
    char retry;//Loop variable
    cout<<"This program will calculate clothing sizes based upon\n"
        <<"height, weight, and age.\n";
do{
    cout<<"Enter your height (in ft): ";
    cin>>height;
    cout<<"Enter your weight (in lbs): ";
    cin>>weight;
    cout<<"Enter your age: ";
    cin>>age;
    //Function calls to calculate clothing size
    hSz=hatSz(weight, height);
    jSz=jakSz(weight, height, age);
    wSz=wstSz(weight, age);
    cout<<"Based upon that information,\n"
        <<"Your hat size is: "<<hSz<<"\n"
        <<"Your jacket (chest size in inches) is: "<<jSz<<"\n"
        <<"Your waist size (in inches) is: "<<wSz<<"\n"
        <<"Would you like to try again?\n"
        <<"Type 'y' to continue or anything else to terminate.\n"
        <<"Retry? ";
    cin>>retry;
}while(retry=='y'||retry=='Y');  
    //Exit stage right!
    return 0;
}

float hatSz(float weight, float height)
{
    float size;
    size=((weight)/(height*12.0))*2.9;
    return (size);
}
float jakSz(float weight, float height, int age)
{
    float size;
    size=(((height*12.0)*(weight))/288.0);
    if (age>=40&&age<50){
        size+=(1.0/8.0);
    }else if (age>=50&&age<60){
        size+=(1.0/4.0);
    }else if (age>=60&&age<70){
        size+=(3.0/8.0);
    }else if (age>=70&&age<80){
        size+=(1.0/2.0);
    }else if (age>80){
        size +=(5.0/8.0);
    }
        
    return (size);
}
float wstSz(float weight, int age)
{
    float size;
    size=((weight/5.7));
    if (age>=30&&age<32){
        size+=(1.0/10.0);
    }else if (age>=32&&age<34){
        size+=(2.0/10.0);
    }else if (age>=34&&age<36){
        size+=(3.0/10.0);
    }else if (age>=38&&age<40){
        size+=(4.0/10.0);
    }else if (age>=42&&age<44){
        size+=(5.0/10.0);
    }else if (age>=46&&age<48){
        size+=(6.0/10.0);
    }else if (age>=48&&age<50){
        size+=(7.0/10.0);
    }else if (age>50){
        size+=(8.0/10.0);
    }
    return(size);
}