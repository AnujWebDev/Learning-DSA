#include <iostream>
using namespace std;

// Write a program to convert binary numbers to decimal numbers using a for loop.

int main(){
    long long int n,rem=0,ans=0,mult=1;
    cout<<"Enter Your Binary Number: ";
    cin>>n;
    while(n){
        rem = n%10;
        n/=10;
        ans+=rem*mult;
        mult*=2;
    }
    cout<<ans;
    return 0;
}