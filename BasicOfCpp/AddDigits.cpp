#include <iostream>
using namespace std;
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
int main(){
    int n,rem=0,sum=0;
    cout<<"Enter Your Number: ";
    cin>>n;
    //Aproach 1 : this will give me time complexcity of  O(log n)
    // while(n > 9){
    //      sum = 0;
    //     while(n){
    //         rem=n%10;
    //         n/=10;
    //         sum+=rem;
    //     }
    //     n = sum;
    // }
    // cout<<sum;
    //Super Efficient Approach: This Will give me Time Complexcity of Constant O(1);
    if(n == 0) cout<<0;
    else if(n % 9== 0) cout<< 9;
    else  cout<< n % 9;
    return 0;
}
        