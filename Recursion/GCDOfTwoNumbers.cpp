#include <iostream>
using namespace std;

void GCD(int a, int b){
    if(b == 0) cout<<a<<endl;

    GCD(b,a%b);
    
}

int main(){
    int n,m;
    cout<<"Enter Your Number: ";
    cin>>n>>m;
    if(n > m){
        GCD(n,m);
    }else{
        GCD(m,n);
    }
    return 0;
}