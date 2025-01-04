#include <iostream>
using namespace std;

void Five(char *str1, char *str2){
    while((*str1 = *str2)){
        str1++,str2++;
    }
}   

int main(){
    char first[] = "Mohan";
    char second[] = "Rohan";
    Five(first,second);
    cout<<first;
    //In this we will get Rohan in first array
    return 0;
}