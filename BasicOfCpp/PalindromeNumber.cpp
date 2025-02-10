#include <iostream>
using namespace std;


int main(){
    int num,rem=0,ans=0;
    cout<<"Enter Your Number: ";
    cin>>num;
    int n = num;
    while(n){
        rem = n % 10;
        n/=10;
        ans = ans * 10 + rem;
    }
    if(ans == num) cout<<"Its a palindrom";
    else cout<<"No its not a palindrom";
    return 0;
}