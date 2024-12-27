#include <iostream>
using namespace std;

int Four(int x,int *py,int **ppz){
    int y,z;
    **ppz += 1;
    z = **ppz;
    *py+=2; 
    y= *py;
    x+=3;
    return x + y + z;
    //The Output is 19;
}

int main(){
    int c,*b,**a;
    c=4,b=&c,a = &b;
    cout<<Four(c,b,a);
    return 0;
}