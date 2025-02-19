#include <iostream>
using namespace std;
//Selection Sort For Descending Order
int main(){
    int arr[] = {1,2,3,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size - 1;i++){
        int index = i;
        for(int j = i + 1; j < size;j++ ){
            if (arr[j] > arr[index]) index = j;
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