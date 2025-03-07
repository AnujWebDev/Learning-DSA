#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function declaration before use
int count(vector<int>& nums, int target);

int specialArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // Sort the array

    int start = 0;
    int end = nums.size();

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int ans = count(nums, mid);  // Call count function

        if (ans == mid) return mid;
        else if (ans > mid) start = mid + 1;
        else end = mid - 1;
    }

    return -1;
}

// Count function implementation
int count(vector<int>& nums, int target) {
    int ans = 0;
    for (int num : nums) {
        if (num >= target) ans++;
    }
    return ans;
}

int main() {
    vector<int> nums = {0, 4, 3, 0, 4};
    cout << specialArray(nums) << endl;
    return 0;
}
