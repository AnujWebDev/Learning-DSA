#include <iostream>
#include <vector>
using namespace std;
//THis is How virtual Function Works in Runtime;
class Animal{
    public:
    // virtual void speak(){
    //     cout<<"Hu hu \n";
    // }
    virtual void speak()= 0; //Extract Function or Abstract Class Now i want to Create Object For Speak
};
class Dog : public Animal {
    public:
    void speak(){
        cout<<"Bow Bow \n";
    }
};
class Cat : public Animal {
    public:
    void speak(){
        cout<<"meow \n";
    }
};

int main(){
    // Animal *p;
    // p = new Dog();
    // p->speak();
    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    // animals.push_back(new Animal()); //Now i dont want to Make this 
    animals.push_back(new Cat());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i = 0; i<animals.size();i++){
        p = animals[i];
        p->speak();
    }
}