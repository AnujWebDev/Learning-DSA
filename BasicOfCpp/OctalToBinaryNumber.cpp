#include <iostream>
using namespace std;

//Write a program to convert Octal numbers to binary numbers
int main(){
    int n,rem=0,OctalValue=0, BinaryValue=0,mult=1;
    cout<<"Enter Your Number: ";
    cin>>n;
    while(n){
        rem=n%10;
        n/=10;
        OctalValue+=rem*mult;
        mult*=8;
    }
    rem = 0,mult=1;
    while(OctalValue){
        rem = OctalValue % 2;
        OctalValue /= 2;
        BinaryValue += rem*mult;
        mult*=10;
    }
    cout<<BinaryValue;
    return 0;
}