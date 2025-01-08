#include <iostream>
using namespace std;


void LowerToUpper(string &str,int index){

    if(index == -1) return;

    str[index] = 'A' + str[index] - 'a';

    LowerToUpper(str,index-1);
}


int main(){
    string str;
    cout<<"Enter Your String: ";
    getline(cin,str);
    LowerToUpper(str,str.size()-1);
    cout<<str;
    return 0;
}