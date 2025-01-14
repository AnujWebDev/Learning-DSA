#include <iostream>
using namespace std;
#include <vector>

void SubsetSum(int arr[], int index,int size,int sum,vector<int> &ans){

    if(index == size) {
        ans.push_back(sum);
        return;
    }
    SubsetSum(arr,index+1,size,sum,ans);
    SubsetSum(arr,index+1,size,sum+arr[index],ans);
}

int main(){
    int arr[] = {3,4,5};
    vector<int>ans;
    int sum =0;
    int size=sizeof(arr)/sizeof(arr[0]);
    SubsetSum(arr,0,size,sum,ans);
    for(int i = 0; i < ans.size();i++ ){
        cout<<ans[i]<<endl;
    }
    return 0;
}