#include <iostream>
using namespace std;

int minElement(int arr[],int index,int n){
    if(index == n-1) return arr[index];

    if(arr[index] < minElement(arr,index+1,n)){
        return arr[index];
    }else{
        return minElement(arr,index+1,n);
    }
}

int main(){
    int arr[5]= {2,5,6,3,4};
    cout<<minElement(arr,0,5);
    return 0;
}