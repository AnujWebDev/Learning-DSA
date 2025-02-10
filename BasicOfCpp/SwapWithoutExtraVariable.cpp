#include <iostream>
using namespace std;

// Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000. 

void Swap(int &a, int &b){
    a = a ^ b; 
    b = a ^ b;
    a = a ^ b;
}

int main(){
    int a = 10 , b = 20;
    Swap(a,b);
    cout<<a<<b;
    return 0;
}