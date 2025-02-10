#include <iostream>
using namespace std;
// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function
void SwappingValues(int &a,int &b,int &c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
}
int main(){
    int a = 10, b = 20,c = 30;
    SwappingValues(a,b,c);
    cout<<a<<b<<c;
    return 0;
}