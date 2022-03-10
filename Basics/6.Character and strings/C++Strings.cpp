#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initialization
    string s1;                // empty
    string s2{"C++ Strings"}; // string literal
    string s3{s2};            // another string
    string s4{"Hello!!", 5};  // Only first five - Hello
    string s5{s3, 1, 3};      // starting from 1 to 3 (exclusive) - ++
    string s6(3, 'A');        // repeat A 3 times - AAA

    // assignment
    cout << s3 << endl;
    s3 = "New data inserted into s3";
    cout << s3 << endl;

    // accessing data
    cout << s4.at(0) << endl;
    cout << s4[1] << endl;

    // substring
    cout << s2.substr(6, 12) << endl;

    // find
    cout << s2.find("++") << endl;

    // length
    cout << s2.length() << endl;

    // cin
    cout << "Enter a string without space ";
    cin >> s1;
    cout << s1 << endl;

    cin.get(); // clear buffer

    // getline - until \n
    cout << "Enter a string ";
    getline(cin, s1);
    cout << s1 << endl;

    // getline - until specifies character
    cout << "Enter a string ";
    getline(cin, s1, ';');
    cout << s1 << endl;

    return 0;
}