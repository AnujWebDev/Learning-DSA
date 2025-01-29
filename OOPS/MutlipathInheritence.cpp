#include <iostream>
using namespace std;
//This is the example of multipath inheritence in which i can take properties from a specific path and this Virtual keyword is for making common properties coming from HUMAN class for all derived classes;
class Human{
    protected:
    string name;
    int age;
};
class Youtuber : public virtual Human{
    protected:
    int subcribers;
};

class Employee : public virtual Human{
    protected:
    int salary;
};
class Teacher : public Youtuber , public Employee{
    string subject;
    public:
    Teacher(string name,int age,int subcribers,int salary,string subject){
        this -> name = name;
        this -> age = age;
        this -> subcribers = subcribers;
        this -> salary = salary;
        this -> subject = subject;
    };
    void display(){
        cout<<name<<" "<<age<<" "<<subcribers<<" "<<salary<<" "<<subject<<endl;
    }
};
int main(){
    Teacher A1("Anuj",22,1000000,50000,"Maths");
    A1.display();
    return 0;
}