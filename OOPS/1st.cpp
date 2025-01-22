#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_no;
    string grade;
};

int main(){
    Student S1;
    S1.name = "Anuj Mishra";
    S1.age = 22;
    S1.roll_no = 2121;
    S1.grade = "A+";
    cout<<S1.age<<endl;
    Student S2;
    S2.name = "Darshna Jaiswal";
    S2.age = 22;
    S2.roll_no = 2222;
    S2.grade = "B+";
    cout<<S2.name;
    return 0;
}