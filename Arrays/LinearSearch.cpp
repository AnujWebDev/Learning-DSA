#include <iostream>
using namespace std;

// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

int FindElement(int arr[],int n,int size){
    for(int i = 0; i < size; i++){
        if(n == i) return 1;
    }
    return 0;
}

int main(){
    int arr[]= {1,2,3,4,5,6};
    int n;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<FindElement(arr,n,size);
    return 0;
}