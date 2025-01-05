#include <iostream>
using namespace std;
#include <vector>

//In this code snippet i am finding How many times  i have to repeat my Strings to find my given string;

void findLPS(vector<int>&LPS,string m){
    int first = 0, second = 1;
    while(second < m.size()){
        if(m[first] == m[second]){
            LPS[second] = first + 1;
            first++,second++;
        }else{
            if(first == 0){
                LPS[second] = 0;
                second++;
            }else{
                first = LPS[first - 1];
            }
        }
    }
}

int KMP_Match(string repString,string m){
    vector<int>LPS(m.size(),0);
    findLPS(LPS,m);
    int first = 0, second = 0;
    while(first < repString.size() && second < m.size()){
        if(repString[first] == m[second]){
            first++,second++;
        }else{
            if(second == 0){
                first++;
            }else{
                second=LPS[second-1];
            }
        }
    }
    if(second == m.size()){
        return 1;
    }
    return -1;
}

int main(){
    string s,m;
    cout<<"Enter Your To be repeated string: ";
    cin>>s;
    cout<<"Enter Your String to be find: ";
    cin>>m;
    string repString = s;
    int reps=1;
    if(s == m){
        cout<<reps;
        return 0;
    }
    while(repString.size() < m.size()){
        repString+=s;
        reps++;
    }

    if(KMP_Match(repString,m)==1){
        cout<<reps;
    }else if(KMP_Match(repString+s,m) == 1){
        cout<<reps+1;
    }else{
        cout<<-1;
    }
    return 0;
}