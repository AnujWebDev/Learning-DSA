#include <iostream>
using namespace std;
#include <vector>

// in this code snippet i am sorting a given string

string sortAString(string s1){
    vector<int>alpha(26,0);
    string ans;
    for(int i = 0; i < s1.size();i++){
        alpha[s1[i] - 'a']++;
    }
    for(int i = 0; i < 26;i++){
        char c = 'a' + i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
    }
    return ans;
}

int main(){
    string s1;
    cin>>s1;
    cout<<sortAString(s1);
    return 0;
}