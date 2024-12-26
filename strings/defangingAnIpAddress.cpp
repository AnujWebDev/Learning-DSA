#include <iostream>
using namespace std;
//In this code snippet i am solving a problem of defanging an Ip address in which whenever a dot is coming inside the string i want to replace it with this '[.]' 
string defangingAnIpAddress(string address){
    string ans;
    for(int i = 0; i < address.size();i++){
        if(address[i] == '.'){
            ans+="[.]";
        }else{
            ans+=address[i];
        }
    }
    return ans;
}  


int main(){
    string address;
    cout<<"Enter Your Ip address: ";
    cin>>address;
    cout<<defangingAnIpAddress(address);
    return 0;
}