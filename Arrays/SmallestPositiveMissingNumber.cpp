#include <iostream>
using namespace std;

int MissingSmallestNumber(int arr[],int size){
    int num = 1;
    for(int i = 0;i < size;i++){
        if(num == arr[i]) num++;
        for(int i = 0;i < size;i++){
            if(num == arr[i]) num++;
        }
    }
    return num;
}

int main(){
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<MissingSmallestNumber(arr,size);
    return 0;
}