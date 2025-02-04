#include <iostream>
using namespace std;

//Print n’th Fibonacci number
int main(){
    int n,first = 0,second = 1;
    cout<<"Enter Your number: ";
    cin>>n;
    cout<<first<<endl<<second<<endl;
    int sum = 0;
    for(int i = 2; i < n; i++){
        sum = first + second;
        cout<<sum<<endl;
        first = second;
        second = sum;
    }
    return 0;
}