#include <iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout<<"Enter Your Number: ";
    cin>>size;
    while(size > 0){
        sum+=size*size;
        size--;
    }
    cout<<sum;
    return 0;
}