#include <iostream>
using namespace std;

int main(){
    char arr[5] = "1234";
    char *ptr =arr;
    cout<<(void*)ptr<<endl;
    cout<<(void*)arr<<endl;
    return 0;
}