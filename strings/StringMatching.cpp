#include <iostream>
using namespace std;
#include <vector>
//in this code snippet i am solving a problem of stirng matching with the help of KMP algorithm and by taking LPS table
void findLPS(vector<int>&lps,string s){
    int pre = 0, suf = 1;
    while(suf < s.size()){
        if(s[pre] == s[suf]){
            lps[suf] = pre + 1;
            pre++,suf++;
        }else{
            if(pre == 0){
                lps[suf] = 0;
                suf++;
            }else{
                pre = lps[pre-1];
            }
        }
    }
}

int main(){
    string heyStack,needle;
    cout<<"Enter HeyStack: ";
    cin>>heyStack;
    cout<<"Enter needle: ";
    cin>>needle;
    vector<int>LPS(needle.size(),0);
    findLPS(LPS,needle);
    int first = 0,second = 0;
    while(first < heyStack.size() && second < needle.size()){
        if(heyStack[first] == needle[second]){
            first++,second++;
        }else{
            if(second == 0){
                first++;
            }else{
                second = LPS[second-1];
            }
        }
    } 
    if(second == needle.size()){
        cout<<first - second;
    }else{
        cout<<-1;
    }
    return 0;
}