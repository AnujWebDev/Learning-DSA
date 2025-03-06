#include <iostream>
using namespace std;
//Find Peak Element 
int findPeakElement(int nums[],int n) {
    int start = 0, end = n - 1, mid;

    while (start < end) {
        mid = start + (end - start) / 2; 
        
        if (nums[mid] > nums[mid + 1]) {
            end = mid;
        } else {
            start = mid + 1; 
        }
    }
    return start;
}
int main(){
    int arr[] = {1,2,1,3,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findPeakElement(arr,n);
    return 0;
}