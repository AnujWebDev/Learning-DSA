#include <iostream>
using namespace std;

void SubmergedString(string& s1, string& s2, string& s3) {
    int first = 0, second = 0;
    while (first < s1.size() || second < s2.size()) {
        if (first < s1.size()) {
            s3 += s1[first];
            first++;
        }
        if (second < s2.size()) {
            s3 += s2[second];
            second++;
        }
    }
}

int main() {
    string s1 = "hello2342", s2 = "World123", s3;
    SubmergedString(s1, s2, s3);
    cout << s3 << endl;
    return 0;
}
