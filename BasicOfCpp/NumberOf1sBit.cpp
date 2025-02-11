#include <iostream>
using namespace std;
 
int NumberOf1sBit(int n){
    int rem=0,count = 0;
    while(n){
        rem = n % 2;
        n /= 2;
        if(rem == 1) count++;
    }
    return count;
}

int main(){
    int n,binaryForm=0;
    cout<<"Enter Your Number: ";
    cin>>n;
    if(n < 0) cout<<"Enter a valid number.";
    cout<<NumberOf1sBit(n);
    return 0;
}