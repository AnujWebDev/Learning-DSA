#include <iostream>
using namespace std;

int num(char c) {
    switch (c) {
        case 'I': case 'i': return 1;
        case 'V': case 'v': return 5;
        case 'X': case 'x': return 10;
        case 'L': case 'l': return 50;
        case 'C': case 'c': return 100;
        case 'D': case 'd': return 500;
        case 'M': case 'm': return 1000;
        default: return 0; 
    }
}


int main(){
    string roman;
    cin>>roman;
    int sum=0,index=0;
    while(index < roman.size()-1){
        if(num(roman[index]) < num(roman[index+1])){
            sum-=num(roman[index]);
        }else{
            sum+=num(roman[index]);
        }
        index++;
    }
    sum+=num(roman[roman.size()-1]);
    cout<<sum;
    return 0;
}