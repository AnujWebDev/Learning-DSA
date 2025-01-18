#include <iostream>
#include <vector>
using namespace std;

int Winner(vector<bool>&persons,int persons_left,int k,int index,int n){
    if(persons_left == 1){
        for(int i =0;i<persons.size();i++){
            if(persons[i]==0) return i;
        }
    }

    int kill = (k-1)%persons_left;
    while(kill--){
        index =(index+1)%n;
        while(persons[index] == 1){
            index = (index + 1)% n;
        }
    }
    persons[index] = 1;
    while(persons[index] == 1)
    index = (index+1)%n;
    Winner(persons,persons_left-1,k,index,n);
}

int main(){
    int n,k;
    cout<<"Enter The Players Value and Jump value: ";
    cin>>n>>k;
    vector<bool>persons(n,0);
    cout<<Winner(persons,n,k,0,n)+1; 
}