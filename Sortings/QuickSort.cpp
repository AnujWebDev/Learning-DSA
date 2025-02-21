#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos = start;
    for(int i = start; i <= end;i++){
        if(arr[i] <= arr[end]){
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos++;
        }
    }
    return pos - 1;
}

void QuickSort(int arr[],int start,int end){

    if(start >= end) return;
    int pivot = partition(arr,start,end);
    //left partition
    QuickSort(arr,start,pivot-1);
    //right partition
    QuickSort(arr,pivot+1,end);
}

int main(){
    int arr[] = {4,2,1,5,6,8,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,size-1);
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}