#include <iostream>
using namespace std;

// Write a program to convert decimal numbers to binary numbers using a for loop.

int main(){
    long long int n,rem=0,ans=0,mult=1;
    cout<<"Enter Your Decimal number: ";
    cin>>n;
    for(long long int i = n; i > 0;i/=2){
        rem = i%2;
        ans=rem*mult+ans;
        mult*=10;
    }
    cout<<ans;
    return 0;
}