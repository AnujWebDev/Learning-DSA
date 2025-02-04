#include <iostream>
using namespace std;
// Two numbers are given, print the bigger number
int main(){
    int a,b;
    cout<<"Enter Your number: ";
    cin>>a>>b;
    if(a > b) cout<<a<<" is bigger";
    else if (b > a) cout<<b<<" is bigger";
    else if (b == a) cout<<"both are same";
    else{
        cout<<"invalid entry";
    }
    return 0;
}