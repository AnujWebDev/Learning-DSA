#include <iostream>
using namespace std;

int main(){
    int a = 10;
    //print the address of a
    cout<<&a<<endl;
    //always gives address in hexadecimal form for ex =>0x61ff08
    int *ptr = &a; //this pointer variable store the address of a 
    cout<<ptr<<endl; // Gives exact same address of a variable

    //Another example
    float m = 2.6;
    float *ptr1 = &m;
    cout<<ptr1<<endl;

    //printing size of pointer
    cout<<sizeof(ptr)<<endl; //gives output according to your ram size
    cout<<sizeof(ptr1)<<endl; //gives output according to your ram size

    //Now  printing value of any element by pointer variable

    int num = 100;
    int *ptrOfNum = &num;
    cout<<*ptrOfNum<<endl; //It will give me 100 in output
    //Now if we update the pointer variable with another address of value then
    int b = 10;
    ptrOfNum = &b;
    cout<<*ptrOfNum<<endl; //It will give me 10 in output
    b = 30;
    cout<<*ptrOfNum<<endl; //It will give me 30 in output
    return 0;
}