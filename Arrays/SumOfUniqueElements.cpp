#include <iostream> 
using namespace std;

int SumOfUniqueElements(int nums[],int size){
    int sum = 0;
    bool isUnique;

    for (int i = 0; i < size; i++) {
        isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && nums[i] == nums[j]) { 
                isUnique = false;
                break;
            }
        }
        if (isUnique) sum += nums[i];
    }
    return sum;
}

int main(){
    int nums [] = {1,1,1,1,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    cout<<SumOfUniqueElements(nums,size);
    return 0;
}