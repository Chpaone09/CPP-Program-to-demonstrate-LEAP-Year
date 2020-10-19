/*
***********************************************************

Topic   : Program to demonstrate Leap Year in cpp.
Author  : Chpaone09®
Date    : Oct 20, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"\n\n\t Please enter Year >> ";
    cin>>n;

    if((n % 4) == 0){
        if((n % 100) ==0){
            if((n % 400) == 0){
            cout<<"\n\n\t "<<n<<" is a Leap Year. ";
            }else{
                cout<<"\n\n\t "<<n<<" is Not a Leap Year. ";
            }
        }else{
           cout<<"\n\n\t "<<n<<" is a Leap Year. ";
        }
    }else{
        cout<<"\n\n\t "<<n<<" is Not a Leap Year. ";
    }
    return 0;
}

