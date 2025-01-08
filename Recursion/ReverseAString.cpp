#include <iostream> 
using namespace std;

void ReverseString(string &str,int start,int end){
    
    if(start >= end) return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    ReverseString(str,start + 1,end-1);
};

int main(){

    string str;
    cout<<"Enter Your String: ";
    getline(cin,str);
    ReverseString(str,0,str.size()-1);
    cout<<str;
    return 0;
}