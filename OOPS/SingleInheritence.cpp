#include <iostream>
using namespace std;
//This is the Example of Single Inheritence
//We can See Clearly that Student is inherting properties from class Human
class Human{
    protected:
    string name;
    int age;
    public:
    Human(){
        cout<<"Hello i am human Constructor and i am calling first...\n";
    }
};

class Student : public Human{
    int roll_no;
    public:
    Student(){
        cout<<"Hello i am student Constructor and i am calling second...\n";
    }
    void display(string name,int age,int roll_no){
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};

int main(){
    Student A1;
    A1.display("Anuj",22,2121);
    return 0;
}