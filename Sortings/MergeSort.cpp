#include <iostream>
#include <vector>
using namespace std;

//Divide And Merge Sort

void merge(int arr[],int start,int end,int mid){
    vector<int>temp(end - start + 1);
    int index = 0, left = start, right = mid + 1;
    while(left <= mid && right <= end){
        if(arr[left] < arr[right]){
            temp[index] = arr[left];
            index++,left++;
        }else{
            temp[index] = arr[right];
            index++,right++;
        }
    }
    while(left <= mid){
        temp[index] = arr[left];
        index++,left++;
    }
    while(right <= end){
        temp[index] = arr[right];
        index++,right++;
    }
    index = 0;
    while(start <= end){
        arr[start] = temp[index];
        index++,start++;
    }
    return;
}

void mergeSort(int arr[],int start,int end){
    if(start == end) return;
    int mid = start + (end - start)/2;
    //left 
    mergeSort(arr,start,mid);
    //right
    mergeSort(arr,mid+1,end);

    merge(arr,start,end,mid);

}

int main(){
    int arr[] = {4,5,1,2,6,3,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size - 1;
    mergeSort(arr,start,end);
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}