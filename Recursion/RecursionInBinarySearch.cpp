#include <iostream> 
using namespace std;

int BinarySearch(int arr[],int X,int start,int end){
    if(start > end) return 0;
    int mid = start + (end-start)/2;
    if(arr[mid] == X) return 1;
    else if(arr[mid] < X ) return BinarySearch(arr,X,mid+1,end);
    else return BinarySearch(arr,X,start,mid-1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int X=1;
    cout<<BinarySearch(arr,X,0,4);
    return 0;
}