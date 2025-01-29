#include <iostream>
using namespace std;

//THe combination of Multiple and Hirarical inheritence is the hybrid one;

class Human{
    protected:
    string name;
    int age;
};
class male: public Human{
    protected:
    string gender;
};
class female : public Human{
    protected:
    string gender;  
};
class boy : public male{
    float weight;
    public:
    boy(string name,int age,string gender,float weight){
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->weight=weight;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<gender<<" "<<weight<<endl;
    }


};
class girl : public female{
    float weight;
    public:
    girl(string name,int age,string gender,float weight){
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->weight=weight;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<gender<<" "<<weight<<endl;
    }
};

int main(){
    boy A1("Anuj",22,"male",56.8);
    girl A2("Darshna",22,"female",65.8);
    A1.display();
    A2.display();
    return 0;
};