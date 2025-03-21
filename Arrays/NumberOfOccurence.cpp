#include <iostream>
using namespace std;
//This Code Is To Find Target First Occurence In array with Duplicate Entries
int findTargetOccurences(int arr[],int size,int target){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == target) count++;
    }
    return count;
}   

int main(){
    int arr[] = {8, 9, 10, 12, 12, 12},target = 12;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findTargetOccurences(arr,size,target);
    return 0;
}