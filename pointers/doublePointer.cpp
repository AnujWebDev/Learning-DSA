#include <iostream>
using namespace std;

void fun(int ***p1){
        p1 = p1+1;
}

int main(){
    int num = 10;
    int *p = &num;
    int **doublePtr = &p;
    int ***triplePtr = &doublePtr;
    cout<<&num<<endl;//Gives the address of itself
    cout<<p<<endl;//Gives the address of num
    cout<<doublePtr<<endl; // gives the address of p pointer
    cout<<triplePtr<<endl; // gives the address of doublePointer

    ***triplePtr = ***triplePtr + 5; //We are incrementing num with the help of triple Pointer 
    cout<<num;
    fun(triplePtr);
    cout<<p;
    return 0;
}