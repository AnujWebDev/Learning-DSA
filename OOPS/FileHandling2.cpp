#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//THis is How libraries work in File Handling
int main(){
   
    vector<int>arr(5);
    cout<<"Enter Your Input: ";
    for(int i = 0; i<5;i++){
        cin>>arr[i];
    }
    ofstream fout;//For Write in the file
    fout.open("Anuj.txt");
    fout<<"Original Darta \n";
    for(int i = 0; i<5;i++){
        fout<<arr[i]<<" ";
    }
    return 0;
}