#include <iostream>
#include <vector>
using namespace std;

//In this code snippet i am solving a problem in which i got some string like this
//myself2 me1 i4 and3
//i want to sort the sentence according to the last number given in the words
//the numbers always remains in 0-9 and output i want is me myself and i

string sortTheSentence(string s1)
{
    string temp;
    vector<string> res(10);
    int count = 0, index = 0;
    int pos = 0;
    string ans;
    while (index < s1.size())
    {
        if (s1[index] == ' ')
        {
            pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            res[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s1[index];
        }
        index++;
    }
    pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    res[pos] = temp;
    temp.clear();
    count++;

    for(int i = 1; i <= count;i++){
        ans += res[i]+ ' ';
    }
    ans.pop_back();
    return ans;
}

int main()
{
    string s1;
    cout << "Enter your String: ";
    getline(cin,s1);
    cout<<sortTheSentence(s1);
    return 0;
}