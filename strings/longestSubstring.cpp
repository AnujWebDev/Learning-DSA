#include <iostream>
using namespace std;
#include <vector>

//This code is for finding longest substring of without repeating elements by using Sliding window protocol method in O(n) time complexity

int main(){
    string s;
    cin>>s;
    vector<bool>count(256,0);
    int first = 0,second=0,len=0;
    while(second < s.size()){
        while(count[s[second]]){
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        int possibleLen = second - first + 1;
        if(len < possibleLen){
            len = possibleLen;
        }
        second++;
    }
    cout<<len;
}