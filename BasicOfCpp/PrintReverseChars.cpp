#include <iostream>
using namespace std;

//Print char from ‘Z’ to ‘A’ with the help of a for loop.
int main(){
    //First approach
    for(char i = 90; i >= 65; i--){
        cout<<i<<endl;
    }
    //Second Approach
    for(int i = 26; i >= 0; i--){
        char chars = 'A' + i;
        cout<<chars<<endl;
    }
    return 0;
}