#include <iostream>
#include <vector>
using namespace std;

void Find(int N,vector<string>&ans,string &temp,int zero,int one){
    if(temp.size()==N){
        ans.push_back(temp);
        return;
    }
    if(zero < one){
        temp.push_back('0');
        Find(N,ans,temp,zero+1,one);
        temp.pop_back();
    }
        temp.push_back('1');
        Find(N,ans,temp,zero,one+1);
        temp.pop_back();
}

int main(){
    int N;
    cout<<"Enter The Size of the Bit: ";
    cin>>N;
    vector<string>ans;
    string temp;
    int zero = 0, one=0;
    Find(N,ans,temp,zero,one);
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}