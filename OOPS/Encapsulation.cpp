#include <iostream>
using namespace std;

//Encapsulation:- Wrapping Up of data and information in a single unit ,While controlling access to it;

class Customer{
    string name;
    int age;
    int balance = 500;
    public:
    Customer(string name,int age){
        this->name = name;
        this-> age = age;
    }
    void addAmount(int amount){
        //We can control the data by binding it
        if(amount < 0){
            cout<<"Invalid amount..."<<endl;
        }else{
            balance+=amount;
        }
        cout<<name<<endl<<age<<endl<<balance<<endl;
    }
};

int main(){
    Customer A1("Anuj",22);
    A1.addAmount(1200);//So if we add any wrong input it will not allow
    return 0;
}