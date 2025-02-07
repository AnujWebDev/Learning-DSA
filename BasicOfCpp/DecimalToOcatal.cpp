#include <iostream>
using namespace std;

// Write a program to convert decimal numbers to Octal numbers.


int main(){
    int n,rem=0,ans=0,mult=1;
    cout<<"Enter Your Number: ";
    cin>>n;
    while(n){
        rem = n % 8;
        n/=8;
        ans+=rem*mult;
        mult*=10;
    }
    cout<<ans;
    return 0;
}