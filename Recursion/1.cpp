#include <iostream>
using namespace std;

// I want to Print 1 to 100 numbers using recursion
void PrintOneToHundred(int n){
    if(n == 101){
        return;
    }else{
        cout<<n<<endl;
        PrintOneToHundred(n+1);
    }
}
int main(){
    //using iterative Approach we can use simple for loop;
    for(int i = 1; i<=100;i++){
        cout<<i<<endl;
    }
    //Now using recursion
    PrintOneToHundred(1);
    return 0;
}