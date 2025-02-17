#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<"Enter Your elements: ";
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    cout<<"Your Provided Array: ";
    for(int i = 0 ; i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0]= temp;
    cout<<"Your Rotated Array By 1: ";
    for(int i = 0 ; i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}