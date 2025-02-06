#include <iostream>
using namespace std;

// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
// A
// B B
// C C C
// D D D D
// E E E E E

int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<=i;j++){
            char ans = 'A' + i; 
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}