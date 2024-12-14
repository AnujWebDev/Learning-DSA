#include <iostream>
using namespace std;
#include <vector>
//in this code snippet i am solving to find the longest possible palindrom lenth in provided string

int longestPalindrome(string s1){
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    //by this loop i will get all the alphabets count in both arrays
    for(int i = 0;i < s1.size();i++ ){
        if(s1[i] >= 'a'){
            lower[ s1[i] -'a']++;
        }else{
            upper[s1[i] - 'A']++;
        }
    }
    int count=0;
    bool odd=0;
    for(int i = 0; i < 26; i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            count+=lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0){
            count+=upper[i];
        }else{
            count+=upper[i]-1;
            odd=1;
        }
    }
    return count + odd;
}
int main(){
    string s1;
    cin>>s1;
    cout<<longestPalindrome(s1);
    return 0;
}