#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,1,6,2,8,9,14,12,10,3,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size - 1;i++){
        for(int j = 0; j < size - i;j++){
            if(arr[j] > arr[j+1] ) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}