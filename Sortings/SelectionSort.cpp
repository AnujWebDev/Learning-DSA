#include <iostream>
using namespace std;
//Selection Sort in Ascending Order
int main(){
    int arr[] = {5,4,3,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size-1;i++){
        int index = i;
        for(int j = i + 1;j < size;j++ ){
            if(arr[j] < arr[index]) index = j; 
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}