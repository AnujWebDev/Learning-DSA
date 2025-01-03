#include <iostream>
using namespace std;
// This is just for my understanding why there is required need for Strings
int main()
{
    // So basically we know that, we can store alphabets in char type value like this
    char example = 'a';
    cout << example << endl;
    // output = a;
    // So by this exmaple we can see how to store a alphabet inside a data type,but what if i want to store a word instead of a single char.

    char arr[5] = {'a', 'p', 'p', 'l', 'e'};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    // by this we can store word also in char array,but my problem is, still i have to mention the size of arr
    string S = "Anuj";
    cout << S << endl;
    // For this problem the need of string comes in picture,to adjust memory dynamically inside the Heap
    // Diagram for storing the Word
    // string s = ['a','n','u','j','\0];
    //\0 this denotes the null character which will implemented internaly we cannot access it directly
    // Why this \0 null character to be inserting,this is because the compiler get to know where to stop creating dynamic memory

    //    string s1;
    //    cin>>s1;
    //    cout<<s1;

    // Now in above code i am asking user to enter any string,but what if user enter any word or paragraph with a space in it then how my compiler gets to know what to print
    // for example if user enters "Anuj Mishra" then whenever user enter Space,Tab,Enter cin bydefaults stops here and we will get in output only Anuj so for solving this getline was introduced
    string s1;
    getline(cin, s1);
    cout << s1;
    // by this i can enter space and tab also


    //----Appending in Strings----

    string a1 = "Honey" ,a2 = "Boney";
    string s3 =  a1 + a2;
    cout<<s3<<endl;
    //We can Append by this or by using append also
    a1.append(a2);
    cout<<a1;
    //We have add any char after the string then same like in array
    a1.push_back('p');
    cout<<a1;
    a1.pop_back();
    cout<<a1;

    //----- How to print "" inside the string---------
    // string ex2 = "Anuj mishra is a very "good" boy;
    // Now this will give me error because after first double quote whenever compiler finds any other double qoute it will stop the execution and throws an error
    string ex2= "Anuj mishra i a very \"good\" boy";
    //This is a escape characte which tell skip me and give whatever value after me immediately
    cout<<ex2;

    //Now what if i want to print \ this 
    string slash =  "\\";
    cout<<slash;

    //So this is some basic understandings of stirngs
    return 0;
}