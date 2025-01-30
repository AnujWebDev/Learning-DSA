#include <iostream>
#include <vector>
using namespace std;
//THis is How virtual Function Works in Runtime;
class Animal{
    public:
    virtual void speak(){
        cout<<"Hu hu \n";
    }
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
    animals.push_back(new Animal());
    animals.push_back(new Cat());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i = 0; i<animals.size();i++){
        p = animals[i];
        p->speak();
    }
}