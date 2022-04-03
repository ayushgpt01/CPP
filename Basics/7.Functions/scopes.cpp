#include <iostream>
using namespace std;

int x = 10;

void func()
{
    int x = 2;
    cout << "Function Scope x is " << x << endl;
}

int main()
{
    int x = 5;
    cout << "Local x is " << x << endl;
    cout << "Global x is " << ::x << endl;
    func();
    if (x < ::x)
    {
        int x = 7;
        cout << "if Scope x is " << x << endl;
    }
    cout << "For loop Scope values : ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    return 0;
}