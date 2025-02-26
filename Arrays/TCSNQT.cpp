#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int start,int end,int mid){
    vector<int>temp(end - start + 1);
    int index = 0, left = start,right = mid + 1;
    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]) temp[index++] = arr[left++];
        else temp[index++] = arr[right++];
    }
    while(left <= mid){
        temp[index++] = arr[left++];
    };
    while(right <= end){
        temp[index++] = arr[right++];
    }
    index = 0;

    while (start <= end)
    {
        arr[start] = temp[index];
        start++,index++;
    }
    
}

void MergeSort(vector<int>&arr,int start,int end){
    if(start == end) return;

    int mid = start + (end - start)/2;

    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,start,end,mid);
}


int main(){
    int N,K;
    cout<<"Enter The Size of Your Array: ";
    cin>>N;
    vector<int>arr(N);
    for(int i = 0; i < N;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Ith Number: ";
    cin>>K;
    int FavMovie = 0;
    for(int i = 0; i < N;i++){
        if(arr[i] == K) FavMovie = arr[i];
    }
    MergeSort(arr,0,N-1);
    int start = 0, end = N - 1,pos = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == FavMovie) {
            pos = mid + 1;
            break;
        }
        else if(arr[mid] < FavMovie) start = mid + 1;
        else end = mid - 1;
    }
    if(pos != -1){
        cout<<pos<<endl;
    }else{
        cout<<pos<<endl;
    }
    
    return 0;
}