#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char c{'a'};
    cout << c << " is a letter ? " << isalpha(c) << endl;
    cout << c << " is a letter or digit ? " << isalnum(c) << endl;
    cout << c << " is a digit ? " << isdigit(c) << endl;
    cout << c << " is a lowercase letter ? " << islower(c) << endl;
    cout << c << " is a uppercase letter ? " << isupper(c) << endl;
    cout << c << " is printable ? " << isprint(c) << endl;
    cout << c << " is a punctutation ? " << ispunct(c) << endl;
    cout << c << " is a whitespace ? " << isspace(c) << endl;

    cout << "tolower : " << tolower(c) << endl;
    cout << "toupper : " << toupper(c) << endl;
    return 0;
}