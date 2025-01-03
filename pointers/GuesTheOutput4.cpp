#include <iostream>
using namespace std;

int main(){
    int a = 5,b =10;
    //So first two variable are created in some address lets say a =100 ,b =200
    int &name = a;
    //Now a refrence variable name is created which is pointing to a;
    int *ptr = &a;
    //now a pointer ptr is containing the address of a so ptr = 100 in address 300
    (*ptr)++;
    //Now *ptr = 5 and if incremented its make a = 6;
    ptr = &b;
    //Now ptr is containg the address of b
    *ptr = *ptr + 5;
    //and here we are incrementing the ptr pointer value by 5 so 10 + 5 = 15 b become 15
    name +=5;
    //Now name is refrene variable for a which is 6 and incrementing by 5 so a become 11
    cout<<a<<b;
    //Now in OutPut we will get a = 11, b = 15;
    return 0;
}