#include <iostream>
using namespace std;

//Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    int i = 1;
    do{
        if(i % 2 == 0) cout<<i<<endl;
        i++;
    }while(i <=n);
    return 0;
}