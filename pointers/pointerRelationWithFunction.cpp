#include <iostream>
using namespace std;

//First Method for array
void doubleNum(int *p){
    for(int i = 0; i < 5;i++){
        p[i] = 2 * p[i];
    }
}
//second method for array
void doubleNum(int p[]){
    for(int i = 0; i < 5;i++){
        p[i] = 2 * p[i];
    }
}

//Pass By pointers
void swapping(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2=temp;
}
//Pass By refrence
void swapping(int &p1,int &p2){
    int temp = p1;
    p1 = p2;
    p2=temp;
}


int main(){
    //If i want to double all array values by the help of pointers
    int arr[5]={1,2,3,4,5};
    doubleNum(arr);
    for(int i = 0; i < 5;i++){
        cout<<arr[i]<<endl;
    }
    int first = 10,second = 20;
    swapping(&first,&second);
    cout<<first<<endl;
    cout<<second<<endl;
    return 0;
}