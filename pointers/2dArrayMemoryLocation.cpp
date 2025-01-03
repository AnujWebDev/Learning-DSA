#include <iostream>
using namespace std;
//This Code contains how to store dynamic memory allocation of 2d array in heap using pointers
int main(){
    int n,m;
    cout<<"Enter size of Your 2d array: ";
    cin>>n>>m;  
    int **ptr = new int *[n];
    for(int i = 0; i < n; i++){
        ptr[i] = new int[m];
    }

    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin>>ptr[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Release The dyanmic Memory

    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
    return 0;
}