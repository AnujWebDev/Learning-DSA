#include <iostream>
using namespace std;


//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15


int main(){
    int start = 10;
    for(int i = 0;i<7;i++){
        for(int j = 0; j < i; j++){
            cout<<start + j<<" ";
        }
        cout<<endl;
    }
    return 0;
}