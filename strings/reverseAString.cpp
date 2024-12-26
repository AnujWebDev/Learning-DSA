#include <iostream>
using namespace std;

int main(){
    //In here i am reversing a string using two pointers approach
    string s1;
    cin>>s1;
    int start = 0, end = s1.size()-1;
    while(start<end){
        int swap = s1[end];
        s1[end] = s1[start];
        s1[start] = swap;
        start++,end--;
    }
    cout<<s1;
    return 0;
}