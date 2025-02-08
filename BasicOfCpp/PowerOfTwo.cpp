#include <iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    if(n == 1) cout<< 1;
    if(n == 0 || n < 0) cout<< 0;
    while(n > 1){
        if(n%2!=0) {
            cout<<"Not a Power of two..";
            return 0;
        };
        n/=2;
    }
    cout<<"its power of two..";
    return 0;
}