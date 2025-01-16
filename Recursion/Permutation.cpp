#include <iostream>
#include <vector>
using namespace std;

void Permute(vector<int>&arr,int index,vector<vector<int>>&ans){

    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i = index;i < arr.size();i++){
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
        Permute(arr,index+1,ans);
        int temp1 = arr[index];
        arr[index] = arr[i];
        arr[i] = temp1;
    }
}

int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    Permute(arr,0,ans);
    for(int i = 0; i < ans.size();i++){
        for(int j = 0; j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}