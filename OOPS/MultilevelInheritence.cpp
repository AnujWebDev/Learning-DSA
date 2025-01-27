#include <iostream>
using namespace std;

//This is the Example for multilevel Inheritence

class Human{
    protected:
    string name;
    int age;
};

class Employee : public Human{
    protected:
    int salary;
};
class Manager : public Employee{
    string department;
    public:
    void display(string name,int age,int salary,string department){
        this->name=name;
        this->age=age;
        this->salary=salary;
        this->department = department;
        cout<<name<<" "<<age<<" "<<salary<<" "<<department<<endl;
    }
};

int main(){
    Manager A1;
    A1.display("Anuj",22,2121,"Software");
    return 0;
}