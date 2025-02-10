#include <iostream>
using namespace std;

// Reverse a number n using Function, Constraints: -5000<=n<=5000

void ReverseNumber(int &n){
    int rem=0,ans=0;
    while(n > 0){
        rem = n % 10;
        n/=10;
        ans = ans * 10 + rem;
    }
    n = ans;
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    ReverseNumber(n);
    cout<<n;
    return 0;
}