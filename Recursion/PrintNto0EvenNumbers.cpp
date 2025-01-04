#include <iostream>
using namespace std;

void PrintEvenNumbers(int n){
    if(n == 2){
        cout<<n<<endl;
        return;
    }else{
        if(n%2==0){
            cout<<n<<endl;
            PrintEvenNumbers(n-1);
        }else{
            PrintEvenNumbers(n-1);
        }
    }
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    PrintEvenNumbers(n);
    return 0;
}