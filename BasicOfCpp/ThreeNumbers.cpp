#include <iostream>
using namespace std;

// Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

int main(){
    int a,b,c;
    cout<<"Enter Three numbers: ";
    cin>>a>>b>>c;
    if(a > b || a > c) cout<<"Yes";
    else cout<<"no";
    return 0;
}