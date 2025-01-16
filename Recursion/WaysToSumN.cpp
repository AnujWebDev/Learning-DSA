#include <iostream>
#include <vector>
using namespace std;

int Ways(vector<int>arr,int size,int sum){
    if(sum == 0) return 1;
    if(sum < 0) return 0;
    int ans = 0;
    for(int i = 0; i < arr.size();i++){
        ans+= Ways(arr,size,sum-arr[i]);
    }
    return ans;
}

int main(){
    vector<int>arr={1,5,6};
    int sum = 7;
    cout<<Ways(arr,arr.size(),sum);
    return 0;
}