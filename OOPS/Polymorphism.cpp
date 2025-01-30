#include <iostream>
using namespace std;

//polymorphism just tells  about a element can have multiple properties

class FindingArea{
    int i,j;
    public:
    //Function Overloading By Polymorphism
    void area(int r){
        cout<<3.14*r*r<<endl;
    }
    void area(int l,int b){
        cout<<l*b<<endl;
    }
    //Operator Overloading
    FindingArea(int i,int j){
        this->i = i;
        this -> j = j;
    }
    void display(){
        cout<<i<<" +i"<<j;
    }
   FindingArea(){
    
   }
    FindingArea operator +(FindingArea &c){
        FindingArea ans;
        ans.i = i + c.i;
        ans.j = j + c.j;
        return ans;
    }


};

int main(){
    FindingArea A1;
    A1.area(4);//See we are calling same function with different types of Arguments
    A1.area(4,5);
    FindingArea A2(3,4);
    FindingArea A3(4,7);
    FindingArea A4;
    A4 = A2 + A3; //Operator Overloading
    A4.display();
    return 0;
}