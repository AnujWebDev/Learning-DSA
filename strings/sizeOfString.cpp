#include <iostream>
using namespace std;

int main(){
    //In here i am solving how to get size of strings
    //This is 1st way
    string s1 = "Anuj";
    cout<<s1.size()<<endl;
    //this is 2nd way
    int size = 0;
    int count = 0;
    while(s1[count] != '\0'){
        size++,count++;
    }
    cout<<size;
    return 0;
}