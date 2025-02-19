#include <iostream>
using namespace std;

//Bubble Sort For Decending Order

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size - 1; i++ ){
        for(int j = 0 ; j < size - i;j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}