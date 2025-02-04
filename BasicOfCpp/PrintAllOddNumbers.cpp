#include <iostream>
using namespace std;

//Print all Odd numbers from 1 to n, take n as an input from the user.
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        if(i % 2 != 0) cout<<i<<endl;
    }
    return 0;
}