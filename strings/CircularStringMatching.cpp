#include <iostream>
using namespace std;
#include <vector>

//In this code snippet i am solving a problem in which i am find in given string that if the given string is in circular form then my finstring is present on the circular stirng or not using KMP algorithm


void findLPS(vector<int>&LPS,string findString){
    int first = 0,second = 1;
    while(second < findString.size()){
        if(findString[first] == findString[second]){
            LPS[second] = first+1;
            first++,second++;
        }else{
            if(first == 0){
                LPS[second] = 0;
                second++;
            }else{
                first = LPS[first - 1];
            }
        }
    }
}

int KMP_Match(string circularString,string findString ){
    int first = 0, second = 0;
    vector<int>LPS(findString.size(),0);
    findLPS(LPS,findString);
    while(first < circularString.size() && second < findString.size()){
        if(circularString[first] == findString[second]){
            first++,second++;
        }else{
            if(second == 0){
                first++;
            }else{
                second = LPS[second-1];
            }
        }
    }
    if(second == findString.size()){
        return 1;
    }
    return -1;
}

int main(){
    string circularString,findString;
    cout<<"Enter Your circular string: ";
    cin>>circularString;
    cout<<"Enter the string to be find in circular string: ";
    cin>>findString;
    circularString+=circularString;
    if(KMP_Match(circularString,findString)==1){
        cout<<1;
    }else{
        cout<<-1;
    }
    return 0;
}