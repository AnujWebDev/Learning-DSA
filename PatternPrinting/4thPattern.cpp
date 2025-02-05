#include <iostream>
using namespace std;

    // F G H I J K  
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K


int main(){
    for(int i = 0;i < 5;i++){
        for(int j = 5; j < 11;j++){
            char ans = 'A' + j;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}