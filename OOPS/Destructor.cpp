#include <iostream>
using namespace std;

class customer{
    string name;
    int age;
    int salary;
    public:
    customer(){
        name = "4";
        cout<<"Hello i am Constuctor for: "<<name<<endl;
    }
    customer(string name){
        this->name = name;
        cout<<"Hello i am Constuctor for: "<<name<<endl;
    }
    ~customer(){
        cout<<"hello i am destructure for: "<<name<<endl;
    }
};

int main(){
    customer A1("1"),A2("2"),A3("3");
    customer *A4 = new customer;
    delete A4;
    return 0;
}