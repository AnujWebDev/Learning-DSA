#include <iostream>
using namespace std;

// An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
int BinarySearch(int arr[],int start,int end,int target){
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target) return 1;
        else if(arr[mid] > target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {5,4,3,2,1},target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<BinarySearch(arr,0,size-1,target);
    return 0;
}