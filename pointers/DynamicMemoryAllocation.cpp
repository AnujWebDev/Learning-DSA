#include <iostream>
using namespace std;

//This is How we can create dynamic memory in heap by using new keyword

int main(){
    int *ptr = new int; //For creating dynamic memory for int 
    cout<<ptr<<endl; //This will gives the address of new dynamic memory
    *ptr = 5;
    cout<<*ptr<<endl; //This will give the output of the value inside the located memory
    float *ptr1 = new float;
    cout<<ptr1<<endl;
    *ptr1 = 10.5;
    cout<<*ptr1<<endl;
    int n;
    cout<<"Enter The Size of the Array: ";
    cin>>n;
    int *p1 = new int[n]; 
    cout<<p1<<endl;
    for(int i = 0; i < n;i++){
        p1[i]=i + 1;
    }
    for(int i = 0;i<n;i++){
        cout<<p1[i]<<endl;
    }

    //After all the work delete the dynamic memory by delete keyword
    delete ptr;
    delete ptr1;
    delete[] p1;
    return 0;
}