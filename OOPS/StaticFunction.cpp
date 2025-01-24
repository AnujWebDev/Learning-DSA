#include <iostream>
using namespace std;

//This is Code Snippet for Static Funcntion in OOPS...
//If we want to Access Private Static member then we use Static Function
class Customer{
    string name;
    int age;
    static int User_Id;
    public:
    Customer(){
        name = "Anuj mishra";
        age = 22;
    }
    static void getStaticMember(){
        cout<<User_Id<<" "; //We can only access the Static member of the Class Object Which is Common for all Objects.
    }
};
int Customer :: User_Id = 1212;
int main(){
    Customer A1;
    A1.getStaticMember();//By This
    return 0;
}