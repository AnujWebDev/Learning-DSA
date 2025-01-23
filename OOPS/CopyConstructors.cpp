#include <iostream>
using namespace std;

//This Code Snippet tells the understanding of Copy Constructor

class Customer{
    string name;
    int age;
    int roll_no;
    public:
    Customer(){
        name = "Anuj";
        age = 22;
        roll_no = 2121;
    }
    //Copy Constructor
    Customer(Customer &a){
        cout<<"I am Copy Constructor";
    }
    void getValue(){
        cout<<name<<" "<<roll_no<<" "<<age<<" "<<endl;
    }
};

int main(){
    Customer A1;
    Customer(A2);
    A2.getValue();
}