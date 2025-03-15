#include <iostream>
#include <climits> 
using namespace std;
//This Code is For Finding Third Largest Number
void thirdLargestNumber(int arr[],int size){
    int ans =INT_MIN ,second = INT_MIN,third = INT_MIN;
    for(int i = 0; i < size;i++){
        if(ans < arr[i]) ans = arr[i];
    }
    for(int i = 0; i < size;i++){
        if(ans != arr[i]){
            if(second < arr[i] ) second = arr[i];
        }
    }
    for(int i = 0; i < size;i++){
        if(ans != arr[i]){
            if(second != arr[i] ) {
                if(third < arr[i]) third = arr[i];
            }
        }
    }
    cout<<"The Third Largest number inside the array is : "<<third<<endl;
}

int main(){
    int arr[6] = {1,6,8,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    thirdLargestNumber(arr,size);
    return 0;
}