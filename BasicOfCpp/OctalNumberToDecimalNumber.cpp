#include <iostream>
using namespace std;

// Write a program to convert Octal numbers to decimal numbers.

int main(){
    int n,rem=0,ans=0,mult=1;
    cout<<"Enter Your Number: ";
    cin>>n;
    while(n){
        rem=n%10;
        n/=10;
        ans+=rem*mult;
        mult*=8;
    }
    cout<<ans;
    return 0;
}