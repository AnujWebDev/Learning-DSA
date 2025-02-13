#include <iostream>
using namespace std;

int isArmstrongNumber(int n){
    int rem = 0, ans = 0;
    while(n > 0){
        rem = n % 10;
        n/=10;
        ans += rem * rem * rem;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    if(isArmstrongNumber(n) == n) cout<<"Yes";
    else cout<<"No";
    return 0;
}