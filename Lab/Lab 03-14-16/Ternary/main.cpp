/* 
 * File:   main.cpp
 * Author: Jericho Lingo
 * Created on March 14, 2016, 8:15 AM
 * Purpose: Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    
    bool x           =    true;
    bool y           =    true;
    bool notx        =    !x;
    bool noty        =    !y;
    bool xAndy       =    x&&y;
    bool xOry        =    x||y;
    bool xExcy       =    x^y;
    bool xExcyExcy   =    x^y^y;
    bool xExcyExcx   =    x^y^x;
    bool notxAndy    =    !(x&&y);
    bool notxOrnoty  =    !x||!y;
    bool notxOry     =    !(x||y);
    bool notxAndnoty =    !x&&!y;
    
    cout << "x y !x !y x&&y x||y x^y x^y^y x^y^x !(x&&y) !x||!y !(x||y) !x&&!y" << endl;
    
    cout << (x?'T':'F') << " " << (y?'T':'F') << " " << (notx?'T':'F') << "  " << (noty?'T':'F') << "  " << (xAndy?'T':'F') << "    " << (xOry?'T':'F') << "    " << (xExcy?'T':'F') << "   " << (xExcyExcy?'T':'F') << "     " << (xExcyExcx?'T':'F') << "     " << (notxAndy?'T':'F') << "       " << (notxOrnoty?'T':'F') << "      " << (notxOry?'T':'F') << "       " << (notxAndnoty?'T':'F') << endl;
    
    x           =    true;
    y           =    false;
    notx        =    !x;
    noty        =    !y;
    xAndy       =    x&&y;
    xOry        =    x||y;
    xExcy       =    x^y;
    xExcyExcy   =    x^y^y;
    xExcyExcx   =    x^y^x;
    notxAndy    =    !(x&&y);
    notxOrnoty  =    !x||!y;
    notxOry     =    !(x||y);
    notxAndnoty =    !x&&!y;
    
    cout << (x?'T':'F') << " " << (y?'T':'F') << " " << (notx?'T':'F') << "  " << (noty?'T':'F') << "  " << (xAndy?'T':'F') << "    " << (xOry?'T':'F') << "    " << (xExcy?'T':'F') << "   " << (xExcyExcy?'T':'F') << "     " << (xExcyExcx?'T':'F') << "     " << (notxAndy?'T':'F') << "       " << (notxOrnoty?'T':'F') << "      " << (notxOry?'T':'F') << "       " << (notxAndnoty?'T':'F') << endl;
 
    x           =    false;
    y           =    true;
    notx        =    !x;
    noty        =    !y;
    xAndy       =    x&&y;
    xOry        =    x||y;
    xExcy       =    x^y;
    xExcyExcy   =    x^y^y;
    xExcyExcx   =    x^y^x;
    notxAndy    =    !(x&&y);
    notxOrnoty  =    !x||!y;
    notxOry     =    !(x||y);
    notxAndnoty =    !x&&!y;
    
    cout << (x?'T':'F') << " " << (y?'T':'F') << " " << (notx?'T':'F') << "  " << (noty?'T':'F') << "  " << (xAndy?'T':'F') << "    " << (xOry?'T':'F') << "    " << (xExcy?'T':'F') << "   " << (xExcyExcy?'T':'F') << "     " << (xExcyExcx?'T':'F') << "     " << (notxAndy?'T':'F') << "       " << (notxOrnoty?'T':'F') << "      " << (notxOry?'T':'F') << "       " << (notxAndnoty?'T':'F') << endl;
    
    x           =    false;
    y           =    false;
    notx        =    !x;
    noty        =    !y;
    xAndy       =    x&&y;
    xOry        =    x||y;
    xExcy       =    x^y;
    xExcyExcy   =    x^y^y;
    xExcyExcx   =    x^y^x;
    notxAndy    =    !(x&&y);
    notxOrnoty  =    !x||!y;
    notxOry     =    !(x||y);
    notxAndnoty =    !x&&!y;    
    
    cout << (x?'T':'F') << " " << (y?'T':'F') << " " << (notx?'T':'F') << "  " << (noty?'T':'F') << "  " << (xAndy?'T':'F') << "    " << (xOry?'T':'F') << "    " << (xExcy?'T':'F') << "   " << (xExcyExcy?'T':'F') << "     " << (xExcyExcx?'T':'F') << "     " << (notxAndy?'T':'F') << "       " << (notxOrnoty?'T':'F') << "      " << (notxOry?'T':'F') << "       " << (notxAndnoty?'T':'F') << endl;
 
    //Exit Stage Right!
    return 0;
}

