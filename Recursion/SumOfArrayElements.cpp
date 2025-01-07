#include <iostream> 
using namespace std;

int SumOfElements(int arr[],int index,int n){
    if(index == n) return 0;

    return arr[index] + SumOfElements(arr,index+1,n);
}

int main(){
    int arr[5] = {4,1,5,7,8};
    cout<<SumOfElements(arr,0,5);
    return 0;
}