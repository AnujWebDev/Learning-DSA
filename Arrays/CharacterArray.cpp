#include <iostream>
using namespace std;

//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
int main(){
    char arr[26];
    cout<<"Enter Your Elements: ";
    for(int i = 0; i < 26; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 26; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}