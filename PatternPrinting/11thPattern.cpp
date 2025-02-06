#include <iostream>
using namespace std;

// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
// E
// E D
// E D C
// E D C B
// E D C B A

int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j <= i; j++){
            char ans = 'E' - j;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}