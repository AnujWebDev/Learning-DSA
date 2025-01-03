#include <iostream>
using namespace std;
#include <vector>
//This code snippet is for getting factorial of any number which we cant handle by int long long int
int main(){
    int num;
    cin>>num;
    vector<int>facto(1,1);
    int carry=0, res=0;
    while(num > 1){
        for(int i = 0; i < facto.size();i++){
            res = facto[i] * num + carry;
            carry=res/10;
            facto[i] = res%10;  
        }
        while(carry){
            facto.push_back(carry%10);
            carry/=10;
        }
        num--;
    }
    int start = 0,end=facto.size()-1;
    while(start < end){
        int temp = facto[start];
        facto[start] = facto[end];
        facto[end] = temp;
        start++,end--;
    }
    for(int i = 0;i<facto.size();i++){
        cout<<facto[i];
    }
    return 0;
}