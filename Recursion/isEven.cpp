#include <iostream> 
using namespace std;

bool checkIsEven(int n){
    if(n == 0)
    return true;

    return !checkIsEven(n-1);
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<checkIsEven(n);
    return 0;
}