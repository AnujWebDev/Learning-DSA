#include <iostream>
using namespace std;
//Print Sum of square of first n natural number.
int main(){
    int n,sum=0;
    cout<<"Enter your number: ";
    cin>>n;
    for(int i = 0; i <= n;i++){
        sum += i*i;
    }
    cout<<sum;
    return 0;
}