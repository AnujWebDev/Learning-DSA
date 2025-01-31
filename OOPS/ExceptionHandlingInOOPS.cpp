#include <iostream>
using namespace std;

//We can see how to handle Exceptions in the oops by definition which type of error is coming and how to handle it
//We can see How to Create Our Own error Class

class InsufficientBalanceError : public runtime_error{
    public:
    InsufficientBalanceError(const string &errMsg):runtime_error(errMsg){
    };
};
class InvalidAmountError : public runtime_error{
    public:
    InvalidAmountError(const string &err):runtime_error(err){};
};

class Bank{
  string name;
  int balance;
  public:
  Bank(string name,int balance){
    this->name = name;
    this->balance=balance;
  };
  void deposit(int amount){
    if(amount < 0){
        throw "Invalid amount \n";
    }else{
        cout<<balance<<endl;
        balance += amount;
        cout<<amount<<" succussfully credited to your account \n";
    }
  }  
  void withdraw(int amount){
    if(amount > 0 && amount <=balance){
        balance -= amount;
        cout<<amount<<" succussfully  deposited from your account \n";
    }else if(amount > balance){
        throw InsufficientBalanceError("Insufficient Balnance \n");
    }else{
        throw  InvalidAmountError("Invalid amount \n");
    }
  }
};

int main(){
    Bank A1("Anuj",500);
    try{
        A1.deposit(100);
        A1.withdraw(6000);
    }
    catch(const InsufficientBalanceError &e){
        cout<<"Expection Occured "<<e.what()<<endl;
    }catch(const InvalidAmountError &e){
        cout<<"Exception OCcured "<<e.what()<<endl;
    }
    return 0;
}