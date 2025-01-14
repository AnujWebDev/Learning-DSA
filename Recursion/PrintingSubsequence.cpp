#include <iostream>
#include <vector>
using namespace std;

void subSequence(int arr[], int index, int size, vector<vector<int>> &ans, vector<int> &temp) {
    if (index == size) {
        ans.push_back(temp);
        return;
    }

    // Exclude the current element
    subSequence(arr, index + 1, size, ans, temp);

    // Include the current element
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, size, ans, temp);

    // Backtrack
    temp.pop_back();
}

int main() {
    int arr[] = {3,4,5};
    vector<vector<int>> ans;
    vector<int> temp;
    int size = sizeof(arr) / sizeof(arr[0]);

    subSequence(arr, 0, size, ans, temp);

    // Print all subsequences
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
