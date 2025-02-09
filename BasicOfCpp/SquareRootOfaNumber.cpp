#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    long long sqrt,i;
    if(x <= 0) cout<< 0;
        for( i = 1; i * i <=x; i++)
        {
            sqrt = i;
        }
        cout<<sqrt;
    return 0;
}