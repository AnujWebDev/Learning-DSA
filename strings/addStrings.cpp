#include <iostream>
using namespace std;

string addString(string num1,string num2){
    int index1 = num1.size()-1,index2 = num2.size()-1,carry=0;
    string ans;
    while(index2>=0){
        int sum = (num1[index1] - '0' + num2[index2] - '0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+=c;
        index1--,index2--; 
    }
    while(index1>=0){
        int sum = (num1[index1] - '0') +  carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+=c;
        index1--;
    }

    if(carry){
        ans+='1';
    }
    int start = 0, end = ans.size()-1;
    while(start < end){
        int temp = ans[start];
        ans[start] = ans[end];
        ans[end] = temp;
        start++,end--;
    }
    return ans;
}

int main(){
    string num1,num2;
    cout<<"Enter Num1: ";
    cin>>num1;
    cout<<"Enter Num2: ";
    cin>>num2;

    if(num1.size() < num2.size()){
        cout<<addString(num2,num1);
    }else{
        cout<<addString(num1,num2);
    }
    return 0;
}