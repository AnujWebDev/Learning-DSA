#include <iostream>
using namespace std;
//Print Sum of cube of first n natural number
int main(){
    int n,sum=0;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(int i = 0; i <= n; i++){
        sum+=i*i*i;
    }
    cout<<sum;
    return 0;
}