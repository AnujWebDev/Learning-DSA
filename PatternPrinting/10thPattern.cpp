#include <iostream>
using namespace std;

// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//            5
//          5 4
//        5 4 3
//      5 4 3 2 
//    5 4 3 2 1


int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    for(int i = 1; i <= n;i++){
        for(int j = 0; j < n-i;j++){
            cout<<" "<<" ";
        }
        for(int j = 0; j<i;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
    return 0;
}