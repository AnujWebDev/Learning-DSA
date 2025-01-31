#include <iostream>
using namespace std;
//We can handle And customise error also
int main(){
    int a,b;
    cin>>a>>b;
    int c;
    try{
        if(b==0){
            throw "Divide By Zero is not Possible \n";
        }
        c = a/b;
        cout<<c;
    }catch(const char *e){
        cout<<"Exception Occured at line 9 "<<e<<endl;
    }
    return 0;
}