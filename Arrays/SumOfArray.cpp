#include <iostream>
using namespace std;

//Take 20 elements from user input and find its sum with the help of an array.

int main(){
    int arr[20],sum = 0;
    cout<<"Enter Your array elements: ";
    for(int i = 0; i < 20;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 20;i++){
        sum+=arr[i];
    }   
    cout<<"The sum of all elements present inside the array is "<<sum<<endl; 
    return 0;
}