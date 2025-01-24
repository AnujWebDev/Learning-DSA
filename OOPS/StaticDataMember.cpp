#include <iostream>
using namespace std;
//This Code snippet tells the use of Static Data member in Class Which is common for all objects
class Customer{
    string name;
    int acc_No,bal;
    static int total_bal;
    public:
    Customer(string name,int acc_No,int bal){
        this -> name = name;
        this -> acc_No = acc_No;
        this -> bal = bal;
        total_bal++;
    }
    void displayData(){
        cout<<name<<" "<<acc_No<<" "<<bal<<" "<<total_bal<<endl;
    }

};

int Customer::total_bal=0;

int main(){
    Customer A1("Anuj",2121,1000);
    Customer A2("Rose",3131,2000);
    Customer A3("Little",4141,3000);
    A3.displayData();
    A1.displayData();
    A2.displayData();
    return 0;
}