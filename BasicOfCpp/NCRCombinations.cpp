#include <iostream>
using namespace std;

// Given two numbers n, r. Find nCr (Combination). Use Function here.
//formula of NCR = n!/r!(n-r)!
void NCRCombinations(int n,int r){
    int factoOfN = 1, factoOfR = 1,factoOfNR = 1;
    int facto = n - r;
    float NCR = 0;
    while(n){
        factoOfN *= n;
        n--;
    }
    while(r){
        factoOfR *= r;
        r--;
    }
    while(facto){
        factoOfNR *= facto;
        facto--;
    }
   NCR = static_cast<double>(factoOfN) / (factoOfR * factoOfNR);

    cout << "n! = " << factoOfN << endl;
    cout << "r! = " << factoOfR << endl;
    cout << "(n-r)! = " << factoOfNR << endl;
    cout << "nCr = " << NCR << endl;
}
int main(){
    int n,r;
    cout<<"Enter Your Number: ";
    cin>>n>>r;
    if(n < r) cout<<"N cant be smaller then r to find NCR..";
    else  NCRCombinations(n,r);
    return 0;
}