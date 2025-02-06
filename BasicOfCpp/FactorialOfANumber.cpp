#include <iostream>
using namespace std;

//Find the factorial of a number n using a while loop and do a while loop.

int main(){
    int n,ans=1;
    cout<<"Enter Your number: ";
    cin>>n;
    while(n){
        ans*=n;
        n--;
    }
    cout<<ans;
    return 0;
}