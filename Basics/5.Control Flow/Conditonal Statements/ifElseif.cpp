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
    else if (age >= 16)
    {
        cout << "You can't drive the car yet. But you can get a learner's licence";
    }
    else
    {
        cout << "Sorry but you can't drive the car yet. Maybe in " << 18 - age << " years until then use a bicycle.";
    }
    return 0;
}