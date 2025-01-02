#include <iostream>
using namespace std;


void reverseString(char *str)
{
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++, end--;
    }
}

int main()
{
    char myString[] = "Programming";
    reverseString(myString);
    cout << myString;
    return 0;
}
