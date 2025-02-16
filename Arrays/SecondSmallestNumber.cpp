#include <iostream>
#include <climits>

using namespace std;

void secondSmallestNumber(int arr[],int size){
    int smallest = INT_MAX, second = INT_MAX;
    for(int i = 0; i < size; i++){
        if(smallest > arr[i]) smallest = arr[i];
    }
    for(int i = 0; i < size; i++){
        if(smallest != arr[i]){
            if(second > arr[i]) second = arr[i];
        }
    }
    cout<<"The Second Smallest Number inside the array is : "<<second<<endl;
}

int main(){
    int arr[6] = {1,4,6,7,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    secondSmallestNumber(arr,size);
    return 0;
}