#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int start =  0, end = nums.size()-1,mid,index = -1;
    while( start <= end){
        mid = start + (end - start)/2;
        if( nums[mid] == target){
           index = mid;
           break;
        }
        else if (nums[mid] >= nums[0]){
           if( nums[start] <= target && nums[mid] >= target ){
               end = mid - 1;
           }else{
               start = mid + 1;
           }
        }else{
           if( nums[mid] <= target && nums[end] >= target){
               start = mid + 1;
           }else{
               end = mid - 1;
           }
        }
    }
    return index;   
   }

   int main(){
    vector<int>nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(nums,target);
    return 0;
   }