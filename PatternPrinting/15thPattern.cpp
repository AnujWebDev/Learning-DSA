#include <iostream>
using namespace std;

// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//             *
//            *  *
//          *  *  *
//         *  *  *  *
//        *  *  *  *  *
//        *  *  *  *  *
//         *  *  *  *
//          *  *  *  
//           *  *  
//            *


int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(int i =0; i <= n;i++){
        for(int j = 0; j < n - i; j++){
            cout<<" ";
        }
        for(int j = 0; j < i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0; i <= n;i++){
        for(int j = 0; j < i ; j++){
            cout<<" ";
        }
        for(int j = 0; j < n - i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}