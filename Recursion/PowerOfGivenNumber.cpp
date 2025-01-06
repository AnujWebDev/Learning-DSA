#include <iostream>
using namespace std;

int pow(int n,int m){
   if (m == 0) { 
        return 1;
    }
    return n*pow(n,m-1);
}

int main(){
    int n,m;
    cout<<"Enter Your Number and power : ";
    cin>>n>>m;
    cout<<pow(n,m);
    return 0;
}