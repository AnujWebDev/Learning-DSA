#include <iostream>
using namespace std;

//Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).


int main() {
    int n;
    cout << "Enter Your number: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        if (i % 3 == 0 || i % 5 == 0) {
            i++; 
            continue;
        }
        cout << i << endl;
        i++;
    }

    return 0;
}