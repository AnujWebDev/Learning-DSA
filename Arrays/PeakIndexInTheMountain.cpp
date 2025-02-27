#include <iostream>
using namespace std;

int FindPeakElement(int arr[],int start,int end){
    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
            return mid;
        }
        else if( arr[mid] > arr[mid-1]) start = mid + 1;
        else end = mid - 1;
    }
}

int main(){
    int arr[] = { 1,2,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<FindPeakElement(arr,0,size-1);
    return 0;
}