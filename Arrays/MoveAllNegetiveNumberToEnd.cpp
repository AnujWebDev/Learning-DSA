#include <iostream>
#include <vector>
using namespace std;
//This code is to move all negetive numbers to end
void MoveAllNegativeNumberToEnd(int arr[], int size, vector<int>& ans) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            ans[index++] = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            ans[index++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(size);
    MoveAllNegativeNumberToEnd(arr, size, ans);
    return 0;
}
