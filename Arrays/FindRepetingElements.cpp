#include <iostream>
using namespace std;

int FindRepeatingElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return i + 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << FindRepeatingElements(arr, size);
    return 0;
}
