#include <iostream>
#include <vector>
using namespace std;

    void Permute2(vector<int>&arr,int index,vector<vector<int>>&ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }
    vector<bool>use(21,0);
    for(int i = index;i<arr.size();i++){
        if(use[arr[i] + 10]==0){
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            Permute2(arr,index+1,ans);
            int temp1 = arr[index];
            arr[index] = arr[i];
            arr[i] = temp1;
            use[arr[i]+10] = 1;
        }
    }
}

int main(){
    vector<int>arr={1,1,2};
    vector<vector<int>>ans;
    Permute2(arr,0,ans);
    for(int i = 0; i < ans.size();i++){
        for(int j = 0; j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}