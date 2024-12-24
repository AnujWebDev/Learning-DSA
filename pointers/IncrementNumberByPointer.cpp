#include <iostream>
using namespace std;

//Increment num variable by 5 with the help of  pointers p
//Dont Do num = num + 5;
//Try to change it with the help of p
int main(){
    int num = 10;
    int *p = &num;
    *p += 5;
    cout<<num<<endl; // Now num will become 15  
    cout<<*p<<endl; //and its pointer will also become 15
    return 0;
}