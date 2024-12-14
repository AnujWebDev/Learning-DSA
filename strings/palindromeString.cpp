#include <iostream>
using namespace std;

int main(){
    //In here i am finding a string is a palindrome or not by two pointers approach;
    string s1;
    cin>>s1;
    int start = 0, end = s1.size()-1; 
    while(start<end){
        if(s1[start] != s1[end]){
            cout<<"Not a palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"Yes this is a palindrome";
    return 0;
}