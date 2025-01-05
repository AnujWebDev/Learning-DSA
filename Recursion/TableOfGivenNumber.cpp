#include <iostream>
using namespace std;

void PrintTable(int N,int M){
    if(M==10){
        cout<<N<<"*"<<M<<"="<<N*M<<endl;
    }else{
        cout<<N<<"*"<<M<<"="<<N*M<<endl;
        PrintTable(N,M+1);
    }
}

int main(){
    int N;
    cout<<"Enter Your Number: ";
    cin>>N;
    PrintTable(N,1);
    return 0;
}