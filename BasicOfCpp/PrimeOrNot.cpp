#include <iostream>
using namespace std;

// Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your number: ";
    cin >> n;

    if (n <= 1) { 
        cout << "No, it's not a prime number"; 
        return 0; 
    }

    int i = 2; 
    bool isPrime = true;
    //This will give me time complexity of O(underroot of n)
    while (i * i < n) { 
        if (n % i == 0) { 
            isPrime = false; 
            break;
        }
        i++;
    }

    if (isPrime) 
        cout << "Yes, it's a prime number"; 
    else 
        cout << "No, it's not a prime number"; 

    return 0;
}
