#include <iostream>
using namespace std;

int Facto(int N){
    if(N==0){
        return 1;
    }  
    return N*Facto(N-1);
   
}

int main(){
    int N;
    cout<<"Enter Your Number to gets its factorial: ";
    cin>>N;
    if(N<0){
        cout<<"Facto is not possible";
    }
    cout<<Facto(N);
    return 0;
}