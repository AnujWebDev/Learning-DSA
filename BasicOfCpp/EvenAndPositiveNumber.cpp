#include <iostream>
using namespace std;

//Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    if(n % 2 == 0 && n > 0) cout<<"Yes";
    else cout<<"No";
    return 0;
}