#include <iostream>
using namespace std;
#include <vector>
//In this code snippet i am solving Problem of finding given string is palindrom or not
bool checkPangram(string s1){
    vector<bool>alpha(26,0);
    for(int i = 0; i < s1.size();i++){
        alpha[s1[i] - 'a'] = 1;
    }
    for(int i = 0; i < 26;i++){
        if(alpha[i] == 0)
        return 0;
    }
    return 1;
}


int main(){
    string s1;
    cout<<"Enter Your String: ";
    cin>>s1;
    if(checkPangram(s1)){
        cout<<"Its is a pangram string";
    }else{
        cout<<"Its not a pangram string";
    }
    return 0;
}