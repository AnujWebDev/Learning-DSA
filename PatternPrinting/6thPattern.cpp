#include <iostream> 
using namespace std;

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E


int main(){
    for(int i = 0 ; i < 6;i++){
        for(int j = 0; j < i;j++){
            char ans = 'A' + j;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}