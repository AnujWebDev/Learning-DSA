#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    // //If we want to print Array Address
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr<<endl;

    // //If we want to print array address values
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr;

    // //To print all elements address
    for(int i = 0; i < 5;i++){
        cout<<arr+i<<endl;
    }

    // //To print all values of the array
    for(int i = 0; i < 5;i++){
        cout<<*(arr+i)<<endl;
    }
    for(int i = 0; i < 5;i++){
        cout<<ptr<<endl;
        ptr++;
    }

    return 0; 
}