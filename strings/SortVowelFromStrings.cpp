#include <iostream>
using namespace std;
#include <vector>

// input = leetcode ==> output = leetcedo
// input = lEetcOde ==> output = lEOtcedo

string sortVowelFromString(string &s1)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'o' || s1[i] == 'i' || s1[i] == 'u')
        {
            lower[s1[i] - 'a']++;
            s1[i] = '#';
        }
        else if (s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
        {
            upper[s1[i] - 'A']++;
            s1[i] = '#';
        }
    }
    string ans;
    // for(upper)
    for (int i = 0; i < 26; i++)
    {
        char c = i + 'A';
        while (upper[i])
        {
            ans += c;
            upper[i]--;
        }
    }
    // for(lower)
    for (int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        while (lower[i])
        {
            ans += c;
            lower[i]--;
        }
    }

    int first = 0, second = 0;
    while (second < ans.size())
    {
        if (s1[first] == '#')
        {
            s1[first] = ans[second];
            second++;
        }
        first++;
    }
    return s1;
}

int main()
{
    string s1;
    cin >> s1;
    cout << sortVowelFromString(s1);
    return 0;
}