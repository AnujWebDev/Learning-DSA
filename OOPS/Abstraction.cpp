#include <iostream>
using namespace std;

class Customer{
    string name;
    int age,balance;
    public:
    Customer(){
        name = "Anuj";
        age = 22;
        balance = 1000; 
    }
    void deposit(int amount){
        if(amount <= 0){
            cout<<"Invalid Amount";
        }else{
            balance += amount;
            cout<<amount<<" Is Credited To your balance"<<endl;
        }
    }
    void display(){
        cout<<name<<" "<<age<<" "<<balance<<" "<<endl;
    }

};

int main(){
    Customer A1;
    A1.deposit(1000);//We are taking amount and just showing the output only the essential information and hiding the process behind it
    A1.display();//Here also we are showing the details but not the process
    return 0;
}