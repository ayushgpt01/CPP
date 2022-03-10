#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char str[]{"Looks good"};
    char str1[80]{};

    cout << str << endl;
    // copying
    strcpy(str1, str);
    cout << str1 << endl;

    // concat
    strcat(str1, " and fun");
    cout << str1 << endl;

    // string length
    cout << strlen(str1) << endl;

    // string comparison
    cout << strcmp(str1, "Looks good and fun") << endl;
    return 0;
}