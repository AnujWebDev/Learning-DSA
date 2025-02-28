#include <iostream>
using namespace std;

int findMin(int nums[],int start,int end){
        int min_index=nums[0];
        while(start <= end){
            int  mid = start + (end - start)/2;
            if(nums[mid] >= nums[0]){
                start = mid + 1;
            }else{
                min_index = nums[mid];
                end = mid - 1;
            }
        }
        return min_index;
}

int main(){
    int arr[] = {3,4,5,1,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<findMin(arr,0,size-1); 
    return 0;
}