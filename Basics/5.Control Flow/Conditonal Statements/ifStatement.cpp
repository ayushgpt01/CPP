#include <iostream>
using namespace std;

int main()
{
    int age{0};
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You can drive the car. Here's the key !!";
    }
    return 0;
}