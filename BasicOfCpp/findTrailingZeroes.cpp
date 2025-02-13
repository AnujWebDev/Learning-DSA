#include <iostream>
using namespace std;
//Find out the trailing zeroes after the factorial of given number
int findTrailingZeroes(int n){
    int count = 0;
    while(n >= 5 ){
        count += n/5;
        n/=5;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<findTrailingZeroes(n);
    return 0;
}