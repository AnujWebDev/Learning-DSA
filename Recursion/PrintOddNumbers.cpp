#include <iostream>
using namespace std;

void PrintOddNumbers(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }else{
        PrintOddNumbers(n-2);
        cout<<n<<endl; 
    }
}

int main(){
    int N;
    cout<<"Enter Your number: ";
    cin>>N;
    if(N%2==0){
        PrintOddNumbers(N-1);
    }else{
        PrintOddNumbers(N);
    }
    return 0;
}