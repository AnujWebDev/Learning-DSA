#include <iostream>
using namespace std;
//Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13
int main(){
    int n;
    cout<<"Enter Your number to print month: ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Januvary";
        break;
        case 2:
        cout<<"February";
        break;
        case 3:
        cout<<"March";
        break;
        case 4:
        cout<<"April";
        break;
        case 5:
        cout<<"May";
        break;
        case 6:
        cout<<"June";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"August";
        break;
        case 9:
        cout<<"September";
        break;
        case 10:
        cout<<"October";
        break;
        case 11:
        cout<<"November";
        break;
        case 12:
        cout<<"December";
        break;
        default:
        cout<<"Please enter Number upto 1 and 12";
    }
    return 0;
}