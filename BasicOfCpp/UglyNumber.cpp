#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    if (n <= 0) cout<< false;
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }  
    if( n == 1) cout<<"True";
    else cout<<"False";
    return 0;
}