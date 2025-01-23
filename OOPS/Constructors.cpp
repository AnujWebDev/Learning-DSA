#include <iostream>
using namespace std;


class Customer{
    string name;
    int Account_No;
    int balance;
    int *roi;
    public:
    //Static Constructor or default constructor
    Customer(){
        name = "Anuj Mishra",
        Account_No = 8181;
        balance = 100;
        roi = new int[100];
        cout<<"Default Constructor- "<<name<<" "<<Account_No<<" "<<balance<<" "<<endl;
    }
    //Parametrized constructor
    Customer(string a,int b,int c){
        name = a;
        Account_No = b;
        balance = c;
    }
    //Constructor Overloading
    Customer(string a,int b){
        name = a;
        Account_No = b;
    }
    //This Keyword
    // Customer(string name,int Account_No,int balance ){
    //     this -> name = name;
    //     (*this).Account_No = Account_No;
    //     this -> balance = balance;
    // }

    //Inline Constructor 
    inline Customer(string a,int b,int c) : name(a),Account_No(b),balance(c){
    }

    void getValues(){
        cout<<name<<" "<<Account_No<<" "<<balance<<" "<<endl;
    }

};

int main(){
   Customer A1; //This Will call the default Constructor
   Customer A2("Anuj",2121,80); //This Will call the parametrized Constructor
   Customer A3("Little",3131);//This create Constructor Overloading
   Customer A4("Darshna",4141,8000);//This is For This Keyword explanation
   Customer A5("Rose",5151,70000);
   A2.getValues();
   A3.getValues();
   A4.getValues();
   A5.getValues();

}