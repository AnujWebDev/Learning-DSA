#include <iostream>
using namespace std;
//This is THe example of Multiple inheritence that we can inherit multiple properties from multiple class in one class
class Youtuber{
    public:
    int subscriber;
    protected:
    void ShowSubscriber(){
        cout<<"I have this much of Subcriber "<<subscriber<<endl;
    }
};

class Engineer{
    protected:
    string profile;
    public:
    void showProfile(){
        cout<<"I am "<<profile<<endl;
    }
};

class Person : public Engineer,public Youtuber{
    string name;
    public:
    void displayDetails(string name,string profile,int subscriber){
        this -> name = name;
        this -> profile = profile;
        this -> subscriber = subscriber;
        cout<<"Hello My name is "<<name<<endl;
        showProfile();
        ShowSubscriber();
    }
};

int main(){
    Person A1;
    A1.displayDetails("Anuj Mishra", "Software developer",10000000);
    return 0;
}