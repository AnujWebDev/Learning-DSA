#include <iostream>
using namespace std;
//Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    if(age <= 18) cout<<"you are not an adult";
    else cout<<"You are adult";
    return 0;
}