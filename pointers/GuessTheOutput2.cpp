#include <iostream> 
using namespace std;

//in this code we have to guess the output

void second(int *p1, int *p2){
    //So here pointer p1 is containing address of i lets say p1 = 100,p2=200
    p1 = p2;
    //Now p1 = p2 means p1 = 200 and p2 = 200 now both p1 and p2 is pointing on j
    *p2 = 2;
    //and then make pointer p2 with derefrencing make the address value 2 so now j become 2
}

int main(){
    int i = 0, j = 1;
    second(&i,&j);
    cout<<i<<j;
    //so here we will get i = 0, j = 2;
    return 0;
}