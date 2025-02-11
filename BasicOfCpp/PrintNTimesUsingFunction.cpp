#include <iostream>
using namespace std;

//  Print “Hello Coder Army” n times using Function

void PrintNTimes(string str,int n){
    for(int i = 0; i < n;i++){
        cout<<str<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    PrintNTimes("hello Coder Army",n);
    return 0;
}