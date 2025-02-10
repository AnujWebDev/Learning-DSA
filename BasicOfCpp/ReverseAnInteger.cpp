#include <iostream>
using namespace std;

int main(){
     long long int n,rem=0,ans=0;
    cout<<"Enter Your number: ";
    cin>>n;
    while(n){
        rem = n%10;
        n/=10;
        ans = ans * 10 + rem;
    }
    cout<<ans;
    return 0;
}