#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    if(n%400==0) cout<<"its a leap year..";
    else if(n%4==0 && n%100!=0) cout<<"Its a leap year..";
    else cout<<"Not a leap year";    
    return 0;
}