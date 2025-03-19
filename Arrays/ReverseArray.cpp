#include <iostream>
using namespace std;
//This Code snippet is Used For Reverse an Array
void reverseAnArray(int arr[],int size){
    int start = 0, end = size-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++,end--;
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseAnArray(arr,size);
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}