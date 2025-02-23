#include <iostream>
#include <vector>
using namespace std;

void searchRange(int arr[], int start, int end, vector<int>& temp, int target, int size) {
    int left = -1, right = -1;
    int low = start, high = end;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            left = mid; 
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Right Most Occurrence
    low = start, high = end;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            right = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    temp[0] = left;
    temp[1] = right;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> temp(2, -1);
    int size = sizeof(arr) / sizeof(arr[0]);
    
    searchRange(arr, 0, size - 1, temp, target, size);
    
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }
    return 0;
}
