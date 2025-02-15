#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//Find the second largest element in an array of unique elements of size n.

int main(){
    int n;
    cout<<"Enter Your Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter Your Array Elements: ";
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    for(int i = 0; i < n;i++){
        if(ans < arr[i]) ans = arr[i];
    }
    int second = INT_MIN;
    for(int i = 0; i < n;i++){
        if(ans != arr[i]){
            if(second < arr[i]) second = arr[i];
        }
    }
    cout<<second;
    
    return 0;
}