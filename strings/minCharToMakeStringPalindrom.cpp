#include <iostream>
using namespace std;
#include <vector>

//in this code snippet i want to return the length of min possible characters to make given string an  palindrom
//using KMP algorithm

void findLps(vector<int>&lps,string s){
    int first = 0, second = 1;
    while(second < s.size()){
        if(s[first] == s[second]){
            lps[second] = first + 1;
            first++,second++;
        }else{
            if(first == 0){
                lps[second] = 0;
                second++;
            }else{
                first = lps[first - 1];
            }
        }
    }
}


int main(){
    string s;
    cin>>s;
    int size = s.size();
    string rev=s;
    int start=0, end = s.size()-1;
    while(start < end){
        int temp = rev[start];
        rev[start] = rev[end];
        rev[end] = temp;
        start++,end--;
    } 
    s+='$';
    s+=rev;
    vector<int>LPS(s.size(),0);
    findLps(LPS,s);
    cout<<size - LPS[s.size()-1];
    return 0;
}