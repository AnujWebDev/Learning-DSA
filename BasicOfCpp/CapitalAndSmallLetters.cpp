#include <iostream> 
using namespace std;

//Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

int main(){
    char i = 'A';
    while(i <= 'Z'){
        cout<<i<<endl;
        i++;
    }
    char j = 'a';
    while(j <= 'z'){
        cout<<j<<endl;
        j++;
    }
    return 0;
}