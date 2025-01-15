#include <iostream>
using namespace std;

int PerfectSum(int arr[],int index,int size,int target){

    if(index == size) return target == 0;

    return PerfectSum(arr,index+1,size,target) + PerfectSum(arr,index+1,size,target-arr[index]);

}

int main(){
    int arr[] = {1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    cout<<PerfectSum(arr,0,size,target);
    return 0;
}