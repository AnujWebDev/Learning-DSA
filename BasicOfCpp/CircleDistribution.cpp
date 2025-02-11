#include <iostream>
using namespace std;

int findPosition(int A, int B, int C) {
    int pos = (C + A - 1) % B;
    return (pos == 0) ? B : pos;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << findPosition(A, B, C) << endl;
    return 0;
}
