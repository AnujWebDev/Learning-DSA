#include <iostream>
using namespace std;

//This is a function which checks the given number is power of four or not by recursion
int isPowerOfFour(int n){
    if(n == 1) return true;
    if(n <= 0 || n % 4 != 0) return false;

    return isPowerOfFour(n/4);
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<isPowerOfFour(n);
    return 0;
}