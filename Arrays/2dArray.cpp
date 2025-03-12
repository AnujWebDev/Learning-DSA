#include <iostream>
using namespace std;
//Its An Basic Code For 2d Array
int main(){
    int arr[4][3];
    for(int i = 0; i < 4;i++){
        for(int j = 0 ; j < 3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < 4;i++){
        for(int j = 0 ; j < 3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}