#include <iostream>
using namespace std;

//Calculate the average of elements in an array of size 18.


int main(){
    int arr[18],sum = 0;
    float avg=0;
    cout<<"Enter Your array elements: ";
    for(int i = 0; i < 18;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 18;i++){
        sum+=arr[i];
    }  
    avg=sum/18.0;
    cout<<"The Avg of all elements present inside the Array is "<<avg<<endl;
    return 0;
}