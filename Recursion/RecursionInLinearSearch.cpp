#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int X,int index){

    if(index == size) return 0;

    if(arr[index] == X) return 1;
    else
    LinearSearch(arr,size,X,index+1);
}

int main(){
    int arr[5]={4,3,1,6,8};
    int X = 1;
    cout<<LinearSearch(arr,5,X,0);
}