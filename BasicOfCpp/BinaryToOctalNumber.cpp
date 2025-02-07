#include <iostream>
using namespace std;

//Write a program to convert binary to Octal numbers

int main(){
    int n,binaryValue=0,rem=0,OctalValue=0,mult=1;
    cout<<"Enter Your Number: ";
    cin>>n;
    while(n){
        rem = n % 10;
        n/=10;
        binaryValue+=rem*mult;
        mult*=2;
    }
    rem = 0,mult=1;
    while(binaryValue){
        rem = binaryValue % 8;
        binaryValue/=8;
        OctalValue+=rem*mult;
        mult*=10;
    }
    cout<<OctalValue;
    return 0;
}