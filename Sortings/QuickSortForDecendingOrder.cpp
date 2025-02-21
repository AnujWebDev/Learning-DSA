#include <iostream>
using namespace std;

//Quick Sort for decending order

int partition(int arr[],int start,int end){
    int pos = start;
    for(int i = start;i<=end;i++){
        if(arr[i] >= arr[end]){
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos++;
        }
    }
    return pos - 1;
};

void quickSort(int arr[],int start,int end){

    if(start >= end) return ;
    //pivot 
    int pivot = partition(arr,start,end);
    //left
    quickSort(arr,start,pivot-1);
    //right
    quickSort(arr,pivot+1,end);
   
}

int main(){
    int arr[] = {7,8,1,4,3,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}