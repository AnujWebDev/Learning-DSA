#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;//For Write in the file
    ifstream fin;//For Read the file
    // fout.open("Anuj.txt");//If this name file present in the directory then its simply opens the file if not then it will create the file and then open
    // fout<<"Hello Anuj..";
    fin.open("Anuj.txt"); //First opens the file then read
    char c;
    c = fin.get();
    while (!fin.eof())
    {
       cout<<c;
       c=fin.get();
    }
    
    fout.close();
    return 0;
}