#include <iostream>
using namespace std;

// In this code snippet we have to guess the output

int main(){
    char c[] = "GATE2024";
    char *p = c;
    cout<< p + p[3] - p[1]; 

    //What is happening in this code snippet os first we have an character array c and then pointer p which has the address of character array c
    // so lets address of character array c[0] = 100;
    //Now 100 + E - A = 4 ;
    //We get 104 so if c[0] = 100 then 104 = c[4] = which is '2'
    //Now the output will be 2024;
    return 0;
}