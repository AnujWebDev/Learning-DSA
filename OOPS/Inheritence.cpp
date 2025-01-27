#include <iostream>
using namespace std;
//THis is the example of inheritence that we can easily access properties from one Parent/base class to child / derived class by the  help of inheritence
class Human{
    protected:
    string name;
    int age;
    float weight;
};
class Student:public Human{
    int roll_no;
    string subject;
    public:
    Student(string name,int age,float weight){
        this -> name = name;
        this -> age = age;
        this -> weight=weight;
    }
    void getDisplay(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){
    Student A1("Anuj",22,34.5);
    A1.getDisplay();
    return 0;
}