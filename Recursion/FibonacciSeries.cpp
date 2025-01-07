#include <iostream>
using namespace std;

int Fib(int N){
    if(N <= 1) return N;
    return Fib(N-1) + Fib(N-2);
}

int main(){
    int N;
    cout<<"Enter Which Fibonacci number You want to find: ";
    cin>>N;
    cout<<Fib(N);
    return 0;
}