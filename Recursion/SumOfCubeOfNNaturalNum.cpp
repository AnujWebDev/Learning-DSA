#include <iostream>
using namespace std;

int cubeSum(int N){
    if(N==1){
        return 1;
    }

    return N*N*N + cubeSum(N-1);
}

int main(){
    int N;
    cout<<"Enter your number: ";
    cin>>N;
    cout<<cubeSum(N);
    return 0;
}