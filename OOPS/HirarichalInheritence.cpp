#include <iostream>
using namespace std;
//We can see in here that we can eaasily inherit for same class in multiple childs;
class Human{
    protected:
    string name;
    int age;
};
class Student : public Human{
    int className;
    public:
    Student(string name,int age,int className){
        this->name = name;
        this->age = age;
        this->className = className;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<className<<endl;
    }
};
class Employee : public Human{
    int salary;
    public:
    Employee(string name,int age,int salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};
class Teacher : public Human {
    string subject;
    public:
    Teacher(string name,int age,string subject){
        this->name = name;
        this->age = age;
        this->subject = subject;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<subject<<endl;
    }
};

int main(){
    Teacher A1("Ramesh",50,"Maths");
    Student A2("rose",16,10);
    Employee A3("Anuj",22,100000);
    A1.display();
    A2.display();
    A3.display();
    return 0;
}