#include <iostream>
using namespace std;

void convertToCapitalLetter(char &ans){
    ans = ans - 'a' + 'A';
}

int main(){
    char ans;
    cout<<"Enter Your Character: ";
    cin>>ans;
    convertToCapitalLetter(ans);
    cout<<ans;
    return 0;
}