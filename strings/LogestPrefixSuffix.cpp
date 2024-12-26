#include <iostream>
using namespace std;
#include <vector>

//in this code snippet i am solving to fing longest equal preffix suffix from the given string by the help of KMP Algorithm in the time complexity of O(n) and space complexity of O(n)

int main(){
    string s;
    cin>>s;
    vector<int>LPS(s.size(),0);
    int pre=0,suf=1;
    while(suf < s.size()){
        if(s[pre] == s[suf]){
            LPS[suf] = pre+1;
            pre++,suf++;
        }else{
            if(pre == 0){
                LPS[suf] = 0;
                suf++;
            }else{
                pre = LPS[pre-1];
            }
        }
    }
    cout<<LPS[s.size()-1];
    return 0;
}