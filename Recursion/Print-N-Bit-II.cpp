#include <iostream>
#include <vector>
using namespace std;
void Find(int N, vector<string> &ans, string &temp, int zero, int one) {
    if (temp.size() == N) {
        ans.push_back(temp);
        return;
    }

    if (zero < N) { 
        temp.push_back('0');
        Find(N, ans, temp, zero + 1, one);
        temp.pop_back();
    }
    if (one < N && one < zero) {
        temp.push_back('1');
        Find(N, ans, temp, zero, one + 1);
        temp.pop_back();
    }
}

int main() {
    int N;
    cout << "Enter the size of the bit: ";
    cin >> N;

    vector<string> ans;
    string temp = "1"; 
    int zero = 0, one = 1; 
    Find(N,ans,temp,zero,one);
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}