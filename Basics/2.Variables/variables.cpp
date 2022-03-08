#include <iostream>
using namespace std;

int main()
{
    int age1;      // uninitialized - Bad practice
    int age2 = 10; // C style initialization - Assignment Operator
    int age3(10);  // Constructor initialization
    int age4{10};  // C++11 list initialization

    cout << age1 << endl;
    cout << age2 << endl;
    cout << age3 << endl;
    cout << age4 << endl;
    return 0;
}