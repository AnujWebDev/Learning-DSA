#include <iostream>
using namespace std;

int CountTheNumbers(int arr[],int size,int num1,int num2){
    int first = 0,second = 0;
    //First Occurence
    for(int i = 0; i < size;i++){
        if(arr[i] == num1){
            first = i;
            break;
        }
    }
    //second 
    for(int i = size-1; i >= 0;i--){
        if(arr[i] == num2){
            second = i;
            break;
        }
    }
    return second - first - 1;
}

int main(){
    int arr[] = {3, 2, 1, 4}, num1 = 2, and num2 = 4;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<CountTheNumbers(arr,size,num1,num2);
    return 0;
}