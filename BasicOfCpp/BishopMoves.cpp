#include <iostream>
using namespace std;

int CountBishopPosition(int a, int b){
    int total = 0;
    if(8-a > 8-b) total+=8-b;
    else total+=8-a;
    if(a-1 > b-1) total+=b-1;
    else total+=a-1;
    if(8-a > b-1) total+=b-1;
    else total+=8-a;
    if(a-1 > 8-b) total+=8-b;
    else total+=a-1;
    return total;
}

int main(){
    int a,b;
    cout<<"Enter Your bishop position";
    cin>>a>>b;
    cout<<CountBishopPosition(a,b);
    return 0;
}