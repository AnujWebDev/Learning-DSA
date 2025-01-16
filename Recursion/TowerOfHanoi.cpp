#include<iostream>
using namespace std;

void Toh(int n,int source,int help,int dest){
    if(n==1){
        cout<<"Move Disk "<<n<<" From "<<source<<" to "<<dest<<endl;
        return;
    }
    Toh(n-1,source,dest,help);
    cout<<"Move Disk "<<n<<" From "<<source<<" to "<<dest<<endl;
    Toh(n-1,help,source,dest);
}

int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    Toh(n,1,2,3);
    return 0;
}