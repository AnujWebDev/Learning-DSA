#include <iostream>
using namespace std;
// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A



int main(){
    int n;
    cout<<"Enter Your number: ";
    cin>>n;
    for(int i = 0; i < n;i++){
        for (int j = 0; j < n - i; j++) {
            cout <<" ";
        }
        for(int j = 0; j < i+1; j++){
            char ans = 'A' + j;
            cout<<ans;
        }
        for(int j = i-1; j >= 0; j--){
            char ans = 'A' + j;
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}