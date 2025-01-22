#include <iostream>
using namespace std;


//This is How we can create dyanamic memory in heap for Class

class Student{
    public:
    string name;
    int roll_no,age;
    string grade;
};

int main(){
    Student *S = new Student;
    (*S).name = "Anuj";
    S->age = 22;
    S->grade = "A+";
    (*S).roll_no = 2121;
    cout<<(*S).name<<endl;
    cout<<S->age<<endl;
    cout<<(*S).grade<<endl;
    cout<<S->name<<endl;
    return 0;
}