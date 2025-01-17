#include <iostream>
using namespace std;

int Winner(int n,int k){
    if(n == 1) return 0;
    return (Winner(n-1,k)+k)%n;
}

int main(){
    int n,k;
    cout<<"Enter the players and the count: ";
    cin>>n>>k;
    cout<<Winner(n,k);
}