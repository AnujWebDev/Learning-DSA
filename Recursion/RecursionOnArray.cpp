#include <iostream>
using namespace std;

void PrintArray(int arr[],int index,int n){
    if(index == n) return;
    PrintArray(arr,index+1,n);
    cout<<arr[index]<<endl;
}

int main(){
    int arr[5]={4,5,1,2,7};
    PrintArray(arr,0,5);
    return 0;
}