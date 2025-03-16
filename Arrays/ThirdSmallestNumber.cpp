#include <iostream>
#include <climits>

using namespace std;
//This is code snippet For Finding Third Smallest number
void ThirdSmallestNumber(int arr[],int size){
    int smallest = INT_MAX, second = INT_MAX,third= INT_MAX;
    for(int i = 0; i < size; i++){
        if(smallest > arr[i]) smallest = arr[i];
    }
    for(int i = 0; i < size; i++){
        if(smallest != arr[i]){
            if(second > arr[i]) second = arr[i];
        }
    }
    for(int i = 0; i < size; i++){
        if(smallest != arr[i]){
            if(second != arr[i]) {
                if(third > arr[i]) third = arr[i];
            };
        }
    }
    cout<<"The Third Smallest Number inside the array is : "<<third<<endl;
}

int main(){
    int arr[6] = {1,4,6,7,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    ThirdSmallestNumber(arr,size);
    return 0;
}