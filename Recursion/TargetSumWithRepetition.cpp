#include <iostream>
using namespace std;

int TargetSumWithRepetition(int arr[],int index,int size,int target){

    if(target == 0 ) return 1;
    if(index == size || target < 0) return 0;

    return TargetSumWithRepetition(arr,index+1,size,target) + TargetSumWithRepetition(arr,index,size,target-arr[index]); 
}

int main(){
    int arr[] = {2,3,4};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<TargetSumWithRepetition(arr,0,size,target);
    return 0;
}