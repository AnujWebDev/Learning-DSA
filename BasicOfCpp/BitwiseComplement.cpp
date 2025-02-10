#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter Your Number: ";
    cin>>n;
     int rem,ans = 0, mul = 1;
        if(n <= 0) cout<< 1;
        while(n)
        {
            rem = n % 2;
            rem = rem ^ 1;
            n/=2;
            ans = rem * mul + ans;
            mul *= 2;
        }
        cout<< ans;
    return 0;
}