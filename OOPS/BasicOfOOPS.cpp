#include <iostream>
using namespace std;

class TypeTest{
    char c;
    // char b;
    int a;
    char b;
};

class Student{
    string name;
    int roll_no,age;
    string grade;
    public:
    //setter value
    void setValues(string n,int r,int a,string g){
        name = n;
        roll_no = r;
        age = a;
        grade = g;
    }
    //get value
    void getValues(){
        cout<<name<<endl<<grade<<endl<<roll_no<<endl<<age<<endl;
    }
};

int main(){
    Student S1;
    S1.setValues("Anuj",2121,22,"A+");//if we want to access private class values
    S1.getValues();//if we want to access private class values
    cout<<sizeof(TypeTest);//For Padding concept;
    return 0;
}