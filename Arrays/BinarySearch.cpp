#include <iostream>
using namespace std;
//This code snippet refers to Binary Search of given array
int main(){
    int arr[] = {1,2,3,4,5},target = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size - 1;
    int mid = start + (end - start)/2;
    while (start <= end) {
        int mid = start + (end - start) / 2; 

        if (arr[mid] == target) {
            cout << "Found it.. it's present at index " << mid << endl;
            return 0;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}