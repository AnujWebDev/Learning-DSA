#include <iostream>
using namespace std;

//We have to Print Numbers from 10 to N where N is greater then 10 and we can only pass one argument in Function
//Using Recursion Only 

void PrintNumber(int n){
    if(n==10){
        cout<<n<<endl;
        return;
    }else{
        PrintNumber(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    if(N <= 10){
        cout<<"Please Enter Above 10";
    }else{
        PrintNumber(N); 
    }
    return 0;
}