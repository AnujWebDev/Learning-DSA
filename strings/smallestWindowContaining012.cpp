#include <iostream>
using namespace std;
#include <vector>

// in this code snippet i am solving to find smallest  window

int main()
{
    string s;
    cin >> s;
    vector<int> count(3, 0);
    int first = 0, second = 0, diff = 3, len = s.size();
    bool flag = 0;
    while (first < s.size())
    {
        if (count[s[first] - '0'] == 0)
        {
            count[s[first] - '0']++;
        }
        first++;
    }
    for (int i = 0; i < 3; i++)
    {
        if (count[i] == 0)
        {
            flag = 1;
        }
    }

    if (flag)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            count[i] = 0;
        }
        first = 0;
        while (second < s.size())
        {
            while (diff && second < s.size())
            {
                if (count[s[second] - '0'] == 0)
                    diff--;

                count[s[second] - '0']++;
                second++;
            }
            len = min(len, second - first);
            while (diff != 1)
            {
                len = min(len, second - first);
                count[s[first] - '0']--;
                if (count[s[first] - '0'] == 0)
                {
                    diff++;
                }
                first++;
            }
        }
        second = 0;
        cout << len;
    }
    return 0;
}