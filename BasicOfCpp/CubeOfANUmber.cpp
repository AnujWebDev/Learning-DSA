#include <iostream>
using namespace std;

//Find the cube of a number using Function. 

int FindCube(int n){
    return n*n*n;
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<FindCube(n);
    return 0;
}