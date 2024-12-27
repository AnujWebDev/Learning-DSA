#include <iostream>
using namespace std;

//in here we have to guess the output 

int main(){
    int *ptr;
    //so first a pointer ptr is created in adress lets say = 100
    int x = 0;
    //then a x variable in address 200 with value 0;
    ptr = &x;
    //now ptr pointer will have the address of x
    int y = *ptr;
    //Now a new variable y created in address 300 which has the value of pointer ptr which is 0 so y = 0;
    *ptr = 1;
    //Now pointer ptr with derefrencing value make it 1 soo x = 1;
    cout<<x<<y;
    //In output we get x=1, y=0;
    return 0;
}