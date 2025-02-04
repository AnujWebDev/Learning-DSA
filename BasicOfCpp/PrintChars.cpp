#include <iostream>
using namespace std;

//Print char from ‘A’ to ‘Z’ with the help of a for loop.
int main(){
    //First approach
    for(char i = 66; i < 91; i++){
        cout<<i<<endl;
    }
    //Second Approach
    for(int i = 0; i < 26; i++){
        char chars = 'A' + i;
        cout<<chars<<endl;
    }
    return 0;
}